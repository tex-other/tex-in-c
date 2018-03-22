#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <setjmp.h>
#define pget(x) fread(&x,8,1,fmtfile)
#define pput(x) fwrite(&x,8,1,fmtfile)
#undef labs

extern int getstringsstarted(void);

/* P2C compatibility */
typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned char boolean;
typedef uchar Char;
#define true 1
#define false 0
#define P_clrbits_B(trie, idx , z, w) trie[(idx)>>3]&=~(1<<((idx)&7))
#define P_getbits_UB(trie, h , z, w) (trie[(h)>>3]&(1<<((h)&7)))
#define P_putbits_UB(trie, h , y, z, w) trie[(h)>>3]|=1<<((h)&7)

#define tobar(x) x
#define S(x) x

/* #define S(x)  frobnicate + - = "" =  Error */ 

int P_ioresult;
#define P_eof feof
/* #define PASCAL_MAIN(x,y) */
#define _EscIO(x) 0
#undef Static
#define Static
int P_peek(FILE *f);

int P_eoln(FILE *f);

#define bopenin aopenin
#define bopenout aopenout
#define wopenin aopenin
#define wopenout aopenout

#define link(x) (mem[(x)].hh.rh)
#define info(x) (mem[(x)].hh.UU.lh) 

#define type(x) (mem[(x)].hh.UU.U2.b0)
#define flink(x) (&(mem[(x)].hh.rh))
#define finfo(x) (&(mem[(x)].hh.UU.lh))
/* #define shrink(x) (mem[(x)+3].sc)) */
/* #define shrinkorder(x) (mem[(x)].hh.UU.U2.b1) */

#define foocharinfo(x,y) (&fontinfo[charbase[x]+(y)].qqqq)
#define charinfo(x,y) (fontinfo[charbase[x]+(y)].qqqq)
#define charwidth(x,y) (fontinfo[widthbase[x]+(y).b0].sc)
#define charitalic(x,y) (fontinfo[italicbase[x]+((y).b2/4)].sc)
#define charheight(x,y) (fontinfo[heightbase[x]+((y)/16)].sc)
#define chardepth(x,y) (fontinfo[depthbase[x]+((y)%16)].sc)
#define charkern(x,y) (fontinfo[kernbase[x]+256*opbyte(y)+rembyte(y)].sc)
#define freeavail(x) (mem[(x)].hh.rh=avail,avail=(x))
#define fastgetavail(x) (((x)=avail)?(avail= *flink(x), *flink(x)=0):\
			((x)=getavail()))
#define isempty(x) (*flink(x)==emptyflag) 

#define isrunning(x)  ((x)==nullflag) /* {tests for a running dimension} */

#define hashisfull  (hashused==hashbase) 
#define flength(x)  (strstart[(x)+1]-strstart[(x)]) 
#define flushchar() (poolptr--)
#define curlength  (poolptr - strstart[strptr])
#define flushstring() (strptr--,poolptr=strstart[strptr])
#define appendchar(x) (strpool[poolptr]=(x),poolptr++)
#define equiv(x) (eqtb[(x)-activebase].hh.rh) 

/* Glue parameters */
#define gluepar(x)  equiv(gluebase+(x)) 
#define lineskip  gluepar(lineskipcode)
#define baselineskip  gluepar(baselineskipcode)
#define parskip  gluepar(parskipcode)
#define abovedisplayskip  gluepar(abovedisplayskipcode)
#define belowdisplayskip  gluepar(belowdisplayskipcode)
#define abovedisplayshortskip  gluepar(abovedisplayshortskipcode)
#define belowdisplayshortskip  gluepar(belowdisplayshortskipcode)
#define leftskip  gluepar(leftskipcode)
#define rightskip  gluepar(rightskipcode)
#define topskip  gluepar(topskipcode)
#define splittopskip  gluepar(splittopskipcode)
#define tabskip  gluepar(tabskipcode)
#define spaceskip  gluepar(spaceskipcode)
#define xspaceskip  gluepar(xspaceskipcode)
#define parfillskip  gluepar(parfillskipcode)
#define thinmuskip  gluepar(thinmuskipcode)
#define medmuskip  gluepar(medmuskipcode)
#define thickmuskip  gluepar(thickmuskipcode)

