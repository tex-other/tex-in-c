/* Do NOT edit - this is generated file */
#line 1 "dviout.ppc"
#include <stdio.h>
#include <stdlib.h>
#include "tex.h" 
#include "str.h"
#include "fonts.h"
#include "dviout.h"
#include "funcs.h"

#define dvibufsize      800

#define movementnodesize  3
#define yhere           1
#define zhere           2
#define yzOK            3
#define yOK             4
#define zOK             5
#define dfixed          6
#define noneseen        0
#define yseen           6
#define zseen           12


/* DVI commands */
#define setchar0        0
#define set1            128
#define setrule         132
#define putrule         137
#define nop             138
#define bop             139
#define eop             140
#define push            141
#define pop             142
#define right1          143
#define w0              147
#define w1              148
#define x0              152
#define x1              153
#define down1           157
#define y0_             161
#define y1_             162
#define z0              166
#define z1              167
#define fntnum0         171
#define fnt1            235
#define xxx1            239
#define xxx4            242
#define fntdef1         243
#define pre             247
#define post            248
#define postpost        249
#define idbyte          2


typedef short dviindex;

Static eightbits dvibuf[dvibufsize + 1];
Static dviindex halfbuf, dvilimit, dviptr;
Static long dvioffset, dvigone;
/*:595*/

static FILE * dvifile;
Static long lastbop;

/* Quick hack to get things running */

typedef struct move * move_pointer;
#undef halfword
#undef pointer

struct move { 
	move_pointer linkf;
	long widthf;
	long locationf;
	char infof;
};

#define location(x) ((x)->locationf)
#define width(x) ((x)->widthf)
#define link(x) ((x)->linkf)
#define info(x) ((x)->infof)
#define freenode(x,y) free(x)

int dvi_openout(void)
{
	return aopenout(&dvifile);
}
	
Static move_pointer get_move_node(void)
{
	move_pointer pom=(move_pointer)malloc(sizeof(* pom));
	if(pom) { 	
		return pom;
	} else { 
		fprintf(stderr,"dviout: Out of memory\n");
		exit(31);
	}
}
/* End quick hack */

Static move_pointer downptr, rightptr;

void dvi_push(void)
{
	dviout(push);
}

void dvi_pop(void)
{
	dviout(pop);
}

void dvi_eop(void)
{
	dviout(eop);
}

void dvi_set_font(int f)
{
          if (!fontused[f ]) {
            dvifontdef(f);
            fontused[f ] = true;
          }
	f--;
          if (f < 64) {
            dviout(f  + fntnum0 );
          } else if(f < 255) {
            dviout(fnt1);
            dviout(f );
          } 
#if 0
else { 
	    dviout(fnt2);
	    dviout(f>>8);
	    dviout(f&0xff);
	  }
#endif
}

void dvi_set_char(long c)
{
        if (c >= 128) {
          dviout(set1);
        }
	dviout(c);
}

void dvi_setrule(long ruleht, long rulewd)
{
      dviout(setrule);
      dvifour(ruleht);
      dvifour(rulewd);
}

void dvi_putrule(long ruleht, long rulewd)
{
        dviout(putrule);
        dvifour(ruleht);
        dvifour(rulewd);
}

void dvi_pre(long num, long den, long mag)
{
    dviout(pre);
    dviout(idbyte);
    dvifour(num);
    dvifour(den);
    dvifour(mag);
}


/*597:*/
Static void writedvi(dviindex a, dviindex b)
{
  fwrite(&dvibuf[a], b-a+1,1, dvifile);
}
/*:597*/

void dviout_init(void)
{
  /*596:*/
  halfbuf = dvibufsize / 2;
  dvilimit = dvibufsize;
  dviptr = 0;
  dvioffset = 0;
  dvigone = 0;   /*:596*/
  /*606:*/
  downptr = 0;
  rightptr = 0;   /*:606*/
  lastbop = -1;
}

long get_dvi_mark(void)
{
	return dvioffset + dviptr;
}

void dvibop(long * counts)
{
  long pageloc = dvioffset + dviptr;
  int k;
  dviout(bop);
  for (k = 0; k <= 9; k++)
    dvifour(counts[k]);
  dvifour(lastbop);
  lastbop = pageloc;
}

void dvipost(long num, long den, long mag, long maxv, long maxh, int maxpush, 
	int totalpages, int fontptr)
{
    dviout(post);
    dvifour(lastbop);
    lastbop = dvioffset + dviptr - 5;
    dvifour(num);
    dvifour(den);
    dvifour(mag);
    dvifour(maxv);
    dvifour(maxh);
    dviout(maxpush / 256);
    dviout(maxpush & 255);
    dviout((totalpages / 256) & 255);
    dviout(totalpages & 255);   /*643:*/
    while (fontptr > 0 ) {   /*:643*/
      if (fontused[fontptr ])
        dvifontdef(fontptr);
      fontptr--;
    }
}

long dviflush(void)
{
    int k;
    dviout(postpost);
    dvifour(lastbop);
    dviout(idbyte);
    k = ((dvibufsize - dviptr) & 3) + 4;
    while (k > 0) {
      dviout(223);
      k--;
    }  /*599:*/
    if (dvilimit == halfbuf)
      writedvi(halfbuf, dvibufsize - 1);
    if (dviptr > 0)   
      writedvi(0, dviptr - 1);
    fclose(dvifile);
   return dvioffset + dviptr;
}

