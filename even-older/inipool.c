#include <string.h>
#include "p2c/p2c.h"

#include "pool_str.c"
/* #include "pool_off.c" */

#define poolsize        32000
#define stringvacancies  8000

typedef int poolpointer;
typedef  int strnumber;

extern unsigned char strpool[poolsize + 1];
extern poolpointer strstart[];
extern poolpointer poolptr;
extern strnumber strptr;


int getstringsstarted(void)
{
  int k, l;
  Char m, n;
  strnumber g;
  long a;
  boolean c;
  short TEMP;

  poolptr = 0;
  strptr = 0;
  strstart[0] = 0;   
  /* Make strings corresponding to single chars */
  for (k = 0; k < 256; k++) {   
    if ((k < ' ') | (k > '~')) {  
      appendchar('^');
      appendchar('^');
      if (k < 64) {
        appendchar(k + 64);
      } else if (k < 128) {
        appendchar(k - 64);
      } else {
        l = k / 16;
        if (l < 10) {
          appendchar(l + 48);
        } else {
          appendchar(l + 87);
        }
        l = k & 15;
        if (l < 10) {
          appendchar(l + 48);
        } else {
          appendchar(l + 87);
        }
      }
    } else {
      appendchar(k);
    }
    g = makestring();
  }
  /* Copy strings from 'pool_strs' to the pool */
  for(k=0;k<(sizeof(pool_strs)/sizeof(char *));k++) { 
	char * sp=pool_strs[k];
	int i;
	l=strlen(sp);
	if (poolptr + l + stringvacancies > poolsize) {
		fprintf(stderr,"! You have to increase POOLSIZE.\n");
		return false;
	}
	for(i=0;i<l;i++) { 
		appendchar(sp[i]);
	}
	g = makestring();
   }
   return true;
}