/* Integer parameters */
#define intpar(x)  (eqtb[intbase+(x)-activebase].int_) 
#define pretolerance  intpar(pretolerancecode)
#define tolerance  intpar(tolerancecode)
#define linepenalty  intpar(linepenaltycode)
#define hyphenpenalty  intpar(hyphenpenaltycode)
#define exhyphenpenalty  intpar(exhyphenpenaltycode)
#define clubpenalty  intpar(clubpenaltycode)
#define widowpenalty  intpar(widowpenaltycode)
#define displaywidowpenalty  intpar(displaywidowpenaltycode)
#define brokenpenalty  intpar(brokenpenaltycode)
#define binoppenalty  intpar(binoppenaltycode)
#define relpenalty  intpar(relpenaltycode)
#define predisplaypenalty  intpar(predisplaypenaltycode)
#define postdisplaypenalty  intpar(postdisplaypenaltycode)
#define interlinepenalty  intpar(interlinepenaltycode)
#define doublehyphendemerits  intpar(doublehyphendemeritscode)
#define finalhyphendemerits  intpar(finalhyphendemeritscode)
#define adjdemerits  intpar(adjdemeritscode)
#define mag  intpar(magcode)
#define delimiterfactor  intpar(delimiterfactorcode)
#define looseness  intpar(loosenesscode)
#define time  intpar(timecode)
#define day  intpar(daycode)
#define month  intpar(monthcode)
#define year  intpar(yearcode)
#define showboxbreadth  intpar(showboxbreadthcode)
#define showboxdepth  intpar(showboxdepthcode)
#define hbadness  intpar(hbadnesscode)
#define vbadness  intpar(vbadnesscode)
#define pausing  intpar(pausingcode)
#define tracingonline  intpar(tracingonlinecode)
#define tracingmacros  intpar(tracingmacroscode)
#define tracingstats  intpar(tracingstatscode)
#define tracingparagraphs  intpar(tracingparagraphscode)
#define tracingpages  intpar(tracingpagescode)
#define tracingoutput  intpar(tracingoutputcode)
#define tracinglostchars  intpar(tracinglostcharscode)
#define tracingcommands  intpar(tracingcommandscode)
#define tracingrestores  intpar(tracingrestorescode)
#define uchyph  intpar(uchyphcode)
#define outputpenalty  intpar(outputpenaltycode)
#define maxdeadcycles  intpar(maxdeadcyclescode)
#define hangafter  intpar(hangaftercode)
#define floatingpenalty  intpar(floatingpenaltycode)
#define globaldefs  intpar(globaldefscode)
#define curfam  intpar(curfamcode)
#define escapechar  intpar(escapecharcode)
#define defaulthyphenchar  intpar(defaulthyphencharcode)
#define defaultskewchar  intpar(defaultskewcharcode)
#define endlinechar  intpar(endlinecharcode)
#define newlinechar  intpar(newlinecharcode)
#define language  intpar(languagecode)
#define lefthyphenmin  intpar(lefthyphenmincode)
#define righthyphenmin  intpar(righthyphenmincode)
#define holdinginserts  intpar(holdinginsertscode)
#define errorcontextlines  intpar(errorcontextlinescode)

/* Dimen pars */
#define dimenpar(x)  (eqtb[dimenbase+(x)-activebase].int_) 
#define parindent  dimenpar(parindentcode)
#define mathsurround  dimenpar(mathsurroundcode)
#define lineskiplimit  dimenpar(lineskiplimitcode)
#define hsize  dimenpar(hsizecode)
#define vsize  dimenpar(vsizecode)
#define maxdepth  dimenpar(maxdepthcode)
#define splitmaxdepth  dimenpar(splitmaxdepthcode)
#define boxmaxdepth  dimenpar(boxmaxdepthcode)
#define hfuzz  dimenpar(hfuzzcode)
#define vfuzz  dimenpar(vfuzzcode)
#define delimitershortfall  dimenpar(delimitershortfallcode)
#define nulldelimiterspace  dimenpar(nulldelimiterspacecode)
#define scriptspace  dimenpar(scriptspacecode)
#define predisplaysize  dimenpar(predisplaysizecode)
#define displaywidth  dimenpar(displaywidthcode)
#define displayindent  dimenpar(displayindentcode)
#define overfullrule  dimenpar(overfullrulecode)
#define hangindent  dimenpar(hangindentcode)
#define hoffset  dimenpar(hoffsetcode)
#define voffset  dimenpar(voffsetcode)
#define emergencystretch  dimenpar(emergencystretchcode)
/*
*/

