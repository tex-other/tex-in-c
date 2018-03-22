/* Do NOT edit - this is generated file */
#line 1 "inputln.ppc"
#include <stdio.h>
#include "p2c.h"
#include "tex.h"
#include "str.h"
#include "funcs.h"
#include "global.h"


boolean inputln(FILE **f, boolean bypasseoln)
{
  short lastnonblank;
#if 1
  if (bypasseoln) {
      int c = getc(*f);
      if(c!='\n') ungetc(c,*f);
  }
#endif
  last = first; 
  { int c=getc(*f);
    if( c==EOF) return false;
    ungetc(c,*f);
  }
  {
    int inp_c;
    lastnonblank = first;
    while ( (inp_c=getc(*f))!=EOF && inp_c!='\n' ) {
      if (last >= maxbufstack) {
	maxbufstack = last + 1;
	if (maxbufstack == bufsize) {   /*35:*/
	  if (formatident == 0) {
	    fprintf(stderr, "Buffer size exceeded!\n");
	    longjmp(_JLfinalend, 1);
	  } else {   /*:35*/
	    curinput.locfield = first;
	    curinput.limitfield = last - 1;
	    overflow(S(511), bufsize);
	  }
	}
      }
      buffer[last] = xord[inp_c ];
      last++;
      if (buffer[last - 1] != 32)
	lastnonblank = last;
    }
#if 1
    ungetc(inp_c,*f);
#endif
    last = lastnonblank;
    return true;
  }
}


