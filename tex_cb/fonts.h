typedef long fontindex;
typedef unsigned short internalfontnumber;
#if 0
fourquarters charinfo(internalfontnumber f, packedASCII p);
#endif
extern fourquarters charinfo(internalfontnumber f, eightbits p);
scaled charwidth(internalfontnumber x, fourquarters y);
scaled charitalic(internalfontnumber x, fourquarters y);
scaled charheight(internalfontnumber x, int y);
scaled chardepth(internalfontnumber x, int y);
scaled charkern(internalfontnumber x, fourquarters y);


extern void fonts_init(void);
extern internalfontnumber readfontinfo(halfword u, strnumber nom, strnumber aire, long s);
extern int fonts_undump(FILE * fmtfile, FILE * termout);
extern void fonts_dump(FILE * fmtfile);

#if 1
#undef Static
#define Static extern
/* Dane, tymczasowo wspólne */
Static fontindex fmemptr;
Static internalfontnumber fontptr;
Static memoryword fontinfo[fontmemsize + 1];
Static fourquarters fontcheck[fontmax - fontbase + 1];
Static scaled fontsize[fontmax - fontbase + 1];
Static scaled fontdsize[fontmax - fontbase + 1];
Static fontindex fontparams[fontmax - fontbase + 1];
extern strnumber fontname[fontmax - fontbase + 1];
Static strnumber fontarea[fontmax - fontbase + 1];
Static eightbits fontbc[fontmax - fontbase + 1];
Static eightbits fontec[fontmax - fontbase + 1];
Static pointer fontglue[fontmax - fontbase + 1];
Static boolean fontused[fontmax - fontbase + 1];
Static long hyphenchar[fontmax - fontbase + 1];
Static long skewchar[fontmax - fontbase + 1];
Static fontindex bcharlabel[fontmax - fontbase + 1];
Static long fontbchar[fontmax - fontbase + 1];
Static long fontfalsebchar[fontmax - fontbase + 1];
/*:549*/
/*550:*/
Static long charbase[fontmax - fontbase + 1];
Static long widthbase[fontmax - fontbase + 1];
Static long heightbase[fontmax - fontbase + 1];
Static long depthbase[fontmax - fontbase + 1];
Static long italicbase[fontmax - fontbase + 1];
Static long ligkernbase[fontmax - fontbase + 1];
Static long kernbase[fontmax - fontbase + 1];
Static long extenbase[fontmax - fontbase + 1];
Static long parambase[fontmax - fontbase + 1];
/*555:*/
#undef Static
#define Static static
#endif