#define parshapeptr  equiv(parshapeloc)
#define outputroutine  equiv(outputroutineloc)
#define everypar  equiv(everyparloc)
#define everymath  equiv(everymathloc)
#define everydisplay  equiv(everydisplayloc)
#define everyhbox  equiv(everyhboxloc)
#define everyvbox  equiv(everyvboxloc)
#define everyjob  equiv(everyjobloc)
#define everycr  equiv(everycrloc)
#define errhelp  equiv(errhelploc)
#define curfont  equiv(curfontloc)
/*
*/
#define faminrange  ((curfam>=0)&&(curfam<16))
#define setpagesofarzero(x)  (pagesofar[(x)]=0)
#define setheightzero(x)  (activeheight[(x)-1]=0) \
	/* {initialize the height to zero} */
#define setcurlang()  ((language<=0)?(curlang=0):\
		((language>255)?(curlang=0):(curlang=language)))
#define storebackground(x)  (activewidth[(x)-1]=background[(x)-1])
#define updateactive(x)  (activewidth[(x)-1] += mem[r+(x)].sc)
#define copytocuractive(x)  (curactivewidth[(x)-1]=activewidth[(x)-1])
#define updatewidth(x)  (curactivewidth[(x)-1] += mem[r+(x)].sc)
#define setbreakwidthtobackground(x)  (breakwidth[(x)-1]=background[(x)-1])
#define converttobreakwidth(x)  \
  	(mem[prevr+(x)].sc += -curactivewidth[(x)-1]+breakwidth[(x)-1])
#define storebreakwidth(x)  (activewidth[(x)-1]=breakwidth[(x)-1])
#define newdeltatobreakwidth(x)  \
	(mem[q+(x)].sc=breakwidth[(x)-1]-curactivewidth[(x)-1])
#define newdeltafrombreakwidth(x)  \
	(mem[q+(x)].sc=curactivewidth[(x)-1]-breakwidth[(x)-1])
#define combinetwodeltas(x)  (mem[prevr+(x)].sc=mem[prevr+(x)].sc+mem[r+(x)].sc)
#define downdatewidth(x)  (curactivewidth[(x)-1]-=mem[prevr+(x)].sc)
#define checkshrinkage(x)  ((shrinkorder(x)!=normal)&&(shrink(x)!=0)? \
   	(x)=finiteshrink(x):0)
#define vetglue(x)   (gluetemp=(x), ((gluetemp>(1000000000.0))?\
           (gluetemp=1000000000.0):\
	   ((gluetemp<-1000000000.0)?\
           (gluetemp=-1000000000.0):0)))
#define dviout(x)   (dvibuf[dviptr]=(x),dviptr++,\
	((dviptr==dvilimit)?(dviswap()):0))
#define packcurname()  packfilename(curname,curarea,curext)
#define appendtoname(x) (c=(x), k++, ((k<=filenamesize)? \
	 (nameoffile[k-1]=xchr[c]):0))
#define scannormaldimen()  scandimen(false,false,false)
#define endlinecharinactive    ((endlinechar<0)||(endlinechar>255))
#define ishex(x)  ((((x)>='0')&&((x)<='9'))||(((x)>='a')&&((x)<='f')))
#define hextocurchr()  (((c<='9')?(curchr=c-'0'):(curchr=c-'a'+10)),\
  	((cc<='9')?(curchr=16*curchr+cc-'0'):(curchr=16*curchr+cc-'a'+10)))
#define storenewtoken(x)   { int q=getavail();*flink(p)=q,*finfo(q)=(x),p=q;}
#define faststorenewtoken(x)   {int q;fastgetavail(q), \
		*flink(p)=q,*finfo(q)=(x),p=q;}
#define chrcmd(x)  (print(x),printASCII(chrcode))
#define precedesbreak(x)  (type(x)<mathnode)
#define nondiscardable(x)  (type(x)<mathnode)
#define checkinterrupt()  ((interrupt!=0)?(pauseforinstructions()):0)
#define topenin()  (termin=stdin)
#define topenout()  (termout=stdout)
#define global (a>=4)
#define define(x,y,z)  ((a>=4)?geqdefine((x),(y),(z)):eqdefine((x),(y),(z)))
#define worddefine(x,y)  ((a>=4)?geqworddefine((x),(y)):\
	eqworddefine((x),(y)))
