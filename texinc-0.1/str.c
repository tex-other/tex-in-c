/* Do NOT edit - this is generated file */
#line 1 "str.ppc"
#include <stdio.h>
#include <string.h>
#include "tex.h" 
#include "macros.h" 
#include "str.h"
#include "funcs.h"
#include "fonts.h" 
#include "texfunc.h"
#define maxstrings      300000

#define POOLPOINTER_IS_POINTER 1

#if POOLPOINTER_IS_POINTER
typedef strASCIIcode * poolpointer;
#define pool_top (strpool+poolsize)
#define pool_elem(x,y) ((x)[(y)])
#else
typedef int poolpointer;
#define pool_top poolsize
#define pool_elem(x,y) (strpool[(x)+(y)])
#endif

static strASCIIcode strpool[poolsize + 1];
static poolpointer strstart[maxstrings + 1];
static poolpointer poolptr;
static strnumber strptr;
static poolpointer initpoolptr;
static strnumber initstrptr;
#define str_end(x) (strstart[(x)+1])

int getstringsstarted(void)
{
#if POOLPOINTER_IS_POINTER
	poolptr = strpool;
#else
	  poolptr = 0;
#endif
  strptr = 0;
  strstart[0] = poolptr;
	return str_pool_init();
}

int str_getc(strnumber s,int k)
{
	return pool_elem(strstart[s],k);
}

void str_set_init_ptrs(void)
{
  initstrptr = strptr;
  initpoolptr = poolptr;
}

str_poolpointer str_mark(void)
{
	str_poolpointer res;
	res.val=(long)poolptr;
	return res;
}

void str_map_from_mark(str_poolpointer b,void (*f)(strASCIIcode))
{
  poolpointer k=(poolpointer) b.val;
  while (k < poolptr) {
	f(pool_elem(k,0));
	k++;
  }
  poolptr = (poolpointer) b.val;
}

void str_print_stats(FILE * logfile)
{
	
      fprintf(logfile, " %d string",strptr - initstrptr);
      if (strptr != initstrptr + 1) {
        fprintf(logfile, "s");
      }
      fprintf(logfile, " out of %ld\n", (long)(maxstrings - initstrptr));
      fprintf(logfile, " %d string characters out of %ld\n",
              poolptr - initpoolptr, (long)(pool_top - initpoolptr));
}

int str_undump(FILE * fmtfile,FILE *  termout)
{
  memoryword pppfmtfile;
  long x;
 /*:1308*/
  pget(pppfmtfile);
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > poolsize) {
    fprintf(termout, "---! Must increase the string pool size\n");
    goto _Lbadfmt_;
  }
  poolptr = (poolpointer)x;
  pget(pppfmtfile);
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > maxstrings) {
    fprintf(termout, "---! Must increase the max strings\n");
    goto _Lbadfmt_;
  }
  strptr = x;
  fread(strstart,1,sizeof(strstart[0])*(strptr+1),fmtfile);
  fread(strpool,1,sizeof(strpool[0])*(long)poolptr,fmtfile);
  initstrptr = strptr;
#if POOLPOINTER_IS_POINTER
  for(x=0;x<=strptr;x++) { 
	strstart[x]=strpool+(long)strstart[x];
  }
  poolptr=strpool+(long)poolptr;
#endif
  initpoolptr = poolptr;   /*:1310*/
  return 1;
_Lbadfmt_:
  return 0;
}

void str_dump(FILE * fmtfile)
{
  memoryword pppfmtfile;
  long poolused;
#if POOLPOINTER_IS_POINTER
/* Convert for dumping */
  long x;
  for(x=0;x<=strptr;x++) {
	strstart[x]=(poolpointer)(strstart[x]-strpool);
  }
  poolused=poolptr-strpool;
#else
  poolused=poolptr;
#endif

  pppfmtfile.int_ = poolused;
  pput(pppfmtfile);
  pppfmtfile.int_ = strptr;
  pput(pppfmtfile);
  fwrite(strstart,1,sizeof(strstart[0])*(strptr+1),fmtfile);
  fwrite(strpool,1,sizeof(strpool[0])*poolused,fmtfile);
#if POOLPOINTER_IS_POINTER
/* Pool is still in use, need to convert back */
  for(x=0;x<=strptr;x++) {
	strstart[x]=(poolpointer)(strpool+(long)strstart[x]);
  }
#endif
  println();
  printint(strptr);
  print(S(1275));   
  printint(poolused); 
/*:1309*/
}

void str_room(long l)
{
  if (poolptr + l > pool_top)
    overflow(S(1276), pool_top - initpoolptr);
}

long str_adjust_to_room(long l)
{
	if (poolptr + l > pool_top) {
		return pool_top-poolptr;
	} else { 
		return l;
	}
}


