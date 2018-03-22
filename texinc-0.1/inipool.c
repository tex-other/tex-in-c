#include <stdio.h>
#include <string.h>
#include "tex.h"
#include "str.h"
#include "funcs.h"
#include "global.h"

#include "pool_str.c"

int str_pool_init(void)
{
  int k, l;
/*  Char m, n; */
  strnumber g;
/*  long a;
  boolean c;
*/
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
  for(k=0;k<(int)(sizeof(pool_strs)/sizeof(char *));k++) { 
	const char * const sp=pool_strs[k];
	int i;
	l=strlen(sp);
	if (l + stringvacancies != str_adjust_to_room(l + stringvacancies)) {
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