#define printASCII print
#define state  curinput.statefield /*{current scanner state}*/
#define iindex  curinput.indexfield /*{reference for buffer information}*/
#define loc curinput.locfield
#define start  curinput.startfield /*{starting position in |buffer|}*/
#define limit  curinput.limitfield /*{end of current line in |buffer|}*/
#define name  curinput.namefield /*{name of the current file}*/
#define terminalinput  (name==0) /*{are we reading from the terminal?}*/
#define curfile  (inputfile[iindex-1]) /*{the current |alphafile| variable}*/
#define tokentype  iindex /*{type of current token list}*/
#define paramstart  limit /*{base of macro parameters in |paramstack|}*/
#define actwidth  activewidth[0] /* length from first active node to current node */
#define trieroot  (triel[0]) /*root of the linked trie*/
#define activeheight  activewidth /*new name for the six distance variables*/
#define curheight  (activeheight[0]) /*the natural height*/
#define pagegoal  (pagesofar[0]) /*desired height of information on page being built*/
#define pagetotal  (pagesofar[1]) /*height of the current page*/
#define pageshrink  (pagesofar[6]) /*shrinkability of the current page*/
#define pagedepth  (pagesofar[7]) /*depth of the current page*/
#define contribtail  (nest[0].tailfield) /*tail of the contribution list*/
#define ischarnode(x)  ((x)>=himemmin)

/* Makra specjalne */
#define param(x,y) (fontinfo[(x)+parambase[y]].sc)
#define mathsy(x,y) (fontinfo[(x)+parambase[famfnt(2+(y))]].sc)
#define vpack(x,y,z)  vpackage((x),(y),(z),maxdimen) /* special case of unconstrained depth}*/

#define scriptsallowed(x)  ((type(x)>=ordnoad)&&(type(x)<leftnoad))
/* #define lig_kern_start(x)  (lig_kern_base[x]+rem_byte) /* {beginning of lig/kern program} */
#define ligchar(x)  ((x)+1) /* {the word where the ligature is to be found} */
#define charexists(x)  ((x).b0>minquarterword)
#define chartag(x)  ((qo((x).b2)) % 4)
#define tailappend(x)  (link(tail)=(x), tail=link(tail))
#define addglueref(x) (gluerefcount(x)++)
#define addtokenref(x) (tokenrefcount(x)++)
/* #define choose_mlist(x)  begin p:=x(q); x(q):=null;@+end */

#define qi(x) (x)
#define qo(x) (x)
#define mode  curlist.modefield /* current mode}*/
#define head  curlist.headfield /* header node of current list}*/
#define tail  curlist.tailfield /* final node on current list}*/
#define prevgraf  curlist.pgfield /* number of paragraph lines accumulated}*/
#define aux  curlist.auxfield /* auxiliary data about the current list}*/
#define prevdepth  aux.sc /* the name of |aux| in vertical mode}*/
#define spacefactor  aux.hh.UU.lh /* part of |aux| in horizontal mode}*/
#define clang  aux.hh.rh /* the other part of |aux| in horizontal mode}*/
#define incompleatnoad  aux.int_ /* the name of |aux| in math mode}*/
#define modeline  curlist.mlfield /* source file line number at beginning of list}*/
#define topmark  curmark[topmarkcode- topmarkcode]
#define firstmark  curmark[firstmarkcode - topmarkcode]
#define botmark  curmark[botmarkcode - topmarkcode]
#define splitfirstmark  curmark[splitfirstmarkcode - topmarkcode]
#define splitbotmark  curmark[splitbotmarkcode- topmarkcode]
#define nonchar  qi(256) /* a |halfword| code that can't match a real character}*/
#define stopflag  qi(128) /* value indicating `\.{STOP}' in a lig/kern program}*/
#define kernflag  qi(128) /* op code for a kern step}*/
#define defaultrulethickness  mathex(8) /* thickness of \.{\\over} bars}*/
#define bigopspacing1  mathex(9) /* minimum clearance above a displayed op}*/
#define bigopspacing2  mathex(10) /* minimum clearance below a displayed op}*/
#define bigopspacing3  mathex(11) /* minimum baselineskip above displayed op}*/
#define bigopspacing4  mathex(12) /* minimum baselineskip below displayed op}*/
#define bigopspacing5  mathex(13) /* padding above and below displayed limits}*/
#define preamble  link(alignhead) /* the current preamble list}*/