int flength(strnumber x)
{
	return strstart[x+1]-strstart[x];
}

void flushstring(void) 
{ 
   strptr--;
   poolptr=strstart[strptr];
}

void flushchar(void)
{
	poolptr--;
}

int get_cur_length()
{
	return poolptr - strstart[strptr];
}

void str_cur_map(void (*f)(strASCIIcode))
{
	poolpointer s;
	for (s = strstart[strptr]; s < poolptr; s++) {
		f(pool_elem(s,0));
	}
	poolptr = strstart[strptr];
}

void str_map(strnumber k,void (*f)(strASCIIcode))
{
	poolpointer s;
	poolpointer s_end = strstart[k]+flength(k);
	for (s = strstart[k]; s < s_end;s++) {
		f(pool_elem(s,0));
	}
}

void printchar_helper(strASCIIcode c)
{
	printchar(c);
}

void str_print(strnumber k)
{
	  if (k >= strptr)
    		k = S(261);
	str_map(k,printchar);
}

static void f_pool_helper(ASCIIcode c)
{
	fputc(c,stderr);
}

void f_pool(strnumber  s)
{
        if (s >= strptr || s< 0 )
                s=274;
	str_map(s,f_pool_helper);
        fputc('\n',stderr);
        fflush(stderr);
}

strnumber idlookup_s(strnumber s, int nonew )
{
    poolpointer k = strstart[s];
    int l = flength(s);
    return idlookup_p(&pool_elem(k,0),l,nonew);
}

/*70:*/
void printcurrentstring(void)
{
  poolpointer j;

  j = strstart[strptr];
  while (j < poolptr) {
    printchar(pool_elem(j,0));
    j++;
  }
}
/*:70*/


/*43:*/
strnumber makestring(void)
{
  if (strptr == maxstrings)
    overflow(S(1277), maxstrings - initstrptr);
  strptr++;
  strstart[strptr] = poolptr;
  return (strptr - 1);
}
/*:43*/

/*46:*/
int str_cmp(strnumber s, strnumber t)
{
  poolpointer j = strstart[s];
  poolpointer k = strstart[t];
  int l = 0;
	while (l < flength(s) && l < flength(t)) { 
		int dif=pool_elem(j,l)-pool_elem(k,l);
		if (dif) {
			return dif;
		}
		l++;
	}
	return flength(s)-flength(t);
}

boolean streqstr(strnumber s, strnumber t)
{
  if (flength(s) != flength(t)) {
	return false;
  }
  return !str_cmp(s,t);
}
/*:46*/

void str_appendchar(strASCIIcode s)
{
    if (poolptr < pool_top) {
	pool_elem(poolptr,0)=s;
        poolptr++;
    } 
}

void appendchar(strASCIIcode s)
{
	if (poolptr < pool_top) {
		str_appendchar(s);
	} else { 
		overflow(S(1276), pool_top - initpoolptr);
	}
}

int str_valid(strnumber s)
{
	return ((s>=0) && (s<strptr));
}

/*60:*/
void slowprint(strnumber s)
{
  poolpointer j;

  if (s >= strptr || s < 256) {
    print(s);
    return;
  }
  j = strstart[s];
  while (j < str_end(s)) {
    print(pool_elem(j,0));
    j++;
  }
}  /*:60*/

int str_scmp(strnumber s,short * buffp)
{
      poolpointer u=strstart[s];
      int hn=flength(s);
      int j=0;
      do {
	if (pool_elem(u,j) < buffp[j])
          return -1;
	if (pool_elem(u,j) > buffp[j])
          return 1;
        j++;
      } while (j < hn);   /*932:*/
      return 0;
}

int str_bcmp(unsigned char * buffp, long l,strnumber s)
{
      if (flength(s) == l) {
	if (!memcmp(&pool_elem(strstart[s],0),buffp,l))
	  return 1;
      }
	return 0;
}

strnumber str_ins(short * buffp, long l)
{
	int k;
        if (poolptr + l > pool_top)
          overflow(S(1276), pool_top - initpoolptr);
        for (k = 0; k < l; k++) {
          appendchar(buffp[k]);
        }
	return makestring();
}

strnumber str_insert(unsigned char * buffp, long l)
{
	int d,k;
	strnumber result;
	if (poolptr + l > pool_top)
	  overflow(S(1276), pool_top - initpoolptr);
	d = get_cur_length();
	while (poolptr > strstart[strptr]) {
	  poolptr--;
	  pool_elem(poolptr,l) = pool_elem(poolptr,0);
	}
	for (k = 0; k < l; k++) { 
	  appendchar(buffp[k]);
	}
	result = makestring();
	poolptr += d;  
	return result;
}