/*598:*/
Static void dviswap(void)
{
  if (dvilimit == dvibufsize) {
    writedvi(0, halfbuf - 1);
    dvilimit = halfbuf;
    dvioffset += dvibufsize;
    dviptr = 0;
  } else {
    writedvi(halfbuf, dvibufsize - 1);
    dvilimit = dvibufsize;
  }
  dvigone += halfbuf;
}

void dviout(int x)
{
        dvibuf[dviptr]=x;
        dviptr++;
        if (dviptr==dvilimit) dviswap();
}


/*:598*/
/*600:*/
void dvifour(unsigned long x)
{
	dviout(x>>24);
	dviout((x>>16)& 255);
	dviout((x>>8)& 255);
	dviout(x & 255);
}
/*:600*/

/*601:*/
void dvipop(long l)
{
  if (l == dvioffset + dviptr && dviptr > 0)
    dviptr--;
  else {
    dviout(pop);
  }
}
/*:601*/

void dviout_helper(strASCIIcode c)
{
	dviout(c);
}

/*602:*/
void dvifontdef(internalfontnumber f)
{
  fourquarters fck=get_fontcheck(f);
  strnumber fnm=get_fontname(f);
  dviout(fntdef1);
  dviout(f  - 1);
  dviout(fck.b0);
  dviout(fck.b1);
  dviout(fck.b2);
  dviout(fck.b3);
  dvifour(get_fontsize(f));
  dvifour(get_fontdsize(f));
  dviout(0);
  dviout(flength(fnm));
  str_map(fnm,dviout_helper);
}
/*:602*/
void movement(long w, eightbits o);

void move_h(long w)
{
	movement(w,right1);
}

void move_v(long w)
{
	movement(w,down1);
}

/*607:*/
void movement(long w, eightbits o)
{
  smallnumber mstate;
  move_pointer p;
  long k;

  move_pointer q = get_move_node();
  width(q) = w;
  location(q) = dvioffset + dviptr;
  if (o == down1) {
    link(q) = downptr;
    downptr = q;
  } else {
    link(q) = rightptr;
    rightptr = q;
  }  /*611:*/
  p = link(q);
  mstate = noneseen;
  while (p != 0) {
    if (width(p) == w) {   /*612:*/
      switch (mstate + info(p)) {

      case noneseen + yzOK:
      case noneseen + yOK:
      case zseen + yzOK:
      case zseen + yOK:
	if (location(p) < dvigone)
	  goto _Lnotfound;
	else  /*613:*/
	{   /*:613*/
	  k = location(p) - dvioffset;
	  if (k < 0)
	    k += dvibufsize;
	  dvibuf[k] += y1_ - down1;
	  info(p) = yhere;
	  goto _Lfound;
	}
	break;

      case noneseen + zOK:
      case yseen + yzOK:
      case yseen + zOK:
	if (location(p) < dvigone)
	  goto _Lnotfound;
	else {   /*614:*/
	  k = location(p) - dvioffset;
	  if (k < 0)
	    k += dvibufsize;
	  dvibuf[k] += z1 - down1;
	  info(p) = zhere;
	  goto _Lfound;
	}
	break;

      case noneseen + yhere:
      case noneseen + zhere:
      case yseen + zhere:
      case zseen + yhere:
	goto _Lfound;
	break;
      }/*:612*/
    } else {
      switch (mstate + info(p)) {

      case noneseen + yhere:
	mstate = yseen;
	break;

      case noneseen + zhere:
	mstate = zseen;
	break;

      case yseen + zhere:
      case zseen + yhere:
	goto _Lnotfound;
	break;
      }
    }
    p = link(p);
  }
_Lnotfound:   /*:611*/
  /*610:*/
  info(q) = yzOK;
  if (labs(w) >= 8388608L) {
    dviout(o + 3);
    dvifour(w);
    goto _Lexit;
  }
  if (labs(w) >= 32768L) {
    dviout(o + 2);
    if (w < 0)
      w += 16777216L;
    dviout(w / 65536L);
    w %= 65536L;
    goto _L2;
  }
  if (labs(w) >= 128) {
    dviout(o + 1);
    if (w < 0)
      w += 65536L;
    goto _L2;
  }
  dviout(o);
  if (w < 0)
    w += 256;
  goto _L1;
_L2:
  dviout(w / 256);
_L1:
  dviout(w & 255);
  goto _Lexit;   /*:610*/
_Lfound:   /*609:*/
  info(q) = info(p);
  if (info(q) == yhere) {
    dviout(o + y0_ - down1);
    while (link(q) != p) {
      q = link(q);
      switch (info(q)) {

      case yzOK:
	info(q) = zOK;
	break;

      case yOK:
	info(q) = dfixed;
	break;
      }
    }
  } else {   /*:609*/
    dviout(o + z0 - down1);
    while (link(q) != p) {
      q = link(q);
      switch (info(q)) {

      case yzOK:
	info(q) = yOK;
	break;

      case zOK:
	info(q) = dfixed;
	break;
      }
    }
  }
_Lexit: ;

  /*:614*/
}
/*:607*/

/*615:*/
void prunemovements(long l)
{
  move_pointer p;

  while (downptr != 0) {
    if (location(downptr) < l)
      goto _Ldone;
    p = downptr;
    downptr = link(p);
    freenode(p, movementnodesize);
  }
_Ldone:
  while (rightptr != 0) {
    if (location(rightptr) < l)
      goto _Lexit;
    p = rightptr;
    rightptr = link(p);
    freenode(p, movementnodesize);
  }
_Lexit: ;
}
/*:615*/