#define slant(x)  param(slantcode,x) /* slant to the right, per unit distance upward}*/
#define space(x)  param(spacecode,x) /* normal space between words}*/
#define spacestretch(x)  param(spacestretchcode,x) /* stretch between words}*/
#define spaceshrink(x)  param(spaceshrinkcode,x) /* shrink between words}*/
#define xheight(x)  param(xheightcode,x) /* one ex}*/
#define quad(x)  param(quadcode,x) /* one em}*/
#define extraspace(x)  param(extraspacecode,x) /* additional space at end of sentence}*/


#define mathxheight(x)  mathsy(5,x) /* height of `\.x'}*/
#define mathquad(x)  mathsy(6,x) /* \.{18mu}}*/
#define num1(x)  mathsy(8,x) /* numerator shift-up in display styles}*/
#define num2(x)  mathsy(9,x) /* numerator shift-up in non-display, non-\.{\\atop}}*/
#define num3(x)  mathsy(10,x) /* numerator shift-up in non-display \.{\\atop}}*/
#define denom1(x)  mathsy(11,x) /* denominator shift-down in display styles}*/
#define denom2(x)  mathsy(12,x) /* denominator shift-down in non-display styles}*/
#define sup1(x)  mathsy(13,x) /* superscript shift-up in uncramped display style}*/
#define sup2(x)  mathsy(14,x) /* superscript shift-up in uncramped non-display}*/
#define sup3(x)  mathsy(15,x) /* superscript shift-up in cramped styles}*/
#define sub1(x)  mathsy(16,x) /* subscript shift-down if superscript is absent}*/
#define sub2(x)  mathsy(17,x) /* subscript shift-down if superscript is present}*/
#define supdrop(x)  mathsy(18,x) /* superscript baseline below top of large box}*/
#define subdrop(x)  mathsy(19,x) /* subscript baseline below bottom of large box}*/
#define delim1(x)  mathsy(20,x) /* size of \.{\\atopwithdelims} delimiters*/
  /* in display styles}*/
#define delim2(x)  mathsy(21,x) /* size of \.{\\atopwithdelims} delimiters in non-displays}*/
#define axisheight(x)  mathsy(22,x) /* height of fraction lines above the baseline}*/


#define nodesize    info /* the size field in empty variable-size nodes}*/
#define llink(x)    info(x+1) /* left link in doubly-linked list of empty nodes}*/
#define rlink(x)    link(x+1) /* right link in doubly-linked list of empty nodes}*/
/* #define type(x)    mem[x].hh.b0  identifies what kind of node this is}*/
#define subtype(x)    mem[x].hh.UU.U2.b1 /* secondary identification in some cases}*/
#define font    type /* the font code in a |charnode|}*/
#define character    subtype /* the character code in a |charnode|}*/
#define width(x)    mem[x+widthoffset].sc /* width of the box, in sp}*/
#define depth(x)    mem[x+depthoffset].sc /* depth of the box, in sp}*/
#define height(x)    mem[x+heightoffset].sc /* height of the box, in sp}*/
#define shiftamount(x)    mem[x+4].sc /* repositioning distance, in sp}*/
#define listptr(x)    link(x+listoffset) /* beginning of the list inside the box}*/
#define glueorder(x)    subtype(x+listoffset) /* applicable order of infinity}*/
#define gluesign(x)    type(x+listoffset) /* stretching or shrinking}*/
#define glueset(x)    mem[x+glueoffset].gr
  /* a word of type |glueratio| for glue setting}*/
