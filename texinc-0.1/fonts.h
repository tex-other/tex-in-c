#include <stdio.h>
typedef int fontindex;
typedef unsigned short internalfontnumber;
extern fourquarters charinfo(internalfontnumber f, eightbits p);
extern scaled charwidth(internalfontnumber x, fourquarters y);
extern scaled charitalic(internalfontnumber x, fourquarters y);
extern scaled charheight(internalfontnumber x, int y);
extern scaled chardepth(internalfontnumber x, int y);
extern scaled charkern(internalfontnumber x, fourquarters y);
extern fourquarters get_fontcheck(internalfontnumber x);
extern scaled get_fontsize(internalfontnumber x);
extern scaled get_fontdsize(internalfontnumber x);
extern strnumber get_fontname(internalfontnumber x);
extern void fonts_init(void);
extern internalfontnumber readfontinfo(halfword u, strnumber nom, strnumber aire, long s);
extern int fonts_undump(FILE * fmtfile, FILE * termout);
extern void fonts_dump(FILE * fmtfile);
extern long get_hyphenchar(internalfontnumber x);
extern void set_hyphenchar(internalfontnumber x, long c);
extern long get_skewchar(internalfontnumber x);
extern void set_skewchar(internalfontnumber x, long c);
#if 1
#undef Static
#define Static extern
/* Dane, tymczasowo wspólne */
Static fontindex fmemptr;
Static internalfontnumber fontptr;
Static memoryword fontinfo[fontmemsize + 1];
Static fontindex fontparams[fontmax + 1];
Static eightbits fontbc[fontmax + 1];
Static eightbits fontec[fontmax + 1];
Static pointer fontglue[fontmax + 1];
Static boolean fontused[fontmax + 1];
Static fontindex bcharlabel[fontmax + 1];
Static long fontbchar[fontmax + 1];
Static long fontfalsebchar[fontmax + 1];
/*:549*/
/*550:*/
Static long ligkernbase[fontmax + 1];
Static long extenbase[fontmax + 1];
Static long parambase[fontmax + 1];
/*555:*/
#undef Static
#define Static static
#endif