#define floatcost(x)  mem[x+1].int_ /* the |floatingpenalty| to be used}*/
#define insptr(x)  info(x+4) /* the vertical list to be inserted}*/
#define splittopptr(x)  link(x+4) /* the |splittopskip| to be used}*/
#define markptr(x)  mem[x+1].int_ /* head of the token list for a mark}*/
#define adjustptr  markptr /* vertical list to be moved out of horizontal list}*/
#define ligptr(x)  link(ligchar(x)) /* the list of characters}*/
#define replacecount  subtype /* how many subsequent nodes to replace}*/
#define prebreak  llink /* text that precedes a discretionary break}*/
#define postbreak  rlink /* text that follows a discretionary break}*/
#define glueptr  llink /* pointer to a glue specification}*/
#define leaderptr  rlink /* pointer to box or rule node for leaders}*/
#define gluerefcount(x)    link(x) /* reference count of a glue specification}*/
#define stretch(x)    mem[x+2].sc /* the stretchability of this glob of glue}*/
#define shrink(x)    mem[x+3].sc /* the shrinkability of this glob of glue}*/
#define stretchorder    type /* order of infinity for stretching}*/
#define shrinkorder    subtype /* order of infinity for shrinking}*/
#define penalty(x)    mem[x+1].int_ /* the added cost of breaking a list here}*/
#define gluestretch(x)  mem[x+glueoffset].sc /* total stretch in an unset node}*/
#define glueshrink  shiftamount /* total shrink in an unset node}*/
#define spancount  subtype /* indicates the number of spanned columns}*/
#define tokenrefcount(x)    info(x) /* reference count preceding a token list}*/
#define eqlevelfield(x)  x.hh.UU.U2.b1
#define eqtypefield(x)  x.hh.UU.U2.b0
#define equivfield(x)  x.hh.rh
#define eqlevel(x)  eqlevelfield(eqtb[x-activebase]) /* level of definition}*/
#define eqtype(x)  eqtypefield(eqtb[x-activebase]) /* command code for equivalent}*/
/* #define equiv(x)  equivfield(eqtb[x-activebase]) /* equivalent value}*/
#define skip(x)  equiv(skipbase+x) /* |mem| location of glue specification}*/
#define muskip(x)  equiv(muskipbase+x) /* |mem| location of math glue spec}*/
/* #define gluepar(x)  equiv(gluebase+x)  |mem| location of glue specification}*/
#define toks(x)  equiv(toksbase+x)
#define box(x)  equiv(boxbase+x)
#define famfnt(x)  equiv(mathfontbase+x)
#define catcode(x)  equiv(catcodebase+x)
#define lccode(x)  equiv(lccodebase+x)
#define uccode(x)  equiv(uccodebase+x)
#define sfcode(x)  equiv(sfcodebase+x)
#define mathcode(x)  equiv(mathcodebase+x)
  /*  Note: |mathcode(c)| is the true math code plus |minhalfword|} */
#define delcode(x)  eqtb[delcodebase+x-activebase].int_
#define count(x)  eqtb[countbase+x-activebase].int_
/* #define intpar(x)  eqtb[intbase+x-activebase].int_  an integer parameter}*/
#define dimen(x)  eqtb[scaledbase+x-activebase].sc
/* #define dimenpar(x)  eqtb[dimenbase+x-activebase].sc  a scaled quantity}*/
#define next(x)    hash[x-hashbase].UU.lh /* link for coalesced lists}*/
#define text(x)    hash[x-hashbase].rh /* string number for control sequence name}*/
#define fontidtext(x)    text(fontidbase+x) /* a frozen font identifier's name}*/
#define savetype(x)  savestack[x].hh.UU.U2.b0 /* classifies a |savestack| entry}*/
#define savelevel(x)  savestack[x].hh.UU.U2.b1
  /* saved level for regions 5 and 6, or group code}*/
#define saveindex(x)  savestack[x].hh.rh
  /* |eqtb| location or |savestack| location}*/

#define largechar(x)  mem[x].qqqq.b3 /* |character| for ``large'' delimiter}*/
#define location(x)  mem[x+2].int_ /* \.{DVI} byte number for a movement command}*/
#define heightdepth(x)  qo(x.b1)
#define saved(x)  savestack[saveptr+x].int_
#define skipbyte(x)  x.b0
#define nextchar(x)  x.b1
#define opbyte(x)  x.b2
#define rembyte(x)  x.b3
#define exttop(x)  x.b0 /* |top| piece in a recipe}*/
#define extmid(x)  x.b1 /* |mid| piece in a recipe}*/
#define extbot(x)  x.b2 /* |bot| piece in a recipe}*/
#define extrep(x)  x.b3 /* |rep| piece in a recipe}*/
#define nucleus(x)  x+1 /* the |nucleus| field of a noad}*/
#define supscr(x)  x+2 /* the |supscr| field of a noad}*/
#define subscr(x)  x+3 /* the |subscr| field of a noad}*/
#define mathtype  link /* a |halfword| in |mem|}*/
#define fam  font /* a |quarterword| in |mem|}*/
#define leftdelimiter(x)  x+4 /* first delimiter field of a noad}*/
#define rightdelimiter(x)  x+5 /* second delimiter field of a fraction noad}*/
#define smallfam(x)  mem[x].qqqq.b0 /* |fam| for ``small'' delimiter}*/
#define smallchar(x)  mem[x].qqqq.b1 /* |character| for ``small'' delimiter}*/
#define largefam(x)  mem[x].qqqq.b2 /* |fam| for ``large'' delimiter}*/
#define thickness  width /* |thickness| field in a fraction noad}*/
#define numerator  supscr /* |numerator| field in a fraction noad}*/
#define denominator  subscr /* |denominator| field in a fraction noad}*/
#define accentchr(x)  (x+4) /* the |accentchr| field of an accent noad}*/
#define delimiter  nucleus /* |delimiter| field in left and right noads}*/
#define displaymlist(x)  info(x+1) /* mlist to be used in display style}*/
#define textmlist(x)  link(x+1) /* mlist to be used in text style}*/
#define scriptmlist(x)  info(x+2) /* mlist to be used in script style}*/
#define scriptscriptmlist(x)  link(x+2) /* mlist to be used in scriptscript style}*/
#define crampedstyle(x)  2*(x / 2)+cramped /* cramp the style}*/
#define substyle(x)  2*(x / 4)+scriptstyle+cramped /* smaller and cramped}*/
#define supstyle(x)  2*(x / 4)+scriptstyle+(x % 2) /* smaller}*/
#define numstyle(x)  x+2-2*(x / 6) /* smaller unless already script-script}*/
#define denomstyle(x)  2*(x / 2)+cramped+2-2*(x / 6) /* smaller, cramped}*/
#define upart(x)  mem[x+heightoffset].int_ /* pointer to \<uj> token list}*/
#define vpart(x)  mem[x+depthoffset].int_ /* pointer to \<vj> token list}*/
#define extrainfo(x)  info(x+listoffset) /* info to remember during template}*/
#define fitness  subtype /* |veryloosefit..tightfit| on final line for this break}*/
#define breaknode  rlink /* pointer to the corresponding passive node}*/
#define linenumber  llink /* line that begins at this breakpoint}*/
#define totaldemerits(x)  mem[x+2].int_ /* the quantity that \TeX\ minimizes}*/
#define curbreak  rlink /* in passive node, points to position of this breakpoint}*/
#define prevbreak  llink /* points to passive node that should precede this one}*/
#define serial  info /* serial number for symbolic identification}*/
#define nextbreak  prevbreak /* new name for |prevbreak| after links are reversed}*/
#define trielink(x)  trie[x].rh /* ``downward'' link in a trie}*/
#define triechar(x)  trie[x].UU.U2.b1 /* character matched at this trie location}*/
#define trieop(x)  trie[x].UU.U2.b0 /* program for hyphenation at this trie location}*/
#define brokenptr(x)  link(x+1)
  /* an insertion for this class will break here if anywhere}*/
#define trieback(x)  trie[x].UU.lh /* backward links in |trie| holes}*/
#define brokenins(x)  info(x+1) /* this insertion might break at |brokenptr|}*/
#define lastinsptr(x)  link(x+2) /* the most recent insertion for this |subtype|}*/
#define bestinsptr(x)  info(x+2) /* the optimum most recent insertion}*/
#define mathex(x)  fontinfo[x+parambase[famfnt(3+cursize)]].sc 
#define newhlist(x)  mem[nucleus(x)].int_ /* the translation of an mlist}*/
#define iflinefield(x)  mem[x+1].int_
#define whatlang(x)  link(x+1) /* language number, in the range |0..255|}*/
#define whatlhm(x)  type(x+1) /* minimum left fragment, in the range |1..63|}*/
#define whatrhm(x)  subtype(x+1) /* minimum right fragment, in the range |1..63|}*/
#define writetokens(x)    link(x+1) /* reference count of token list to write}*/
#define writestream(x)    info(x+1) /* stream number (0 to 17)}*/
#define openname(x)    link(x+1) /* string number of file name to open}*/
#define openarea(x)    info(x+2) /* string number of file area for |openname|}*/
#define openext(x)    link(x+2) /* string number of file extension for |openname|}*/

#define nxplusy(n,x,y) (multandadd((n),(x),(y),1073741823L))
#define karmafastdeleteglueref(x) (gluerefcount(x)==0?freenode((x),gluespecsize):\
			gluerefcount(x)--)
#define nodelistdisplay(x) (appendchar('.'), shownodelist(x), flushchar())
   /* {|str_room| need not be checked; see |show_box| below} */

#define beginpseudoprint()  (l=tally, tally=0, selector=pseudo,\
  trickcount=1000000)

#define settrickcount()  (firstcount=tally,\
  trickcount=tally+1+errorline-halferrorline,\
  ((trickcount<errorline)?trickcount=errorline:0))

#define popinput()  /* leave an input level, re-enter the old */\
  	(inputptr--, curinput=inputstack[inputptr])
#define backlist(x)  begintokenlist((x),backedup) /* backs up a simple token list */
#define inslist(x)  begintokenlist((x),inserted) /* inserts a simple token list */

#define null 0

#define getxtokenoractivechar() (getxtoken(), \
	((curcmd==relax)&& (curchr==noexpandflag))?\
     (curcmd=activechar, curchr=curtok-cstokenflag-activebase):0)

#if 0
#define wrapup(x)  {if (curl<nonchar ) {\
  if ((character(tail)==qi(hyphenchar[mainf])) &&\
	 (link(curq)>null )) { insdisc=true;}\
  if ( ligaturepresent ) {packlig(x);}\
  if( insdisc ) {\
    insdisc=false;\
    if ( mode>0 ) {tailappend(newdisc);}\
  }}}
#else
#define wrapup(x) \
       if (curl < nonchar) {\
         if (character(tail) == hyphenchar[mainf - fontbase]) {\
           if (link(curq) > 0)\
             insdisc = true;\
         }\
         if (ligaturepresent) {\
           mainp = newligature(mainf, curl, link(curq));\
           if (lfthit) {\
             subtype(mainp) = 2;\
             lfthit = false;\
           }\
           if (x) {\
             if (ligstack == 0) {\
               (subtype(mainp))++;\
               rthit = false;\
             }\
           }\
           link(curq) = mainp;\
           tail = mainp;\
           ligaturepresent = false;\
         }\
         if (insdisc) {\
           insdisc = false;\
           if (mode > 0) {\
             tailappend(newdisc());\
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */\
           }\
         }\
       }
#endif

#define adjustspacefactor() { \
  mains=sfcode(curchr);\
  if (mains==1000 ) {spacefactor=1000;}\
  else if ( mains<1000 ) {\
    if (mains>0 ) {spacefactor=mains;}\
    }\
  else if ( spacefactor<1000 ) { spacefactor=1000;}\
  else spacefactor=mains;\
  }

#define packlig(x)    { /*{the parameter is either |rthit| or |false|} */\
  mainp=newligature(mainf,curl,link(curq));\
  if (lfthit ) {\
    subtype(mainp)=2; lfthit=false;\
    }\
  if ((x) && (ligstack==null)) {\
    subtype(mainp)++; rthit=false;\
    }\
  link(curq)=mainp; tail=mainp; ligaturepresent=false;\
  }

#define kernbreak()  { if (! ischarnode(link(curp)) && ( autobreaking )) {\
    if (type(link(curp))==gluenode ) trybreak(0,unhyphenated);}\
    actwidth+=width(curp);\
  }

#define appendcharnodetot(x)   { link(t)=getavail(); t=link(t);\
    font(t)=hf; character(t)=x; }\

#define setcurr()  {if (j<n ) {curr=qi(hu[j+1]);}else { curr=bchar;}\
    if (hyf[j]&1)  {currh=hchar;} else {currh=nonchar;}\
    }

#define wraplig(x)  if (ligaturepresent ) {\
    p=newligature(hf,curl,link(curq));\
    if (lfthit ) {\
      subtype(p)=2; lfthit=false;\
      }\
    if ( x ) if ( ligstack==0 ) {\
      (subtype(p))++; rthit=false;\
      }\
    link(curq)=p; t=p; ligaturepresent=false;\
    }

#define popligstack()  { if (ligptr(ligstack)>null ) {\
    link(t)=ligptr(ligstack); /* this is a charnode for |hu[j+1]| */\
    t=link(t); j++;\
    }\
  p=ligstack; ligstack=link(p); freenode(p,smallnodesize);\
  if (ligstack==null ) {setcurr();} else { curr=character(ligstack);}\
  } /* {if |ligstack| isn't |null| we have |currh=nonchar|} */

#define advancemajortail()  {majortail=link(majortail); rcount++;}

#define synchh()   { if(curh!=dvih ) {\
    movement(curh-dvih,right1); dvih=curh;}}

#define synchv()   { if(curv!=dviv ) {\
     movement(curv-dviv,down1); dviv=curv;}}

#define advpast(x)  { if(subtype(x)==languagenode ) {\
    curlang=whatlang(x); lhyf=whatlhm(x); rhyf=whatrhm(x);}}
