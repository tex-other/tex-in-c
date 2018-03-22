/* Output from p2c, the Pascal-to-C translator */
/* From input file "tex1.p" */


/*4:*/
/*9:*/
/*$C-,A+,D-*/
/*_DEBUG*/
/*$C+,D+*/
/*_ENDDEBUG*/
/*:9*/

#include <p2c/p2c.h>


/*6:*/
/*:6*/
/*11:*/

#define memmax          30000
#define memmin          0
#define bufsize         500
#define errorline       72
#define halferrorline   42
#define maxprintline    79
#define stacksize       200
#define maxinopen       6
#define fontmax         75
#define fontmemsize     20000
#define paramsize       60
#define nestsize        40
#define maxstrings      3000
#define stringvacancies  8000
#define poolsize        32000
#define savesize        600
#define triesize        8000
#define trieopsize      500
#define dvibufsize      800
#define filenamesize    40

#define banner          "This is TeX, Version 3.14159"

#define maxhalfword     65535L
#define emptyflag       maxhalfword

#define memtop          30000
#define pageinshead     memtop

#define contribhead     (memtop - 1)
#define pagehead        (memtop - 2)
#define temphead        (memtop - 3)
#define holdhead        (memtop - 4)
#define adjusthead      (memtop - 5)
#define active          (memtop - 7)
#define lastactive      active
#define alignhead       (memtop - 8)
#define endspan         (memtop - 9)
#define omittemplate    (memtop - 10)
#define nulllist        (memtop - 11)
#define ligtrick        (memtop - 12)
#define garbage         (memtop - 12)
#define backuphead      (memtop - 13)
#define himemstatmin    (memtop - 13)

#define varcode         28672
#define cstokenflag     4095

#define maxdimen        1073741823L
#define nullflag        (-1073741824L)
#define infinity        2147483647L
#define defaultcode     1073741824L
#define awfulbad        1073741823L
#define boxflag         1073741824L
#define ignoredepth     (-65536000L)
#define unity           65536L

#define two             131072
#define membot          0
#define fontbase        0
#define hashsize        2100
#define hashprime       1777
#define hyphsize        307
#define empty           0
#define firsttextchar   0
#define lasttextchar    255
#define nullcode        0
#define carriagereturn  13
#define invalidcode     127
#define noprint         16
#define termonly        17
#define logonly         18
#define termandlog      19
#define pseudo          20
#define newstring       21
#define maxselector     21
#define batchmode       0
#define nonstopmode     1
#define scrollmode      2
#define errorstopmode   3
#define spotless        0
#define warningissued   1
#define errormessageissued  2
#define fatalerrorstop  3
#define infbad          10000
#define minquarterword  0
#define maxquarterword  255
#define hlistnode       0
#define boxnodesize     7
#define widthoffset     1
#define depthoffset     2
#define heightoffset    3
#define listoffset      5
#define normal          0
#define stretching      1
#define shrinking       2
#define glueoffset      6
#define vlistnode       1
#define rulenode        2
#define rulenodesize    4
#define insnode         3
#define insnodesize     5
#define marknode        4
#define smallnodesize   2
#define adjustnode      5
#define ligaturenode    6
#define discnode        7
#define whatsitnode     8
#define mathnode        9
#define before          0
#define after           1
#define gluenode        10
#define condmathglue    98
#define muglue          99
#define aleaders        100
#define cleaders        101
#define xleaders        102
#define gluespecsize    4
#define fil             1
#define fill            2
#define filll           3
#define kernnode        11
#define explicit        1
#define acckern         2
#define penaltynode     12
#define infpenalty      infbad
#define ejectpenalty    (-infpenalty)
#define unsetnode       13
#define himemstatusage  14
#define escape          0
#define relax           0
#define leftbrace       1
#define rightbrace      2
#define mathshift       3
#define tabmark         4
#define carret          5
#define outparam        5
#define macparam        6
#define supmark         7
#define submark         8
#define ignore          9
#define endv            9
#define spacer          10
#define letter          11
#define otherchar       12
#define activechar      13
#define parend          13
#define match           13
#define comment         14
#define endmatch        14
#define stop            14
#define invalidchar     15
#define delimnum        15
#define maxcharcode     15
#define charnum         16
#define mathcharnum     17
#define mark_           18
#define xray            19
#define makebox         20
#define hmove           21
#define vmove           22
#define unhbox          23
#define unvbox          24
#define removeitem      25
#define hskip           26
#define vskip           27
#define mskip           28
#define kern            29
#define mkern           30
#define leadership      31
#define halign          32
#define valign          33
#define noalign         34
#define vrule           35
#define hrule           36
#define insert_         37
#define vadjust         38
#define ignorespaces    39
#define afterassignment  40
#define aftergroup      41
#define breakpenalty    42
#define startpar        43
#define italcorr        44
#define accent          45
#define mathaccent      46
#define discretionary   47
#define eqno            48
#define leftright       49
#define mathcomp        50
#define limitswitch     51
#define above           52
#define mathstyle       53
#define mathchoice      54
#define nonscript       55
#define vcenter         56
#define caseshift       57
#define message         58
#define extension       59
#define instream        60
#define begingroup      61
#define endgroup        62
#define omit            63
#define exspace         64
#define noboundary      65
#define radical         66
#define endcsname       67
#define mininternal     68
#define chargiven       68
#define mathgiven       69
#define lastitem        70
#define maxnonprefixedcommand  70
#define toksregister    71
#define assigntoks      72
#define assignint       73
#define assigndimen     74
#define assignglue      75
#define assignmuglue    76
#define assignfontdimen  77
#define assignfontint   78
#define setaux          79
#define setprevgraf     80
#define setpagedimen    81
#define setpageint      82
#define setboxdimen     83
#define setshape        84
#define defcode         85
#define deffamily       86
#define setfont         87
#define deffont         88
#define register_       89
#define maxinternal     89
#define advance         90
#define multiply        91
#define divide          92
#define prefix          93
#define let             94
#define shorthanddef    95
#define readtocs        96
#define def             97
#define setbox          98
#define hyphdata        99
#define setinteraction  100
#define maxcommand      100

#define undefinedcs     (maxcommand + 1)
#define expandafter     (maxcommand + 2)
#define noexpand        (maxcommand + 3)
#define input           (maxcommand + 4)
#define iftest          (maxcommand + 5)
#define fiorelse        (maxcommand + 6)
#define csname          (maxcommand + 7)
#define convert         (maxcommand + 8)
#define the             (maxcommand + 9)
#define topbotmark      (maxcommand + 10)
#define call            (maxcommand + 11)
#define longcall        (maxcommand + 12)
#define outercall       (maxcommand + 13)
#define longoutercall   (maxcommand + 14)
#define endtemplate     (maxcommand + 15)
#define dontexpand      (maxcommand + 16)
#define glueref         (maxcommand + 17)
#define shaperef        (maxcommand + 18)
#define boxref          (maxcommand + 19)
#define data            (maxcommand + 20)

#define vmode           1

#define hmode           (vmode + maxcommand + 1)
#define mmode           (hmode + maxcommand + 1)

#define levelzero       minquarterword

#define levelone        (levelzero + 1)

#define activebase      1

#define singlebase      (activebase + 256)
#define nullcs          (singlebase + 256)
#define hashbase        (nullcs + 1)
#define frozencontrolsequence  (hashbase + hashsize)
#define frozenprotection  frozencontrolsequence
#define frozencr        (frozencontrolsequence + 1)
#define frozenendgroup  (frozencontrolsequence + 2)
#define frozenright     (frozencontrolsequence + 3)
#define frozenfi        (frozencontrolsequence + 4)
#define frozenendtemplate  (frozencontrolsequence + 5)
#define frozenendv      (frozencontrolsequence + 6)
#define frozenrelax     (frozencontrolsequence + 7)
#define endwrite        (frozencontrolsequence + 8)
#define frozendontexpand  (frozencontrolsequence + 9)
#define frozennullfont  (frozencontrolsequence + 10)
#define fontidbase      (frozennullfont - fontbase)
#define undefinedcontrolsequence  (frozennullfont + 257)
#define gluebase        (undefinedcontrolsequence + 1)

#define lineskipcode    0
#define baselineskipcode  1
#define parskipcode     2
#define abovedisplayskipcode  3
#define belowdisplayskipcode  4
#define abovedisplayshortskipcode  5
#define belowdisplayshortskipcode  6
#define leftskipcode    7
#define rightskipcode   8
#define topskipcode     9
#define splittopskipcode  10
#define tabskipcode     11
#define spaceskipcode   12
#define xspaceskipcode  13
#define parfillskipcode  14
#define thinmuskipcode  15
#define medmuskipcode   16
#define thickmuskipcode  17
#define gluepars        18

#define skipbase        (gluebase + gluepars)
#define muskipbase      (skipbase + 256)
#define localbase       (muskipbase + 256)
#define parshapeloc     localbase
#define outputroutineloc  (localbase + 1)
#define everyparloc     (localbase + 2)
#define everymathloc    (localbase + 3)
#define everydisplayloc  (localbase + 4)
#define everyhboxloc    (localbase + 5)
#define everyvboxloc    (localbase + 6)
#define everyjobloc     (localbase + 7)
#define everycrloc      (localbase + 8)
#define errhelploc      (localbase + 9)
#define toksbase        (localbase + 10)
#define boxbase         (toksbase + 256)
#define curfontloc      (boxbase + 256)
#define mathfontbase    (curfontloc + 1)
#define catcodebase     (mathfontbase + 48)
#define lccodebase      (catcodebase + 256)
#define uccodebase      (lccodebase + 256)
#define sfcodebase      (uccodebase + 256)
#define mathcodebase    (sfcodebase + 256)
#define intbase         (mathcodebase + 256)

#define pretolerancecode  0
#define tolerancecode   1
#define linepenaltycode  2
#define hyphenpenaltycode  3
#define exhyphenpenaltycode  4
#define clubpenaltycode  5
#define widowpenaltycode  6
#define displaywidowpenaltycode  7
#define brokenpenaltycode  8
#define binoppenaltycode  9
#define relpenaltycode  10
#define predisplaypenaltycode  11
#define postdisplaypenaltycode  12
#define interlinepenaltycode  13
#define doublehyphendemeritscode  14
#define finalhyphendemeritscode  15
#define adjdemeritscode  16
#define magcode         17
#define delimiterfactorcode  18
#define loosenesscode   19
#define timecode        20
#define daycode         21
#define monthcode       22
#define yearcode        23
#define showboxbreadthcode  24
#define showboxdepthcode  25
#define hbadnesscode    26
#define vbadnesscode    27
#define pausingcode     28
#define tracingonlinecode  29
#define tracingmacroscode  30
#define tracingstatscode  31
#define tracingparagraphscode  32
#define tracingpagescode  33
#define tracingoutputcode  34
#define tracinglostcharscode  35
#define tracingcommandscode  36
#define tracingrestorescode  37
#define uchyphcode      38
#define outputpenaltycode  39
#define maxdeadcyclescode  40
#define hangaftercode   41
#define floatingpenaltycode  42
#define globaldefscode  43
#define curfamcode      44
#define escapecharcode  45
#define defaulthyphencharcode  46
#define defaultskewcharcode  47
#define endlinecharcode  48
#define newlinecharcode  49
#define languagecode    50
#define lefthyphenmincode  51
#define righthyphenmincode  52
#define holdinginsertscode  53
#define errorcontextlinescode  54
#define intpars         55

#define countbase       (intbase + intpars)
#define delcodebase     (countbase + 256)
#define dimenbase       (delcodebase + 256)

#define parindentcode   0
#define mathsurroundcode  1
#define lineskiplimitcode  2
#define hsizecode       3
#define vsizecode       4
#define maxdepthcode    5
#define splitmaxdepthcode  6
#define boxmaxdepthcode  7
#define hfuzzcode       8
#define vfuzzcode       9
#define delimitershortfallcode  10
#define nulldelimiterspacecode  11
#define scriptspacecode  12
#define predisplaysizecode  13
#define displaywidthcode  14
#define displayindentcode  15
#define overfullrulecode  16
#define hangindentcode  17
#define hoffsetcode     18
#define voffsetcode     19
#define emergencystretchcode  20
#define dimenpars       21

#define scaledbase      (dimenbase + dimenpars)
#define eqtbsize        (scaledbase + 255)

#define restoreoldvalue  0
#define restorezero     1
#define inserttoken     2
#define levelboundary   3
#define bottomlevel     0
#define simplegroup     1
#define hboxgroup       2
#define adjustedhboxgroup  3
#define vboxgroup       4
#define vtopgroup       5
#define aligngroup      6
#define noaligngroup    7
#define outputgroup     8
#define mathgroup       9
#define discgroup       10
#define insertgroup     11
#define vcentergroup    12
#define mathchoicegroup  13
#define semisimplegroup  14
#define mathshiftgroup  15
#define mathleftgroup   16
#define maxgroupcode    16
#define leftbracetoken  256
#define leftbracelimit  512
#define rightbracetoken  512
#define rightbracelimit  768
#define mathshifttoken  768
#define tabtoken        1024
#define outparamtoken   1280
#define spacetoken      2592
#define lettertoken     2816
#define othertoken      3072
#define matchtoken      3328
#define endmatchtoken   3584
#define midline         1

#define skipblanks      (maxcharcode + 2)
#define newline         (maxcharcode + maxcharcode + 3)

#define skipping        1
#define defining        2
#define matching        3
#define aligning        4
#define absorbing       5
#define tokenlist       0
#define parameter       0
#define utemplate       1
#define vtemplate       2
#define backedup        3
#define inserted        4
#define macro           5
#define outputtext      6
#define everypartext    7
#define everymathtext   8
#define everydisplaytext  9
#define everyhboxtext   10
#define everyvboxtext   11
#define everyjobtext    12
#define everycrtext     13
#define marktext        14
#define writetext       15
#define switch_         25
#define startcs         26
#define noexpandflag    257
#define topmarkcode     0
#define firstmarkcode   1
#define botmarkcode     2
#define splitfirstmarkcode  3
#define splitbotmarkcode  4
#define intval          0
#define dimenval        1
#define glueval         2
#define muval           3
#define identval        4
#define tokval          5

#define inputlinenocode  (glueval + 1)
#define badnesscode     (glueval + 2)
#define octaltoken      (othertoken + 39)
#define hextoken        (othertoken + 34)
#define alphatoken      (othertoken + 96)
#define pointtoken      (othertoken + 46)
#define continentalpointtoken  (othertoken + 44)
#define zerotoken       (othertoken + 48)
#define Atoken          (lettertoken + 65)
#define otherAtoken     (othertoken + 65)

#define attachfraction  88
#define attachsign      89
#define defaultrule     26214
#define numbercode      0
#define romannumeralcode  1
#define stringcode      2
#define meaningcode     3
#define fontnamecode    4
#define jobnamecode     5
#define closed          2
#define justopen        1
#define ifcharcode      0
#define ifcatcode       1
#define ifintcode       2
#define ifdimcode       3
#define ifoddcode       4
#define ifvmodecode     5
#define ifhmodecode     6
#define ifmmodecode     7
#define ifinnercode     8
#define ifvoidcode      9
#define ifhboxcode      10
#define ifvboxcode      11
#define ifxcode         12
#define ifeofcode       13
#define iftruecode      14
#define iffalsecode     15
#define ifcasecode      16
#define ifnodesize      2
#define ifcode          1
#define ficode          2
#define elsecode        3
#define orcode          4
#define formatdefaultlength  20
#define formatarealength  11
#define formatextlength  4
#define formatextension  271
#define notag           0
#define ligtag          1
#define listtag         2
#define exttag          3
#define slantcode       1
#define spacecode       2
#define spacestretchcode  3
#define spaceshrinkcode  4
#define xheightcode     5
#define quadcode        6
#define extraspacecode  7
#define nonaddress      0
#define badtfm          11
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
#define movepast        13
#define finrule         14
#define nextp           15
#define exactly         0
#define additional      1
#define noadsize        4
#define mathchar        1
#define subbox          2
#define submlist        3
#define mathtextchar    4

#define ordnoad         (unsetnode + 3)
#define opnoad          (ordnoad + 1)
#define binnoad         (ordnoad + 2)
#define relnoad         (ordnoad + 3)
#define opennoad        (ordnoad + 4)
#define closenoad       (ordnoad + 5)
#define punctnoad       (ordnoad + 6)
#define innernoad       (ordnoad + 7)

#define limits          1
#define nolimits        2

#define radicalnoad     (innernoad + 1)

#define radicalnoadsize  5

#define fractionnoad    (radicalnoad + 1)

#define fractionnoadsize  6

#define undernoad       (fractionnoad + 1)
#define overnoad        (undernoad + 1)
#define accentnoad      (overnoad + 1)

#define accentnoadsize  5

#define vcenternoad     (accentnoad + 1)
#define leftnoad        (vcenternoad + 1)
#define rightnoad       (leftnoad + 1)
#define stylenode       (unsetnode + 1)

#define stylenodesize   3
#define displaystyle    0
#define textstyle       2
#define scriptstyle     4
#define scriptscriptstyle  6
#define cramped         1

#define choicenode      (unsetnode + 2)

#define textsize        0
#define scriptsize      16
#define scriptscriptsize  32
#define totalmathsyparams  22
#define totalmathexparams  13
#define donewithnoad    80
#define donewithnode    81
#define checkdimensions  82
#define deleteq         83
#define alignstacknodesize  5
#define spancode        256
#define crcode          257

#define crcrcode        (crcode + 1)

#define spannodesize    2
#define tightfit        3
#define loosefit        1
#define veryloosefit    0
#define decentfit       2
#define activenodesize  3
#define unhyphenated    0
#define hyphenated      1
#define passivenodesize  2
#define deltanodesize   7
#define deltanode       2
#define deactivate      60
#define updateheights   90
#define insertsonly     1
#define boxthere        2
#define pageinsnodesize  4
#define inserting       0
#define splitup         1
#define contribute      80
#define bigswitch       60
#define appendnormalspace  120
#define filcode         0
#define fillcode        1
#define sscode          2
#define filnegcode      3
#define skipcode        4
#define mskipcode       5
#define boxcode         0
#define copycode        1
#define lastboxcode     2
#define vsplitcode      3
#define vtopcode        4
#define abovecode       0
#define overcode        1
#define atopcode        2
#define delimitedcode   3
#define chardefcode     0
#define mathchardefcode  1
#define countdefcode    2
#define dimendefcode    3
#define skipdefcode     4
#define muskipdefcode   5
#define toksdefcode     6
#define showcode        0
#define showboxcode     1
#define showthecode     2
#define showlists       3
#define badfmt          6666
#define breakpoint      888
#define writenodesize   2
#define opennodesize    3
#define opennode        0
#define writenode       1
#define closenode       2
#define specialnode     3
#define languagenode    4
#define immediatecode   4
#define setlanguagecode  5

#define endtemplatetoken  (cstokenflag + frozenendtemplate)

#define kernbaseoffset  32768
#define zeroglue        membot
#define filglue         (zeroglue + gluespecsize)
#define fillglue        (filglue + gluespecsize)
#define ssglue          (fillglue + gluespecsize)
#define filnegglue      (ssglue + gluespecsize)

#define lomemstatmax    (filnegglue + gluespecsize - 1)
#define deplorable      100000L
#define shipoutflag     (boxflag + 512)
#define leaderflag      (boxflag + 513)

#define nullfont        fontbase

#define endwritetoken   (cstokenflag + endwrite)

#define poolname        "TeXformats:TEX.POOL                     "


/*:11*/

/*18:*/
typedef uchar ASCIIcode;

/*:18*/
/*25:*/
typedef uchar eightbits;

/*:25*/
/*38:*/
typedef short poolpointer;

typedef short strnumber;

typedef uchar packedASCIIcode;

/*:38*/
/*101:*/
typedef long scaled;

typedef long nonnegativeinteger;

typedef char smallnumber;

/*:101*/
/*109:*/
typedef double glueratio;

/*:109*/
/*113:*/
typedef uchar quarterword;

typedef unsigned short halfword;

typedef char twochoices;

typedef char fourchoices;

typedef struct twohalves {
  halfword rh;
  union {
    halfword lh;
    struct {
      quarterword b0, b1;
    } U2;
  } UU;
} twohalves;

typedef struct fourquarters {
  quarterword b0, b1, b2, b3;
} fourquarters;

typedef char manychoices;

typedef unsigned short pointer;

typedef union memoryword {
  long int_;
  glueratio gr;
  twohalves hh;
  fourquarters qqqq;
  long sc;
} memoryword;

/*:113*/
/*150:*/
typedef char glueord;
   /*:150*/
/*212:*/

typedef struct liststaterecord {
  short modefield;
  pointer headfield, tailfield;
  long pgfield, mlfield;
  memoryword auxfield;
} liststaterecord;

/*:212*/
/*269:*/
typedef char groupcode;

/*:269*/
/*300:*/

typedef struct instaterecord {
  quarterword statefield, indexfield;
  halfword startfield, locfield, limitfield, namefield;
} instaterecord;

/*:300*/
/*548:*/
typedef char internalfontnumber;

typedef short fontindex;
   /*:548*/
/*594:*/
typedef short dviindex;

/*:594*/
/*920:*/
typedef short triepointer;
   /*:920*/
/*925:*/
typedef short hyphpointer;

/*:925*/


/*13:*/
Static long bad;   /*Pseudozmienne*/
Static scaled
	      texremainder, maxv, maxh, ruleht, ruledp, rulewd;
/*Koniec pseudozmiennych*/
Static memoryword pppfmtfile;
/*:13*/
/*20:*/
Static ASCIIcode xord[256];
Static Char xchr[256];
/*:20*/
/*26:*/
Static Char nameoffile[filenamesize];
Static char namelength;
/*:26*/
/*30:*/
Static ASCIIcode buffer[bufsize + 1];
Static short first;
Static short last;
Static short maxbufstack;
/*:30*/
/*32:*/
Static FILE *termin, *termout;
/*:32*/
/*39:*/
Static packedASCIIcode strpool[poolsize + 1];
Static poolpointer strstart[maxstrings + 1];
Static poolpointer poolptr;
Static strnumber strptr;
Static poolpointer initpoolptr;
Static strnumber initstrptr;
/*:39*/
/*50:*/
Static FILE *poolfile;
/*:50*/
/*54:*/
Static FILE *logfile;
Static char selector;
Static char dig[23];
Static long tally;
Static char termoffset;
Static char fileoffset;
Static ASCIIcode trickbuf[errorline + 1];
Static long trickcount, firstcount;
/*:54*/
/*73:*/
Static char interaction;
/*:73*/
/*76:*/
Static boolean deletionsallowed, setboxallowed;
Static char history;
Static schar errorcount;
/*:76*/
/*79:*/
Static strnumber helpline[6];
Static char helpptr;
Static boolean useerrhelp;
/*:79*/
/*96:*/
Static long interrupt;
Static boolean OKtointerrupt;
/*:96*/
/*104:*/
Static boolean aritherror;
/*:104*/
/*115:*/
Static pointer tempptr, lomemmax, himemmin;
/*:115*/
/*116:*/
Static memoryword mem[memmax - memmin + 1];
/*:116*/
/*117:*/
Static long varused, dynused;
/*:117*/
/*118:*/
Static pointer avail, memend;
/*:118*/
/*124:*/
Static pointer rover, wasmemend, waslomax, washimin, hashused, curcs,
	       warningindex, defref;
/*:124*/
/*165:*/
/*_DEBUG*/
Static uchar free_[(memmax - memmin + 8) / 8];
Static uchar wasfree[(memmax - memmin + 8) / 8];
Static boolean panicking;
/*_ENDDEBUG*/
/*:165*/
/*173:*/
Static long fontinshortdisplay;
/*:173*/
/*181:*/
Static long depththreshold, breadthmax;
/*:181*/
/*213:*/
Static liststaterecord nest[nestsize + 1];
Static char nestptr;
Static char maxneststack;
Static liststaterecord curlist;
Static short shownmode;
/*:213*/
/*246:*/
Static char oldsetting;   /*:246*/
/*253:*/
Static memoryword eqtb[eqtbsize - activebase + 1];
Static quarterword xeqlevel[eqtbsize - intbase + 1];
/*:253*/
/*256:*/
Static twohalves hash[undefinedcontrolsequence - hashbase];
Static boolean nonewcontrolsequence;
Static long cscount;   /*:256*/
/*271:*/
Static memoryword savestack[savesize + 1];
Static short saveptr;
Static short maxsavestack;
Static quarterword curlevel;
Static groupcode curgroup;
Static short curboundary;
/*:271*/
/*286:*/
Static long magset;
/*:286*/
/*297:*/
Static eightbits curcmd;
Static halfword curchr, curtok;   /*:297*/
/*301:*/
Static instaterecord inputstack[stacksize + 1];
Static uchar inputptr;
Static uchar maxinstack;
Static instaterecord curinput;
/*:301*/
/*304:*/
Static char inopen;
Static char openparens;
Static FILE *inputfile[maxinopen];
Static long line;
Static long linestack[maxinopen];
/*:304*/
/*305:*/
Static char scannerstatus;
/*:305*/
/*308:*/
Static pointer paramstack[paramsize + 1];
Static char paramptr;
Static long maxparamstack;
/*:308*/
/*309:*/
Static long alignstate;
/*:309*/
/*310:*/
Static uchar baseptr;
/*:310*/
/*333:*/
Static pointer parloc;
Static halfword partoken;
/*:333*/
/*361:*/
Static boolean forceeof;   /*:361*/
/*382:*/
Static pointer curmark[splitbotmarkcode - topmarkcode + 1];   /*:382*/
/*387:*/
Static char longstate;
/*:387*/
/*388:*/
Static pointer pstack[9];
/*:388*/
/*410:*/
Static long curval;
Static char curvallevel;
/*:410*/
/*438:*/
Static smallnumber radix;
/*:438*/
/*447:*/
Static glueord curorder;
/*:447*/
/*480:*/
Static FILE *readfile[16];
Static char readopen[17];
/*:480*/
/*489:*/
Static pointer condptr, g;
Static char iflimit;
Static smallnumber curif;
Static long ifline;
/*:489*/
/*493:*/
Static long skipline;
/*:493*/
/*512:*/
Static strnumber curname, curarea, curext;
/*:512*/
/*513:*/
Static poolpointer areadelimiter, extdelimiter;
/*:513*/
/*520:*/
Static Char TEXformatdefault[formatdefaultlength];   /*:520*/
/*527:*/
Static boolean nameinprogress;
Static strnumber jobname;
Static boolean logopened;   /*:527*/
/*532:*/
Static FILE *dvifile;
Static strnumber outputfilename, logname;   /*:532*/
/*539:*/
Static FILE *tfmfile;
/*:539*/
/*549:*/
Static memoryword fontinfo[fontmemsize + 1];
Static fontindex fmemptr;
Static internalfontnumber fontptr;
Static fourquarters fontcheck[fontmax - fontbase + 1];
Static scaled fontsize[fontmax - fontbase + 1];
Static scaled fontdsize[fontmax - fontbase + 1];
Static fontindex fontparams[fontmax - fontbase + 1];
Static strnumber fontname[fontmax - fontbase + 1];
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
/*:550*/
/*555:*/
Static fourquarters nullcharacter;
/*:555*/
/*592:*/
Static long totalpages, maxpush, lastbop, deadcycles;
Static boolean doingleaders;
Static quarterword c, f;
Static long lq, lr;
/*:592*/
/*595:*/
Static eightbits dvibuf[dvibufsize + 1];
Static dviindex halfbuf, dvilimit, dviptr;
Static long dvioffset, dvigone;
/*:595*/
/*605:*/
Static pointer downptr, rightptr;
/*:605*/
/*616:*/
Static scaled dvih, dviv, curh, curv, curmu;
Static internalfontnumber dvif;
Static long curs;
/*:616*/
/*646:*/
Static scaled totalstretch[filll - normal + 1],
	      totalshrink[filll - normal + 1];
Static long lastbadness;
/*:646*/
/*647:*/
Static pointer adjusttail;
/*:647*/
/*661:*/
Static long packbeginline;
/*:661*/
/*684:*/
Static twohalves emptyfield;
Static fourquarters nulldelimiter;
/*:684*/
/*719:*/
Static pointer curmlist;
Static smallnumber curstyle, cursize;
Static boolean mlistpenalties;
/*:719*/
/*724:*/
Static internalfontnumber curf;
Static quarterword curc;
Static fourquarters curi;
/*:724*/
/*764:*/
Static long magicoffset;
/*:764*/
/*770:*/
Static pointer curalign, curspan, curloop, alignptr, curhead, curtail;
/*:770*/
/*814:*/
Static pointer justbox;
/*:814*/
/*821:*/
Static pointer passive, printednode;
Static halfword passnumber;
/*:821*/
/*823:*/
Static scaled activewidth[6];
Static scaled curactivewidth[6];
Static scaled background[6];
Static scaled breakwidth[6];
/*:823*/
/*825:*/
Static boolean noshrinkerroryet, secondpass, finalpass;
/*:825*/
/*828:*/
Static pointer curp;
Static long threshold;
/*:828*/
/*833:*/
Static long minimaldemerits[tightfit - veryloosefit + 1];
Static long minimumdemerits;
Static pointer bestplace[tightfit - veryloosefit + 1];
Static halfword bestplline[tightfit - veryloosefit + 1];
/*:833*/
/*839:*/
Static scaled discwidth, firstwidth, secondwidth, firstindent, secondindent;
/*:839*/
/*847:*/
Static halfword easyline, lastspecialline;
/*:847*/
/*872:*/
Static pointer bestbet, ha, hb, initlist, curq, ligstack;
Static long fewestdemerits;
Static halfword bestline;
Static long actuallooseness, linediff;
/*:872*/
/*892:*/
Static short hc[66];
Static smallnumber hn;
Static internalfontnumber hf;
Static short hu[64];
Static long hyfchar;
Static ASCIIcode curlang, initcurlang;
Static long lhyf, rhyf, initlhyf, initrhyf;
Static halfword hyfbchar;
/*:892*/
/*900:*/
Static char hyf[65];
Static boolean initlig, initlft;
/*:900*/
/*905:*/
Static smallnumber hyphenpassed;
/*:905*/
/*907:*/
Static halfword curl, curr;
Static boolean ligaturepresent, lfthit, rthit;
/*:907*/
/*921:*/
Static twohalves trie[triesize + 1];
Static smallnumber hyfdistance[trieopsize];
Static smallnumber hyfnum[trieopsize];
Static quarterword hyfnext[trieopsize];
Static short opstart[256];
/*:921*/
/*926:*/
Static strnumber hyphword[hyphsize + 1];
Static pointer hyphlist[hyphsize + 1];
Static hyphpointer hyphcount;
/*:926*/
/*943:*/
Static short trieophash[trieopsize + trieopsize + 1];
Static quarterword trieused[256];
Static ASCIIcode trieoplang[trieopsize];
Static quarterword trieopval[trieopsize];
Static short trieopptr;
/*:943*/
/*947:*/
Static packedASCIIcode triec[triesize + 1];
Static quarterword trieo[triesize + 1];
Static triepointer triel[triesize + 1];
Static triepointer trier[triesize + 1];
Static triepointer trieptr;
Static triepointer triehash[triesize + 1];
/*:947*/
/*950:*/
Static uchar trietaken[(triesize + 7) / 8];
Static triepointer triemin[256];
Static triepointer triemax;
Static boolean trienotready;
/*:950*/
/*971:*/
Static scaled bestheightplusdepth, pagemaxdepth, bestsize, lastkern;
/*:971*/
/*980:*/
Static pointer pagetail, bestpagebreak, lastglue, mainp;
Static char pagecontents;
Static long leastpagecost;
/*:980*/
/*982:*/
Static scaled pagesofar[8];
Static long lastpenalty, insertpenalties;
/*:982*/
/*989:*/
Static boolean outputactive;
/*:989*/
/*1032:*/
Static internalfontnumber mainf;
Static fourquarters maini, mainj;
Static fontindex maink;
Static long mains;
Static halfword bchar, falsebchar;
Static boolean cancelboundary, insdisc;
/*:1032*/
/*1074:*/
Static pointer curbox;
/*:1074*/
/*1266:*/
Static halfword aftertoken;
/*:1266*/
/*1281:*/
Static boolean longhelpseen;
/*:1281*/
/*1299:*/
Static strnumber formatident;
/*:1299*/
/*1305:*/
Static FILE *fmtfile;
/*:1305*/
/*1331:*/
Static long readyalready;
/*:1331*/
/*1342:*/
Static FILE *writefile[16];
Static boolean writeopen[18];
/*:1342*/
/*1345:*/
Static pointer writeloc;   /*:1345*/


/*Pseudo-funkcje*/
Static long *foolink(long x);

Static long *fooinfo(long x);

Static boolean charexists(long x);

Static boolean ischarnode(long x);


Static void fooinit(void)
{
  long aaa, jjj;

  aaa = 1;
  for (jjj = 0; jjj <= 25; jjj++) {
    aaa = (aaa * 3 + 15) % 366;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  }
  mode = aaa;
  head = aaa;
  tail = aaa;
  prevgraf = aaa;
  aux = aaa;
  prevdepth = aaa;
  spacefactor = aaa;
  clang = aaa;
  incompleatnoad = aaa;
  modeline = aaa;
  topmark = aaa;
  firstmark = aaa;
  botmark = aaa;
  splitfirstmark = aaa;
  splitbotmark = aaa;
  nonchar = aaa;
  stopflag = aaa;
  kernflag = aaa;
  defaultrulethickness = aaa;
  bigopspacing1 = aaa;
  bigopspacing2 = aaa;
  bigopspacing3 = aaa;
  bigopspacing4 = aaa;
  bigopspacing5 = aaa;
}


Static boolean getstringsstarted(void);

Static long tobar(long char_);

Static long S(long x);

Static fourquarters *foocharinfo(long x, long y);

Static long *foocharwidth(long x, long y);

Static long *foocharitalic(long x, long y);

Static long *foocharheight(long x, long y);

Static long *foochardepth(long x, long y);

Static long *foocharkern(long x, long y);

Static long *fooslant(long x);

Static long *foospace(long x);

Static long *foospacestretch(long x);

Static long *foospaceshrink(long x);

Static long *fooxheight(long x);

Static long *fooquad(long x);

Static long *fooextraspace(long x);

Static long *foomathxheight(long x);

Static long *foomathquad(long x);

Static long *foonum1(long x);

Static long *foonum2(long x);

Static long *foonum3(long x);

Static long *foodenom1(long x);

Static long *foodenom2(long x);

Static long *foosup1(long x);

Static long *foosup2(long x);

Static long *foosup3(long x);

Static long *foosub1(long x);

Static long *foosub2(long x);

Static long *foosupdrop(long x);

Static long *foosubdrop(long x);

Static long *foodelim1(long x);

Static long *foodelim2(long x);

Static long *fooaxisheight(long x);

Static long *foonodesize(long x);

Static long *foollink(long x);

Static long *foorlink(long x);

Static long *footype(long x);

Static long *foosubtype(long x);

Static long *foofont(long x);

Static long *foocharacter(long x);

Static long *foowidth(long x);

Static long *foodepth(long x);

Static long *fooheight(long x);

Static long *fooshiftamount(long x);

Static long *foolistptr(long x);

Static long *fooglueorder(long x);

Static long *foogluesign(long x);

Static long *fooglueset(long x);

Static long *foofloatcost(long x);

Static long *fooinsptr(long x);

Static long *foosplittopptr(long x);

Static long *foomarkptr(long x);

Static long *fooadjustptr(long x);

Static long *fooligptr(long x);

Static long *fooreplacecount(long x);

Static long *fooprebreak(long x);

Static long *foopostbreak(long x);

Static long *fooglueptr(long x);

Static long *fooleaderptr(long x);

Static long *foogluerefcount(long x);

Static long *foostretch(long x);

Static long *fooshrink(long x);

Static long *foostretchorder(long x);

Static long *fooshrinkorder(long x);

Static long *foopenalty(long x);

Static long *foogluestretch(long x);

Static long *fooglueshrink(long x);

Static long *foospancount(long x);

Static long *footokenrefcount(long x);

Static long *fooeqlevelfield(long x);

Static long *fooeqtypefield(long x);

Static long *fooequivfield(long x);

Static long *fooeqlevel(long x);

Static long *fooeqtype(long x);

Static long *fooequiv(long x);

Static long *fooskip(long x);

Static long *foomuskip(long x);

Static long *foogluepar(long x);

Static long *footoks(long x);

Static long *foobox(long x);

Static long *foofamfnt(long x);

Static long *foocatcode(long x);

Static long *foolccode(long x);

Static long *foouccode(long x);

Static long *foosfcode(long x);

Static long *foomathcode(long x);

Static long *foodelcode(long x);

Static long *foocount(long x);

Static long *foointpar(long x);

Static long *foodimen(long x);

Static long *foodimenpar(long x);

Static long *foonext(long x);

Static long *footext(long x);

Static long *foofontidtext(long x);

Static long *foosavetype(long x);

Static long *foosavelevel(long x);

Static long *foosaveindex(long x);

Static long *foolargechar(long x);

Static long *foolocation(long x);

Static long *fooheightdepth(long x);

Static long *foosaved(long x);

Static long *fooskipbyte(long x);

Static long *foonextchar(long x);

Static long *fooopbyte(long x);

Static long *foorembyte(long x);

Static long *fooexttop(long x);

Static long *fooextmid(long x);

Static long *fooextbot(long x);

Static long *fooextrep(long x);

Static long *foovpack(long x);

Static long *foonucleus(long x);

Static long *foosupscr(long x);

Static long *foosubscr(long x);

Static long *foomathtype(long x);

Static long *foofam(long x);

Static long *fooleftdelimiter(long x);

Static long *foorightdelimiter(long x);

Static long *foosmallfam(long x);

Static long *foosmallchar(long x);

Static long *foolargefam(long x);

Static long *foothickness(long x);

Static long *foonumerator(long x);

Static long *foodenominator(long x);

Static long *fooaccentchr(long x);

Static long *foodelimiter(long x);

Static long *foodisplaymlist(long x);

Static long *footextmlist(long x);

Static long *fooscriptmlist(long x);

Static long *fooscriptscriptmlist(long x);

Static long *foocrampedstyle(long x);

Static long *foosubstyle(long x);

Static long *foosupstyle(long x);

Static long *foonumstyle(long x);

Static long *foodenomstyle(long x);

Static long *fooupart(long x);

Static long *foovpart(long x);

Static long *fooextrainfo(long x);

Static long *foofitness(long x);

Static long *foobreaknode(long x);

Static long *foolinenumber(long x);

Static long *foototaldemerits(long x);

Static long *foocurbreak(long x);

Static long *fooprevbreak(long x);

Static long *fooserial(long x);

Static long *foonextbreak(long x);

Static long *footrielink(long x);

Static long *footriechar(long x);

Static long *footrieop(long x);

Static long *foobrokenptr(long x);

Static long *footrieback(long x);

Static long *foobrokenins(long x);

Static long *foolastinsptr(long x);

Static long *foobestinsptr(long x);

Static long *foomathex(long x);

Static long *foonewhlist(long x);

Static long *fooiflinefield(long x);

Static long *foowhatlang(long x);

Static long *foowhatlhm(long x);

Static long *foowhatrhm(long x);

Static long *foowritetokens(long x);

Static long *foowritestream(long x);

Static long *fooopenname(long x);

Static long *fooopenarea(long x);

Static long *fooopenext(long x);


/*Koniec pseudofunkcji*/
Static void initialize(void)
{   /*:927*/
  /*19:*/
  long i;
  /*:19*/
  /*163:*/
  long k;
  /*:163*/
  /*927:*/
  hyphpointer z;
  long FORLIM;

  /*8:*/
  /*23:*/
  for (i = 0; i <= 255; i++)
    xchr[i] = (Char)i;
  /*:23*/
  /*24:*/
  for (i = firsttextchar; i <= lasttextchar; i++)
    xord[(Char)i] = invalidcode;
  for (i = 128; i <= 255; i++)
    xord[xchr[i]] = i;
  for (i = 0; i <= 126; i++)   /*:24*/
    xord[xchr[i]] = i;
  /*74:*/
  interaction = errorstopmode;   /*:74*/
  /*77:*/
  deletionsallowed = true;
  setboxallowed = true;
  errorcount = 0;   /*:77*/
  /*80:*/
  helpptr = 0;
  useerrhelp = false;   /*:80*/
  /*97:*/
  interrupt = 0;
  OKtointerrupt = true;   /*:97*/
  /*166:*/
  /*_DEBUG*/
  wasmemend = memmin;
  waslomax = memmin;
  washimin = memmax;
  panicking = false;   /*_ENDDEBUG*/
  /*:166*/
  /*215:*/
  nestptr = 0;
  maxneststack = 0;
  mode = vmode;
  head = contribhead;
  tail = contribhead;
  prevdepth = ignoredepth;
  modeline = 0;
  prevgraf = 0;
  shownmode = 0;   /*991:*/
  pagecontents = empty;
  pagetail = pagehead;
  *foolink(pagehead) = 0;
  lastglue = maxhalfword;
  lastpenalty = 0;
  lastkern = 0;
  pagedepth = 0;
  pagemaxdepth = 0;   /*:991*/
  /*:215*/
  /*254:*/
  for (k = intbase; k <= eqtbsize; k++)
    xeqlevel[k - intbase] = levelone;
  /*:254*/
  /*257:*/
  nonewcontrolsequence = true;
  *foonext(hashbase) = 0;
  *footext(hashbase) = 0;
  for (k = hashbase + 1; k < undefinedcontrolsequence; k++)   /*:257*/
    hash[k - hashbase] = hash[0];
  /*272:*/
  saveptr = 0;
  curlevel = levelone;
  curgroup = bottomlevel;
  curboundary = 0;
  maxsavestack = 0;   /*:272*/
  /*287:*/
  magset = 0;   /*:287*/
  /*383:*/
  topmark = 0;
  firstmark = 0;
  botmark = 0;
  splitfirstmark = 0;
  splitbotmark = 0;   /*:383*/
  /*439:*/
  curval = 0;
  curvallevel = intval;
  radix = 0;
  curorder = 0;   /*:439*/
  /*481:*/
  for (k = 0; k <= 16; k++)   /*:481*/
    readopen[k] = closed;
  /*490:*/
  condptr = 0;
  iflimit = normal;
  curif = 0;
  ifline = 0;   /*:490*/
  /*521:*/
  memcpy(TEXformatdefault, "TeXformats:plain.fmt", formatdefaultlength);
      /*:521*/
  /*551:*/
  for (k = fontbase; k <= fontmax; k++)   /*:551*/
    fontused[k - fontbase] = false;
  /*556:*/
  nullcharacter.b0 = minquarterword;
  nullcharacter.b1 = minquarterword;
  nullcharacter.b2 = minquarterword;
  nullcharacter.b3 = minquarterword;   /*:556*/
  /*593:*/
  totalpages = 0;
  maxv = 0;
  maxh = 0;
  maxpush = 0;
  lastbop = -1;
  doingleaders = false;
  deadcycles = 0;
  curs = -1;   /*:593*/
  /*596:*/
  halfbuf = dvibufsize / 2;
  dvilimit = dvibufsize;
  dviptr = 0;
  dvioffset = 0;
  dvigone = 0;   /*:596*/
  /*606:*/
  downptr = 0;
  rightptr = 0;   /*:606*/
  /*648:*/
  adjusttail = 0;
  lastbadness = 0;   /*:648*/
  /*662:*/
  packbeginline = 0;   /*:662*/
  /*685:*/
  emptyfield.rh = empty;
  emptyfield.UU.lh = 0;
  nulldelimiter.b0 = 0;
  nulldelimiter.b1 = minquarterword;
  nulldelimiter.b2 = 0;
  nulldelimiter.b3 = minquarterword;   /*:685*/
  /*771:*/
  alignptr = 0;
  curalign = 0;
  curspan = 0;
  curloop = 0;
  curhead = 0;
  curtail = 0;   /*:771*/
  /*928:*/
  for (z = 0; z <= hyphsize; z++) {
    hyphword[z] = 0;
    hyphlist[z] = 0;
  }
  hyphcount = 0;   /*:928*/
  /*990:*/
  outputactive = false;
  insertpenalties = 0;   /*:990*/
  /*1033:*/
  ligaturepresent = false;
  cancelboundary = false;
  lfthit = false;
  rthit = false;
  insdisc = false;   /*:1033*/
  /*1267:*/
  aftertoken = 0;   /*:1267*/
  /*1282:*/
  longhelpseen = false;   /*:1282*/
  /*1300:*/
  formatident = 0;   /*:1300*/
  /*1343:*/
  for (k = 0; k <= 17; k++)   /*:1343*/
    writeopen[k] = false;
  /*164:*/
  for (k = membot + 1; k <= lomemstatmax; k++)
    mem[k - memmin].sc = 0;
  k = membot;
  while (k <= lomemstatmax) {
    *foogluerefcount(k) = 1;
    *foostretchorder(k) = normal;
    *fooshrinkorder(k) = normal;
    k += gluespecsize;
  }
  *foostretch(filglue) = unity;
  *foostretchorder(filglue) = fil;
  *foostretch(fillglue) = unity;
  *foostretchorder(fillglue) = fill;
  *foostretch(ssglue) = unity;
  *foostretchorder(ssglue) = fil;
  *fooshrink(ssglue) = unity;
  *fooshrinkorder(ssglue) = fil;
  *foostretch(filnegglue) = -unity;
  *foostretchorder(filnegglue) = fil;
  rover = lomemstatmax + 1;
  *foolink(rover) = emptyflag;
  *foonodesize(rover) = 1000;
  *foollink(rover) = rover;
  *foorlink(rover) = rover;
  lomemmax = rover + 1000;
  *foolink(lomemmax) = 0;
  *fooinfo(lomemmax) = 0;
  for (k = himemstatmin; k <= memtop; k++)   /*790:*/
    mem[k - memmin] = mem[lomemmax - memmin];
  *fooinfo(omittemplate) = endtemplatetoken;   /*:790*/
  /*797:*/
  *foolink(endspan) = maxquarterword + 1;
  *fooinfo(endspan) = 0;   /*:797*/
  /*820:*/
  *footype(lastactive) = hyphenated;
  *foolinenumber(lastactive) = maxhalfword;
  *foosubtype(lastactive) = 0;
  /*:820*/
  /*981:*/
  *foosubtype(pageinshead) = minquarterword + 255;
  *footype(pageinshead) = splitup;
  *foolink(pageinshead) = pageinshead;   /*:981*/
  /*988:*/
  *footype(pagehead) = gluenode;
  *foosubtype(pagehead) = normal;
  /*:988*/
  avail = 0;
  memend = memtop;
  himemmin = himemstatmin;
  varused = lomemstatmax - membot + 1;
  dynused = himemstatusage;   /*:164*/
  /*222:*/
  *fooeqtype(undefinedcontrolsequence) = undefinedcs;
  *fooequiv(undefinedcontrolsequence) = 0;
  *fooeqlevel(undefinedcontrolsequence) = levelzero;
  for (k = activebase; k < undefinedcontrolsequence; k++)   /*:222*/
    eqtb[k - activebase] = eqtb[undefinedcontrolsequence - activebase];
  /*228:*/
  *fooequiv(gluebase) = zeroglue;
  *fooeqlevel(gluebase) = levelone;
  *fooeqtype(gluebase) = glueref;
  for (k = gluebase + 1; k < localbase; k++)
    eqtb[k - activebase] = eqtb[gluebase - activebase];
  *foogluerefcount(zeroglue) += localbase - gluebase;   /*:228*/
  /*232:*/
  parshapeptr = 0;
  *fooeqtype(parshapeloc) = shaperef;
  *fooeqlevel(parshapeloc) = levelone;
  for (k = outputroutineloc; k <= toksbase + 255; k++)
    eqtb[k - activebase] = eqtb[undefinedcontrolsequence - activebase];
  *foobox(0) = 0;
  *fooeqtype(boxbase) = boxref;
  *fooeqlevel(boxbase) = levelone;
  for (k = boxbase + 1; k <= boxbase + 255; k++)
    eqtb[k - activebase] = eqtb[boxbase - activebase];
  curfont = nullfont;
  *fooeqtype(curfontloc) = data;
  *fooeqlevel(curfontloc) = levelone;
  for (k = mathfontbase; k <= mathfontbase + 47; k++)
    eqtb[k - activebase] = eqtb[curfontloc - activebase];
  *fooequiv(catcodebase) = 0;
  *fooeqtype(catcodebase) = data;
  *fooeqlevel(catcodebase) = levelone;
  for (k = catcodebase + 1; k < intbase; k++)
    eqtb[k - activebase] = eqtb[catcodebase - activebase];
  for (k = 0; k <= 255; k++) {
    *foocatcode(k) = otherchar;
    *foomathcode(k) = k;
    *foosfcode(k) = 1000;
  }
  *foocatcode(carriagereturn) = carret;
  *foocatcode(' ') = spacer;
  *foocatcode('\\') = escape;
  *foocatcode('%') = comment;
  *foocatcode(invalidcode) = invalidchar;
  *foocatcode(nullcode) = ignore;
  FORLIM = '9';
  for (k = '0'; k <= FORLIM; k++)
    *foomathcode(k) = k + varcode;
  FORLIM = 'Z';
/* p2c: tex1.p:
 * Note: Evaluating FOR loop limit before initial value [315] */
  for (k = 'A'; k <= FORLIM; k++) {   /*:232*/
    *foocatcode(k) = letter;
    *foocatcode(k + 'a' - 'A') = letter;
    *foomathcode(k) = k + varcode + 256;
    *foomathcode(k + 'a' - 'A') =
      k + 'a' - 'A' + varcode + 256;
    *foolccode(k) = k + 'a' - 'A';
    *foolccode(k + 'a' - 'A') = k + 'a' - 'A';
    *foouccode(k) = k;
    *foouccode(k + 'a' - 'A') = k;
    *foosfcode(k) = 999;
  }
/* p2c: tex1.p:
 * Note: Evaluating FOR loop limit before initial value [315] */
  /*240:*/
  for (k = intbase; k < delcodebase; k++)
    eqtb[k - activebase].int_ = 0;
  mag = 1000;
  tolerance = 10000;
  hangafter = 1;
  maxdeadcycles = 25;
  escapechar = '\\';
  endlinechar = carriagereturn;
  for (k = 0; k <= 255; k++)
    *foodelcode(k) = -1;
  *foodelcode('.') = 0;   /*:240*/
  /*250:*/
  for (k = dimenbase; k <= eqtbsize; k++)   /*:250*/
    eqtb[k - activebase].sc = 0;
  /*258:*/
  hashused = frozencontrolsequence;
  cscount = 0;
  *fooeqtype(frozendontexpand) = dontexpand;
  *footext(frozendontexpand) = S(513);   /*:258*/
  /*552:*/
  fontptr = nullfont;
  fmemptr = 7;
  fontname[nullfont - fontbase] = S(803);
  fontarea[nullfont - fontbase] = S(266);
  hyphenchar[nullfont - fontbase] = '-';
  skewchar[nullfont - fontbase] = -1;
  bcharlabel[nullfont - fontbase] = nonaddress;
  fontbchar[nullfont - fontbase] = nonchar;
  fontfalsebchar[nullfont - fontbase] = nonchar;
  fontbc[nullfont - fontbase] = 1;
  fontec[nullfont - fontbase] = 0;
  fontsize[nullfont - fontbase] = 0;
  fontdsize[nullfont - fontbase] = 0;
  charbase[nullfont - fontbase] = 0;
  widthbase[nullfont - fontbase] = 0;
  heightbase[nullfont - fontbase] = 0;
  depthbase[nullfont - fontbase] = 0;
  italicbase[nullfont - fontbase] = 0;
  ligkernbase[nullfont - fontbase] = 0;
  kernbase[nullfont - fontbase] = 0;
  extenbase[nullfont - fontbase] = 0;
  fontglue[nullfont - fontbase] = 0;
  fontparams[nullfont - fontbase] = 7;
  parambase[nullfont - fontbase] = -1;
  for (k = 0; k <= 6; k++)   /*:552*/
    fontinfo[k].sc = 0;
  /*946:*/
  for (k = -trieopsize; k <= trieopsize; k++)
    trieophash[k + trieopsize] = 0;
  for (k = 0; k <= 255; k++)
    trieused[k] = minquarterword;
  trieopptr = 0;   /*:946*/
  /*951:*/
  trienotready = true;
  trieroot = 0;
  triec[0] = 0;
  trieptr = 0;   /*:951*/
  /*1216:*/
  *footext(frozenprotection) = S(1189);   /*:1216*/
  /*1301:*/
  formatident = S(1256);   /*:1301*/
  /*1369:*/
  *footext(endwrite) = S(1295);
  *fooeqlevel(endwrite) = levelone;
  *fooeqtype(endwrite) = outercall;
  *fooequiv(endwrite) = 0;   /*:1369*/
  /*:8*/
}


/*57:*/
Static void println(void)
{
  switch (selector) {

  case termandlog:
    putc('\n', termout);
    putc('\n', logfile);
    termoffset = 0;
    fileoffset = 0;
    break;

  case logonly:
    putc('\n', logfile);
    fileoffset = 0;
    break;

  case termonly:
    putc('\n', termout);
    termoffset = 0;
    break;

  case noprint:
  case pseudo:
  case newstring:
    /* blank case */
    break;

  default:
    putc('\n', writefile[selector]);
    break;
  }
}


/*:57*/
/*58:*/
Static void printchar(ASCIIcode s)
{
  /*244:*/
  if (s == newlinechar) {   /*:244*/
    if (selector < pseudo) {
      println();
      goto _Lexit;
    }
  }
  switch (selector) {

  case termandlog:
    fwrite(&xchr[s], 1, 1, termout);
    fwrite(&xchr[s], 1, 1, logfile);
    termoffset++;
    fileoffset++;
    if (termoffset == maxprintline) {
      putc('\n', termout);
      termoffset = 0;
    }
    if (fileoffset == maxprintline) {
      putc('\n', logfile);
      fileoffset = 0;
    }
    break;

  case logonly:
    fwrite(&xchr[s], 1, 1, logfile);
    fileoffset++;
    if (fileoffset == maxprintline)
      println();
    break;

  case termonly:
    fwrite(&xchr[s], 1, 1, termout);
    termoffset++;
    if (termoffset == maxprintline)
      println();
    break;

  case noprint:
    /* blank case */
    break;

  case pseudo:
    if (tally < trickcount) {
      trickbuf[tally % errorline] = s;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    }
    break;

  case newstring:
    if (poolptr < poolsize) {
      appendchar(s);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
    }
    break;

  default:
    fwrite(&xchr[s], 1, 1, writefile[selector]);
    break;
  }
  tally++;
_Lexit: ;
}


/*:58*/
/*59:*/
Static void print(long s)
{
  poolpointer j;
  long nl;

  if (s >= strptr)
    s = S(274);
  else if (s < 256) {
    if (s >= 0) {
      if (selector > pseudo) {
	printchar(s);
	goto _Lexit;
      }
      if (s == newlinechar) {   /*244:*/
	if (selector < pseudo) {
	  println();
	  goto _Lexit;
	}
      }
      /*:244*/
      nl = newlinechar;
      newlinechar = -1;
      j = strstart[s];
      while (j < strstart[s + 1]) {
	printchar(strpool[j]);
	j++;
      }
      newlinechar = nl;
      goto _Lexit;
    }
    s = S(274);
  }
  j = strstart[s];
  while (j < strstart[s + 1]) {
    printchar(strpool[j]);
    j++;
  }
_Lexit: ;
}


/*:59*/
/*60:*/
Static void slowprint(long s)
{
  poolpointer j;

  if (s >= strptr || s < 256) {
    print(s);
    return;
  }
  j = strstart[s];
  while (j < strstart[s + 1]) {
    print(strpool[j]);
    j++;
  }
}  /*:60*/


/*62:*/
Static void printnl(strnumber s)
{
  if (termoffset > 0 && (selector & 1) ||
      fileoffset > 0 && selector >= logonly)
    println();
  print(s);
}


/*:62*/
/*63:*/
Static void printesc(strnumber s)
{  /*243:*/
  long c;

  c = escapechar;   /*:243*/
  if (c >= 0) {
    if (c < 256)
      print(c);
  }
  slowprint(s);
}


/*:63*/
/*64:*/
Static void printthedigs(eightbits k)
{
  while (k > 0) {
    k--;
    if (dig[k] < 10)
      printchar('0' + dig[k]);
    else
      printchar('A' + dig[k] - 10);
  }
}


/*:64*/
/*65:*/
Static void printint(long n)
{
  char k;
  long m;

  k = 0;
  if (n < 0) {
    printchar('-');
    if (n > -100000000L)
      n = -n;
    else {
      m = -n - 1;
      n = m / 10;
      m = m % 10 + 1;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
      k = 1;
      if (m < 10)
	dig[0] = m;
      else {
	dig[0] = 0;
	n++;
      }
    }
  }
  do {
    dig[k] = n % 10;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    n /= 10;
    k++;
  } while (n != 0);
  printthedigs(k);
}


/*:65*/
/*262:*/
Static void printcs(long p)
{
  if (p < hashbase) {
    if (p >= singlebase) {
      if (p == nullcs) {
	printesc(S(515));
	printesc(S(516));
	return;
      }
      printesc(p - singlebase);
      if (*foocatcode(p - singlebase) == letter)
	printchar(' ');
      return;
    }
    if (p < activebase)
      printesc(S(517));
    else
      print(p - activebase);
    return;
  }
  if (p >= undefinedcontrolsequence) {
    printesc(S(517));
    return;
  }
  if ((*footext(p) < 0) | (*footext(p) >= strptr))
    printesc(S(518));
  else {
    printesc(*footext(p));
    printchar(' ');
  }
}


/*:262*/
/*263:*/
Static void sprintcs(halfword p)
{
  if (p >= hashbase) {
    printesc(*footext(p));
    return;
  }
  if (p < singlebase) {
    print(p - activebase);
    return;
  }
  if (p < nullcs)
    printesc(p - singlebase);
  else {
    printesc(S(515));
    printesc(S(516));
  }
}  /*:263*/


/*518:*/
Static void printfilename(long n, long a, long e)
{
  slowprint(a);
  slowprint(n);
  slowprint(e);
}


/*:518*/
/*699:*/
Static void printsize(long s)
{
  if (s == 0) {
    printesc(S(423));
    return;
  }
  if (s == scriptsize)
    printesc(S(424));
  else
    printesc(S(425));
}  /*:699*/


/*1355:*/
Static void printwritewhatsit(strnumber s, halfword p)
{
  printesc(s);
  if (*foowritestream(p) < 16) {
    printint(*foowritestream(p));
    return;
  }
  if (*foowritestream(p) == 16)
    printchar('*');
  else
    printchar('-');
}


/*:1355*/
/*78:*/
Static void normalizeselector(void);

Static void gettoken(void);

Static void terminput(void);

Static void showcontext(void);

Static void beginfilereading(void);

Static void openlogfile(void);

Static void closefilesandterminate(void);

Static void clearforerrorprompt(void);

Static void giveerrhelp(void);

/*_DEBUG*/
Static void debughelp(void);

Static jmp_buf _JLendofTEX;


/*_ENDDEBUG*/
/*:78*/
/*81:*/
Static void jumpout(void)
{
  longjmp(_JLendofTEX, 1);
}


/*:81*/
/*82:*/
Static void error(void)
{
  ASCIIcode c;
  long s1, s2, s3, s4;

  if (history < errormessageissued)
    history = errormessageissued;
  printchar('.');
  showcontext();
  if (interaction == errorstopmode) {   /*83:*/
    while (true) {   /*:83*/
_Llabcontinue:
      clearforerrorprompt();
      print(S(278));
      terminput();
      if (last == first)
	goto _Lexit;
      c = buffer[first];
      if (c >= 'a')   /*84:*/
	c += 'A' - 'a';
      switch (c) {

      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':   /*_DEBUG*/
	if (deletionsallowed) {   /*88:*/
	  s1 = curtok;
	  s2 = curcmd;
	  s3 = curchr;
	  s4 = alignstate;
	  alignstate = 1000000L;
	  OKtointerrupt = false;
	  if ((last > first + 1) & (buffer[first + 1] >= '0') &
	      (buffer[first + 1] <= '9'))
	    c = c * 10 + buffer[first + 1] - '0' * 11;
	  else
	    c -= '0';
	  while (c > 0) {
	    gettoken();
	    c--;
	  }
	  curtok = s1;
	  curcmd = s2;
	  curchr = s3;
	  alignstate = s4;
	  OKtointerrupt = true;
	  helpptr = 2;
	  helpline[1] = S(293);
	  helpline[0] = S(294);
	  showcontext();
	  goto _Llabcontinue;
	}
	/*:88*/
	break;

      case 'D':
	debughelp();
	goto _Llabcontinue;
	break;
	/*_ENDDEBUG*/

      case 'E':
	if (baseptr > 0) {
	  printnl(S(279));
	  slowprint(inputstack[baseptr].namefield);
	  print(S(280));
	  printint(line);
	  interaction = scrollmode;
	  jumpout();
	}
	break;

      case 'H':   /*89:*/
	if (useerrhelp) {
	  giveerrhelp();
	  useerrhelp = false;
	} else {
	  if (helpptr == 0) {
	    helpptr = 2;
	    helpline[1] = S(295);
	    helpline[0] = S(296);
	  }
	  do {
	    helpptr--;
	    print(helpline[helpptr]);
	    println();
	  } while (helpptr != 0);
	}
	helpptr = 4;
	helpline[3] = S(297);
	helpline[2] = S(296);
	helpline[1] = S(298);
	helpline[0] = S(299);
	goto _Llabcontinue;
	break;
	/*:89*/

      case 'I':   /*87:*/
	beginfilereading();
	if (last > first + 1) {
	  loc = first + 1;
	  buffer[first] = ' ';
	} else {
	  print(S(292));
	  terminput();
	  loc = first;
	}
	first = last;
	curinput.limitfield = last - 1;
	goto _Lexit;
	break;
	/*:87*/

      case 'Q':
      case 'R':
      case 'S':   /*86:*/
	errorcount = 0;
	interaction = batchmode + c - 'Q';
	print(S(287));
	switch (c) {

	case 'Q':
	  printesc(S(288));
	  selector--;
	  break;

	case 'R':
	  printesc(S(289));
	  break;

	case 'S':
	  printesc(S(290));
	  break;
	}
	print(S(291));
	println();
	fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
	goto _Lexit;
	break;
	/*:86*/

      case 'X':
	interaction = scrollmode;
	jumpout();
	break;
      }/*85:*/
      print(S(281));
      printnl(S(282));
      printnl(S(283));
      if (baseptr > 0)
	print(S(284));
      if (deletionsallowed)
	printnl(S(285));
      printnl(S(286));   /*:85*/
      /*:84*/
    }
  }
  errorcount++;
  if (errorcount == 100) {
    printnl(S(277));
    history = fatalerrorstop;
    jumpout();
  }  /*90:*/
  if (interaction > batchmode)
    selector--;
  if (useerrhelp) {
    println();
    giveerrhelp();
  } else {
    while (helpptr > 0) {
      helpptr--;
      printnl(helpline[helpptr]);
    }
  }
  println();
  if (interaction > batchmode)   /*:90*/
    selector++;
  println();
_Lexit: ;
}


/*:82*/
/*93:*/
Static void fatalerror(strnumber s)
{
  normalizeselector();
  printnl(258);
  print(S(301));
  helpptr = 1;
  helpline[0] = s;
  if (interaction == errorstopmode)
    interaction = scrollmode;
  if (logopened)   /*_DEBUG*/
    error();
  if (interaction > batchmode)
    debughelp();
  /*_ENDDEBUG*/
  history = fatalerrorstop;
  jumpout();
}


/*:93*/
/*94:*/
Static void overflow(strnumber s, long n)
{
  normalizeselector();
  printnl(258);
  print(S(302));
  print(s);
  printchar('=');
  printint(n);
  printchar(']');
  helpptr = 2;
  helpline[1] = S(303);
  helpline[0] = S(304);
  if (interaction == errorstopmode)
    interaction = scrollmode;
  if (logopened)   /*_DEBUG*/
    error();
  if (interaction > batchmode)
    debughelp();
  /*_ENDDEBUG*/
  history = fatalerrorstop;
  jumpout();
}


/*:94*/
/*95:*/
Static void confusion(strnumber s)
{
  normalizeselector();
  if (history < errormessageissued) {
    printnl(258);
    print(S(305));
    print(s);
    printchar(')');
    helpptr = 1;
    helpline[0] = S(306);
  } else {
    printnl(258);
    print(S(307));
    helpptr = 2;
    helpline[1] = S(308);
    helpline[0] = S(309);
  }
  if (interaction == errorstopmode)
    interaction = scrollmode;
  if (logopened)   /*_DEBUG*/
    error();
  if (interaction > batchmode)
    debughelp();
  /*_ENDDEBUG*/
  history = fatalerrorstop;
  jumpout();
}


/*:95*/
/*:4*/
/*27:*/
Static boolean aopenin(FILE **f);

Static boolean aopenout(FILE **f);

Static boolean bopenin(FILE **f);

Static boolean bopenout(FILE **f);

Static boolean wopenin(FILE **f);

Static boolean wopenout(FILE **f);


/*:27*/
/*28:*/
Static void aclose(FILE **f)
{
  if (*f != NULL)
    fclose(*f);
  *f = NULL;
}


Static void bclose(FILE **f)
{
  if (*f != NULL)
    fclose(*f);
  *f = NULL;
}


Static void wclose(FILE **f)
{
  if (*f != NULL)
    fclose(*f);
  *f = NULL;
}


Static jmp_buf _JLfinalend;


/*:28*/
/*31:*/
Static boolean inputln(FILE **f, boolean bypasseoln)
{
  short lastnonblank;

  if (bypasseoln) {
    if (!P_eof(*f))
      getc(*f);
/* p2c: tex1.p: Note:
 * File parameter f can't access buffers (try StructFiles = 1) [318] */
  }
  last = first;
  if (P_eof(*f))
    return false;
  else {
    lastnonblank = first;
    while (!P_eoln(*f)) {
      if (last >= maxbufstack) {
	maxbufstack = last + 1;
	if (maxbufstack == bufsize) {   /*35:*/
	  if (formatident == 0) {
	    fprintf(termout, "Buffer size exceeded!\n");
	    longjmp(_JLfinalend, 1);
	  } else {
	    curinput.locfield = first;
	    curinput.limitfield = last - 1;
	    overflow(S(272), bufsize);
	  }  /*:35*/
	}
      }
      buffer[last] = xord[P_peek(*f)];
/* p2c: tex1.p: Note:
 * File parameter f can't access buffers (try StructFiles = 1) [318] */
/* p2c: tex1.p: Note:
 * File parameter f can't access buffers (try StructFiles = 1) [318] */
      getc(*f);
      last++;
      if (buffer[last - 1] != ' ')
	lastnonblank = last;
    }
    last = lastnonblank;
    return true;
  }
}


/*:31*/
/*37:*/
Static boolean initterminal(void)
{
  boolean Result;
  Char TEMP;

  topenin();
/* p2c: tex1.p: Warning: Symbol 'TOPENIN' is not defined [221] */
  if (initinc(1)) {
/* p2c: tex1.p: Warning: Symbol 'INITINC' is not defined [221] */
    loc = first;
    Result = true;
    goto _Lexit;
  }
  while (true) {
    TEMP = '*';
/* p2c: tex1.p: Warning: Char constant with more than one character [154] */
    fwrite(&TEMP, 1, 1, termout);
    fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
    if (!inputln(&termin, true)) {
      putc('\n', termout);
      TEMP = '!';
/* p2c: tex1.p: Warning: Char constant with more than one character [154] */
      fwrite(&TEMP, 1, 1, termout);
      Result = false;
      goto _Lexit;
    }
    loc = first;
    while ((loc < last) & (buffer[loc] == ' '))
      loc++;
    if (loc < last) {
      Result = true;
      goto _Lexit;
    }
    fprintf(termout, "Please type the name of your input file.\n");
  }
_Lexit:
  return Result;
}


/*:37*/
/*43:*/
Static strnumber makestring(void)
{
  if (strptr == maxstrings)
    overflow(S(273), maxstrings - initstrptr);
  strptr++;
  strstart[strptr] = poolptr;
  return (strptr - 1);
}


/*:43*/
/*45:*/
Static boolean streqbuf(strnumber s, long k)
{
  poolpointer j;
  boolean result;

  j = strstart[s];
  while (j < strstart[s + 1]) {
    if (strpool[j] != buffer[k]) {
      result = false;
      goto _Lnotfound;
    }
    j++;
    k++;
  }
  result = true;
_Lnotfound:
  return result;
}


/*:45*/
/*46:*/
Static boolean streqstr(strnumber s, strnumber t)
{
  poolpointer j, k;
  boolean result;

  result = false;
  if (flength(s) != flength(t)) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
    goto _Lnotfound;
  }
  j = strstart[s];
  k = strstart[t];
  while (j < strstart[s + 1]) {
    if (strpool[j] != strpool[k])
      goto _Lnotfound;
    j++;
    k++;
  }
  result = true;
_Lnotfound:
  return result;
}


/*:46*/
/*47:*/
/*function foogetstringsstarted:boolean;label done,exit;
var k,l:0..255;m,n:char;g:strnumber;a:integer;c:boolean;
begin poolptr:=0;strptr:=0;strstart[0]:=0;
[48:]for k:=0 to 255 do begin if([49:](k<tobar(' '))or(k>tobar('~'))[:49
])then begin appendchar(tobar('^'));appendchar(tobar('^'));
if k<64 then appendchar(k+64)else if k<128 then appendchar(k-64)else
begin l:=k div 16;if l<10 then appendchar(l+48)else appendchar(l+87);
l:=k mod 16;if l<10 then appendchar(l+48)else appendchar(l+87);end;
end else appendchar(k);g:=makestring;end[:48];[51:]nameoffile:=poolname;
if aopenin(poolfile)then begin c:=false;
repeat[52:]begin if eof(poolfile)then begin;
writeln(termout,'! TEX.POOL has no check sum.');aclose(poolfile);
getstringsstarted:=false;goto exit;end;read(poolfile,m,n);
if m='*'then[53:]begin a:=0;k:=1;
while true do begin if(xord[n]<tobar('0'))or(xord[n]>tobar('9'))then
begin;
writeln(termout,'! TEX.POOL check sum doesn''t have nine digits.');
aclose(poolfile);getstringsstarted:=false;goto exit;end;
a:=10*a+xord[n]-tobar('0');if k=9 then goto done;k:=k+1;
read(poolfile,n);end;done:if a<>371982687 then begin;
writeln(termout,'! TEX.POOL doesn''t match; TANGLE me again.');
aclose(poolfile);getstringsstarted:=false;goto exit;end;c:=true;
end[:53]else begin if(xord[m]<tobar('0'))or(xord[m]>tobar('9'))or(xord[n
]<tobar('0'))or(xord[n]>tobar('9'))then begin;
writeln(termout,'! TEX.POOL line doesn''t begin with two digits.');
aclose(poolfile);getstringsstarted:=false;goto exit;end;
l:=xord[m]*10+xord[n]-tobar('0')*11;
if poolptr+l+stringvacancies>poolsize then begin;
writeln(termout,'! You have to increase POOLSIZE.');aclose(poolfile);
getstringsstarted:=false;goto exit;end;
for k:=1 to l do begin if eoln(poolfile)then m:=' 'else read(poolfile,m)
;appendchar(xord[m]);end;readln(poolfile);g:=makestring;end;end[:52];
until c;aclose(poolfile);getstringsstarted:=true;end else begin;
writeln(termout,'! I can''t read TEX.POOL.');aclose(poolfile);
getstringsstarted:=false;goto exit;end[:51];exit:end;*/
/*:47*/
/*66:*/
Static void printtwo(long n)
{
  n = labs(n) % 100;
  printchar('0' + n / 10);
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  printchar('0' + n % 10);
}


/*:66*/
/*67:*/
Static void printhex(long n)
{
  char k;

  k = 0;
  printchar('"');
  do {
    dig[k] = n & 15;
    n /= 16;
    k++;
  } while (n != 0);
  printthedigs(k);
}


/*:67*/
/*69:*/
Static void printromanint(long n)
{
  poolpointer j, k;
  nonnegativeinteger u, v;

  j = strstart[S(275)];
  v = 1000;
  while (true) {
    while (n >= v) {
      printchar(strpool[j]);
      n -= v;
    }
    if (n <= 0)
      goto _Lexit;
    k = j + 2;
    u = v / (strpool[k - 1] - '0');
    if (strpool[k - 1] == '2') {
      k += 2;
      u /= strpool[k - 1] - '0';
    }
    if (n + u >= v) {
      printchar(strpool[k]);
      n += u;
    } else {
      j += 2;
      v /= strpool[j - 1] - '0';
    }
  }
_Lexit: ;
}


/*:69*/
/*70:*/
Static void printcurrentstring(void)
{
  poolpointer j;

  j = strstart[strptr];
  while (j < poolptr) {
    printchar(strpool[j]);
    j++;
  }
}


/*:70*/
/*71:*/
Static void terminput(void)
{
  short k, FORLIM;

  fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  if (!inputln(&termin, true))
    fatalerror(S(276));
  termoffset = 0;
  selector--;
  if (last != first) {
    FORLIM = last;
    for (k = first; k < FORLIM; k++)
      print(buffer[k]);
  }
  println();
  selector++;
}


/*:71*/
/*91:*/
Static void interror(long n)
{
  print(S(300));
  printint(n);
  printchar(')');
  error();
}


/*:91*/
/*92:*/
Static void normalizeselector(void)
{
  if (logopened)
    selector = termandlog;
  else
    selector = termonly;
  if (jobname == 0)
    openlogfile();
  if (interaction == batchmode)
    selector--;
}


/*:92*/
/*98:*/
Static void pauseforinstructions(void)
{
  if (!OKtointerrupt)
    return;
  interaction = errorstopmode;
  if (selector == logonly || selector == noprint)
    selector++;
  printnl(258);
  print(S(310));
  helpptr = 3;
  helpline[2] = S(311);
  helpline[1] = S(312);
  helpline[0] = S(313);
  deletionsallowed = false;
  error();
  deletionsallowed = true;
  interrupt = 0;
}


/*:98*/
/*100:*/
Static long half(long x)
{
  if (x & 1)
    return ((x + 1) / 2);
  else
    return (x / 2);
}


/*:100*/
/*102:*/
Static long rounddecimals(smallnumber k)
{
  long a;

  a = 0;
  while (k > 0) {
    k--;
    a = (a + dig[k] * two) / 10;
  }
  return ((a + 1) / 2);
}


/*:102*/
/*103:*/
Static void printscaled(long s)
{
  scaled delta;

  if (s < 0) {
    printchar('-');
    s = -s;
  }
  printint(s / unity);
  printchar('.');
  s = (s & (unity - 1)) * 10 + 5;
  delta = 10;
  do {
    if (delta > unity)
      s -= 17232;
    printchar('0' + s / unity);
    s = (s & (unity - 1)) * 10;
    delta *= 10;
  } while (s > delta);
}


/*:103*/
/*105:*/
Static long multandadd(long n, long x, long y, long maxanswer)
{
  if (n < 0) {
    x = -x;
    n = -n;
  }
  if (n == 0)
    return y;
  else if (x <= (maxanswer - y) / n && -x <= (maxanswer + y) / n)
    return (n * x + y);
  else {
    aritherror = true;
    return 0;
  }
}


/*:105*/
/*106:*/
Static long xovern(long x, long n)
{
  long Result;
  boolean negative;

  negative = false;
  if (n == 0) {
    aritherror = true;
    Result = 0;
    texremainder = x;
  } else {
    if (n < 0) {
      x = -x;
      n = -n;
      negative = true;
    }
    if (x >= 0) {
      Result = x / n;
      texremainder = x % n;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    } else {
      Result = -(-x / n);
      texremainder = -(-x % n);
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    }
  }
  if (negative)
    texremainder = -texremainder;
  return Result;
}


/*:106*/
/*107:*/
Static long xnoverd(long x, long n, long d)
{
  long Result;
  boolean positive;
  nonnegativeinteger t, u, v;

  if (x >= 0)
    positive = true;
  else {
    x = -x;
    positive = false;
  }
  t = x % 32768L * n;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  u = x / 32768L * n + t / 32768L;
  v = u % d * 32768L + t % 32768L;
  if (u / d >= 32768L)
    aritherror = true;
  else
    u = u / d * 32768L + v / d;
  if (positive) {
    Result = u;
    texremainder = v % d;
  } else {
    Result = -u;
    texremainder = -(v % d);
  }
  return Result;
}


/*:107*/
/*108:*/
Static halfword badness(long t, long s)
{
  long r;

  if (t == 0)
    return 0;
  else if (s <= 0)
    return infbad;
  else {
    if (t <= 7230584L)
      r = t * 297 / s;
    else if (s >= 1663497L)
      r = t / (s / 297);
    else
      r = t;
    if (r > 1290)
      return infbad;
    else
      return ((r * r * r + 131072L) / 262144L);
  }
}


/*:108*/
/*114:*/
/*_DEBUG*/
Static void printword(memoryword w)
{
  printint(w.int_);
  printchar(' ');
  printscaled(w.sc);
  printchar(' ');
  printscaled((long)floor(unity * w.gr + 0.5));
  println();
  printint(w.hh.UU.lh);
  printchar('=');
  printint(w.hh.UU.U2.b0);
  printchar(':');
  printint(w.hh.UU.U2.b1);
  printchar(';');
  printint(w.hh.rh);
  printchar(' ');
  printint(w.qqqq.b0);
  printchar(':');
  printint(w.qqqq.b1);
  printchar(':');
  printint(w.qqqq.b2);
  printchar(':');
  printint(w.qqqq.b3);
}


/*_ENDDEBUG*/
/*:114*/
/*119:*/
/*292:*/
Static void showtokenlist(long p, long q, long l)
{
  long m, c;
  ASCIIcode matchchr, n;

  matchchr = '#';
  n = '0';
  tally = 0;
  while (p != 0 && tally < l) {
    if (p == q) {   /*320:*/
      settrickcount();
/* p2c: tex1.p: Warning: Symbol 'SETTRICKCOUNT' is not defined [221] */
    }
    /*:320*/
    /*293:*/
    if (p < himemmin || p > memend) {
      printesc(S(323));
      goto _Lexit;
    }
    if (*fooinfo(p) >= cstokenflag)
      printcs(*fooinfo(p) - cstokenflag);
    else {   /*:293*/
      m = *fooinfo(p) / 256;
      c = (*fooinfo(p)) & 255;
      if (*fooinfo(p) < 0)
	printesc(S(565));
      else {  /*294:*/
	switch (m) {   /*:294*/

	case leftbrace:
	case rightbrace:
	case mathshift:
	case tabmark:
	case supmark:
	case submark:
	case spacer:
	case letter:
	case otherchar:
	  print(c);
	  break;

	case macparam:
	  print(c);
	  print(c);
	  break;

	case outparam:
	  print(matchchr);
	  if (c > 9) {
	    printchar('!');
	    goto _Lexit;
	  }
	  printchar(c + '0');
	  break;

	case match:
	  matchchr = c;
	  print(c);
	  n++;
	  printchar(n);
	  if (n > '9')
	    goto _Lexit;
	  break;

	case endmatch:
	  print(S(566));
	  break;

	default:
	  printesc(S(565));
	  break;
	}
      }
    }
    p = *foolink(p);
  }
  if (p != 0)
    printesc(S(564));
_Lexit: ;
}


/*:292*/
/*306:*/
Static void runaway(void)
{
  pointer p;

  if (scannerstatus <= skipping)
    return;
  printnl(S(579));
  switch (scannerstatus) {

  case defining:
    print(S(580));
    p = defref;
    break;

  case matching:
    print(S(581));
    p = temphead;
    break;

  case aligning:
    print(S(582));
    p = holdhead;
    break;

  case absorbing:
    print(S(583));
    p = defref;
    break;
  }
  printchar('?');
  println();
  showtokenlist(*foolink(p), 0, errorline - 10);
}


/*:306*/
/*:119*/
/*120:*/
Static halfword getavail(void)
{
  pointer p;

  p = avail;
  if (p != 0)
    avail = *foolink(avail);
  else if (memend < memmax) {
    memend++;
    p = memend;
  } else {
    himemmin--;
    p = himemmin;
    if (himemmin <= lomemmax) {
      runaway();
      overflow(S(314), memmax - memmin + 1);
    }
  }
  *foolink(p) = 0;
  /*_STAT*/
  dynused++;
  /*_ENDSTAT*/
  return p;
}


/*:120*/
/*123:*/
Static void flushlist(halfword p)
{
  pointer q, r;

  if (p == 0)
    return;
  r = p;
  do {
    q = r;
    r = *foolink(r);   /*_STAT*/
    dynused--;   /*_ENDSTAT*/
  } while (r != 0);
  *foolink(q) = avail;
  avail = p;
}


/*:123*/
/*125:*/
Static halfword getnode(long s)
{
  halfword Result;
  pointer p, q;
  long r, t;

_Lrestart:
  p = rover;
  do {   /*127:*/
    q = p + *foonodesize(p);
    while (isempty(q)) {
/* p2c: tex1.p: Warning: Symbol 'ISEMPTY' is not defined [221] */
      t = *foorlink(q);
      if (q == rover)
	rover = t;
      *foollink(t) = *foollink(q);
      *foorlink(*foollink(q)) = t;
      q += *foonodesize(q);
    }
    r = q - s;
    if (r > p + 1) {   /*128:*/
      *foonodesize(p) = r - p;
      rover = p;
      goto _Lfound;
    }
    /*:128*/
    if (r == p) {
      if (*foorlink(p) != p) {   /*129:*/
	rover = *foorlink(p);
	t = *foollink(p);
	*foollink(rover) = t;
	*foorlink(t) = rover;
	goto _Lfound;
      }
      /*:129*/
    }
    *foonodesize(p) = q - p;   /*:127*/
    p = *foorlink(p);
  } while (p != rover);
  if (s == 1073741824L) {
    Result = maxhalfword;
    goto _Lexit;
  }
  if (lomemmax + 2 < himemmin) {
    if (lomemmax + 2 <= membot + maxhalfword) {   /*126:*/
      if (himemmin - lomemmax >= 1998)
	t = lomemmax + 1000;
      else
	t = lomemmax + (himemmin - lomemmax) / 2 + 1;
      p = *foollink(rover);
      q = lomemmax;
      *foorlink(p) = q;
      *foollink(rover) = q;
      if (t > membot + maxhalfword)
	t = membot + maxhalfword;
      *foorlink(q) = rover;
      *foollink(q) = p;
      *foolink(q) = emptyflag;
      *foonodesize(q) = t - lomemmax;
      lomemmax = t;
      *foolink(lomemmax) = 0;
      *fooinfo(lomemmax) = 0;
      rover = q;
      goto _Lrestart;
    }
    /*:126*/
  }
  overflow(S(314), memmax - memmin + 1);
_Lfound:
  *foolink(r) = 0;   /*_STAT*/
  varused += s;   /*_ENDSTAT*/
  Result = r;
_Lexit:
  return Result;
}


/*:125*/
/*130:*/
Static void freenode(halfword p, halfword s)
{
  pointer q;

  *foonodesize(p) = s;
  *foolink(p) = emptyflag;
  q = *foollink(rover);
  *foollink(p) = q;
  *foorlink(p) = rover;
  *foollink(rover) = p;
  *foorlink(q) = p;   /*_STAT*/
  varused -= s;   /*_ENDSTAT*/
}


/*:130*/
/*131:*/
Static void sortavail(void)
{
  pointer p, q, r, oldrover;

  p = getnode(1073741824L);
  p = *foorlink(rover);
  *foorlink(rover) = maxhalfword;
  oldrover = rover;
  while (p != oldrover) {   /*132:*/
    if (p < rover) {
      q = p;
      p = *foorlink(q);
      *foorlink(q) = rover;
      rover = q;
      continue;
    }
    q = rover;
    while (*foorlink(q) < p)
      q = *foorlink(q);
    r = *foorlink(p);
    *foorlink(p) = *foorlink(q);
    *foorlink(q) = p;
    p = r;
  }
  p = rover;
  while (*foorlink(p) != maxhalfword) {
    *foollink(*foorlink(p)) = p;
    p = *foorlink(p);
  }
  *foorlink(p) = rover;
  *foollink(rover) = p;

  /*:132*/
}  /*:131*/


/*136:*/
Static halfword newnullbox(void)
{
  pointer p;

  p = getnode(boxnodesize);
  *footype(p) = hlistnode;
  *foosubtype(p) = minquarterword;
  *foowidth(p) = 0;
  *foodepth(p) = 0;
  *fooheight(p) = 0;
  *fooshiftamount(p) = 0;
  *foolistptr(p) = 0;
  *foogluesign(p) = normal;
  *fooglueorder(p) = normal;
  *fooglueset(p) = 0.0;
  return p;
}


/*:136*/
/*139:*/
Static halfword newrule(void)
{
  pointer p;

  p = getnode(rulenodesize);
  *footype(p) = rulenode;
  *foosubtype(p) = 0;
  *foowidth(p) = nullflag;
  *foodepth(p) = nullflag;
  *fooheight(p) = nullflag;
  return p;
}


/*:139*/
/*144:*/
Static halfword newligature(quarterword f, quarterword c, halfword q)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = ligaturenode;
  *foofont(ligchar(p)) = f;
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
  *foocharacter(ligchar(p)) = c;
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
  *fooligptr(p) = q;
  *foosubtype(p) = 0;
  return p;
}


Static halfword newligitem(quarterword c)
{
  pointer p;

  p = getnode(smallnodesize);
  *foocharacter(p) = c;
  *fooligptr(p) = 0;
  return p;
}


/*:144*/
/*145:*/
Static halfword newdisc(void)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = discnode;
  *fooreplacecount(p) = 0;
  *fooprebreak(p) = 0;
  *foopostbreak(p) = 0;
  return p;
}


/*:145*/
/*147:*/
Static halfword newmath(long w, smallnumber s)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = mathnode;
  *foosubtype(p) = s;
  *foowidth(p) = w;
  return p;
}


/*:147*/
/*151:*/
Static halfword newspec(halfword p)
{
  pointer q;

  q = getnode(gluespecsize);
  mem[q - memmin] = mem[p - memmin];
  *foogluerefcount(q) = 0;
  *foowidth(q) = *foowidth(p);
  *foostretch(q) = *foostretch(p);
  *fooshrink(q) = *fooshrink(p);
  return q;
}


/*:151*/
/*152:*/
Static halfword newparamglue(smallnumber n)
{
  pointer p, q;

  p = getnode(smallnodesize);
  *footype(p) = gluenode;
  *foosubtype(p) = n + 1;
  *fooleaderptr(p) = 0;
  q = *foogluepar(n);   /*224:*/
  /*:224*/
  *fooglueptr(p) = q;
  (*foogluerefcount(q))++;
  return p;
}


/*:152*/
/*153:*/
Static halfword newglue(halfword q)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = gluenode;
  *foosubtype(p) = normal;
  *fooleaderptr(p) = 0;
  *fooglueptr(p) = q;
  (*foogluerefcount(q))++;
  return p;
}


/*:153*/
/*154:*/
Static halfword newskipparam(smallnumber n)
{
  pointer p;

  tempptr = newspec(*foogluepar(n));   /*224:*/
  /*:224*/
  p = newglue(tempptr);
  *foogluerefcount(tempptr) = 0;
  *foosubtype(p) = n + 1;
  return p;
}


/*:154*/
/*156:*/
Static halfword newkern(long w)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = kernnode;
  *foosubtype(p) = normal;
  *foowidth(p) = w;
  return p;
}


/*:156*/
/*158:*/
Static halfword newpenalty(long m)
{
  pointer p;

  p = getnode(smallnodesize);
  *footype(p) = penaltynode;
  *foosubtype(p) = 0;
  *foopenalty(p) = m;
  return p;
}


/*:158*/
/*167:*/
/*_DEBUG*/
Static void checkmem(boolean printlocs)
{
  pointer p, q;
  boolean clobbered;
  halfword FORLIM;

  FORLIM = lomemmax;
  for (p = memmin; p <= FORLIM; p++)
    P_clrbits_B(free_, p - memmin, 0, 3);
  FORLIM = memend;
  for (p = himemmin; p <= FORLIM; p++)   /*168:*/
    P_clrbits_B(free_, p - memmin, 0, 3);
  p = avail;
  q = 0;
  clobbered = false;
  while (p != 0) {
    if (p > memend || p < himemmin)
      clobbered = true;
    else {
      if (P_getbits_UB(free_, p - memmin, 0, 3))
	clobbered = true;
    }
    if (clobbered) {
      printnl(S(315));
      printint(q);
      goto _Ldone1;
    }
    P_putbits_UB(free_, p - memmin, 1, 0, 3);
    q = p;
    p = *foolink(q);
  }
_Ldone1:   /*:168*/
  /*169:*/
  p = rover;
  q = 0;
  clobbered = false;
  do {
    if (p >= lomemmax || p < memmin)
      clobbered = true;
    else if ((*foorlink(p) >= lomemmax) | (*foorlink(p) < memmin))
      clobbered = true;
    else if ((~isempty(p)) | (*foonodesize(p) < 2) | (p + *foonodesize(p) >
	       lomemmax) | (*foollink(*foorlink(p)) != p)) {
/* p2c: tex1.p: Warning: Symbol 'ISEMPTY' is not defined [221] */
      clobbered = true;
    }
    if (clobbered) {
      printnl(S(316));
      printint(q);
      goto _Ldone2;
    }
    FORLIM = p + *foonodesize(p);
    for (q = p; q < FORLIM; q++) {
      if (P_getbits_UB(free_, q - memmin, 0, 3)) {
	printnl(S(317));
	printint(q);
	goto _Ldone2;
      }
      P_putbits_UB(free_, q - memmin, 1, 0, 3);
    }
    q = p;
    p = *foorlink(p);
  } while (p != rover);
_Ldone2:   /*:169*/
  /*170:*/
  p = memmin;
  while (p <= lomemmax) {   /*:170*/
    if (isempty(p)) {
/* p2c: tex1.p: Warning: Symbol 'ISEMPTY' is not defined [221] */
      printnl(S(318));
      printint(p);
    }
    while ((p <= lomemmax) & (!P_getbits_UB(free_, p - memmin, 0, 3)))
      p++;
    while ((p <= lomemmax) & P_getbits_UB(free_, p - memmin, 0, 3))
      p++;
  }
  if (printlocs) {   /*171:*/
    printnl(S(319));
    FORLIM = lomemmax;
    for (p = memmin; p <= FORLIM; p++) {
      if ((!P_getbits_UB(free_, p - memmin, 0, 3)) &
	  ((p > waslomax) | P_getbits_UB(wasfree, p - memmin, 0, 3))) {
	printchar(' ');
	printint(p);
      }
    }
    FORLIM = memend;
    for (p = himemmin; p <= FORLIM; p++) {
      if ((!P_getbits_UB(free_, p - memmin, 0, 3)) & ((p < washimin ||
	      p > wasmemend) | P_getbits_UB(wasfree, p - memmin, 0, 3))) {
	printchar(' ');
	printint(p);
      }
    }
  }
  /*:171*/
  FORLIM = lomemmax;
  for (p = memmin; p <= FORLIM; p++) {
    P_clrbits_B(wasfree, p - memmin, 0, 3);
    P_putbits_UB(wasfree, p - memmin, P_getbits_UB(free_, p - memmin, 0, 3),
		 0, 3);
  }
  FORLIM = memend;
  for (p = himemmin; p <= FORLIM; p++) {
    P_clrbits_B(wasfree, p - memmin, 0, 3);
    P_putbits_UB(wasfree, p - memmin, P_getbits_UB(free_, p - memmin, 0, 3),
		 0, 3);
  }
  wasmemend = memend;
  waslomax = lomemmax;
  washimin = himemmin;
}


/*_ENDDEBUG*/
/*:167*/
/*172:*/
/*_DEBUG*/
Static void searchmem(halfword p)
{
  long q, FORLIM;

  FORLIM = lomemmax;
  for (q = memmin; q <= FORLIM; q++) {
    if (*foolink(q) == p) {
      printnl(S(320));
      printint(q);
      printchar(')');
    }
    if (*fooinfo(q) == p) {
      printnl(S(321));
      printint(q);
      printchar(')');
    }
  }
  FORLIM = memend;
  for (q = himemmin; q <= FORLIM; q++) {
    if (*foolink(q) == p) {
      printnl(S(320));
      printint(q);
      printchar(')');
    }
    if (*fooinfo(q) == p) {
      printnl(S(321));
      printint(q);
      printchar(')');
    }
  }  /*255:*/
  for (q = activebase; q <= boxbase + 255; q++) {   /*:255*/
    if (*fooequiv(q) == p) {
      printnl(S(512));
      printint(q);
      printchar(')');
    }
  }
  /*285:*/
  if (saveptr > 0) {   /*933:*/
    FORLIM = saveptr;
    for (q = 0; q < FORLIM; q++) {   /*:285*/
      if (*fooequivfield(savestack[q]) == p) {
	printnl(S(556));
	printint(q);
	printchar(')');
      }
    }
  }
  for (q = 0; q <= hyphsize; q++) {   /*:933*/
    if (hyphlist[q] == p) {
      printnl(S(939));
      printint(q);
      printchar(')');
    }
  }
}


/*_ENDDEBUG*/
/*:172*/
/*174:*/
Static void shortdisplay(long p)
{
  long n;

  while (p > memmin) {
    if (ischarnode(p)) {
      if (p <= memend) {
	if (*foofont(p) != fontinshortdisplay) {
	  if ((*foofont(p) < fontbase) | (*foofont(p) > fontmax))
	    printchar('*');
	  else  /*267:*/
		/*:267*/
		  printesc(*foofontidtext(*foofont(p)));
	  printchar(' ');
	  fontinshortdisplay = *foofont(p);
	}
	print(*foocharacter(p) - minquarterword);
      }
    } else {  /*175:*/
      switch (*footype(p)) {   /*:175*/

      case hlistnode:
      case vlistnode:
      case insnode:
      case whatsitnode:
      case marknode:
      case adjustnode:
      case unsetnode:
	print(S(322));
	break;

      case rulenode:
	printchar('|');
	break;

      case gluenode:
	if (*fooglueptr(p) != zeroglue)
	  printchar(' ');
	break;

      case mathnode:
	printchar('$');
	break;

      case ligaturenode:
	shortdisplay(*fooligptr(p));
	break;

      case discnode:
	shortdisplay(*fooprebreak(p));
	shortdisplay(*foopostbreak(p));
	n = *fooreplacecount(p);
	while (n > 0) {
	  if (*foolink(p) != 0)
	    p = *foolink(p);
	  n--;
	}
	break;
      }
    }
    p = *foolink(p);
  }
}


/*:174*/
/*176:*/
Static void printfontandchar(long p)
{
  if (p > memend) {
    printesc(S(323));
    return;
  }
  if ((*foofont(p) < fontbase) | (*foofont(p) > fontmax))
    printchar('*');
  else  /*267:*/
	/*:267*/
	  printesc(*foofontidtext(*foofont(p)));
  printchar(' ');
  print(*foocharacter(p) - minquarterword);
}


Static void printmark(long p)
{
  printchar('{');
  if (p < himemmin || p > memend)
    printesc(S(323));
  else
    showtokenlist(*foolink(p), 0, maxprintline - 10);
  printchar('}');
}


Static void printruledimen(long d)
{
  if (isrunning(d)) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
    printchar('*');
  } else
    printscaled(d);
}


/*:176*/
/*177:*/
Static void printglue(long d, long order, strnumber s)
{
  printscaled(d);
  if ((unsigned long)order > filll) {
    print(S(324));
    return;
  }
  if (order <= normal) {
    if (s != 0)
      print(s);
    return;
  }
  print(S(325));
  while (order > fil) {
    printchar('l');
    order--;
  }
}


/*:177*/
/*178:*/
Static void printspec(long p, strnumber s)
{
  if ((unsigned long)p >= lomemmax) {
    printchar('*');
    return;
  }
  printscaled(*foowidth(p));
  if (s != 0)
    print(s);
  if (*foostretch(p) != 0) {
    print(S(270));
    printglue(*foostretch(p), *foostretchorder(p), s);
  }
  if (*fooshrink(p) != 0) {
    print(S(326));
    printglue(*fooshrink(p), *fooshrinkorder(p), s);
  }
}


/*:178*/
/*179:*/
/*691:*/
Static void printfamandchar(halfword p)
{
  printesc(S(475));
  printint(*foofam(p));
  printchar(' ');
  print(*foocharacter(p) - minquarterword);
}


Static void printdelimiter(halfword p)
{
  long a;

  a = *foosmallfam(p) * 256 + *foosmallchar(p) - minquarterword;
  a = a * 4096 + *foolargefam(p) * 256 + *foolargechar(p) - minquarterword;
  if (a < 0)
    printint(a);
  else
    printhex(a);
}


/*:691*/
/*692:*/
Static void showinfo(void);


Static void printsubsidiarydata(halfword p, ASCIIcode c)
{
  if (curlength >= depththreshold) {
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    if (*foomathtype(p) != empty)
      print(S(327));
    return;
  }
  appendchar(c);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
  tempptr = p;
  switch (*foomathtype(p)) {

  case mathchar:
    println();
    printcurrentstring();
    printfamandchar(p);
    break;

  case subbox:
    showinfo();
    break;

  case submlist:
    if (*fooinfo(p) == 0) {
      println();
      printcurrentstring();
      print(S(860));
    } else
      showinfo();
    break;
  }
  flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
}


/*:692*/
/*694:*/
Static void printstyle(long c)
{
  switch (c / 2) {

  case 0:
    printesc(S(861));
    break;

  case 1:
    printesc(S(862));
    break;

  case 2:
    printesc(S(863));
    break;

  case 3:
    printesc(S(864));
    break;

  default:
    print(S(865));
    break;
  }
}


/*:694*/
/*225:*/
Static void printskipparam(long n)
{
  switch (n) {

  case lineskipcode:
    printesc(S(388));
    break;

  case baselineskipcode:
    printesc(S(389));
    break;

  case parskipcode:
    printesc(S(390));
    break;

  case abovedisplayskipcode:
    printesc(S(391));
    break;

  case belowdisplayskipcode:
    printesc(S(392));
    break;

  case abovedisplayshortskipcode:
    printesc(S(393));
    break;

  case belowdisplayshortskipcode:
    printesc(S(394));
    break;

  case leftskipcode:
    printesc(S(395));
    break;

  case rightskipcode:
    printesc(S(396));
    break;

  case topskipcode:
    printesc(S(397));
    break;

  case splittopskipcode:
    printesc(S(398));
    break;

  case tabskipcode:
    printesc(S(399));
    break;

  case spaceskipcode:
    printesc(S(400));
    break;

  case xspaceskipcode:
    printesc(S(401));
    break;

  case parfillskipcode:
    printesc(S(402));
    break;

  case thinmuskipcode:
    printesc(S(403));
    break;

  case medmuskipcode:
    printesc(S(404));
    break;

  case thickmuskipcode:
    printesc(S(405));
    break;

  default:
    print(S(406));
    break;
  }
}


/*:225*/
/*:179*/
/*182:*/
Static void shownodelist(long p)
{
  long n;
  double g;

  if (curlength > depththreshold) {
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    if (p > 0)
      print(S(327));
    goto _Lexit;
  }
  n = 0;
  while (p > memmin) {
    println();
    printcurrentstring();
    if (p > memend) {
      print(S(328));
      goto _Lexit;
    }
    n++;
    if (n > breadthmax) {
      print(S(329));
      goto _Lexit;
    }  /*183:*/
    if (ischarnode(p))
      printfontandchar(p);
    else {
      switch (*footype(p)) {   /*:183*/

      case hlistnode:
      case vlistnode:
      case unsetnode:   /*184:*/
	if (*footype(p) == hlistnode)
	  printesc('h');
	else if (*footype(p) == vlistnode)
	  printesc('v');
	else
	  printesc(S(331));
	print(S(332));
	printscaled(*fooheight(p));
	printchar('+');
	printscaled(*foodepth(p));
	print(S(333));
	printscaled(*foowidth(p));
	if (*footype(p) == unsetnode) {   /*185:*/
	  if (*foospancount(p) != minquarterword) {
	    print(S(300));
	    printint(*foospancount(p) - minquarterword + 1);
	    print(S(335));
	  }
	  if (*foogluestretch(p) != 0) {
	    print(S(336));
	    printglue(*foogluestretch(p), *fooglueorder(p), 0);
	  }
	  if (*fooglueshrink(p) != 0) {
	    print(S(337));
	    printglue(*fooglueshrink(p), *foogluesign(p), 0);
	  }
	}  /*:185*/
	else {   /*186:*/
	  g = *fooglueset(p);
	  if ((g != 0.0) & (*foogluesign(p) != normal)) {   /*:186*/
	    print(S(338));
	    if (*foogluesign(p) == shrinking)
	      print(S(339));
	    if (labs(mem[p + glueoffset - memmin].int_) < 1048576L)
	      print(S(340));
	    else {
	      if (fabs(g) > 20000.0) {
		if (g > 0.0)
		  printchar('>');
		else
		  print(S(341));
		printglue(unity * 20000, *fooglueorder(p), 0);
	      } else
		printglue((long)floor(unity * g + 0.5), *fooglueorder(p), 0);
	    }
	  }
	  if (*fooshiftamount(p) != 0) {
	    print(S(334));
	    printscaled(*fooshiftamount(p));
	  }
	}
	nodelistdisplay(*foolistptr(p));
/* p2c: tex1.p: Warning: Symbol 'NODELISTDISPLAY' is not defined [221] */
	break;
	/*:184*/

      case rulenode:   /*187:*/
	printesc(S(342));
	printruledimen(*fooheight(p));
	printchar('+');
	printruledimen(*foodepth(p));
	print(S(333));
	printruledimen(*foowidth(p));
	break;
	/*:187*/

      case insnode:   /*188:*/
	printesc(S(343));
	printint(*foosubtype(p) - minquarterword);
	print(S(344));
	printscaled(*fooheight(p));
	print(S(345));
	printspec(*foosplittopptr(p), 0);
	printchar(',');
	printscaled(*foodepth(p));
	print(S(346));
	printint(*foofloatcost(p));
	nodelistdisplay(*fooinsptr(p));
/* p2c: tex1.p: Warning: Symbol 'NODELISTDISPLAY' is not defined [221] */
	break;
	/*:188*/

      case whatsitnode:   /*1356:*/
	switch (*foosubtype(p)) {   /*:1356*/

	case opennode:
	  printwritewhatsit(S(1284), p);
	  printchar('=');
	  printfilename(*fooopenname(p), *fooopenarea(p), *fooopenext(p));
	  break;

	case writenode:
	  printwritewhatsit(S(603), p);
	  printmark(*foowritetokens(p));
	  break;

	case closenode:
	  printwritewhatsit(S(1285), p);
	  break;

	case specialnode:
	  printesc(S(1286));
	  printmark(*foowritetokens(p));
	  break;

	case languagenode:
	  printesc(S(1288));
	  printint(*foowhatlang(p));
	  print(S(1291));
	  printint(*foowhatlhm(p));
	  printchar(',');
	  printint(*foowhatrhm(p));
	  printchar(')');
	  break;

	default:
	  print(S(1292));
	  break;
	}
	break;

      case gluenode:   /*189:*/
	if (*foosubtype(p) >= aleaders) {   /*190:*/
	  printesc(S(266));
	  if (*foosubtype(p) == cleaders)
	    printchar('c');
	  else if (*foosubtype(p) == xleaders)
	    printchar('x');
	  print(S(351));
	  printspec(*fooglueptr(p), 0);
	  nodelistdisplay(*fooleaderptr(p));
/* p2c: tex1.p: Warning: Symbol 'NODELISTDISPLAY' is not defined [221] */
	}  /*:190*/
	else {   /*:189*/
	  printesc(S(347));
	  if (*foosubtype(p) != normal) {
	    printchar('(');
	    if (*foosubtype(p) < condmathglue)
	      printskipparam(*foosubtype(p) - 1);
	    else {
	      if (*foosubtype(p) == condmathglue)
		printesc(S(348));
	      else
		printesc(S(349));
	    }
	    printchar(')');
	  }
	  if (*foosubtype(p) != condmathglue) {
	    printchar(' ');
	    if (*foosubtype(p) < condmathglue)
	      printspec(*fooglueptr(p), 0);
	    else
	      printspec(*fooglueptr(p), S(350));
	  }
	}
	break;

      case kernnode:   /*191:*/
	if (*foosubtype(p) != muglue) {
	  printesc(S(352));
	  if (*foosubtype(p) != normal)
	    printchar(' ');
	  printscaled(*foowidth(p));
	  if (*foosubtype(p) == acckern)
	    print(S(353));
	} else {   /*:191*/
	  printesc(S(354));
	  printscaled(*foowidth(p));
	  print(S(350));
	}
	break;

      case mathnode:   /*192:*/
	printesc(S(355));
	if (*foosubtype(p) == before)
	  print(S(356));
	else
	  print(S(357));
	if (*foowidth(p) != 0) {
	  print(S(358));
	  printscaled(*foowidth(p));
	}
	break;
	/*:192*/

      case ligaturenode:   /*193:*/
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	printfontandchar(ligchar(p));
	print(S(359));
	if (*foosubtype(p) > 1)
	  printchar('|');
	fontinshortdisplay = *foofont(ligchar(p));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	shortdisplay(*fooligptr(p));
	if ((*foosubtype(p)) & 1)
	  printchar('|');
	printchar(')');
	break;
	/*:193*/

      case penaltynode:   /*194:*/
	printesc(S(360));
	printint(*foopenalty(p));
	break;
	/*:194*/

      case discnode:   /*195:*/
	printesc(S(361));
	if (*fooreplacecount(p) > 0) {
	  print(S(362));
	  printint(*fooreplacecount(p));
	}
	nodelistdisplay(*fooprebreak(p));
/* p2c: tex1.p: Warning: Symbol 'NODELISTDISPLAY' is not defined [221] */
	appendchar('|');
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	shownodelist(*foopostbreak(p));
	flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
	break;
	/*:195*/

      case marknode:   /*196:*/
	printesc(S(363));
	printmark(*foomarkptr(p));
	break;
	/*:196*/

      case adjustnode:   /*197:*/
	printesc(S(364));
	nodelistdisplay(*fooadjustptr(p));
/* p2c: tex1.p: Warning: Symbol 'NODELISTDISPLAY' is not defined [221] */
	break;
	/*:197*/
	/*690:*/

      case stylenode:
	printstyle(*foosubtype(p));
	break;

      case choicenode:   /*695:*/
	printesc(S(536));
	appendchar('D');
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	shownodelist(*foodisplaymlist(p));
	flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
	appendchar('T');
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	shownodelist(*footextmlist(p));
	flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
	appendchar('S');
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	shownodelist(*fooscriptmlist(p));
	flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
	appendchar('s');
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	shownodelist(*fooscriptscriptmlist(p));
	flushchar();
/* p2c: tex1.p: Warning: Symbol 'FLUSHCHAR' is not defined [221] */
	break;
	/*:695*/

      case ordnoad:
      case opnoad:
      case binnoad:
      case relnoad:
      case opennoad:
      case closenoad:
      case punctnoad:
      case innernoad:
      case radicalnoad:
      case overnoad:
      case undernoad:
      case vcenternoad:
      case accentnoad:
      case leftnoad:
      case rightnoad:   /*696:*/
	switch (*footype(p)) {

	case ordnoad:
	  printesc(S(866));
	  break;

	case opnoad:
	  printesc(S(867));
	  break;

	case binnoad:
	  printesc(S(868));
	  break;

	case relnoad:
	  printesc(S(869));
	  break;

	case opennoad:
	  printesc(S(870));
	  break;

	case closenoad:
	  printesc(S(871));
	  break;

	case punctnoad:
	  printesc(S(872));
	  break;

	case innernoad:
	  printesc(S(873));
	  break;

	case overnoad:
	  printesc(S(874));
	  break;

	case undernoad:
	  printesc(S(875));
	  break;

	case vcenternoad:
	  printesc(S(550));
	  break;

	case radicalnoad:
	  printesc(S(544));
	  printdelimiter(*fooleftdelimiter(p));
	  break;

	case accentnoad:
	  printesc(S(519));
	  printfamandchar(*fooaccentchr(p));
	  break;

	case leftnoad:
	  printesc(S(876));
	  printdelimiter(*foonucleus(p));
	  break;

	case rightnoad:
	  printesc(S(877));
	  printdelimiter(*foonucleus(p));
	  break;
	}
	if (*foosubtype(p) != normal) {
	  if (*foosubtype(p) == limits)
	    printesc(S(878));
	  else
	    printesc(S(879));
	}
	if (*footype(p) < leftnoad)
	  printsubsidiarydata(*foonucleus(p), '.');
	printsubsidiarydata(*foosupscr(p), '^');
	printsubsidiarydata(*foosubscr(p), '_');
	break;
	/*:696*/

      case fractionnoad:   /*697:*/
	printesc(S(880));
	if (*foothickness(p) == defaultcode)
	  print(S(881));
	else
	  printscaled(*foothickness(p));
	if ((*foosmallfam(*fooleftdelimiter(p)) != 0) |
	    (*foosmallchar(*fooleftdelimiter(p)) != minquarterword) |
	    (*foolargefam(*fooleftdelimiter(p)) != 0) |
	    (*foolargechar(*fooleftdelimiter(p)) != minquarterword)) {
	  print(S(882));
	  printdelimiter(*fooleftdelimiter(p));
	}
	if ((*foosmallfam(*foorightdelimiter(p)) != 0) |
	    (*foosmallchar(*foorightdelimiter(p)) != minquarterword) |
	    (*foolargefam(*foorightdelimiter(p)) != 0) |
	    (*foolargechar(*foorightdelimiter(p)) != minquarterword)) {
	  print(S(883));
	  printdelimiter(*foorightdelimiter(p));
	}
	printsubsidiarydata(*foonumerator(p), '\\');
	printsubsidiarydata(*foodenominator(p), '/');
	break;
	/*:697*/
	/*:690*/

      default:
	print(S(330));
	break;
      }
    }
    p = *foolink(p);
  }
_Lexit: ;
}


/*:182*/
/*198:*/
Static void showbox(halfword p)
{  /*236:*/
  depththreshold = showboxdepth;
  breadthmax = showboxbreadth;   /*:236*/
  if (breadthmax <= 0)
    breadthmax = 5;
  if (poolptr + depththreshold >= poolsize)
    depththreshold = poolsize - poolptr - 1;
  shownodelist(p);
  println();
}


/*:198*/
/*200:*/
Static void deletetokenref(halfword p)
{
  if (*footokenrefcount(p) == 0)
    flushlist(p);
  else
    (*footokenrefcount(p))--;
}


/*:200*/
/*201:*/
Static void deleteglueref(halfword p)
{
  karmafastdeleteglueref(p);
/* p2c: tex1.p:
 * Warning: Symbol 'KARMAFASTDELETEGLUEREF' is not defined [221] */
}


/*:201*/
/*202:*/
Static void flushnodelist(halfword p)
{
  pointer q;

  while (p != 0) {
    q = *foolink(p);
    if (ischarnode(p)) {
      freeavail(p);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
    } else {
      switch (*footype(p)) {

      case hlistnode:
      case vlistnode:
      case unsetnode:
	flushnodelist(*foolistptr(p));
	freenode(p, boxnodesize);
	goto _Ldone;
	break;

      case rulenode:
	freenode(p, rulenodesize);
	goto _Ldone;
	break;

      case insnode:
	flushnodelist(*fooinsptr(p));
	deleteglueref(*foosplittopptr(p));
	freenode(p, insnodesize);
	goto _Ldone;
	break;

      case whatsitnode:   /*1358:*/
	switch (*foosubtype(p)) {

	case opennode:
	  freenode(p, opennodesize);
	  break;

	case writenode:
	case specialnode:
	  deletetokenref(*foowritetokens(p));
	  freenode(p, writenodesize);
	  goto _Ldone;
	  break;

	case closenode:
	case languagenode:
	  freenode(p, smallnodesize);
	  break;

	default:
	  confusion(S(1294));
	  break;
	}
	goto _Ldone;
	break;
	/*:1358*/

      case gluenode:
	karmafastdeleteglueref(*fooglueptr(p));
/* p2c: tex1.p:
 * Warning: Symbol 'KARMAFASTDELETEGLUEREF' is not defined [221] */
	if (*fooleaderptr(p) != 0)
	  flushnodelist(*fooleaderptr(p));
	break;

      case kernnode:
      case mathnode:
      case penaltynode:
	/* blank case */
	break;

      case ligaturenode:
	flushnodelist(*fooligptr(p));
	break;

      case marknode:
	deletetokenref(*foomarkptr(p));
	break;

      case discnode:
	flushnodelist(*fooprebreak(p));
	flushnodelist(*foopostbreak(p));
	break;

      case adjustnode:   /*698:*/
	flushnodelist(*fooadjustptr(p));
	break;

      case stylenode:
	freenode(p, stylenodesize);
	goto _Ldone;
	break;

      case choicenode:
	flushnodelist(*foodisplaymlist(p));
	flushnodelist(*footextmlist(p));
	flushnodelist(*fooscriptmlist(p));
	flushnodelist(*fooscriptscriptmlist(p));
	freenode(p, stylenodesize);
	goto _Ldone;
	break;

      case ordnoad:
      case opnoad:
      case binnoad:
      case relnoad:
      case opennoad:
      case closenoad:
      case punctnoad:
      case innernoad:
      case radicalnoad:
      case overnoad:
      case undernoad:
      case vcenternoad:
      case accentnoad:
	if (*foomathtype(*foonucleus(p)) >= subbox)
	  flushnodelist(*fooinfo(*foonucleus(p)));
	if (*foomathtype(*foosupscr(p)) >= subbox)
	  flushnodelist(*fooinfo(*foosupscr(p)));
	if (*foomathtype(*foosubscr(p)) >= subbox)
	  flushnodelist(*fooinfo(*foosubscr(p)));
	if (*footype(p) == radicalnoad)
	  freenode(p, radicalnoadsize);
	else if (*footype(p) == accentnoad)
	  freenode(p, accentnoadsize);
	else
	  freenode(p, noadsize);
	goto _Ldone;
	break;

      case leftnoad:
      case rightnoad:
	freenode(p, noadsize);
	goto _Ldone;
	break;

      case fractionnoad:
	flushnodelist(*fooinfo(*foonumerator(p)));
	flushnodelist(*fooinfo(*foodenominator(p)));
	freenode(p, fractionnoadsize);
	goto _Ldone;
	break;
	/*:698*/

      default:
	confusion(S(365));
	break;
      }
      freenode(p, smallnodesize);
_Ldone: ;
    }
    p = q;
  }
}


/*:202*/
/*204:*/
Static halfword copynodelist(halfword p)
{
  pointer h, q, r;
  char words;

  h = getavail();
  q = h;
  while (p != 0) {  /*205:*/
    words = 1;
    if (ischarnode(p))
      r = getavail();
    else {  /*206:*/
      switch (*footype(p)) {   /*:206*/

      case hlistnode:
      case vlistnode:
      case unsetnode:
	r = getnode(boxnodesize);
	mem[r - memmin + 6] = mem[p - memmin + 6];
	mem[r - memmin + 5] = mem[p - memmin + 5];
	*foolistptr(r) = copynodelist(*foolistptr(p));
	words = 5;
	break;

      case rulenode:
	r = getnode(rulenodesize);
	words = rulenodesize;
	break;

      case insnode:
	r = getnode(insnodesize);
	mem[r - memmin + 4] = mem[p - memmin + 4];
	addglueref(*foosplittopptr(p));
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
	*fooinsptr(r) = copynodelist(*fooinsptr(p));
	words = insnodesize - 1;
	break;

      case whatsitnode:   /*1357:*/
	switch (*foosubtype(p)) {   /*:1357*/

	case opennode:
	  r = getnode(opennodesize);
	  words = opennodesize;
	  break;

	case writenode:
	case specialnode:
	  r = getnode(writenodesize);
	  addtokenref(*foowritetokens(p));
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
	  words = writenodesize;
	  break;

	case closenode:
	case languagenode:
	  r = getnode(smallnodesize);
	  words = smallnodesize;
	  break;

	default:
	  confusion(S(1293));
	  break;
	}
	break;

      case gluenode:
	r = getnode(smallnodesize);
	addglueref(*fooglueptr(p));
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
	*fooglueptr(r) = *fooglueptr(p);
	*fooleaderptr(r) = copynodelist(*fooleaderptr(p));
	break;

      case kernnode:
      case mathnode:
      case penaltynode:
	r = getnode(smallnodesize);
	words = smallnodesize;
	break;

      case ligaturenode:
	r = getnode(smallnodesize);
	mem[ligchar(r) - memmin] = mem[ligchar(p) - memmin];
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	*fooligptr(r) = copynodelist(*fooligptr(p));
	break;

      case discnode:
	r = getnode(smallnodesize);
	*fooprebreak(r) = copynodelist(*fooprebreak(p));
	*foopostbreak(r) = copynodelist(*foopostbreak(p));
	break;

      case marknode:
	r = getnode(smallnodesize);
	addtokenref(*foomarkptr(p));
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
	words = smallnodesize;
	break;

      case adjustnode:
	r = getnode(smallnodesize);
	*fooadjustptr(r) = copynodelist(*fooadjustptr(p));
	break;

      default:
	confusion(S(366));
	break;
      }
    }
    while (words > 0) {   /*:205*/
      words--;
      mem[r + words - memmin] = mem[p + words - memmin];
    }
    *foolink(q) = r;
    q = r;
    p = *foolink(p);
  }
  *foolink(q) = 0;
  q = *foolink(h);
  freeavail(h);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
  return q;
}


/*:204*/
/*211:*/
Static void printmode(long m)
{
  if (m > 0) {
    switch (m / (maxcommand + 1)) {

    case 0:
      print(S(367));
      break;

    case 1:
      print(S(368));
      break;

    case 2:
      print(S(369));
      break;
    }
  } else if (m == 0)
    print(S(370));
  else {
    switch (-m / (maxcommand + 1)) {

    case 0:
      print(S(371));
      break;

    case 1:
      print(S(372));
      break;

    case 2:
      print(S(355));
      break;
    }
  }
  print(S(373));
}


/*:211*/
/*216:*/
Static void pushnest(void)
{
  if (nestptr > maxneststack) {
    maxneststack = nestptr;
    if (nestptr == nestsize)
      overflow(S(374), nestsize);
  }
  nest[nestptr] = curlist;
  nestptr++;
  head = getavail();
  tail = head;
  prevgraf = 0;
  modeline = line;
}


/*:216*/
/*217:*/
Static void popnest(void)
{
  freeavail(head);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
  nestptr--;
  curlist = nest[nestptr];
}


/*:217*/
/*218:*/
Static void printtotals(void);


Static void showactivities(void)
{
  char p;
  short m;
  memoryword a;
  pointer q, r;
  long t;
  short TEMP;

  nest[nestptr] = curlist;
  printnl(S(266));
  println();
  for (TEMP = nestptr; TEMP >= 0; TEMP--) {
    p = TEMP;
    m = nest[p].modefield;
    a = nest[p].auxfield;
    printnl(S(375));
    printmode(m);
    print(S(376));
    printint(labs(nest[p].mlfield));
    if (m == hmode) {
      if (nest[p].pgfield != 8585216L) {
	print(S(377));
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
	printint(nest[p].pgfield % 65536L);
	print(S(378));
	printint(nest[p].pgfield / 4194304L);
	printchar(',');
	printint((nest[p].pgfield / 65536L) & 63);
	printchar(')');
      }
    }
    if (nest[p].mlfield < 0)
      print(S(379));
    if (p == 0) {  /*986:*/
      if (pagehead != pagetail) {   /*:986*/
	printnl(S(979));
	if (outputactive)
	  print(S(980));
	showbox(*foolink(pagehead));
	if (pagecontents > empty) {
	  printnl(S(981));
	  printtotals();
	  printnl(S(982));
	  printscaled(pagegoal);
	  r = *foolink(pageinshead);
	  while (r != pageinshead) {
	    println();
	    printesc(S(343));
	    t = *foosubtype(r) - minquarterword;
	    printint(t);
	    print(S(983));
	    t = xovern(*fooheight(r), 1000) * *foocount(t);
	    printscaled(t);
	    if (*footype(r) == splitup) {
	      q = pagehead;
	      t = 0;
	      do {
		q = *foolink(q);
		if ((*footype(q) == insnode) & (*foosubtype(q) == *foosubtype(r)))
		  t++;
	      } while (q != *foobrokenins(r));
	      print(S(984));
	      printint(t);
	      print(S(985));
	    }
	    r = *foolink(r);
	  }
	}
      }
      if (*foolink(contribhead) != 0)
	printnl(S(380));
    }
    showbox(*foolink(nest[p].headfield));   /*219:*/
    switch (abs(m) / (maxcommand + 1)) {   /*:219*/

    case 0:
      printnl(S(381));
      if (a.sc <= ignoredepth)
	print(S(382));
      else
	printscaled(a.sc);
      if (nest[p].pgfield != 0) {
	print(S(383));
	printint(nest[p].pgfield);
	print(S(384));
	if (nest[p].pgfield != 1)
	  printchar('s');
      }
      break;

    case 1:
      printnl(S(385));
      printint(a.hh.UU.lh);
      if (m > 0) {
	if (a.hh.rh > 0) {
	  print(S(386));
	  printint(a.hh.rh);
	}
      }
      break;

    case 2:
      if (a.int_ != 0) {
	print(S(387));
	showbox(a.int_);
      }
      break;
    }
  }
}


/*:218*/
/*237:*/
Static void printparam(long n)
{
  switch (n) {

  case pretolerancecode:
    printesc(S(431));
    break;

  case tolerancecode:
    printesc(S(432));
    break;

  case linepenaltycode:
    printesc(S(433));
    break;

  case hyphenpenaltycode:
    printesc(S(434));
    break;

  case exhyphenpenaltycode:
    printesc(S(435));
    break;

  case clubpenaltycode:
    printesc(S(436));
    break;

  case widowpenaltycode:
    printesc(S(437));
    break;

  case displaywidowpenaltycode:
    printesc(S(438));
    break;

  case brokenpenaltycode:
    printesc(S(439));
    break;

  case binoppenaltycode:
    printesc(S(440));
    break;

  case relpenaltycode:
    printesc(S(441));
    break;

  case predisplaypenaltycode:
    printesc(S(442));
    break;

  case postdisplaypenaltycode:
    printesc(S(443));
    break;

  case interlinepenaltycode:
    printesc(S(444));
    break;

  case doublehyphendemeritscode:
    printesc(S(445));
    break;

  case finalhyphendemeritscode:
    printesc(S(446));
    break;

  case adjdemeritscode:
    printesc(S(447));
    break;

  case magcode:
    printesc(S(448));
    break;

  case delimiterfactorcode:
    printesc(S(449));
    break;

  case loosenesscode:
    printesc(S(450));
    break;

  case timecode:
    printesc(S(451));
    break;

  case daycode:
    printesc(S(452));
    break;

  case monthcode:
    printesc(S(453));
    break;

  case yearcode:
    printesc(S(454));
    break;

  case showboxbreadthcode:
    printesc(S(455));
    break;

  case showboxdepthcode:
    printesc(S(456));
    break;

  case hbadnesscode:
    printesc(S(457));
    break;

  case vbadnesscode:
    printesc(S(458));
    break;

  case pausingcode:
    printesc(S(459));
    break;

  case tracingonlinecode:
    printesc(S(460));
    break;

  case tracingmacroscode:
    printesc(S(461));
    break;

  case tracingstatscode:
    printesc(S(462));
    break;

  case tracingparagraphscode:
    printesc(S(463));
    break;

  case tracingpagescode:
    printesc(S(464));
    break;

  case tracingoutputcode:
    printesc(S(465));
    break;

  case tracinglostcharscode:
    printesc(S(466));
    break;

  case tracingcommandscode:
    printesc(S(467));
    break;

  case tracingrestorescode:
    printesc(S(468));
    break;

  case uchyphcode:
    printesc(S(469));
    break;

  case outputpenaltycode:
    printesc(S(470));
    break;

  case maxdeadcyclescode:
    printesc(S(471));
    break;

  case hangaftercode:
    printesc(S(472));
    break;

  case floatingpenaltycode:
    printesc(S(473));
    break;

  case globaldefscode:
    printesc(S(474));
    break;

  case curfamcode:
    printesc(S(475));
    break;

  case escapecharcode:
    printesc(S(476));
    break;

  case defaulthyphencharcode:
    printesc(S(477));
    break;

  case defaultskewcharcode:
    printesc(S(478));
    break;

  case endlinecharcode:
    printesc(S(479));
    break;

  case newlinecharcode:
    printesc(S(480));
    break;

  case languagecode:
    printesc(S(481));
    break;

  case lefthyphenmincode:
    printesc(S(482));
    break;

  case righthyphenmincode:
    printesc(S(483));
    break;

  case holdinginsertscode:
    printesc(S(484));
    break;

  case errorcontextlinescode:
    printesc(S(485));
    break;

  default:
    print(S(486));
    break;
  }
}


/*:237*/
/*241:*/
Static void fixdateandtime(void)
{
  time = 720;
  day = 4;
  month = 7;
  year = 1776;
}


/*:241*/
/*245:*/
Static void begindiagnostic(void)
{
  oldsetting = selector;
  if (tracingonline > 0 || selector != termandlog)
    return;
  selector--;
  if (history == spotless)
    history = warningissued;
}


Static void enddiagnostic(boolean blankline)
{
  printnl(S(266));
  if (blankline)
    println();
  selector = oldsetting;
}


/*:245*/
/*247:*/
Static void printlengthparam(long n)
{
  switch (n) {

  case parindentcode:
    printesc(S(489));
    break;

  case mathsurroundcode:
    printesc(S(490));
    break;

  case lineskiplimitcode:
    printesc(S(491));
    break;

  case hsizecode:
    printesc(S(492));
    break;

  case vsizecode:
    printesc(S(493));
    break;

  case maxdepthcode:
    printesc(S(494));
    break;

  case splitmaxdepthcode:
    printesc(S(495));
    break;

  case boxmaxdepthcode:
    printesc(S(496));
    break;

  case hfuzzcode:
    printesc(S(497));
    break;

  case vfuzzcode:
    printesc(S(498));
    break;

  case delimitershortfallcode:
    printesc(S(499));
    break;

  case nulldelimiterspacecode:
    printesc(S(500));
    break;

  case scriptspacecode:
    printesc(S(501));
    break;

  case predisplaysizecode:
    printesc(S(502));
    break;

  case displaywidthcode:
    printesc(S(503));
    break;

  case displayindentcode:
    printesc(S(504));
    break;

  case overfullrulecode:
    printesc(S(505));
    break;

  case hangindentcode:
    printesc(S(506));
    break;

  case hoffsetcode:
    printesc(S(507));
    break;

  case voffsetcode:
    printesc(S(508));
    break;

  case emergencystretchcode:
    printesc(S(509));
    break;

  default:
    print(S(510));
    break;
  }
}


/*:247*/
/*252:*/
/*298:*/
Static void printcmdchr(quarterword cmd, halfword chrcode)
{
  switch (cmd) {

  case leftbrace:
    chrcmd(S(567));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case rightbrace:
    chrcmd(S(568));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case mathshift:
    chrcmd(S(569));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case macparam:
    chrcmd(S(570));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case supmark:
    chrcmd(S(571));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case submark:
    chrcmd(S(572));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case endv:
    print(S(573));
    break;

  case spacer:
    chrcmd(S(574));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case letter:
    chrcmd(S(575));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  case otherchar:
    chrcmd(S(576));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    break;

  /*227:*/
  case assignglue:
  case assignmuglue:   /*:227*/
    if (chrcode < skipbase)
      printskipparam(chrcode - gluebase);
    else if (chrcode < muskipbase) {
      printesc(S(407));
      printint(chrcode - skipbase);
    } else {
      printesc(S(408));
      printint(chrcode - muskipbase);
    }
    break;
    /*231:*/

  case assigntoks:   /*:231*/
    if (chrcode >= toksbase) {
      printesc(S(418));
      printint(chrcode - toksbase);
    } else {
      switch (chrcode) {

      case outputroutineloc:
	printesc(S(409));
	break;

      case everyparloc:
	printesc(S(410));
	break;

      case everymathloc:
	printesc(S(411));
	break;

      case everydisplayloc:
	printesc(S(412));
	break;

      case everyhboxloc:
	printesc(S(413));
	break;

      case everyvboxloc:
	printesc(S(414));
	break;

      case everyjobloc:
	printesc(S(415));
	break;

      case everycrloc:
	printesc(S(416));
	break;

      default:
	printesc(S(417));
	break;
      }
    }
    break;
    /*239:*/

  case assignint:
    if (chrcode < countbase)
      printparam(chrcode - intbase);
    else {
      printesc(S(487));
      printint(chrcode - countbase);
    }  /*:239*/
    break;

  /*249:*/
  case assigndimen:   /*:249*/
    if (chrcode < scaledbase)
      printlengthparam(chrcode - dimenbase);
    else {
      printesc(S(511));
      printint(chrcode - scaledbase);
    }
    break;
    /*266:*/

  case accent:
    printesc(S(519));
    break;

  case advance:
    printesc(S(520));
    break;

  case afterassignment:
    printesc(S(521));
    break;

  case aftergroup:
    printesc(S(522));
    break;

  case assignfontdimen:
    printesc(S(530));
    break;

  case begingroup:
    printesc(S(523));
    break;

  case breakpenalty:
    printesc(S(542));
    break;

  case charnum:
    printesc(S(524));
    break;

  case csname:
    printesc(S(515));
    break;

  case deffont:
    printesc(S(529));
    break;

  case delimnum:
    printesc(S(525));
    break;

  case divide:
    printesc(S(526));
    break;

  case endcsname:
    printesc(S(516));
    break;

  case endgroup:
    printesc(S(527));
    break;

  case exspace:
    printesc(' ');
    break;

  case expandafter:
    printesc(S(528));
    break;

  case halign:
    printesc(S(531));
    break;

  case hrule:
    printesc(S(532));
    break;

  case ignorespaces:
    printesc(S(533));
    break;

  case insert_:
    printesc(S(343));
    break;

  case italcorr:
    printesc('/');
    break;

  case mark_:
    printesc(S(363));
    break;

  case mathaccent:
    printesc(S(534));
    break;

  case mathcharnum:
    printesc(S(535));
    break;

  case mathchoice:
    printesc(S(536));
    break;

  case multiply:
    printesc(S(537));
    break;

  case noalign:
    printesc(S(538));
    break;

  case noboundary:
    printesc(S(539));
    break;

  case noexpand:
    printesc(S(540));
    break;

  case nonscript:
    printesc(S(348));
    break;

  case omit:
    printesc(S(541));
    break;

  case radical:
    printesc(S(544));
    break;

  case readtocs:
    printesc(S(545));
    break;

  case relax:
    printesc(S(546));
    break;

  case setbox:
    printesc(S(547));
    break;

  case setprevgraf:
    printesc(S(543));
    break;

  case setshape:
    printesc(S(419));
    break;

  case the:
    printesc(S(548));
    break;

  case toksregister:
    printesc(S(418));
    break;

  case vadjust:
    printesc(S(364));
    break;

  case valign:
    printesc(S(549));
    break;

  case vcenter:
    printesc(S(550));
    break;

  case vrule:
    printesc(S(551));
    break;

  /*:266*/
  /*335:*/
  case parend:
    printesc(S(606));
    break;

  /*:335*/
  /*377:*/
  case input:   /*:377*/
    if (chrcode == 0)
      printesc(S(638));
    else
      printesc(S(639));
    break;
    /*385:*/

  case topbotmark:   /*:385*/
    switch (chrcode) {

    case firstmarkcode:
      printesc(S(641));
      break;

    case botmarkcode:
      printesc(S(642));
      break;

    case splitfirstmarkcode:
      printesc(S(643));
      break;

    case splitbotmarkcode:
      printesc(S(644));
      break;

    default:
      printesc(S(640));
      break;
    }
    break;
    /*412:*/

  case register_:   /*:412*/
    if (chrcode == intval)
      printesc(S(487));
    else if (chrcode == dimenval)
      printesc(S(511));
    else if (chrcode == glueval)
      printesc(S(407));
    else
      printesc(S(408));
    break;

  /*417:*/
  case setaux:
    if (chrcode == vmode)
      printesc(S(678));
    else
      printesc(S(677));
    break;

  case setpageint:
    if (chrcode == 0)
      printesc(S(679));
    else
      printesc(S(680));
    break;

  case setboxdimen:
    if (chrcode == widthoffset)
      printesc(S(681));
    else {
      if (chrcode == heightoffset)
	printesc(S(682));
      else
	printesc(S(683));
    }
    break;

  case lastitem:   /*:417*/
    switch (chrcode) {

    case intval:
      printesc(S(684));
      break;

    case dimenval:
      printesc(S(685));
      break;

    case glueval:
      printesc(S(686));
      break;

    case inputlinenocode:
      printesc(S(687));
      break;

    default:
      printesc(S(688));
      break;
    }
    break;
    /*469:*/

  case convert:   /*:469*/
    switch (chrcode) {

    case numbercode:
      printesc(S(744));
      break;

    case romannumeralcode:
      printesc(S(745));
      break;

    case stringcode:
      printesc(S(746));
      break;

    case meaningcode:
      printesc(S(747));
      break;

    case fontnamecode:
      printesc(S(748));
      break;

    default:
      printesc(S(749));
      break;
    }
    break;
    /*488:*/

  case iftest:   /*:488*/
    switch (chrcode) {

    case ifcatcode:
      printesc(S(765));
      break;

    case ifintcode:
      printesc(S(766));
      break;

    case ifdimcode:
      printesc(S(767));
      break;

    case ifoddcode:
      printesc(S(768));
      break;

    case ifvmodecode:
      printesc(S(769));
      break;

    case ifhmodecode:
      printesc(S(770));
      break;

    case ifmmodecode:
      printesc(S(771));
      break;

    case ifinnercode:
      printesc(S(772));
      break;

    case ifvoidcode:
      printesc(S(773));
      break;

    case ifhboxcode:
      printesc(S(774));
      break;

    case ifvboxcode:
      printesc(S(775));
      break;

    case ifxcode:
      printesc(S(776));
      break;

    case ifeofcode:
      printesc(S(777));
      break;

    case iftruecode:
      printesc(S(778));
      break;

    case iffalsecode:
      printesc(S(779));
      break;

    case ifcasecode:
      printesc(S(780));
      break;

    default:
      printesc(S(764));
      break;
    }
    break;
    /*492:*/

  case fiorelse:   /*:492*/
    if (chrcode == ficode)
      printesc(S(781));
    else if (chrcode == orcode)
      printesc(S(782));
    else
      printesc(S(783));
    break;
    /*781:*/

  case tabmark:
    if (chrcode == spancode)
      printesc(S(897));
    else {
      chrcmd(S(901));
/* p2c: tex1.p: Warning: Symbol 'CHRCMD' is not defined [221] */
    }
    break;

  case carret:   /*:781*/
    if (chrcode == crcode)
      printesc(S(898));
    else
      printesc(S(899));
    break;
    /*984:*/

  case setpagedimen:   /*:984*/
    switch (chrcode) {

    case 0:
      printesc(S(969));
      break;

    case 1:
      printesc(S(970));
      break;

    case 2:
      printesc(S(971));
      break;

    case 3:
      printesc(S(972));
      break;

    case 4:
      printesc(S(973));
      break;

    case 5:
      printesc(S(974));
      break;

    case 6:
      printesc(S(975));
      break;

    default:
      printesc(S(976));
      break;
    }
    break;
    /*1053:*/

  case stop:   /*:1053*/
    if (chrcode == 1)
      printesc(S(1025));
    else
      printesc(S(1024));
    break;
    /*1059:*/

  case hskip:
    switch (chrcode) {

    case skipcode:
      printesc(S(1026));
      break;

    case filcode:
      printesc(S(1027));
      break;

    case fillcode:
      printesc(S(1028));
      break;

    case sscode:
      printesc(S(1029));
      break;

    default:
      printesc(S(1030));
      break;
    }
    break;

  case vskip:
    switch (chrcode) {

    case skipcode:
      printesc(S(1031));
      break;

    case filcode:
      printesc(S(1032));
      break;

    case fillcode:
      printesc(S(1033));
      break;

    case sscode:
      printesc(S(1034));
      break;

    default:
      printesc(S(1035));
      break;
    }
    break;

  case mskip:
    printesc(S(349));
    break;

  case kern:
    printesc(S(352));
    break;

  case mkern:   /*:1059*/
    printesc(S(354));
    break;
    /*1072:*/

  case hmove:
    if (chrcode == 1)
      printesc(S(1053));
    else
      printesc(S(1054));
    break;

  case vmove:
    if (chrcode == 1)
      printesc(S(1055));
    else
      printesc(S(1056));
    break;

  case makebox:
    switch (chrcode) {

    case boxcode:
      printesc(S(420));
      break;

    case copycode:
      printesc(S(1057));
      break;

    case lastboxcode:
      printesc(S(1058));
      break;

    case vsplitcode:
      printesc(S(964));
      break;

    case vtopcode:
      printesc(S(1059));
      break;

    case vtopcode + vmode:
      printesc(S(966));
      break;

    default:
      printesc(S(1060));
      break;
    }
    break;

  case leadership:   /*:1072*/
    if (chrcode == aleaders)
      printesc(S(1062));
    else if (chrcode == cleaders)
      printesc(S(1063));
    else if (chrcode == xleaders)
      printesc(S(1064));
    else
      printesc(S(1061));
    break;
    /*1089:*/

  case startpar:   /*:1089*/
    if (chrcode == 0)
      printesc(S(1080));
    else
      printesc(S(1079));
    break;
    /*1108:*/

  case removeitem:
    if (chrcode == gluenode)
      printesc(S(1091));
    else if (chrcode == kernnode)
      printesc(S(1090));
    else
      printesc(S(1089));
    break;

  case unhbox:
    if (chrcode == copycode)
      printesc(S(1093));
    else
      printesc(S(1092));
    break;

  case unvbox:   /*:1108*/
    if (chrcode == copycode)
      printesc(S(1095));
    else
      printesc(S(1094));
    break;
    /*1115:*/

  case discretionary:   /*:1115*/
    if (chrcode == 1)
      printesc('-');
    else
      printesc(S(361));
    break;
    /*1143:*/

  case eqno:   /*:1143*/
    if (chrcode == 1)
      printesc(S(1127));
    else
      printesc(S(1126));
    break;
    /*1157:*/

  case mathcomp:
    switch (chrcode) {

    case ordnoad:
      printesc(S(866));
      break;

    case opnoad:
      printesc(S(867));
      break;

    case binnoad:
      printesc(S(868));
      break;

    case relnoad:
      printesc(S(869));
      break;

    case opennoad:
      printesc(S(870));
      break;

    case closenoad:
      printesc(S(871));
      break;

    case punctnoad:
      printesc(S(872));
      break;

    case innernoad:
      printesc(S(873));
      break;

    case undernoad:
      printesc(S(875));
      break;

    default:
      printesc(S(874));
      break;
    }
    break;

  case limitswitch:   /*:1157*/
    if (chrcode == limits)
      printesc(S(878));
    else if (chrcode == nolimits)
      printesc(S(879));
    else
      printesc(S(1128));
    break;
    /*1170:*/

  case mathstyle:   /*:1170*/
    printstyle(chrcode);
    break;

  /*1179:*/
  case above:   /*:1179*/
    switch (chrcode) {

    case overcode:
      printesc(S(1147));
      break;

    case atopcode:
      printesc(S(1148));
      break;

    case delimitedcode:
      printesc(S(1149));
      break;

    case delimitedcode + overcode:
      printesc(S(1150));
      break;

    case delimitedcode + atopcode:
      printesc(S(1151));
      break;

    default:
      printesc(S(1146));
      break;
    }
    break;
    /*1189:*/

  case leftright:   /*:1189*/
    if (chrcode == leftnoad)
      printesc(S(876));
    else
      printesc(S(877));
    break;
    /*1209:*/

  case prefix:
    if (chrcode == 1)
      printesc(S(1170));
    else if (chrcode == 2)
      printesc(S(1171));
    else
      printesc(S(1172));
    break;

  case def:   /*:1209*/
    if (chrcode == 0)
      printesc(S(1173));
    else if (chrcode == 1)
      printesc(S(1174));
    else if (chrcode == 2)
      printesc(S(1175));
    else
      printesc(S(1176));
    break;
    /*1220:*/

  case let:   /*:1220*/
    if (chrcode != normal)
      printesc(S(1191));
    else
      printesc(S(1190));
    break;
    /*1223:*/

  case shorthanddef:
    switch (chrcode) {

    case chardefcode:
      printesc(S(1192));
      break;

    case mathchardefcode:
      printesc(S(1193));
      break;

    case countdefcode:
      printesc(S(1194));
      break;

    case dimendefcode:
      printesc(S(1195));
      break;

    case skipdefcode:
      printesc(S(1196));
      break;

    case muskipdefcode:
      printesc(S(1197));
      break;

    default:
      printesc(S(1198));
      break;
    }
    break;

  case chargiven:
    printesc(S(524));
    printhex(chrcode);
    break;

  case mathgiven:
    printesc(S(535));
    printhex(chrcode);
    break;

  /*:1223*/
  /*1231:*/
  case defcode:
    if (chrcode == catcodebase)
      printesc(S(426));
    else if (chrcode == mathcodebase)
      printesc(S(430));
    else if (chrcode == lccodebase)
      printesc(S(427));
    else if (chrcode == uccodebase)
      printesc(S(428));
    else if (chrcode == sfcodebase)
      printesc(S(429));
    else
      printesc(S(488));
    break;

  case deffamily:   /*:1231*/
    printsize(chrcode - mathfontbase);
    break;
    /*1251:*/

  case hyphdata:   /*:1251*/
    if (chrcode == 1)
      printesc(S(952));
    else
      printesc(S(940));
    break;
    /*1255:*/

  case assignfontint:   /*:1255*/
    if (chrcode == 0)
      printesc(S(1216));
    else
      printesc(S(1217));
    break;
    /*1261:*/

  case setfont:
    print(S(1225));
    slowprint(fontname[chrcode - fontbase]);
    if (fontsize[chrcode - fontbase] != fontdsize[chrcode - fontbase]) {
      print(S(267));
      printscaled(fontsize[chrcode - fontbase]);
      print(S(268));
    }
    break;

  /*:1261*/
  /*1263:*/
  case setinteraction:   /*:1263*/
    switch (chrcode) {

    case batchmode:
      printesc(S(288));
      break;

    case nonstopmode:
      printesc(S(289));
      break;

    case scrollmode:
      printesc(S(290));
      break;

    default:
      printesc(S(1226));
      break;
    }
    break;
    /*1273:*/

  case instream:   /*:1273*/
    if (chrcode == 0)
      printesc(S(1228));
    else
      printesc(S(1227));
    break;
    /*1278:*/

  case message:   /*:1278*/
    if (chrcode == 0)
      printesc(S(1229));
    else
      printesc(S(1230));
    break;
    /*1287:*/

  case caseshift:   /*:1287*/
    if (chrcode == lccodebase)
      printesc(S(1236));
    else
      printesc(S(1237));
    break;
    /*1292:*/

  case xray:   /*:1292*/
    switch (chrcode) {

    case showboxcode:
      printesc(S(1239));
      break;

    case showthecode:
      printesc(S(1240));
      break;

    case showlists:
      printesc(S(1241));
      break;

    default:
      printesc(S(1238));
      break;
    }
    break;
    /*1295:*/

  case undefinedcs:
    print(S(1248));
    break;

  case call:
    print(S(1249));
    break;

  case longcall:
    printesc(S(1250));
    break;

  case outercall:
    printesc(S(1251));
    break;

  case longoutercall:
    printesc(S(1170));
    printesc(S(1251));
    break;

  case endtemplate:   /*:1295*/
    printesc(S(1252));
    break;
    /*1346:*/

  case extension:
    switch (chrcode) {

    case opennode:
      printesc(S(1284));
      break;

    case writenode:
      printesc(S(603));
      break;

    case closenode:
      printesc(S(1285));
      break;

    case specialnode:
      printesc(S(1286));
      break;

    case immediatecode:
      printesc(S(1287));
      break;

    case setlanguagecode:
      printesc(S(1288));
      break;

    default:
      print(S(1289));
      break;
    }/*:1346*/
    break;

  default:
    print(S(577));
    break;
  }
}


/*:298*/
/*_STAT*/
Static void showeqtb(halfword n)
{
  if (n < activebase) {
    printchar('?');
    return;
  }
  if (n < gluebase) {
    /*
223:*/
    sprintcs(n);
    printchar('=');
    printcmdchr(*fooeqtype(n), *fooequiv(n));
    if (*fooeqtype(n) >= call) {
      printchar(':');
      showtokenlist(*foolink(*fooequiv(n)), 0, 32);
    }
    return;
  }  /*:223*/
  if (n < localbase) {   /*229:*/
    if (n < skipbase) {
      printskipparam(n - gluebase);
      printchar('=');
      if (n < gluebase + thinmuskipcode)
	printspec(*fooequiv(n), S(268));
      else
	printspec(*fooequiv(n), S(350));
      return;
    }
    if (n < muskipbase) {
      printesc(S(407));
      printint(n - skipbase);
      printchar('=');
      printspec(*fooequiv(n), S(268));
      return;
    }
    printesc(S(408));
    printint(n - muskipbase);
    printchar('=');
    printspec(*fooequiv(n), S(350));
    return;
  }
  if (n < intbase) {   /*233:*/
    if (n == parshapeloc) {
      printesc(S(419));
      printchar('=');
      if (parshapeptr == 0)
	printchar('0');
      else
	printint(*fooinfo(parshapeptr));
      return;
    }
    if (n < toksbase) {
      printcmdchr(assigntoks, n);
      printchar('=');
      if (*fooequiv(n) != 0)
	showtokenlist(*foolink(*fooequiv(n)), 0, 32);
      return;
    }
    if (n < boxbase) {
      printesc(S(418));
      printint(n - toksbase);
      printchar('=');
      if (*fooequiv(n) != 0)
	showtokenlist(*foolink(*fooequiv(n)), 0, 32);
      return;
    }
    if (n < curfontloc) {
      printesc(S(420));
      printint(n - boxbase);
      printchar('=');
      if (*fooequiv(n) == 0) {
	print(S(421));
	return;
      }
      depththreshold = 0;
      breadthmax = 1;
      shownodelist(*fooequiv(n));
      return;
    }
    if (n < catcodebase) {   /*234:*/
      if (n == curfontloc)
	print(S(422));
      else if (n < mathfontbase + 16) {
	printesc(S(423));
	printint(n - mathfontbase);
      } else if (n < mathfontbase + 32) {
	printesc(S(424));
	printint(n - mathfontbase - 16);
      } else {
	printesc(S(425));
	printint(n - mathfontbase - 32);
      }
      printchar('=');
      printesc(hash[fontidbase + *fooequiv(n) - hashbase].rh);
      return;
    }
    /*:234*/
    if (n < mathcodebase) {
      if (n < lccodebase) {
	printesc(S(426));
	printint(n - catcodebase);
      } else if (n < uccodebase) {
	printesc(S(427));
	printint(n - lccodebase);
      } else if (n < sfcodebase) {
	printesc(S(428));
	printint(n - uccodebase);
      } else {
	printesc(S(429));
	printint(n - sfcodebase);
      }
      printchar('=');
      printint(*fooequiv(n));
      return;
    }
    printesc(S(430));
    printint(n - mathcodebase);
    printchar('=');
    printint(*fooequiv(n));
    return;
  }
  if (n < dimenbase) {   /*242:*/
    if (n < countbase)
      printparam(n - intbase);
    else if (n < delcodebase) {
      printesc(S(487));
      printint(n - countbase);
    } else {
      printesc(S(488));
      printint(n - delcodebase);
    }
    printchar('=');
    printint(eqtb[n - activebase].int_);
    return;
  }  /*:242*/
  if (n > eqtbsize) {   /*251:*/
    printchar('?');
    return;
  }
  /*:251*/
  if (n < scaledbase)
    printlengthparam(n - dimenbase);
  else {
    printesc(S(511));
    printint(n - scaledbase);
  }
  printchar('=');
  printscaled(eqtb[n - activebase].sc);
  print(S(268));

  /*:229*/
  /*235:*/
  /*:235*/
  /*:233*/
}


/*_ENDSTAT*/
/*:252*/
/*259:*/
Static halfword idlookup(long j, long l)
{   /*261:*/
  long h, d;
  pointer p, k;

  h = buffer[j];
  for (k = j + 1; k < j + l; k++) {   /*:261*/
    h += h + buffer[k];
    while (h >= hashprime)
      h -= hashprime;
  }
  p = h + hashbase;
  while (true) {
    if (*footext(p) > 0) {
      if (flength(*footext(p)) == l) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
	if (streqbuf(*footext(p), j))
	  goto _Lfound;
      }
    }
    if (*foonext(p) == 0) {
      if (nonewcontrolsequence)
	p = undefinedcontrolsequence;
      else  /*260:*/
      {   /*:260*/
	if (*footext(p) > 0) {
	  do {
	    if (hashisfull) {
/* p2c: tex1.p: Warning: Symbol 'HASHISFULL' is not defined [221] */
	      overflow(S(514), hashsize);
	    }
	    hashused--;
	  } while (*footext(hashused) != 0);
	  *foonext(p) = hashused;
	  p = hashused;
	}
	if (poolptr + l > poolsize)
	  overflow(257, poolsize - initpoolptr);
	d = curlength;
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
	while (poolptr > strstart[strptr]) {
	  poolptr--;
	  strpool[poolptr + l] = strpool[poolptr];
	}
	for (k = j; k < j + l; k++) {
	  appendchar(buffer[k]);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	}
	*footext(p) = makestring();
	poolptr += d;   /*_STAT*/
	cscount++;   /*_ENDSTAT*/
      }
      goto _Lfound;
    }
    p = *foonext(p);
  }
_Lfound:
  return p;
}


/*:259*/
/*264:*/
Static void primitive(strnumber s, quarterword c, halfword o)
{
  poolpointer k;
  smallnumber j, l;

  if (s < 256)
    curval = s + singlebase;
  else {
    k = strstart[s];
    l = strstart[s + 1] - k;
    for (j = 0; j < l; j++)
      buffer[j] = strpool[k + j];
    curval = idlookup(0, l);
    flushstring();
/* p2c: tex1.p: Warning: Symbol 'FLUSHSTRING' is not defined [221] */
    *footext(curval) = s;
  }
  *fooeqlevel(curval) = levelone;
  *fooeqtype(curval) = c;
  *fooequiv(curval) = o;
}


/*:264*/
/*274:*/
Static void newsavelevel(groupcode c)
{
  if (saveptr > maxsavestack) {
    maxsavestack = saveptr;
    if (maxsavestack > savesize - 6)
      overflow(259, savesize);
  }
  *foosavetype(saveptr) = levelboundary;
  *foosavelevel(saveptr) = curgroup;
  *foosaveindex(saveptr) = curboundary;
  if (curlevel == maxquarterword)
    overflow(S(552), maxquarterword - minquarterword);
  curboundary = saveptr;
  curlevel++;
  saveptr++;
  curgroup = c;
}


/*:274*/
/*275:*/
Static void eqdestroy(memoryword w)
{
  pointer q;

  switch (*fooeqtypefield(w)) {

  case call:
  case longcall:
  case outercall:
  case longoutercall:
    deletetokenref(*fooequivfield(w));
    break;

  case glueref:
    deleteglueref(*fooequivfield(w));
    break;

  case shaperef:
    q = *fooequivfield(w);
    if (q != 0)
      freenode(q, *fooinfo(q) + *fooinfo(q) + 1);
    break;

  case boxref:
    flushnodelist(*fooequivfield(w));
    break;
  }
}


/*:275*/
/*276:*/
Static void eqsave(halfword p, quarterword l)
{
  if (saveptr > maxsavestack) {
    maxsavestack = saveptr;
    if (maxsavestack > savesize - 6)
      overflow(259, savesize);
  }
  if (l == levelzero)
    *foosavetype(saveptr) = restorezero;
  else {
    savestack[saveptr] = eqtb[p - activebase];
    saveptr++;
    *foosavetype(saveptr) = restoreoldvalue;
  }
  *foosavelevel(saveptr) = l;
  *foosaveindex(saveptr) = p;
  saveptr++;
}


/*:276*/
/*277:*/
Static void eqdefine(halfword p, quarterword t, halfword e)
{
  if (*fooeqlevel(p) == curlevel)
    eqdestroy(eqtb[p - activebase]);
  else if (curlevel > levelone)
    eqsave(p, *fooeqlevel(p));
  *fooeqlevel(p) = curlevel;
  *fooeqtype(p) = t;
  *fooequiv(p) = e;
}


/*:277*/
/*278:*/
Static void eqworddefine(halfword p, long w)
{
  if (xeqlevel[p - intbase] != curlevel) {
    eqsave(p, xeqlevel[p - intbase]);
    xeqlevel[p - intbase] = curlevel;
  }
  eqtb[p - activebase].int_ = w;
}


/*:278*/
/*279:*/
Static void geqdefine(halfword p, quarterword t, halfword e)
{
  eqdestroy(eqtb[p - activebase]);
  *fooeqlevel(p) = levelone;
  *fooeqtype(p) = t;
  *fooequiv(p) = e;
}


Static void geqworddefine(halfword p, long w)
{
  eqtb[p - activebase].int_ = w;
  xeqlevel[p - intbase] = levelone;
}


/*:279*/
/*280:*/
Static void saveforafter(halfword t)
{
  if (curlevel <= levelone)
    return;
  if (saveptr > maxsavestack) {
    maxsavestack = saveptr;
    if (maxsavestack > savesize - 6)
      overflow(259, savesize);
  }
  *foosavetype(saveptr) = inserttoken;
  *foosavelevel(saveptr) = levelzero;
  *foosaveindex(saveptr) = t;
  saveptr++;
}


/*:280*/
/*281:*/
/*284:*/
/*_STAT*/
Static void restoretrace(halfword p, strnumber s)
{
  begindiagnostic();
  printchar('{');
  print(s);
  printchar(' ');
  showeqtb(p);
  printchar('}');
  enddiagnostic(false);
}


/*_ENDSTAT*/
/*:284*/
Static void backinput(void);


Static void unsave(void)
{
  pointer p;
  quarterword l;
  halfword t;

  if (curlevel <= levelone) {
    confusion(S(553));
    return;
  }
  curlevel--;   /*282:*/
  while (true) {
    saveptr--;
    if (*foosavetype(saveptr) == levelboundary)
      goto _Ldone;
    p = *foosaveindex(saveptr);
    if (*foosavetype(saveptr) == inserttoken) {   /*326:*/
      t = curtok;
      curtok = p;
      backinput();
      curtok = t;
      continue;
    }  /*:326*/
    if (*foosavetype(saveptr) == restoreoldvalue) {   /*283:*/
      l = *foosavelevel(saveptr);
      saveptr--;
    } else
      savestack[saveptr] = eqtb[undefinedcontrolsequence - activebase];
    if (p < intbase) {
      if (*fooeqlevel(p) == levelone) {
	eqdestroy(savestack[saveptr]);   /*_STAT*/
	if (tracingrestores > 0)   /*_ENDSTAT*/
	  restoretrace(p, S(554));
      } else {
	eqdestroy(eqtb[p - activebase]);
	eqtb[p - activebase] = savestack[saveptr];   /*_STAT*/
	if (tracingrestores > 0)   /*_ENDSTAT*/
	  restoretrace(p, S(555));
      }
      continue;
    }
    if (xeqlevel[p - intbase] != levelone) {
      eqtb[p - activebase] = savestack[saveptr];
      xeqlevel[p - intbase] = l;   /*_STAT*/
      if (tracingrestores > 0)   /*_ENDSTAT*/
	restoretrace(p, S(555));
    } else   /*:283*/
    {  /*_STAT*/
      if (tracingrestores > 0)   /*_ENDSTAT*/
	restoretrace(p, S(554));
    }
  }
_Ldone:
  curgroup = *foosavelevel(saveptr);
  curboundary = *foosaveindex(saveptr);   /*:282*/
}


/*:281*/
/*288:*/
Static void preparemag(void)
{
  if (magset > 0 && mag != magset) {
    printnl(258);
    print(S(557));
    printint(mag);
    print(S(558));
    printnl(S(559));
    helpptr = 2;
    helpline[1] = S(560);
    helpline[0] = S(561);
    interror(magset);
    geqworddefine(intbase + magcode, magset);
  }
  if (mag <= 0 || mag > 32768L) {
    printnl(258);
    print(S(562));
    helpptr = 1;
    helpline[0] = S(563);
    interror(mag);
    geqworddefine(intbase + magcode, 1000);
  }
  magset = mag;
}


/*:288*/
/*295:*/
Static void tokenshow(halfword p)
{
  if (p != 0)
    showtokenlist(*foolink(p), 0, 10000000L);
}  /*:295*/


/*296:*/
Static void printmeaning(void)
{
  printcmdchr(curcmd, curchr);
  if (curcmd >= call) {
    printchar(':');
    println();
    tokenshow(curchr);
    return;
  }
  if (curcmd != topbotmark)
    return;
  printchar(':');
  println();
  tokenshow(curmark[curchr - topmarkcode]);
}


/*:296*/
/*299:*/
Static void showcurcmdchr(void)
{
  begindiagnostic();
  printnl('{');
  if (mode != shownmode) {
    printmode(mode);
    print(S(578));
    shownmode = mode;
  }
  printcmdchr(curcmd, curchr);
  printchar('}');
  enddiagnostic(false);
}


/*:299*/
/*311:*/
Static void showcontext(void)
{   /*:315*/
  char oldsetting;
  long nn;
  boolean bottomline;   /*315:*/
  short i;
  short j;
  char l;
  long m;
  char n;
  long p, q, FORLIM;

  baseptr = inputptr;
  inputstack[baseptr] = curinput;
  nn = -1;
  bottomline = false;
  while (true) {
    curinput = inputstack[baseptr];
    if (state != tokenlist) {
      if (name > 17 || baseptr == 0)
	bottomline = true;
    }
    if (baseptr == inputptr || bottomline || nn < errorcontextlines) {
	  /*312:*/
	    if (baseptr == inputptr || state != tokenlist ||
		tokentype != backedup || loc != 0) {
	tally = 0;
	oldsetting = selector;
	if (state != tokenlist) {  /*313:*/
	  if (name <= 17) {   /*:313*/
	    if (terminalinput) {
/* p2c: tex1.p: Warning: Symbol 'TERMINALINPUT' is not defined [221] */
	      if (baseptr == 0)
		printnl(S(584));
	      else
		printnl(S(585));
	    } else {
	      printnl(S(586));
	      if (name == 17)
		printchar('*');
	      else
		printint(name - 1);
	      printchar('>');
	    }
	  } else {
	    printnl(S(587));
	    printint(line);
	  }
	  printchar(' ');   /*318:*/
	  beginpseudoprint();
/* p2c: tex1.p: Warning: Symbol 'BEGINPSEUDOPRINT' is not defined [221] */
	  if (buffer[limit] == endlinechar)
	    j = limit;
	  else
	    j = limit + 1;
	  if (j > 0) {
	    for (i = start; i < j; i++) {   /*:318*/
	      if (i == loc) {
		settrickcount();
/* p2c: tex1.p: Warning: Symbol 'SETTRICKCOUNT' is not defined [221] */
	      }
	      print(buffer[i]);
	    }
	  }
	} else {  /*314:*/
	  switch (tokentype) {   /*:314*/

	  case parameter:
	    printnl(S(588));
	    break;

	  case utemplate:
	  case vtemplate:
	    printnl(S(589));
	    break;

	  case backedup:
	    if (loc == 0)
	      printnl(S(590));
	    else
	      printnl(S(591));
	    break;

	  case inserted:
	    printnl(S(592));
	    break;

	  case macro:
	    println();
	    printcs(name);
	    break;

	  case outputtext:
	    printnl(S(593));
	    break;

	  case everypartext:
	    printnl(S(594));
	    break;

	  case everymathtext:
	    printnl(S(595));
	    break;

	  case everydisplaytext:
	    printnl(S(596));
	    break;

	  case everyhboxtext:
	    printnl(S(597));
	    break;

	  case everyvboxtext:
	    printnl(S(598));
	    break;

	  case everyjobtext:
	    printnl(S(599));
	    break;

	  case everycrtext:
	    printnl(S(600));
	    break;

	  case marktext:
	    printnl(S(601));
	    break;

	  case writetext:
	    printnl(S(602));
	    break;

	  default:
	    printnl('?');
	    break;
	  }
	  /*319:*/
	  beginpseudoprint();
/* p2c: tex1.p: Warning: Symbol 'BEGINPSEUDOPRINT' is not defined [221] */
	  if (tokentype < macro)
	    showtokenlist(start, loc, 100000L);
	  else   /*:319*/
	    showtokenlist(*foolink(start), loc, 100000L);
	}
	selector = oldsetting;   /*317:*/
	if (trickcount == 1000000L) {
	  settrickcount();
/* p2c: tex1.p: Warning: Symbol 'SETTRICKCOUNT' is not defined [221] */
	}
	if (tally < trickcount)
	  m = tally - firstcount;
	else
	  m = trickcount - firstcount;
	if (l + firstcount <= halferrorline) {
	  p = 0;
	  n = l + firstcount;
	} else {
	  print(S(291));
	  p = l + firstcount - halferrorline + 3;
	  n = halferrorline;
	}
	FORLIM = firstcount;
	for (q = p; q < FORLIM; q++) {
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
	  printchar(trickbuf[q % errorline]);
	}
	println();
	for (q = 1; q <= n; q++)
	  printchar(' ');
	if (m + n <= errorline)
	  p = firstcount + m;
	else
	  p = firstcount + errorline - n - 3;
	for (q = firstcount; q < p; q++) {
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
	  printchar(trickbuf[q % errorline]);
	}
	if (m + n > errorline)   /*:317*/
	  print(S(291));
	nn++;
      }
    }  /*:312*/
    else if (nn == errorcontextlines) {
      printnl(S(291));
      nn++;
    }
    if (bottomline)
      goto _Ldone;
    baseptr--;
  }
_Ldone:
  curinput = inputstack[inputptr];
}


/*:311*/
/*323:*/
Static void begintokenlist(halfword p, quarterword t)
{
  if (inputptr > maxinstack) {
    maxinstack = inputptr;
    if (inputptr == stacksize)
      overflow(260, stacksize);
  }
  inputstack[inputptr] = curinput;
  inputptr++;
  state = tokenlist;
  start = p;
  tokentype = t;
  if (t < macro) {
    loc = p;
    return;
  }
  addtokenref(p);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
  if (t == macro) {
    paramstart = paramptr;
    return;
  }
  loc = *foolink(p);
  if (tracingmacros <= 1)
    return;
  begindiagnostic();
  printnl(S(266));
  switch (t) {

  case marktext:
    printesc(S(363));
    break;

  case writetext:
    printesc(S(603));
    break;

  default:
    printcmdchr(assigntoks, t - outputtext + outputroutineloc);
    break;
  }
  print(S(566));
  tokenshow(p);
  enddiagnostic(false);
}


/*:323*/
/*324:*/
Static void endtokenlist(void)
{
  if (tokentype >= backedup) {
    if (tokentype <= inserted)
      flushlist(start);
    else {
      deletetokenref(start);
      if (tokentype == macro) {
	while (paramptr > paramstart) {
	  paramptr--;
	  flushlist(paramstack[paramptr]);
	}
      }
    }
  } else if (tokentype == utemplate) {
    if (alignstate > 500000L)
      alignstate = 0;
    else
      fatalerror(S(604));
  }
  popinput();
/* p2c: tex1.p: Warning: Symbol 'POPINPUT' is not defined [221] */
  checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
}


/*:324*/
/*325:*/
Static void backinput(void)
{
  pointer p;

  while (state == tokenlist && loc == 0)
    endtokenlist();
  p = getavail();
  *fooinfo(p) = curtok;
  if (curtok < rightbracelimit) {
    if (curtok < leftbracelimit)
      alignstate--;
    else
      alignstate++;
  }
  if (inputptr > maxinstack) {
    maxinstack = inputptr;
    if (inputptr == stacksize)
      overflow(260, stacksize);
  }
  inputstack[inputptr] = curinput;
  inputptr++;
  state = tokenlist;
  start = p;
  tokentype = backedup;
  loc = p;
}


/*:325*/
/*327:*/
Static void backerror(void)
{
  OKtointerrupt = false;
  backinput();
  OKtointerrupt = true;
  error();
}


Static void inserror(void)
{
  OKtointerrupt = false;
  backinput();
  tokentype = inserted;
  OKtointerrupt = true;
  error();
}


/*:327*/
/*328:*/
Static void beginfilereading(void)
{
  if (inopen == maxinopen)
    overflow(S(605), maxinopen);
  if (first == bufsize)
    overflow(S(272), bufsize);
  inopen++;
  if (inputptr > maxinstack) {
    maxinstack = inputptr;
    if (inputptr == stacksize)
      overflow(260, stacksize);
  }
  inputstack[inputptr] = curinput;
  inputptr++;
  iindex = inopen;
  linestack[iindex - 1] = line;
  start = first;
  state = midline;
  name = 0;
}  /*:328*/


/*329:*/
Static void endfilereading(void)
{
  first = start;
  line = linestack[iindex - 1];
  if (name > 17)
    aclose(&curfile);
  popinput();
/* p2c: tex1.p: Warning: Symbol 'POPINPUT' is not defined [221] */
  inopen--;
}


/*:329*/
/*330:*/
Static void clearforerrorprompt(void)
{
  while (state != tokenlist && terminalinput && inputptr > 0 && loc > limit) {
/* p2c: tex1.p: Warning: Symbol 'TERMINALINPUT' is not defined [221] */
    endfilereading();
  }
  println();
}


/*:330*/
/*336:*/
Static void checkoutervalidity(void)
{
  pointer p, q;

  if (scannerstatus == normal)
    return;
  deletionsallowed = false;   /*337:*/
  if (curcs != 0) {   /*:337*/
    if (state == tokenlist || name < 1 || name > 17) {
      p = getavail();
      *fooinfo(p) = cstokenflag + curcs;
      backlist(p);
/* p2c: tex1.p: Warning: Symbol 'BACKLIST' is not defined [221] */
    }
    curcmd = spacer;
    curchr = ' ';
  }
  if (scannerstatus > skipping) {   /*338:*/
    runaway();
    if (curcs == 0) {
      printnl(258);
      print(S(613));
    } else {
      curcs = 0;
      printnl(258);
      print(S(614));
    }
    print(S(615));   /*339:*/
    p = getavail();
    switch (scannerstatus) {

    case defining:
      print(S(580));
      *fooinfo(p) = rightbracetoken + '}';
      break;

    case matching:
      print(S(621));
      *fooinfo(p) = partoken;
      longstate = outercall;
      break;

    case aligning:
      print(S(582));
      *fooinfo(p) = rightbracetoken + '}';
      q = p;
      p = getavail();
      *foolink(p) = q;
      *fooinfo(p) = cstokenflag + frozencr;
      alignstate = -1000000L;
      break;

    case absorbing:
      print(S(583));
      *fooinfo(p) = rightbracetoken + '}';
      break;
    }
    inslist(p);   /*:339*/
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
    print(S(616));
    sprintcs(warningindex);
    helpptr = 4;
    helpline[3] = S(617);
    helpline[2] = S(618);
    helpline[1] = S(619);
    helpline[0] = S(620);
    error();
  } else {
    printnl(258);
    print(S(607));
    printcmdchr(iftest, curif);
    print(S(608));
    printint(skipline);
    helpptr = 3;
    helpline[2] = S(609);
    helpline[1] = S(610);
    helpline[0] = S(611);
    if (curcs != 0)
      curcs = 0;
    else
      helpline[2] = S(612);
    curtok = cstokenflag + frozenfi;
    inserror();
  }
  /*:338*/
  deletionsallowed = true;
}


/*:336*/
/*340:*/
Static void firmuptheline(void);


/*:340*/
/*341:*/
Static void getnext(void)
{
  short k;
  halfword t;
  char cat;
  ASCIIcode c, cc;
  char d;

_Lrestart:
  curcs = 0;
  if (state != tokenlist) {   /*343:*/
_Lswitch__:
    if (loc > limit) {
      state = newline;   /*360:*/
      if (name > 17) {   /*362:*/
	line++;
	first = start;
	if (!forceeof) {
	  if (inputln(&curfile, true))
	    firmuptheline();
	  else
	    forceeof = true;
	}
	if (forceeof) {
	  printchar(')');
	  openparens--;
	  fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
	  forceeof = false;
	  endfilereading();
	  checkoutervalidity();
	  goto _Lrestart;
	}
	if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
	  limit--;
	} else
	  buffer[limit] = endlinechar;
	first = limit + 1;
	loc = start;
      }  /*:362*/
      else {   /*:360*/
	if (~terminalinput) {
/* p2c: tex1.p: Warning: Symbol 'TERMINALINPUT' is not defined [221] */
	  curcmd = 0;
	  curchr = 0;
	  goto _Lexit;
	}
	if (inputptr > 0) {
	  endfilereading();
	  goto _Lrestart;
	}
	if (selector < logonly)
	  openlogfile();
	if (interaction > nonstopmode) {
	  if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
	    limit++;
	  }
	  if (limit == start)
	    printnl(S(625));
	  println();
	  first = start;
	  print('*');
	  terminput();
	  limit = last;
	  if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
	    limit--;
	  } else
	    buffer[limit] = endlinechar;
	  first = limit + 1;
	  loc = start;
	} else
	  fatalerror(S(626));
      }
      checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
      goto _Lswitch__;
    }
    curchr = buffer[loc];
    loc++;
_Lreswitch:
    curcmd = *foocatcode(curchr);   /*344:*/
    switch (state + curcmd) {   /*345:*/

    case midline + ignore:
    case skipblanks + ignore:
    case newline + ignore:
    case skipblanks + spacer:
    case newline + spacer:   /*:345*/
      goto _Lswitch__;
      break;

    case midline:
    case skipblanks:
    case newline:   /*354:*/
      if (loc > limit)
	curcs = nullcs;
      else {
_Lstartcs_:
	k = loc;
	curchr = buffer[k];
	cat = *foocatcode(curchr);
	k++;
	if (cat == letter)
	  state = skipblanks;
	else if (cat == spacer)
	  state = skipblanks;
	else
	  state = midline;
	if (cat == letter && k <= limit) {   /*356:*/
	  do {
	    curchr = buffer[k];
	    cat = *foocatcode(curchr);
	    k++;
	  } while (cat == letter && k <= limit);   /*355:*/
	  if (buffer[k] == curchr) {   /*:355*/
	    if (cat == supmark) {
	      if (k < limit) {
		c = buffer[k + 1];
		if (c < 128) {
		  d = 2;
		  if (ishex(c)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
		    if (k + 2 <= limit) {
		      cc = buffer[k + 2];
		      if (ishex(cc)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
			d++;
		      }
		    }
		  }
		  if (d > 2) {
		    hextocurchr();
/* p2c: tex1.p: Warning: Symbol 'HEXTOCURCHR' is not defined [221] */
		    buffer[k - 1] = curchr;
		  } else if (c < 64)
		    buffer[k - 1] = c + 64;
		  else
		    buffer[k - 1] = c - 64;
		  limit -= d;
		  first -= d;
		  while (k <= limit) {
		    buffer[k] = buffer[k + d];
		    k++;
		  }
		  goto _Lstartcs_;
		}
	      }
	    }
	  }
	  if (cat != letter)
	    k--;
	  if (k > loc + 1) {
	    curcs = idlookup(loc, k - loc);
	    loc = k;
	    goto _Lfound;
	  }
	} else  /*355:*/
	{   /*:355*/
	  if (buffer[k] == curchr) {
	    if (cat == supmark) {
	      if (k < limit) {
		c = buffer[k + 1];
		if (c < 128) {
		  d = 2;
		  if (ishex(c)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
		    if (k + 2 <= limit) {
		      cc = buffer[k + 2];
		      if (ishex(cc)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
			d++;
		      }
		    }
		  }
		  if (d > 2) {
		    hextocurchr();
/* p2c: tex1.p: Warning: Symbol 'HEXTOCURCHR' is not defined [221] */
		    buffer[k - 1] = curchr;
		  } else if (c < 64)
		    buffer[k - 1] = c + 64;
		  else
		    buffer[k - 1] = c - 64;
		  limit -= d;
		  first -= d;
		  while (k <= limit) {
		    buffer[k] = buffer[k + d];
		    k++;
		  }
		  goto _Lstartcs_;
		}
	      }
	    }
	  }
	}
	/*:356*/
	curcs = singlebase + buffer[loc];
	loc++;
      }
_Lfound:
      curcmd = *fooeqtype(curcs);
      curchr = *fooequiv(curcs);
      if (curcmd >= outercall)
	checkoutervalidity();
      break;
      /*:354*/

    case midline + activechar:
    case skipblanks + activechar:
    case newline + activechar:   /*353:*/
      curcs = curchr + activebase;
      curcmd = *fooeqtype(curcs);
      curchr = *fooequiv(curcs);
      state = midline;
      if (curcmd >= outercall)
	checkoutervalidity();
      break;
      /*:353*/

    case midline + supmark:
    case skipblanks + supmark:
    case newline + supmark:   /*352:*/
      if (curchr == buffer[loc]) {
	if (loc < limit) {
	  c = buffer[loc + 1];
	  if (c < 128) {
	    loc += 2;
	    if (ishex(c)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
	      if (loc <= limit) {
		cc = buffer[loc];
		if (ishex(cc)) {
/* p2c: tex1.p: Warning: Symbol 'ISHEX' is not defined [221] */
		  loc++;
		  hextocurchr();
/* p2c: tex1.p: Warning: Symbol 'HEXTOCURCHR' is not defined [221] */
		  goto _Lreswitch;
		}
	      }
	    }
	    if (c < 64)
	      curchr = c + 64;
	    else
	      curchr = c - 64;
	    goto _Lreswitch;
	  }
	}
      }
      state = midline;
      break;
      /*:352*/

    case midline + invalidchar:
    case skipblanks + invalidchar:
    case newline + invalidchar:   /*346:*/
      printnl(258);
      print(S(622));
      helpptr = 2;
      helpline[1] = S(623);
      helpline[0] = S(624);
      deletionsallowed = false;
      error();
      deletionsallowed = true;
      goto _Lrestart;
      break;
      /*:346*/
      /*347:*/

    case midline + spacer:   /*349:*/
      state = skipblanks;
      curchr = ' ';
      break;
      /*:349*/

    case midline + carret:   /*348:*/
      loc = limit + 1;
      curcmd = spacer;
      curchr = ' ';
      break;
      /*:348*/

    case skipblanks + carret:
    case midline + comment:
    case skipblanks + comment:
    case newline + comment:   /*:350*/
      /*
350:*/
      loc = limit + 1;
      goto _Lswitch__;
      break;

    case newline + carret:   /*351:*/
      loc = limit + 1;
      curcs = parloc;
      curcmd = *fooeqtype(curcs);
      curchr = *fooequiv(curcs);
      if (curcmd >= outercall)
	checkoutervalidity();
      break;
      /*:351*/

    case midline + leftbrace:
      alignstate++;
      break;

    case skipblanks + leftbrace:
    case newline + leftbrace:
      state = midline;
      alignstate++;
      break;

    case midline + rightbrace:
      alignstate--;
      break;

    case skipblanks + rightbrace:
    case newline + rightbrace:
      state = midline;
      alignstate--;
      break;

    case skipblanks + mathshift:
    case skipblanks + tabmark:
    case skipblanks + macparam:
    case skipblanks + submark:
    case skipblanks + letter:
    case skipblanks + otherchar:
    case newline + mathshift:
    case newline + tabmark:
    case newline + macparam:
    case newline + submark:
    case newline + letter:
    case newline + otherchar:   /*:347*/
      state = midline;
      break;
    }
    /*:344*/
  } else {  /*357:*/
    if (loc == 0) {
      endtokenlist();
      goto _Lrestart;
    }
    t = *fooinfo(loc);
    loc = *foolink(loc);
    if (t >= cstokenflag) {
      curcs = t - cstokenflag;
      curcmd = *fooeqtype(curcs);
      curchr = *fooequiv(curcs);
      if (curcmd >= outercall) {
	if (curcmd == dontexpand) {   /*358:*/
	  curcs = *fooinfo(loc) - cstokenflag;
	  loc = 0;
	  curcmd = *fooeqtype(curcs);
	  curchr = *fooequiv(curcs);
	  if (curcmd > maxcommand) {
	    curcmd = relax;
	    curchr = noexpandflag;
	  }
	} else
	  checkoutervalidity();
	/*:358*/
      }
    } else {
      curcmd = t / 256;
      curchr = t & 255;
      switch (curcmd) {

      case leftbrace:
	alignstate++;
	break;

      case rightbrace:
	alignstate--;
	break;

      case outparam:   /*359:*/
	begintokenlist(paramstack[paramstart + curchr - 1], parameter);
	goto _Lrestart;
	break;
	/*:359*/
      }
    }
  }
  /*:343*/
  /*342:*/
  if (curcmd <= carret) {
    if (curcmd >= tabmark) {
      if (alignstate == 0) {   /*:789*/
	/*789:
*/
	if (scannerstatus == aligning)
	  fatalerror(S(604));
	curcmd = *fooextrainfo(curalign);
	*fooextrainfo(curalign) = curchr;
	if (curcmd == omit)
	  begintokenlist(omittemplate, vtemplate);
	else
	  begintokenlist(*foovpart(curalign), vtemplate);
	alignstate = 1000000L;
	goto _Lrestart;
      }
      /*:342*/
    }
  }
_Lexit: ;

  /*:357*/
}


/*:341*/
/*363:*/
Static void firmuptheline(void)
{
  short k, FORLIM;

  limit = last;
  if (pausing <= 0)
    return;
  if (interaction <= nonstopmode)
    return;
  println();
  if (start < limit) {
    FORLIM = limit;
    for (k = start; k < FORLIM; k++)
      print(buffer[k]);
  }
  first = limit;
  print(S(627));
  terminput();
  if (last <= first)
    return;
  FORLIM = last;
  for (k = first; k < FORLIM; k++)
    buffer[k + start - first] = buffer[k];
  limit = start + last - first;
}


/*:363*/
/*365:*/
Static void gettoken(void)
{
  nonewcontrolsequence = false;
  getnext();
  nonewcontrolsequence = true;
  if (curcs == 0)
    curtok = curcmd * 256 + curchr;
  else
    curtok = cstokenflag + curcs;
}


/*:365*/
/*366:*/
/*389:*/
Static void macrocall(void)
{
  pointer r, p, s, t, u, v, rbraceptr, refcount, savewarningindex;
  smallnumber n;
  halfword unbalance, m;
  smallnumber savescannerstatus;
  ASCIIcode matchchr;

  savescannerstatus = scannerstatus;
  savewarningindex = warningindex;
  warningindex = curcs;
  refcount = curchr;
  r = *foolink(refcount);
  n = 0;
  if (tracingmacros > 0) {   /*401:*/
    begindiagnostic();
    println();
    printcs(warningindex);
    tokenshow(refcount);
    enddiagnostic(false);
  }
  /*:401*/
  if (*fooinfo(r) != endmatchtoken) {   /*391:*/
    scannerstatus = matching;
    unbalance = 0;
    longstate = *fooeqtype(curcs);
    if (longstate >= outercall)
      longstate -= 2;
    do {
      *foolink(temphead) = 0;
      if ((*fooinfo(r) > matchtoken + 255) | (*fooinfo(r) < matchtoken))
	    /*392:*/
	      s = 0;
      else {
	matchchr = *fooinfo(r) - matchtoken;
	s = *foolink(r);
	r = s;
	p = temphead;
	m = 0;
      }
_Llabcontinue:
      gettoken();
      if (curtok == *fooinfo(r)) {   /*394:*/
	r = *foolink(r);
	if ((*fooinfo(r) >= matchtoken) & (*fooinfo(r) <= endmatchtoken)) {
	  if (curtok < leftbracelimit)
	    alignstate--;
	  goto _Lfound;
	} else
	  goto _Llabcontinue;
      }
      /*:394*/
      /*397:*/
      if (s != r) {
	if (s == 0) {   /*398:*/
	  printnl(258);
	  print(S(659));
	  sprintcs(warningindex);
	  print(S(660));
	  helpptr = 4;
	  helpline[3] = S(661);
	  helpline[2] = S(662);
	  helpline[1] = S(663);
	  helpline[0] = S(664);
	  error();
	  goto _Lexit;
	}
	/*:398*/
	t = s;
	do {
	  storenewtoken(*fooinfo(t));
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
	  m++;
	  u = *foolink(t);
	  v = s;
	  while (true) {
	    if (u == r) {
	      if (curtok != *fooinfo(v))
		goto _Ldone;
	      else {
		r = *foolink(v);
		goto _Llabcontinue;
	      }
	    }
	    if (*fooinfo(u) != *fooinfo(v))
	      goto _Ldone;
	    u = *foolink(u);
	    v = *foolink(v);
	  }
_Ldone:
	  t = *foolink(t);
	} while (t != r);
	r = s;
      }
      if (curtok == partoken) {
	if (longstate != longcall) {   /*396:*/
	  if (longstate == call) {
	    runaway();
	    printnl(258);
	    print(S(654));
	    sprintcs(warningindex);
	    print(S(655));
	    helpptr = 3;
	    helpline[2] = S(656);
	    helpline[1] = S(657);
	    helpline[0] = S(658);
	    backerror();
	  }
	  pstack[n] = *foolink(temphead);
	  alignstate -= unbalance;
	  for (m = 0; m <= n; m++)
	    flushlist(pstack[m]);
	  goto _Lexit;
	}
	/*:396*/
      }
      if (curtok < rightbracelimit) {
	if (curtok < leftbracelimit) {   /*399:*/
	  unbalance = 1;
	  while (true) {
	    faststorenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'FASTSTORENEWTOKEN' is not defined [221] */
	    gettoken();
	    if (curtok == partoken) {
	      if (longstate != longcall) {   /*396:*/
		if (longstate == call) {
		  runaway();
		  printnl(258);
		  print(S(654));
		  sprintcs(warningindex);
		  print(S(655));
		  helpptr = 3;
		  helpline[2] = S(656);
		  helpline[1] = S(657);
		  helpline[0] = S(658);
		  backerror();
		}
		pstack[n] = *foolink(temphead);
		alignstate -= unbalance;
		for (m = 0; m <= n; m++)
		  flushlist(pstack[m]);
		goto _Lexit;
	      }
	      /*:396*/
	    }
	    if (curtok >= rightbracelimit)
	      continue;
	    if (curtok < leftbracelimit)
	      unbalance++;
	    else {
	      unbalance--;
	      if (unbalance == 0)
		goto _Ldone1;
	    }
	  }
_Ldone1:
	  rbraceptr = p;
	  storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
	} else {   /*395:*/
	  backinput();
	  printnl(258);
	  print(S(646));
	  sprintcs(warningindex);
	  print(S(647));
	  helpptr = 6;
	  helpline[5] = S(648);
	  helpline[4] = S(649);
	  helpline[3] = S(650);
	  helpline[2] = S(651);
	  helpline[1] = S(652);
	  helpline[0] = S(653);
	  alignstate++;
	  longstate = call;
	  curtok = partoken;
	  inserror();
	}
	/*:399*/
      } else  /*393:*/
      {   /*:393*/
	if (curtok == spacetoken) {
	  if (*fooinfo(r) <= endmatchtoken) {
	    if (*fooinfo(r) >= matchtoken)
	      goto _Llabcontinue;
	  }
	}
	storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
      }
      m++;
      if (*fooinfo(r) > endmatchtoken)
	goto _Llabcontinue;
      if (*fooinfo(r) < matchtoken)
	goto _Llabcontinue;
_Lfound:
      if (s != 0) {   /*400:*/
	if (((m == 1) & (*fooinfo(p) < rightbracelimit)) && p != temphead) {
	  *foolink(rbraceptr) = 0;
	  freeavail(p);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
	  p = *foolink(temphead);
	  pstack[n] = *foolink(p);
	  freeavail(p);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
	} else
	  pstack[n] = *foolink(temphead);
	n++;
	if (tracingmacros > 0) {
	  begindiagnostic();
	  printnl(matchchr);
	  printint(n);
	  print(S(665));
	  showtokenlist(pstack[n - 1], 0, 1000);
	  enddiagnostic(false);
	}
      }
      /*:400*/
      /*:392*/
    } while (*fooinfo(r) != endmatchtoken);
  }
  /*:391*/
  /*390:*/
  while (state == tokenlist && loc == 0)
    endtokenlist();
  begintokenlist(refcount, macro);
  name = warningindex;
  loc = *foolink(r);
  if (n > 0) {   /*:390*/
    if (paramptr + n > maxparamstack) {
      maxparamstack = paramptr + n;
      if (maxparamstack > paramsize)
	overflow(S(645), paramsize);
    }
    for (m = 0; m < n; m++)
      paramstack[paramptr + m] = pstack[m];
    paramptr += n;
  }
_Lexit:
  scannerstatus = savescannerstatus;
  warningindex = savewarningindex;

  /*:397*/
  /*:395*/
}


/*:389*/
/*379:*/
Static void insertrelax(void)
{
  curtok = cstokenflag + curcs;
  backinput();
  curtok = cstokenflag + frozenrelax;
  backinput();
  tokentype = inserted;
}  /*:379*/


Static void passtext(void);

Static void startinput(void);

Static void conditional(void);

Static void getxtoken(void);

Static void convtoks(void);

Static void insthetoks(void);


Static void expand(void)
{
  halfword t;
  pointer p, r, backupbackup;
  short j;
  long cvbackup;
  smallnumber cvlbackup, radixbackup, cobackup, savescannerstatus;

  cvbackup = curval;
  cvlbackup = curvallevel;
  radixbackup = radix;
  cobackup = curorder;
  backupbackup = *foolink(backuphead);
  if (curcmd < call) {   /*367:*/
    if (tracingcommands > 1)
      showcurcmdchr();
    switch (curcmd) {

    case topbotmark:   /*386:*/
      if (curmark[curchr - topmarkcode] != 0)
	begintokenlist(curmark[curchr - topmarkcode], marktext);
      break;
      /*:386*/

    case expandafter:   /*368:*/
      gettoken();
      t = curtok;
      gettoken();
      if (curcmd > maxcommand)
	expand();
      else
	backinput();
      curtok = t;
      backinput();
      break;
      /*:368*/

    case noexpand:   /*369:*/
      savescannerstatus = scannerstatus;
      scannerstatus = normal;
      gettoken();
      scannerstatus = savescannerstatus;
      t = curtok;
      backinput();
      if (t >= cstokenflag) {
	p = getavail();
	*fooinfo(p) = cstokenflag + frozendontexpand;
	*foolink(p) = loc;
	start = p;
	loc = p;
      }
      break;
      /*:369*/

    case csname:   /*372:*/
      r = getavail();
      p = r;
      do {
	getxtoken();
	if (curcs == 0) {
	  storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
	}
      } while (curcs == 0);
      if (curcmd != endcsname) {   /*373:*/
	printnl(258);
	print(S(634));
	printesc(S(516));
	print(S(635));
	helpptr = 2;
	helpline[1] = S(636);
	helpline[0] = S(637);
	backerror();
      }
      /*:373*/
      /*374:*/
      j = first;
      p = *foolink(r);
      while (p != 0) {
	if (j >= maxbufstack) {
	  maxbufstack = j + 1;
	  if (maxbufstack == bufsize)
	    overflow(S(272), bufsize);
	}
	buffer[j] = (*fooinfo(p)) & 255;
	j++;
	p = *foolink(p);
      }
      if (j > first + 1) {
	nonewcontrolsequence = false;
	curcs = idlookup(first, j - first);
	nonewcontrolsequence = true;
      } else if (j == first)
	curcs = nullcs;
      else
	curcs = singlebase + buffer[first];   /*:374*/
      flushlist(r);
      if (*fooeqtype(curcs) == undefinedcs)
	eqdefine(curcs, relax, 256);
      curtok = curcs + cstokenflag;
      backinput();
      break;
      /*:372*/

    case convert:
      convtoks();
      break;

    case the:
      insthetoks();
      break;

    case iftest:
      conditional();
      break;

    case fiorelse:   /*510:*/
      if (curchr > iflimit) {
	if (iflimit == ifcode)
	  insertrelax();
	else {
	  printnl(258);
	  print(S(784));
	  printcmdchr(fiorelse, curchr);
	  helpptr = 1;
	  helpline[0] = S(785);
	  error();
	}
      } else {   /*:510*/
	while (curchr != ficode)   /*496:*/
	  passtext();
	p = condptr;
	ifline = *fooiflinefield(p);
	curif = *foosubtype(p);
	iflimit = *footype(p);
	condptr = *foolink(p);
	freenode(p, ifnodesize);   /*:496*/
      }
      break;

    case input:   /*378:*/
      if (curchr > 0)
	forceeof = true;
      else if (nameinprogress)
	insertrelax();
      else
	startinput();
      break;
      /*370:*/

    default:
      printnl(258);
      print(S(628));
      helpptr = 5;
      helpline[4] = S(629);
      helpline[3] = S(630);
      helpline[2] = S(631);
      helpline[1] = S(632);
      helpline[0] = S(633);
      error();   /*:370*/
      break;
    }
  }  /*:367*/
  else if (curcmd < endtemplate)
    macrocall();
  else {
    curtok = cstokenflag + frozenendv;
    backinput();
  }
  curval = cvbackup;
  curvallevel = cvlbackup;
  radix = radixbackup;
  curorder = cobackup;
  *foolink(backuphead) = backupbackup;

  /*:378*/
  /*375:*/
  /*:375*/
}


/*:366*/
/*380:*/
Static void getxtoken(void)
{
_Lrestart:
  getnext();
  if (curcmd <= maxcommand)
    goto _Ldone;
  if (curcmd >= call) {
    if (curcmd >= endtemplate) {
      curcs = frozenendv;
      curcmd = endv;
      goto _Ldone;
    }
    macrocall();
  } else
    expand();
  goto _Lrestart;
_Ldone:
  if (curcs == 0)
    curtok = curcmd * 256 + curchr;
  else
    curtok = cstokenflag + curcs;
}


/*:380*/
/*381:*/
Static void xtoken(void)
{
  while (curcmd > maxcommand) {
    expand();
    getnext();
  }
  if (curcs == 0)
    curtok = curcmd * 256 + curchr;
  else
    curtok = cstokenflag + curcs;
}


/*:381*/
/*403:*/
Static void scanleftbrace(void)
{  /*404:*/
  do {
    getxtoken();   /*:404*/
  } while (curcmd == spacer || curcmd == relax);
  if (curcmd == leftbrace)
    return;
  printnl(258);
  print(S(666));
  helpptr = 4;
  helpline[3] = S(667);
  helpline[2] = S(668);
  helpline[1] = S(669);
  helpline[0] = S(670);
  backerror();
  curtok = leftbracetoken + '{';
  curcmd = leftbrace;
  curchr = '{';
  alignstate++;
}


/*:403*/
/*405:*/
Static void scanoptionalequals(void)
{   /*406:*/
  do {
    getxtoken();   /*:406*/
  } while (curcmd == spacer);
  if (curtok != othertoken + '=')
    backinput();
}


/*:405*/
/*407:*/
Static boolean scankeyword(strnumber s)
{
  boolean Result;
  pointer p;
  poolpointer k;

  p = backuphead;
  *foolink(p) = 0;
  k = strstart[s];
  while (k < strstart[s + 1]) {
    getxtoken();
    if ((curcs == 0) & ((curchr == strpool[k]) |
			(curchr == strpool[k] - 'a' + 'A'))) {
      storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
      k++;
      continue;
    } else {
      if (curcmd == spacer && p == backuphead)
	continue;
      backinput();
      if (p != backuphead) {
	backlist(*foolink(backuphead));
/* p2c: tex1.p: Warning: Symbol 'BACKLIST' is not defined [221] */
      }
      Result = false;
      goto _Lexit;
    }
  }
  flushlist(*foolink(backuphead));
  Result = true;
_Lexit:
  return Result;
}


/*:407*/
/*408:*/
Static void muerror(void)
{
  printnl(258);
  print(S(671));
  helpptr = 1;
  helpline[0] = S(672);
  error();
}


/*:408*/
/*409:*/
Static void scanint(void);


/*433:*/
Static void scaneightbitint(void)
{
  scanint();
  if ((unsigned long)curval <= 255)
    return;
  printnl(258);
  print(S(696));
  helpptr = 2;
  helpline[1] = S(697);
  helpline[0] = S(698);
  interror(curval);
  curval = 0;
}


/*:433*/
/*434:*/
Static void scancharnum(void)
{
  scanint();
  if ((unsigned long)curval <= 255)
    return;
  printnl(258);
  print(S(699));
  helpptr = 2;
  helpline[1] = S(700);
  helpline[0] = S(698);
  interror(curval);
  curval = 0;
}


/*:434*/
/*435:*/
Static void scanfourbitint(void)
{
  scanint();
  if ((unsigned long)curval <= 15)
    return;
  printnl(258);
  print(S(701));
  helpptr = 2;
  helpline[1] = S(702);
  helpline[0] = S(698);
  interror(curval);
  curval = 0;
}


/*:435*/
/*436:*/
Static void scanfifteenbitint(void)
{
  scanint();
  if ((unsigned long)curval <= 32767)
    return;
  printnl(258);
  print(S(703));
  helpptr = 2;
  helpline[1] = S(704);
  helpline[0] = S(698);
  interror(curval);
  curval = 0;
}


/*:436*/
/*437:*/
Static void scantwentysevenbitint(void)
{
  scanint();
  if ((unsigned long)curval <= 134217727L)
    return;
  printnl(258);
  print(S(705));
  helpptr = 2;
  helpline[1] = S(706);
  helpline[0] = S(698);
  interror(curval);
  curval = 0;
}


/*:437*/
/*577:*/
Static void scanfontident(void)
{   /*406:*/
  internalfontnumber f;
  halfword m;

  do {
    getxtoken();   /*:406*/
  } while (curcmd == spacer);
  if (curcmd == deffont)
    f = curfont;
  else if (curcmd == setfont)
    f = curchr;
  else if (curcmd == deffamily) {
    m = curchr;
    scanfourbitint();
    f = *fooequiv(m + curval);
  } else {
    printnl(258);
    print(S(817));
    helpptr = 2;
    helpline[1] = S(818);
    helpline[0] = S(819);
    backerror();
    f = nullfont;
  }
  curval = f;
}


/*:577*/
/*578:*/
Static void findfontdimen(boolean writing)
{
  internalfontnumber f;
  long n;

  scanint();
  n = curval;
  scanfontident();
  f = curval;
  if (n <= 0)
    curval = fmemptr;
  else {
    if (writing && n <= spaceshrinkcode && n >= spacecode &&
	fontglue[f - fontbase] != 0) {
      deleteglueref(fontglue[f - fontbase]);
      fontglue[f - fontbase] = 0;
    }
    if (n > fontparams[f - fontbase]) {
      if (f < fontptr)
	curval = fmemptr;
      else  /*580:*/
      {   /*:580*/
	do {
	  if (fmemptr == fontmemsize)
	    overflow(S(824), fontmemsize);
	  fontinfo[fmemptr].sc = 0;
	  fmemptr++;
	  fontparams[f - fontbase]++;
	} while (n != fontparams[f - fontbase]);
	curval = fmemptr - 1;
      }
    } else
      curval = n + parambase[f - fontbase];
  }  /*579:*/
  if (curval != fmemptr)   /*:579*/
    return;
  printnl(258);
  print(S(265));
  printesc(*foofontidtext(f));
  print(S(820));
  printint(fontparams[f - fontbase]);
  print(S(821));
  helpptr = 2;
  helpline[1] = S(822);
  helpline[0] = S(823);
  error();
}


/*:578*/
/*:409*/
/*413:*/
Static void scansomethinginternal(smallnumber level, boolean negative)
{
  halfword m;
  char p;

  m = curchr;
  switch (curcmd) {

  case defcode:   /*414:*/
    scancharnum();
    if (m == mathcodebase) {
      curval = *foomathcode(curval);
      curvallevel = intval;
    } else if (m < mathcodebase) {
      curval = *fooequiv(m + curval);
      curvallevel = intval;
    } else {
      curval = eqtb[m + curval - activebase].int_;
      curvallevel = intval;
    }
    break;
    /*:414*/

  case toksregister:
  case assigntoks:
  case deffamily:
  case setfont:
  case deffont:   /*415:*/
    if (level != tokval) {
      printnl(258);
      print(S(673));
      helpptr = 3;
      helpline[2] = S(674);
      helpline[1] = S(675);
      helpline[0] = S(676);
      backerror();
      curval = 0;
      curvallevel = dimenval;
    } else if (curcmd <= assigntoks) {
      if (curcmd < assigntoks) {
	scaneightbitint();
	m = toksbase + curval;
      }
      curval = *fooequiv(m);
      curvallevel = tokval;
    } else {
      backinput();
      scanfontident();
      curval += fontidbase;
      curvallevel = identval;
    }
    break;

  case assignint:
    curval = eqtb[m - activebase].int_;
    curvallevel = intval;
    break;

  case assigndimen:
    curval = eqtb[m - activebase].sc;
    curvallevel = dimenval;
    break;

  case assignglue:
    curval = *fooequiv(m);
    curvallevel = glueval;
    break;

  case assignmuglue:
    curval = *fooequiv(m);
    curvallevel = muval;
    break;

  case setaux:   /*418:*/
    if (labs(mode) != m) {
      printnl(258);
      print(S(689));
      printcmdchr(setaux, m);
      helpptr = 4;
      helpline[3] = S(690);
      helpline[2] = S(691);
      helpline[1] = S(692);
      helpline[0] = S(693);
      error();
      if (level != tokval) {
	curval = 0;
	curvallevel = dimenval;
      } else {
	curval = 0;
	curvallevel = intval;
      }
    } else if (m == vmode) {
      curval = prevdepth;
      curvallevel = dimenval;
    } else {
      curval = spacefactor;
      curvallevel = intval;
    }
    break;

  case setprevgraf:   /*422:*/
    if (mode == 0) {
      curval = 0;
      curvallevel = intval;
    } else {   /*:422*/
      nest[nestptr] = curlist;
      p = nestptr;
      while (abs(nest[p].modefield) != vmode)
	p--;
      curval = nest[p].pgfield;
      curvallevel = intval;
    }
    break;

  case setpageint:   /*419:*/
    if (m == 0)
      curval = deadcycles;
    else
      curval = insertpenalties;
    curvallevel = intval;
    break;
    /*:419*/

  case setpagedimen:   /*421:*/
    if (pagecontents == empty && !outputactive) {
      if (m == 0)
	curval = maxdimen;
      else
	curval = 0;
    } else
      curval = pagesofar[m];
    curvallevel = dimenval;
    break;
    /*:421*/

  case setshape:   /*423:*/
    if (parshapeptr == 0)
      curval = 0;
    else
      curval = *fooinfo(parshapeptr);
    curvallevel = intval;
    break;
    /*:423*/

  case setboxdimen:   /*420:*/
    scaneightbitint();
    if (*foobox(curval) == 0)
      curval = 0;
    else
      curval = mem[*foobox(curval) + m - memmin].sc;
    curvallevel = dimenval;
    break;
    /*:420*/

  case chargiven:
  case mathgiven:
    curval = curchr;
    curvallevel = intval;
    break;

  case assignfontdimen:   /*425:*/
    findfontdimen(false);
    fontinfo[fmemptr].sc = 0;
    curval = fontinfo[curval].sc;
    curvallevel = dimenval;
    break;
    /*:425*/

  case assignfontint:   /*426:*/
    scanfontident();
    if (m == 0) {
      curval = hyphenchar[curval - fontbase];
      curvallevel = intval;
    } else {
      curval = skewchar[curval - fontbase];
      curvallevel = intval;
    }
    break;
    /*:426*/

  case register_:   /*427:*/
    scaneightbitint();
    switch (m) {

    case intval:
      curval = *foocount(curval);
      break;

    case dimenval:
      curval = *foodimen(curval);
      break;

    case glueval:
      curval = *fooskip(curval);
      break;

    case muval:
      curval = *foomuskip(curval);
      break;
    }
    curvallevel = m;
    break;
    /*:427*/

  case lastitem:   /*424:*/
    if (curchr > glueval) {
      if (curchr == inputlinenocode)
	curval = line;
      else
	curval = lastbadness;
      curvallevel = intval;
    } else {   /*:424*/
      if (curchr == glueval)
	curval = zeroglue;
      else
	curval = 0;
      curvallevel = curchr;
      if (!ischarnode(tail) && mode != 0) {
	switch (curchr) {

	case intval:
	  if (*footype(tail) == penaltynode)
	    curval = *foopenalty(tail);
	  break;

	case dimenval:
	  if (*footype(tail) == kernnode)
	    curval = *foowidth(tail);
	  break;

	case glueval:
	  if (*footype(tail) == gluenode) {
	    curval = *fooglueptr(tail);
	    if (*foosubtype(tail) == muglue)
	      curvallevel = muval;
	  }
	  break;
	}
      } else if (mode == vmode && tail == head) {
	switch (curchr) {

	case intval:
	  curval = lastpenalty;
	  break;

	case dimenval:
	  curval = lastkern;
	  break;

	case glueval:
	  if (lastglue != maxhalfword)
	    curval = lastglue;
	  break;
	}
      }
    }
    break;
    /*428:*/

  default:
    printnl(258);
    print(S(694));
    printcmdchr(curcmd, curchr);
    print(S(695));
    printesc(S(548));
    helpptr = 1;
    helpline[0] = S(693);
    error();
    if (level != tokval) {   /*:428*/
      curval = 0;
      curvallevel = dimenval;
    } else {
      curval = 0;
      curvallevel = intval;
    }
    break;
  }
  while (curvallevel > level) {   /*429:*/
    if (curvallevel == glueval)
      curval = *foowidth(curval);
    else if (curvallevel == muval)
      muerror();
    curvallevel--;
  }
  /*:429*/
  /*430:*/
  if (!negative) {
    if (curvallevel >= glueval && curvallevel <= muval) {
      addglueref(curval);   /*:430*/
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
    }
    return;
  }
  if (curvallevel < glueval) {
    curval = -curval;
    return;
  }
  curval = newspec(curval);   /*431:*/
  *foowidth(curval) = -*foowidth(curval);
  *foostretch(curval) = -*foostretch(curval);
  *fooshrink(curval) = -*fooshrink(curval);   /*:431*/

  /*:415*/
  /*:418*/
}


/*:413*/
/*440:*/
Static void scanint(void)
{
  boolean negative;
  long m;
  smallnumber d;
  boolean vacuous, OKsofar;

  radix = 0;
  OKsofar = true;   /*441:*/
  negative = false;
  do {   /*406:*/
    do {
      getxtoken();   /*:406*/
    } while (curcmd == spacer);
    if (curtok == othertoken + '-') {   /*:441*/
      negative = !negative;
      curtok = othertoken + '+';
    }
  } while (curtok == othertoken + '+');
  if (curtok == alphatoken) {   /*442:*/
    gettoken();
    if (curtok < cstokenflag) {
      curval = curchr;
      if (curcmd <= rightbrace) {
	if (curcmd == rightbrace)
	  alignstate++;
	else
	  alignstate--;
      }
    } else if (curtok < cstokenflag + singlebase)
      curval = curtok - cstokenflag - activebase;
    else
      curval = curtok - cstokenflag - singlebase;
    if (curval > 255) {
      printnl(258);
      print(S(707));
      helpptr = 2;
      helpline[1] = S(708);
      helpline[0] = S(709);
      curval = '0';
      backerror();
    } else {   /*443:*/
      getxtoken();
      if (curcmd != spacer)
	backinput();
    }
  }  /*:442*/
  else if (curcmd >= mininternal && curcmd <= maxinternal)
    scansomethinginternal(intval, false);
  else {
    radix = 10;
    m = 214748364L;
    if (curtok == octaltoken) {
      radix = 8;
      m = 268435456L;
      getxtoken();
    } else if (curtok == hextoken) {
      radix = 16;
      m = 134217728L;
      getxtoken();
    }
    vacuous = true;
    curval = 0;   /*445:*/
    while (true) {
      if (curtok < zerotoken + radix && curtok >= zerotoken &&
	  curtok <= zerotoken + 9)
	d = curtok - zerotoken;
      else if (radix == 16) {
	if (curtok <= Atoken + 5 && curtok >= Atoken)
	  d = curtok - Atoken + 10;
	else if (curtok <= otherAtoken + 5 && curtok >= otherAtoken)
	  d = curtok - otherAtoken + 10;
	else
	  goto _Ldone;
      } else
	goto _Ldone;
      vacuous = false;
      if (curval >= m && (curval > m || d > 7 || radix != 10)) {
	if (OKsofar) {
	  printnl(258);
	  print(S(710));
	  helpptr = 2;
	  helpline[1] = S(711);
	  helpline[0] = S(712);
	  error();
	  curval = infinity;
	  OKsofar = false;
	}
      } else
	curval = curval * radix + d;
      getxtoken();
    }
_Ldone:   /*:445*/
    if (vacuous) {   /*446:*/
      printnl(258);
      print(S(673));
      helpptr = 3;
      helpline[2] = S(674);
      helpline[1] = S(675);
      helpline[0] = S(676);
      backerror();
    }  /*:446*/
    else if (curcmd != spacer)
      backinput();
  }
  if (negative)
    curval = -curval;

  /*:443*/
  /*444:*/
  /*:444*/
}


/*:440*/
/*448:*/
Static void scandimen(boolean mu, boolean inf, boolean shortcut)
{
  boolean negative;
  long f;
  /*450:*/
  long num, denom;
  smallnumber k, kk;
  pointer p, q;
  scaled v;
  long savecurval;   /*:450*/

  f = 0;
  aritherror = false;
  curorder = normal;
  negative = false;
  if (!shortcut) {   /*441:*/
    negative = false;
    do {   /*406:*/
      do {
	getxtoken();   /*:406*/
      } while (curcmd == spacer);
      if (curtok == othertoken + '-') {   /*:441*/
	negative = !negative;
	curtok = othertoken + '+';
      }
    } while (curtok == othertoken + '+');
    if (curcmd >= mininternal && curcmd <= maxinternal) {   /*449:*/
      if (mu) {
	scansomethinginternal(muval, false);   /*451:*/
	if (curvallevel >= glueval) {   /*:451*/
	  v = *foowidth(curval);
	  deleteglueref(curval);
	  curval = v;
	}
	if (curvallevel == muval)
	  goto _Lattachsign_;
	if (curvallevel != intval)
	  muerror();
      } else {
	scansomethinginternal(dimenval, false);
	if (curvallevel == dimenval)
	  goto _Lattachsign_;
      }  /*:449*/
    } else {
      backinput();
      if (curtok == continentalpointtoken)
	curtok = pointtoken;
      if (curtok != pointtoken)
	scanint();
      else {
	radix = 10;
	curval = 0;
      }
      if (curtok == continentalpointtoken)
	curtok = pointtoken;
      if (radix == 10 && curtok == pointtoken) {   /*452:*/
	k = 0;
	p = 0;
	gettoken();
	while (true) {
	  getxtoken();
	  if (curtok > zerotoken + 9 || curtok < zerotoken)
	    goto _Ldone1;
	  if (k >= 17)
	    continue;
	  q = getavail();
	  *foolink(q) = p;
	  *fooinfo(q) = curtok - zerotoken;
	  p = q;
	  k++;
	}
_Ldone1:
	for (kk = k - 1; kk >= 0; kk--) {
	  dig[kk] = *fooinfo(p);
	  q = p;
	  p = *foolink(p);
	  freeavail(q);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
	}
	f = rounddecimals(k);
	if (curcmd != spacer)
	  backinput();
      }
      /*:452*/
    }
  }
  if (curval < 0) {
    negative = !negative;
    curval = -curval;
  }  /*453:*/
  if (inf) {   /*454:*/
    if (scankeyword(S(325))) {   /*:454*/
      curorder = fil;
      while (scankeyword('l')) {
	if (curorder != filll) {
	  curorder++;
	  continue;
	}
	printnl(258);
	print(S(714));
	print(S(715));
	helpptr = 1;
	helpline[0] = S(716);
	error();
      }
      goto _Lattachfraction_;
    }
  }
  /*455:*/
  savecurval = curval;   /*406:*/
  do {
    getxtoken();   /*:406*/
  } while (curcmd == spacer);
  if (curcmd >= mininternal && curcmd <= maxinternal) {
    if (mu) {
      scansomethinginternal(muval, false);   /*451:*/
      if (curvallevel >= glueval) {   /*:451*/
	v = *foowidth(curval);
	deleteglueref(curval);
	curval = v;
      }
      if (curvallevel != muval)
	muerror();
    } else
      scansomethinginternal(dimenval, false);
    v = curval;
    goto _Lfound;
  }
  backinput();
  if (mu)
    goto _Lnotfound;
  if (scankeyword(S(717)))   /*443:*/
    v = *fooquad(curfont);   /*558:*/
    /*:558*/
  else if (scankeyword(S(718)))
    v = *fooxheight(curfont);   /*559:*/
    /*:559*/
  else
    goto _Lnotfound;
  getxtoken();
  if (curcmd != spacer)   /*:443*/
    backinput();
_Lfound:
  curval = multandadd(savecurval, v, xnoverd(v, f, 65536L), 1073741823L);
  goto _Lattachsign_;
_Lnotfound:   /*:455*/
  if (mu) {   /*456:*/
    if (scankeyword(S(350)))
      goto _Lattachfraction_;
    else {   /*:456*/
      printnl(258);
      print(S(714));
      print(S(719));
      helpptr = 4;
      helpline[3] = S(720);
      helpline[2] = S(721);
      helpline[1] = S(722);
      helpline[0] = S(723);
      error();
      goto _Lattachfraction_;
    }
  }
  if (scankeyword(S(713))) {   /*457:*/
    preparemag();
    if (mag != 1000) {
      curval = xnoverd(curval, 1000, mag);
      f = (f * 1000 + texremainder * 65536L) / mag;
      curval += f / 65536L;
      f %= 65536L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    }
  }
  /*:457*/
  if (scankeyword(S(268)))   /*458:*/
    goto _Lattachfraction_;
  if (scankeyword(S(724))) {
    num = 7227;
    denom = 100;
  } else if (scankeyword(S(725))) {
    num = 12;
    denom = 1;
  } else if (scankeyword(S(726))) {
    num = 7227;
    denom = 254;
  } else if (scankeyword(S(727))) {
    num = 7227;
    denom = 2540;
  } else if (scankeyword(S(728))) {
    num = 7227;
    denom = 7200;
  } else if (scankeyword(S(729))) {
    num = 1238;
    denom = 1157;
  } else if (scankeyword(S(730))) {
    num = 14856;
    denom = 1157;
  } else if (scankeyword(S(731)))
    goto _Ldone;
  else {
    printnl(258);
    print(S(714));
    print(S(732));
    helpptr = 6;
    helpline[5] = S(733);
    helpline[4] = S(734);
    helpline[3] = S(735);
    helpline[2] = S(721);
    helpline[1] = S(722);
    helpline[0] = S(723);
    error();
    goto _Ldone2;
  }
  curval = xnoverd(curval, num, denom);
  f = (num * f + texremainder * 65536L) / denom;
  curval += f / 65536L;
  f %= 65536L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
_Ldone2:   /*:458*/
_Lattachfraction_:
  if (curval >= 16384)
    aritherror = true;
  else
    curval = curval * unity + f;
_Ldone:   /*:453*/
  /*443:*/
  getxtoken();
  if (curcmd != spacer)   /*:443*/
    backinput();
_Lattachsign_:
  if (aritherror || labs(curval) >= 1073741824L) {   /*460:*/
    printnl(258);
    print(S(736));
    helpptr = 2;
    helpline[1] = S(737);
    helpline[0] = S(738);
    error();
    curval = maxdimen;
    aritherror = false;
  }
  /*:460*/
  if (negative)
    curval = -curval;

  /*459:*/
  /*:459*/
}


/*:448*/
/*461:*/
Static void scanglue(smallnumber level)
{
  boolean negative, mu;
  pointer q;

  mu = (level == muval);   /*441:*/
  negative = false;
  do {   /*406:*/
    do {
      getxtoken();   /*:406*/
    } while (curcmd == spacer);
    if (curtok == othertoken + '-') {   /*:441*/
      negative = !negative;
      curtok = othertoken + '+';
    }
  } while (curtok == othertoken + '+');
  if (curcmd >= mininternal && curcmd <= maxinternal) {   /*462:*/
    scansomethinginternal(level, negative);
    if (curvallevel >= glueval) {
      if (curvallevel != level)
	muerror();
      goto _Lexit;
    }
    if (curvallevel == intval)
      scandimen(mu, false, true);
    else if (level == muval)
      muerror();
  } else {
    backinput();
    scandimen(mu, false, false);
    if (negative)
      curval = -curval;
  }
  q = newspec(zeroglue);
  *foowidth(q) = curval;
  if (scankeyword(S(739))) {
    scandimen(mu, true, false);
    *foostretch(q) = curval;
    *foostretchorder(q) = curorder;
  }
  if (scankeyword(S(740))) {
    scandimen(mu, true, false);
    *fooshrink(q) = curval;
    *fooshrinkorder(q) = curorder;
  }
  curval = q;   /*:462*/
_Lexit: ;
}


/*:461*/
/*463:*/
Static halfword scanrulespec(void)
{
  pointer q;

  q = newrule();
  if (curcmd == vrule)
    *foowidth(q) = defaultrule;
  else {
    *fooheight(q) = defaultrule;
    *foodepth(q) = 0;
  }
_Lreswitch:
  if (scankeyword(S(741))) {
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    *foowidth(q) = curval;
    goto _Lreswitch;
  }
  if (scankeyword(S(742))) {
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    *fooheight(q) = curval;
    goto _Lreswitch;
  }
  if (!scankeyword(S(743)))
    return q;
  scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
  *foodepth(q) = curval;
  goto _Lreswitch;
/* p2c: tex1.p: Note: Deleting unreachable code [255] */
}


/*:463*/
/*464:*/
Static halfword strtoks(poolpointer b)
{
  pointer p;
  halfword t;
  poolpointer k;

  if (poolptr + 1 > poolsize)
    overflow(257, poolsize - initpoolptr);
  p = temphead;
  *foolink(p) = 0;
  k = b;
  while (k < poolptr) {
    t = strpool[k];
    if (t == ' ')
      t = spacetoken;
    else
      t += othertoken;
    faststorenewtoken(t);
/* p2c: tex1.p: Warning: Symbol 'FASTSTORENEWTOKEN' is not defined [221] */
    k++;
  }
  poolptr = b;
  return p;
}


/*:464*/
/*465:*/
Static halfword thetoks(void)
{
  char oldsetting;
  pointer p, r;
  poolpointer b;

  getxtoken();
  scansomethinginternal(tokval, false);
  if (curvallevel >= identval) {   /*466:*/
    p = temphead;
    *foolink(p) = 0;
    if (curvallevel == identval) {
      storenewtoken(cstokenflag + curval);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
      return p;
    }
    if (curval == 0)
      return p;
    r = *foolink(curval);
    while (r != 0) {
      faststorenewtoken(*fooinfo(r));
/* p2c: tex1.p: Warning: Symbol 'FASTSTORENEWTOKEN' is not defined [221] */
      r = *foolink(r);
    }
    return p;
  } else {
    oldsetting = selector;
    selector = newstring;
    b = poolptr;
    switch (curvallevel) {

    case intval:
      printint(curval);
      break;

    case dimenval:
      printscaled(curval);
      print(S(268));
      break;

    case glueval:
      printspec(curval, S(268));
      deleteglueref(curval);
      break;

    case muval:
      printspec(curval, S(350));
      deleteglueref(curval);
      break;
    }
    selector = oldsetting;
    return (strtoks(b));
  }
  /*:466*/
}


/*:465*/
/*467:*/
Static void insthetoks(void)
{
  *foolink(garbage) = thetoks();
  inslist(*foolink(temphead));
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
}  /*:467*/


/*470:*/
Static void convtoks(void)
{
  char oldsetting;
  char c;
  smallnumber savescannerstatus;
  poolpointer b;

  c = curchr;   /*471:*/
  switch (c) {   /*:471*/

  case numbercode:
  case romannumeralcode:
    scanint();
    break;

  case stringcode:
  case meaningcode:
    savescannerstatus = scannerstatus;
    scannerstatus = normal;
    gettoken();
    scannerstatus = savescannerstatus;
    break;

  case fontnamecode:
    scanfontident();
    break;

  case jobnamecode:
    if (jobname == 0)
      openlogfile();
    break;
  }
  oldsetting = selector;
  selector = newstring;
  b = poolptr;   /*472:*/
  switch (c) {   /*:472*/

  case numbercode:
    printint(curval);
    break;

  case romannumeralcode:
    printromanint(curval);
    break;

  case stringcode:
    if (curcs != 0)
      sprintcs(curcs);
    else
      printchar(curchr);
    break;

  case meaningcode:
    printmeaning();
    break;

  case fontnamecode:
    print(fontname[curval - fontbase]);
    if (fontsize[curval - fontbase] != fontdsize[curval - fontbase]) {
      print(S(267));
      printscaled(fontsize[curval - fontbase]);
      print(S(268));
    }
    break;

  case jobnamecode:
    print(jobname);
    break;
  }
  selector = oldsetting;
  *foolink(garbage) = strtoks(b);
  inslist(*foolink(temphead));
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
}  /*:470*/


/*473:*/
Static halfword scantoks(boolean macrodef, boolean xpand)
{
  halfword t, s, unbalance, hashbrace;
  pointer p, q;

  if (macrodef)
    scannerstatus = defining;
  else
    scannerstatus = absorbing;
  warningindex = curcs;
  defref = getavail();
  *footokenrefcount(defref) = 0;
  p = defref;
  hashbrace = 0;
  t = zerotoken;
  if (macrodef) {   /*474:*/
    while (true) {
      gettoken();
      if (curtok < rightbracelimit)
	goto _Ldone1;
      if (curcmd == macparam) {   /*476:*/
	s = matchtoken + curchr;
	gettoken();
	if (curcmd == leftbrace) {
	  hashbrace = curtok;
	  storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
	  storenewtoken(endmatchtoken);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
	  goto _Ldone;
	}
	if (t == zerotoken + 9) {
	  printnl(258);
	  print(S(752));
	  helpptr = 1;
	  helpline[0] = S(753);
	  error();
	} else {
	  t++;
	  if (curtok != t) {
	    printnl(258);
	    print(S(754));
	    helpptr = 2;
	    helpline[1] = S(755);
	    helpline[0] = S(756);
	    backerror();
	  }
	  curtok = s;
	}
      }
      /*:476*/
      storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
    }
_Ldone1:
    storenewtoken(endmatchtoken);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
    if (curcmd == rightbrace) {   /*475:*/
      printnl(258);
      print(S(666));
      alignstate++;
      helpptr = 2;
      helpline[1] = S(750);
      helpline[0] = S(751);
      error();
      goto _Lfound;
    }
    /*:475*/
_Ldone: ;
  } else
    scanleftbrace();
  /*:474*/
  /*477:*/
  unbalance = 1;
  while (true) {   /*:477*/
    if (xpand) {   /*478:*/
      while (true) {
	getnext();
	if (curcmd <= maxcommand)
	  goto _Ldone2;
	if (curcmd != the)
	  expand();
	else {
	  q = thetoks();
	  if (*foolink(temphead) != 0) {
	    *foolink(p) = *foolink(temphead);
	    p = q;
	  }
	}
      }
_Ldone2:
      xtoken();
    } else
      gettoken();
    /*:478*/
    if (curtok < rightbracelimit) {
      if (curcmd < rightbrace)
	unbalance++;
      else {
	unbalance--;
	if (unbalance == 0)
	  goto _Lfound;
      }
    } else if (curcmd == macparam) {
      if (macrodef) {   /*479:*/
	s = curtok;
	if (xpand)
	  getxtoken();
	else
	  gettoken();
	if (curcmd != macparam) {
	  if (curtok <= zerotoken || curtok > t) {
	    printnl(258);
	    print(S(757));
	    sprintcs(warningindex);
	    helpptr = 3;
	    helpline[2] = S(758);
	    helpline[1] = S(759);
	    helpline[0] = S(760);
	    backerror();
	    curtok = s;
	  } else
	    curtok = outparamtoken - '0' + curchr;
	}
      }
      /*:479*/
    }
    storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
  }
_Lfound:
  scannerstatus = normal;
  if (hashbrace != 0) {
    storenewtoken(hashbrace);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
  }
  return p;
}  /*:473*/


/*482:*/
Static void readtoks(long n, halfword r)
{
  pointer p;
  long s;
  smallnumber m;

  scannerstatus = defining;
  warningindex = r;
  defref = getavail();
  *footokenrefcount(defref) = 0;
  p = defref;
  storenewtoken(endmatchtoken);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
  if ((unsigned long)n > 15)
    m = 16;
  else
    m = n;
  s = alignstate;
  alignstate = 1000000L;
  do {   /*483:*/
    beginfilereading();
    name = m + 1;
    if (readopen[m] == closed) {   /*484:*/
      if (interaction > nonstopmode) {
	if (n < 0) {
	  print(S(266));
	  terminput();
	} else {
	  println();
	  sprintcs(r);
	  print('=');
	  terminput();
	  n = -1;
	}
      } else   /*:484*/
	fatalerror(S(761));
    } else if (readopen[m] == justopen) {
      if (inputln(&readfile[m], false))
	readopen[m] = normal;
      else {   /*:485*/
	aclose(&readfile[m]);
	readopen[m] = closed;
      }
    } else {
      if (!inputln(&readfile[m], true)) {
	aclose(&readfile[m]);
	readopen[m] = closed;
	if (alignstate != 1000000L) {
	  runaway();
	  printnl(258);
	  print(S(762));
	  printesc(S(545));
	  helpptr = 1;
	  helpline[0] = S(763);
	  alignstate = 1000000L;
	  error();
	}
      }
    }
    limit = last;
    if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
      limit--;
    } else
      buffer[limit] = endlinechar;
    first = limit + 1;
    loc = start;
    state = newline;
    while (true) {
      gettoken();
      if (curtok == 0)
	goto _Ldone;
      if (alignstate < 1000000L) {
	do {
	  gettoken();
	} while (curtok != 0);
	alignstate = 1000000L;
	goto _Ldone;
      }
      storenewtoken(curtok);
/* p2c: tex1.p: Warning: Symbol 'STORENEWTOKEN' is not defined [221] */
    }
_Ldone:   /*:483*/
    endfilereading();
  } while (alignstate != 1000000L);
  curval = defref;
  scannerstatus = normal;
  alignstate = s;

  /*485:*/
  /*486:*/
  /*:486*/
}


/*:482*/
/*494:*/
Static void passtext(void)
{
  long l;
  smallnumber savescannerstatus;

  savescannerstatus = scannerstatus;
  scannerstatus = skipping;
  l = 0;
  skipline = line;
  while (true) {
    getnext();
    if (curcmd == fiorelse) {
      if (l == 0)
	goto _Ldone;
      if (curchr == ficode)
	l--;
    } else if (curcmd == iftest)
      l++;
  }
_Ldone:
  scannerstatus = savescannerstatus;
}


/*:494*/
/*497:*/
Static void changeiflimit(smallnumber l, halfword p)
{
  pointer q;

  if (p == condptr)
    iflimit = l;
  else {
    q = condptr;
    while (true) {
      if (q == 0)
	confusion(S(764));
      if (*foolink(q) == p) {
	*footype(q) = l;
	goto _Lexit;
      }
      q = *foolink(q);
    }
  }
_Lexit: ;
}


/*:497*/
/*498:*/
Static void conditional(void)
{  /*495:*/
  boolean b;
  long r;
  long m, n;
  pointer p, q, savecondptr;
  smallnumber savescannerstatus, thisif;

  p = getnode(ifnodesize);
  *foolink(p) = condptr;
  *footype(p) = iflimit;
  *foosubtype(p) = curif;
  *fooiflinefield(p) = ifline;
  condptr = p;
  curif = curchr;
  iflimit = ifcode;
  ifline = line;   /*:495*/
  savecondptr = condptr;
  thisif = curchr;   /*501:*/
  switch (thisif) {   /*:501*/

  case ifcharcode:
  case ifcatcode:   /*506:*/
    getxtokenoractivechar();
/* p2c: tex1.p:
 * Warning: Symbol 'GETXTOKENORACTIVECHAR' is not defined [221] */
    if (curcmd > activechar || curchr > 255) {
      m = relax;
      n = 256;
    } else {
      m = curcmd;
      n = curchr;
    }
    getxtokenoractivechar();
/* p2c: tex1.p:
 * Warning: Symbol 'GETXTOKENORACTIVECHAR' is not defined [221] */
    if (curcmd > activechar || curchr > 255) {
      curcmd = relax;
      curchr = 256;
    }
    if (thisif == ifcharcode)
      b = (n == curchr);
    else
      b = (m == curcmd);
    break;
    /*:506*/

  case ifintcode:
  case ifdimcode:   /*503:*/
    if (thisif == ifintcode)
      scanint();
    else {
      scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    }
    n = curval;
    /*406:*/
    do {
      getxtoken();
      /*:406*/
    } while (curcmd == spacer);
    if ((curtok >= othertoken + '<') & (curtok <= othertoken + '>'))
      r = curtok - othertoken;
    else {
      printnl(258);
      print(S(788));
      printcmdchr(iftest, thisif);
      helpptr = 1;
      helpline[0] = S(789);
      backerror();
      r = '=';
    }
    if (thisif == ifintcode)
      scanint();
    else {
      scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    }
    switch (r) {

    case '<':
      b = (n < curval);
      break;

    case '=':
      b = (n == curval);
      break;

    case '>':
      b = (n > curval);
      break;
    }
    break;
    /*:503*/

  case ifoddcode:   /*504:*/
    scanint();
    b = curval & 1;
    break;
    /*:504*/

  case ifvmodecode:
    b = (labs(mode) == vmode);
    break;

  case ifhmodecode:
    b = (labs(mode) == hmode);
    break;

  case ifmmodecode:
    b = (labs(mode) == mmode);
    break;

  case ifinnercode:
    b = (mode < 0);
    break;

  case ifvoidcode:
  case ifhboxcode:
  case ifvboxcode:   /*505:*/
    scaneightbitint();
    p = *foobox(curval);
    if (thisif == ifvoidcode)
      b = (p == 0);
    else if (p == 0)
      b = false;
    else if (thisif == ifhboxcode)
      b = (*footype(p) == hlistnode);
    else
      b = (*footype(p) == vlistnode);
    break;
    /*:505*/

  case ifxcode:   /*507:*/
    savescannerstatus = scannerstatus;
    scannerstatus = normal;
    getnext();
    n = curcs;
    p = curcmd;
    q = curchr;
    getnext();
    if (curcmd != p)
      b = false;
    else if (curcmd < call)
      b = (curchr == q);
    else {
      /*
508:*/
      p = *foolink(curchr);
      q = *foolink(*fooequiv(n));
      if (p == q)
	b = true;
      else {
	while (p != 0 && q != 0) {
	  if (*fooinfo(p) != *fooinfo(q))
	    p = 0;
	  else {
	    p = *foolink(p);
	    q = *foolink(q);
	  }
	}
	b = (p == 0 && q == 0);
      }
    }
    scannerstatus = savescannerstatus;
    break;
    /*:507*/

  case ifeofcode:
    scanfourbitint();
    b = (readopen[curval] == closed);
    break;

  case iftruecode:
    b = true;
    break;

  case iffalsecode:
    b = false;
    break;

  case ifcasecode:   /*509:*/
    scanint();
    n = curval;
    if (tracingcommands > 1) {
      begindiagnostic();
      print(S(790));
      printint(n);
      printchar('}');
      enddiagnostic(false);
    }
    while (n != 0) {
      passtext();
      if (condptr == savecondptr) {
	if (curchr != orcode)
	  goto _Lcommonending;
	n--;
	continue;
      }
      if (curchr != ficode)   /*496:*/
	continue;
      /*:496*/
      p = condptr;
      ifline = *fooiflinefield(p);
      curif = *foosubtype(p);
      iflimit = *footype(p);
      condptr = *foolink(p);
      freenode(p, ifnodesize);
    }
    changeiflimit(orcode, savecondptr);
    goto _Lexit;
    break;
    /*:509*/
  }
  if (tracingcommands > 1) {   /*502:*/
    begindiagnostic();
    if (b)
      print(S(786));
    else
      print(S(787));
    enddiagnostic(false);
  }
  /*:502*/
  if (b) {
    changeiflimit(elsecode, savecondptr);
    goto _Lexit;
  }  /*500:*/
  while (true) {   /*:500*/
    passtext();
    if (condptr == savecondptr) {
      if (curchr != orcode)
	goto _Lcommonending;
      printnl(258);
      print(S(784));
      printesc(S(782));
      helpptr = 1;
      helpline[0] = S(785);
      error();
      continue;
    }
    if (curchr != ficode)   /*496:*/
      continue;
    /*:496*/
    p = condptr;
    ifline = *fooiflinefield(p);
    curif = *foosubtype(p);
    iflimit = *footype(p);
    condptr = *foolink(p);
    freenode(p, ifnodesize);
  }
_Lcommonending:
  if (curchr == ficode) {   /*496:*/
    p = condptr;
    ifline = *fooiflinefield(p);
    curif = *foosubtype(p);
    iflimit = *footype(p);
    condptr = *foolink(p);
    freenode(p, ifnodesize);
  }  /*:496*/
  else
    iflimit = ficode;
_Lexit: ;

  /*:508*/
}


/*:498*/
/*515:*/
Static void beginname(void)
{
  areadelimiter = 0;
  extdelimiter = 0;
}


/*:515*/
/*516:*/
Static boolean morename(ASCIIcode c)
{
  if (c == ' ')
    return false;
  else {
    if (poolptr + 1 > poolsize)
      overflow(257, poolsize - initpoolptr);
    appendchar(c);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
    if ((c == '>') | (c == ':')) {
      areadelimiter = curlength;
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
      extdelimiter = 0;
    } else if (c == '.' && extdelimiter == 0) {
      extdelimiter = curlength;
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    }
    return true;
  }
}


/*:516*/
/*517:*/
Static void endname(void)
{
  if (strptr + 3 > maxstrings)
    overflow(S(273), maxstrings - initstrptr);
  if (areadelimiter == 0)
    curarea = S(266);
  else {
    curarea = strptr;
    strstart[strptr + 1] = strstart[strptr] + areadelimiter;
    strptr++;
  }
  if (extdelimiter == 0) {
    curext = S(266);
    curname = makestring();
    return;
  }
  curname = strptr;
  strstart[strptr + 1] = strstart[strptr] + extdelimiter - areadelimiter - 1;
  strptr++;
  curext = makestring();
}


/*:517*/
/*519:*/
Static void packfilename(strnumber n, strnumber a, strnumber e)
{
  long k;
  poolpointer j, FORLIM;

  k = 0;
  FORLIM = strstart[a + 1];
  for (j = strstart[a]; j < FORLIM; j++) {
    appendtoname(strpool[j]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  FORLIM = strstart[n + 1];
  for (j = strstart[n]; j < FORLIM; j++) {
    appendtoname(strpool[j]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  FORLIM = strstart[e + 1];
  for (j = strstart[e]; j < FORLIM; j++) {
    appendtoname(strpool[j]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  if (k <= filenamesize)
    namelength = k;
  else
    namelength = filenamesize;
  for (k = namelength; k < filenamesize; k++)
    nameoffile[k] = ' ';
}  /*:519*/


/*523:*/
Static void packbufferedname(smallnumber n, long a, long b)
{
  long k, j;

  if (n + b - a + formatextlength + 1 > filenamesize)
    b = a + filenamesize - n - formatextlength - 1;
  k = 0;
  for (j = 0; j < n; j++) {
    appendtoname(xord[TEXformatdefault[j]]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  for (j = a; j <= b; j++) {
    appendtoname(buffer[j]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  for (j = formatdefaultlength - formatextlength; j < formatdefaultlength; j++) {
    appendtoname(xord[TEXformatdefault[j]]);
/* p2c: tex1.p: Warning: Symbol 'APPENDTONAME' is not defined [221] */
  }
  if (k <= filenamesize)
    namelength = k;
  else
    namelength = filenamesize;
  for (k = namelength; k < filenamesize; k++)
    nameoffile[k] = ' ';
}  /*:523*/


/*525:*/
Static strnumber makenamestring(void)
{
  char k, FORLIM;

  if (poolptr + namelength > poolsize || strptr == maxstrings || curlength > 0) {
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    return ('?');
  } else {
    FORLIM = namelength;
    for (k = 0; k < FORLIM; k++) {
      appendchar(xord[nameoffile[k]]);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
    }
    return (makestring());
  }
}


Static strnumber amakenamestring(FILE **f)
{
  return (makenamestring());
}


Static strnumber bmakenamestring(FILE **f)
{
  return (makenamestring());
}


Static strnumber wmakenamestring(FILE **f)
{
  return (makenamestring());
}


/*:525*/
/*526:*/
Static void scanfilename(void)
{
  nameinprogress = true;
  beginname();
  /*406:*/
  do {
    getxtoken();
    /*:406*/
  } while (curcmd == spacer);
  while (true) {
    if (curcmd > otherchar || curchr > 255) {
      backinput();
      goto _Ldone;
    }
    if (!morename(curchr))
      goto _Ldone;
    getxtoken();
  }
_Ldone:
  endname();
  nameinprogress = false;
}


/*:526*/
/*529:*/
Static void packjobname(strnumber s)
{
  curarea = S(266);
  curext = s;
  curname = jobname;
  packcurname();
/* p2c: tex1.p: Warning: Symbol 'PACKCURNAME' is not defined [221] */
}


/*:529*/
/*530:*/
Static void promptfilename(strnumber s, strnumber e)
{
  short k;

  if (s == S(791)) {
    printnl(258);
    print(S(792));
  } else {
    printnl(258);
    print(S(793));
  }
  printfilename(curname, curarea, curext);
  print(S(794));
  if (e == S(795))
    showcontext();
  printnl(S(796));
  print(s);
  if (interaction < scrollmode)
    fatalerror(S(797));
  print(S(578));
  terminput();   /*531:*/
  beginname();
  k = first;
  while (buffer[k] == ' ' && k < last)
    k++;
  while (true) {
    if (k == last)
      goto _Ldone;
    if (!morename(buffer[k]))
      goto _Ldone;
    k++;
  }
_Ldone:
  endname();   /*:531*/
  if (curext == S(266))
    curext = e;
  packcurname();
/* p2c: tex1.p: Warning: Symbol 'PACKCURNAME' is not defined [221] */
}


/*:530*/
/*534:*/
Static void openlogfile(void)
{
  char oldsetting;
  short k;
  short l;
  Char months[36];
  Char TEMP;
  short FORLIM;

  oldsetting = selector;
  if (jobname == 0)
    jobname = S(798);
  packjobname(S(799));
  while (!aopenout(&logfile)) {   /*535:*/
    selector = termonly;
    promptfilename(S(801), S(799));
  }
  /*:535*/
  logname = amakenamestring(&logfile);
  selector = logonly;
  logopened = true;
  /*536:*/
  TEMP = 'T';
/* p2c: tex1.p: Warning: Char constant with more than one character [154] */
  fwrite(&TEMP, 1, 1, logfile);
  slowprint(formatident);
  print(S(802));
  printint(day);
  printchar(' ');
  memcpy(months, "JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC", 36);
  FORLIM = month * 3;
  for (k = month * 3 - 3; k < FORLIM; k++)
    fwrite(&months[k], 1, 1, logfile);
  printchar(' ');
  printint(year);
  printchar(' ');
  printtwo(time / 60);
  printchar(':');
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  printtwo(time % 60);   /*:536*/
  inputstack[inputptr] = curinput;
  printnl(S(800));
  l = inputstack[0].limitfield;
  if (buffer[l] == endlinechar)
    l--;
  for (k = 1; k <= l; k++)
    print(buffer[k]);
  println();
  selector = oldsetting + 2;
}


/*:534*/
/*537:*/
Static void startinput(void)
{
  scanfilename();
  if (curext == S(266))
    curext = S(795);
  packcurname();
/* p2c: tex1.p: Warning: Symbol 'PACKCURNAME' is not defined [221] */
  while (true) {
    beginfilereading();
    if (aopenin(&curfile))
      goto _Ldone;
    if (curarea == S(266)) {
      packfilename(curname, 261, curext);
      if (aopenin(&curfile))
	goto _Ldone;
    }
    endfilereading();
    promptfilename(S(791), S(795));
  }
_Ldone:
  name = amakenamestring(&curfile);
  if (jobname == 0) {
    jobname = curname;
    openlogfile();
  }
  if (termoffset + flength(name) > maxprintline - 2) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
    println();
  } else if (termoffset > 0 || fileoffset > 0)
    printchar(' ');
  printchar('(');
  openparens++;
  slowprint(name);
  fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  state = newline;
  if (name == strptr - 1) {   /*538:*/
    flushstring();
/* p2c: tex1.p: Warning: Symbol 'FLUSHSTRING' is not defined [221] */
    name = curname;
  }
  line = 1;
  inputln(&curfile, false);
  firmuptheline();
  if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
    limit--;
  } else
    buffer[limit] = endlinechar;
  first = limit + 1;
  loc = start;   /*:538*/
}


/*:537*/
/*560:*/
Static internalfontnumber readfontinfo(halfword u, strnumber nom,
				       strnumber aire, long s)
{
  fontindex k;
  boolean fileopened;
  halfword lf, lh, bc, ec, nw, nh, nd, ni, nl, nk, ne, np;
  internalfontnumber f, g;
  eightbits a, b, c, d;
  fourquarters qw;
  scaled sw, z;
  long bchlabel;
  short bchar;
  long alpha;
  char beta;
  fontindex FORLIM;

  g = nullfont;   /*562:*/
  /*563:*/
  fileopened = false;
  if (aire == S(266))
    packfilename(nom, 262, S(811));
  else
    packfilename(nom, aire, S(811));
  if (!bopenin(&tfmfile))
    goto _Lbadtfm_;
  fileopened = true;   /*:563*/
  /*565:*/
  lf = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (lf > 127)
    goto _Lbadtfm_;
  lf = lf * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  lh = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (lh > 127)
    goto _Lbadtfm_;
  lh = lh * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  bc = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (bc > 127)
    goto _Lbadtfm_;
  bc = bc * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  ec = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (ec > 127)
    goto _Lbadtfm_;
  ec = ec * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (bc > ec + 1 || ec > 255)
    goto _Lbadtfm_;
  if (bc > 255) {
    bc = 1;
    ec = 0;
  }
  nw = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (nw > 127)
    goto _Lbadtfm_;
  nw = nw * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  nh = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (nh > 127)
    goto _Lbadtfm_;
  nh = nh * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  nd = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (nd > 127)
    goto _Lbadtfm_;
  nd = nd * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  ni = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (ni > 127)
    goto _Lbadtfm_;
  ni = ni * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  nl = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (nl > 127)
    goto _Lbadtfm_;
  nl = nl * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  nk = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (nk > 127)
    goto _Lbadtfm_;
  nk = nk * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  ne = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (ne > 127)
    goto _Lbadtfm_;
  ne = ne * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  np = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (np > 127)
    goto _Lbadtfm_;
  np = np * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (lf != lh + ec - bc + nw + nh + nd + ni + nl + nk + ne + np + 7)
	/*:565*/
	  goto _Lbadtfm_;
  /*566:*/
  lf += -lh - 6;
  if (np < 7)
    lf += 7 - np;
  if (fontptr == fontmax || fmemptr + lf > fontmemsize) {   /*567:*/
    printnl(258);
    print(265);
    sprintcs(u);
    printchar(61);
    printfilename(nom, aire, 266);
    if (s >= 0) {
      print(267);
      printscaled(s);
      print(268);
    } else if (s != -1000) {
      print(269);
      printint(-s);
    }
    print(S(812));
    helpptr = 4;
    helpline[3] = S(813);
    helpline[2] = S(814);
    helpline[1] = S(815);
    helpline[0] = S(816);
    error();
    goto _Ldone;
  }
  /*:567*/
  f = fontptr + 1;
  charbase[f - fontbase] = fmemptr - bc;
  widthbase[f - fontbase] = charbase[f - fontbase] + ec + 1;
  heightbase[f - fontbase] = widthbase[f - fontbase] + nw;
  depthbase[f - fontbase] = heightbase[f - fontbase] + nh;
  italicbase[f - fontbase] = depthbase[f - fontbase] + nd;
  ligkernbase[f - fontbase] = italicbase[f - fontbase] + ni;
  kernbase[f - fontbase] = ligkernbase[f - fontbase] + nl - kernbaseoffset;
  extenbase[f - fontbase] = kernbase[f - fontbase] + kernbaseoffset + nk;
  parambase[f - fontbase] = extenbase[f - fontbase] + ne;   /*:566*/
  /*568:*/
  if (lh < 2)
    goto _Lbadtfm_;
  a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  qw.b0 = a;
  b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  qw.b1 = b;
  c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  qw.b2 = c;
  d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  qw.b3 = d;
  fontcheck[f - fontbase] = qw;
  z = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (z > 127)
    goto _Lbadtfm_;
  z = z * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  z = z * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  z = z * 16 + getc(tfmfile) / 16;
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  if (z < unity)
    goto _Lbadtfm_;
  while (lh > 2) {
    getc(tfmfile);
    getc(tfmfile);
    getc(tfmfile);
    getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    lh--;
  }
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
  fontdsize[f - fontbase] = z;
  if (s != -1000) {
    if (s >= 0)
      z = s;
    else
      z = xnoverd(z, -s, 1000);
  }
  fontsize[f - fontbase] = z;   /*:568*/
  /*569:*/
  FORLIM = widthbase[f - fontbase];
  for (k = fmemptr; k < FORLIM; k++) {   /*:569*/
    a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b0 = a;
    b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b1 = b;
    c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b2 = c;
    d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b3 = d;
    fontinfo[k].qqqq = qw;
    if (a >= nw || b / 16 >= nh || (b & 15) >= nd || c / 4 >= ni)
      goto _Lbadtfm_;
    switch (c & 3) {

    case ligtag:
      if (d >= nl)
	goto _Lbadtfm_;
      break;

    case exttag:
      if (d >= ne)
	goto _Lbadtfm_;
      break;

    case listtag:   /*570:*/
      if (d < bc || d > ec)
	goto _Lbadtfm_;
      while (d < k + bc - fmemptr) {
	qw = *foocharinfo(f, d);
	if (chartag(qw) != listtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
	  goto _Lnotfound;
	}
	d = *foorembyte(qw) - minquarterword;
      }
      if (d == k + bc - fmemptr)
	goto _Lbadtfm_;
_Lnotfound: ;
      break;
      /*:570*/
    }
  }
  /*571:*/
  /*572:*/
  alpha = 16;
  while (z >= 8388608L) {
    z /= 2;
    alpha += alpha;
  }
  beta = 256 / alpha;
  alpha *= z;   /*:572*/
  FORLIM = ligkernbase[f - fontbase];
  for (k = widthbase[f - fontbase]; k < FORLIM; k++) {
    a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    sw = ((d * z / 256 + c * z) / 256 + b * z) / beta;
    if (a == 0)
      fontinfo[k].sc = sw;
    else if (a == 255)
      fontinfo[k].sc = sw - alpha;
    else
      goto _Lbadtfm_;
  }
  if (fontinfo[widthbase[f - fontbase]].sc != 0)
    goto _Lbadtfm_;
  if (fontinfo[heightbase[f - fontbase]].sc != 0)
    goto _Lbadtfm_;
  if (fontinfo[depthbase[f - fontbase]].sc != 0)
    goto _Lbadtfm_;
  if (fontinfo[italicbase[f - fontbase]].sc != 0)   /*:571*/
    goto _Lbadtfm_;
  /*573:*/
  bchlabel = 32767;
  bchar = 256;
  if (nl > 0) {
    FORLIM = kernbase[f - fontbase] + kernbaseoffset;
    for (k = ligkernbase[f - fontbase]; k < FORLIM; k++) {
      a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      qw.b0 = a;
      b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      qw.b1 = b;
      c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      qw.b2 = c;
      d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      qw.b3 = d;
      fontinfo[k].qqqq = qw;
      if (a > 128) {
	if (c * 256 + d >= nl)
	  goto _Lbadtfm_;
	if (a == 255) {
	  if (k == ligkernbase[f - fontbase])
	    bchar = b;
	}
      } else {
	if (b != bchar) {
	  if (b < bc || b > ec)
	    goto _Lbadtfm_;
	  qw = *foocharinfo(f, b);
	  if (!charexists(qw))
	    goto _Lbadtfm_;
	}
	if (c < 128) {
	  if (d < bc || d > ec)
	    goto _Lbadtfm_;
	  qw = *foocharinfo(f, d);
	  if (!charexists(qw))
	    goto _Lbadtfm_;
	} else if ((c - 128) * 256 + d >= nk)
	  goto _Lbadtfm_;
	if (a < 128) {
	  if (k - ligkernbase[f - fontbase] + a + 1 >= nl)
	    goto _Lbadtfm_;
	}
      }
    }
    if (a == 255)
      bchlabel = c * 256 + d;
  }
  FORLIM = extenbase[f - fontbase];
  for (k = kernbase[f - fontbase] + kernbaseoffset; k < FORLIM; k++) {
	/*:573*/
	  a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    sw = ((d * z / 256 + c * z) / 256 + b * z) / beta;
    if (a == 0)
      fontinfo[k].sc = sw;
    else if (a == 255)
      fontinfo[k].sc = sw - alpha;
    else
      goto _Lbadtfm_;
  }
  /*574:*/
  FORLIM = parambase[f - fontbase];
  for (k = extenbase[f - fontbase]; k < FORLIM; k++) {   /*:574*/
    a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b0 = a;
    b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b1 = b;
    c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b2 = c;
    d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    qw.b3 = d;
    fontinfo[k].qqqq = qw;
    if (a != 0) {
      if (a < bc || a > ec)
	goto _Lbadtfm_;
      qw = *foocharinfo(f, a);
      if (!charexists(qw))
	goto _Lbadtfm_;
    }
    if (b != 0) {
      if (b < bc || b > ec)
	goto _Lbadtfm_;
      qw = *foocharinfo(f, b);
      if (!charexists(qw))
	goto _Lbadtfm_;
    }
    if (c != 0) {
      if (c < bc || c > ec)
	goto _Lbadtfm_;
      qw = *foocharinfo(f, c);
      if (!charexists(qw))
	goto _Lbadtfm_;
    }
    if (d < bc || d > ec)
      goto _Lbadtfm_;
    qw = *foocharinfo(f, d);
    if (!charexists(qw))
      goto _Lbadtfm_;
  }
  /*575:*/
  for (k = 1; k <= np; k++) {
    if (k == 1) {
      sw = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      if (sw > 127)
	sw -= 256;
      sw = sw * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      sw = sw * 256 + getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      fontinfo[parambase[f - fontbase]].sc = sw * 16 + getc(tfmfile) / 16;
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
    } else {
      a = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      b = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      c = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      d = getc(tfmfile);
/* p2c: tex1.p: Warning: Symbol 'GETC' is not defined [221] */
      sw = ((d * z / 256 + c * z) / 256 + b * z) / beta;
      if (a == 0)
	fontinfo[parambase[f - fontbase] + k - 1].sc = sw;
      else if (a == 255)
	fontinfo[parambase[f - fontbase] + k - 1].sc = sw - alpha;
      else
	goto _Lbadtfm_;
    }
  }
  if (P_eof(tfmfile))
    goto _Lbadtfm_;
  for (k = np; k <= 6; k++)   /*:575*/
    fontinfo[parambase[f - fontbase] + k].sc = 0;
  /*576:*/
  if (np >= 7)
    fontparams[f - fontbase] = np;
  else
    fontparams[f - fontbase] = 7;
  hyphenchar[f - fontbase] = defaulthyphenchar;
  skewchar[f - fontbase] = defaultskewchar;
  if (bchlabel < nl)
    bcharlabel[f - fontbase] = bchlabel + ligkernbase[f - fontbase];
  else
    bcharlabel[f - fontbase] = nonaddress;
  fontbchar[f - fontbase] = bchar;
  fontfalsebchar[f - fontbase] = bchar;
  if (bchar <= ec) {
    if (bchar >= bc) {
      qw = *foocharinfo(f, bchar);
      if (charexists(qw))
	fontfalsebchar[f - fontbase] = nonchar;
    }
  }
  fontname[f - fontbase] = nom;
  fontarea[f - fontbase] = aire;
  fontbc[f - fontbase] = bc;
  fontec[f - fontbase] = ec;
  fontglue[f - fontbase] = 0;
  charbase[f - fontbase] -= minquarterword;
  widthbase[f - fontbase] -= minquarterword;
  ligkernbase[f - fontbase] -= minquarterword;
  kernbase[f - fontbase] -= minquarterword;
  extenbase[f - fontbase] -= minquarterword;
  parambase[f - fontbase]--;
  fmemptr += lf;
  fontptr = f;
  g = f;
  goto _Ldone;   /*:576*/
  /*:562*/
_Lbadtfm_:   /*561:*/
  printnl(258);
  print(265);
  sprintcs(u);
  printchar(61);
  printfilename(nom, aire, 266);
  if (s >= 0) {
    print(267);
    printscaled(s);
    print(268);
  } else if (s != -1000) {
    print(269);
    printint(-s);
  }
  if (fileopened)
    print(S(804));
  else
    print(S(805));
  helpptr = 5;
  helpline[4] = S(806);
  helpline[3] = S(807);
  helpline[2] = S(808);
  helpline[1] = S(809);
  helpline[0] = S(810);   /*:561*/
  error();
_Ldone:
  if (fileopened)
    bclose(&tfmfile);
  return g;
}


/*:560*/
/*581:*/
Static void charwarning(internalfontnumber f, eightbits c)
{
  if (tracinglostchars <= 0)
    return;
  begindiagnostic();
  printnl(S(825));
  print(c);
  print(S(826));
  slowprint(fontname[f - fontbase]);
  printchar('!');
  enddiagnostic(false);
}


/*:581*/
/*582:*/
Static halfword newcharacter(internalfontnumber f, eightbits c)
{
  halfword Result;
  pointer p;

  if (fontbc[f - fontbase] <= c) {
    if (fontec[f - fontbase] >= c) {
      if (charexists(*foocharinfo(f, c))) {
	p = getavail();
	*foofont(p) = f;
	*foocharacter(p) = c;
	Result = p;
	goto _Lexit;
      }
    }
  }
  charwarning(f, c);
  Result = 0;
_Lexit:
  return Result;
}


/*:582*/
/*597:*/
Static void writedvi(dviindex a, dviindex b)
{
  dviindex k;

  for (k = a; k <= b; k++)
    fwrite(&dvibuf[k], sizeof(eightbits), 1, dvifile);
}


/*:597*/
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


/*:598*/
/*600:*/
Static void dvifour(long x)
{
  if (x >= 0) {
    dviout(x / 16777216L);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  } else {
    x += 1073741824L;
    x += 1073741824L;
    dviout(x / 16777216L + 128);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
  x %= 16777216L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  dviout(x / 65536L);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  x %= 65536L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  dviout(x / 256);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(x & 255);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
}


/*:600*/
/*601:*/
Static void dvipop(long l)
{
  if (l == dvioffset + dviptr && dviptr > 0)
    dviptr--;
  else {
    dviout(pop);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
}


/*:601*/
/*602:*/
Static void dvifontdef(internalfontnumber f)
{
  poolpointer k, FORLIM;

  dviout(fntdef1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(f - fontbase - 1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(fontcheck[f - fontbase].b0 - minquarterword);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(fontcheck[f - fontbase].b1 - minquarterword);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(fontcheck[f - fontbase].b2 - minquarterword);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(fontcheck[f - fontbase].b3 - minquarterword);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dvifour(fontsize[f - fontbase]);
  dvifour(fontdsize[f - fontbase]);
  dviout(flength(fontarea[f - fontbase]));
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  dviout(flength(fontname[f - fontbase]));   /*603:*/
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  FORLIM = strstart[fontarea[f - fontbase] + 1];
  for (k = strstart[fontarea[f - fontbase]]; k < FORLIM; k++) {
    dviout(strpool[k]);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
  FORLIM = strstart[fontname[f - fontbase] + 1];
  for (k = strstart[fontname[f - fontbase]]; k < FORLIM; k++) {
    dviout(strpool[k]);   /*:603*/
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
}


/*:602*/
/*607:*/
Static void movement(long w, eightbits o)
{
  smallnumber mstate;
  pointer p, q;
  long k;

  q = getnode(movementnodesize);
  *foowidth(q) = w;
  *foolocation(q) = dvioffset + dviptr;
  if (o == down1) {
    *foolink(q) = downptr;
    downptr = q;
  } else {
    *foolink(q) = rightptr;
    rightptr = q;
  }  /*611:*/
  p = *foolink(q);
  mstate = noneseen;
  while (p != 0) {
    if (*foowidth(p) == w) {   /*612:*/
      switch (mstate + *fooinfo(p)) {

      case noneseen + yzOK:
      case noneseen + yOK:
      case zseen + yzOK:
      case zseen + yOK:
	if (*foolocation(p) < dvigone)
	  goto _Lnotfound;
	else  /*613:*/
	{   /*:613*/
	  k = *foolocation(p) - dvioffset;
	  if (k < 0)
	    k += dvibufsize;
	  dvibuf[k] += y1_ - down1;
	  *fooinfo(p) = yhere;
	  goto _Lfound;
	}
	break;

      case noneseen + zOK:
      case yseen + yzOK:
      case yseen + zOK:
	if (*foolocation(p) < dvigone)
	  goto _Lnotfound;
	else {   /*614:*/
	  k = *foolocation(p) - dvioffset;
	  if (k < 0)
	    k += dvibufsize;
	  dvibuf[k] += z1 - down1;
	  *fooinfo(p) = zhere;
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
      switch (mstate + *fooinfo(p)) {

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
    p = *foolink(p);
  }
_Lnotfound:   /*:611*/
  /*610:*/
  *fooinfo(q) = yzOK;
  if (labs(w) >= 8388608L) {
    dviout(o + 3);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dvifour(w);
    goto _Lexit;
  }
  if (labs(w) >= 32768L) {
    dviout(o + 2);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    if (w < 0)
      w += 16777216L;
    dviout(w / 65536L);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    w %= 65536L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    goto _L2;
  }
  if (labs(w) >= 128) {
    dviout(o + 1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    if (w < 0)
      w += 65536L;
    goto _L2;
  }
  dviout(o);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  if (w < 0)
    w += 256;
  goto _L1;
_L2:
  dviout(w / 256);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
_L1:
  dviout(w & 255);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  goto _Lexit;   /*:610*/
_Lfound:   /*609:*/
  *fooinfo(q) = *fooinfo(p);
  if (*fooinfo(q) == yhere) {
    dviout(o + y0_ - down1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    while (*foolink(q) != p) {
      q = *foolink(q);
      switch (*fooinfo(q)) {

      case yzOK:
	*fooinfo(q) = zOK;
	break;

      case yOK:
	*fooinfo(q) = dfixed;
	break;
      }
    }
  } else {   /*:609*/
    dviout(o + z0 - down1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    while (*foolink(q) != p) {
      q = *foolink(q);
      switch (*fooinfo(q)) {

      case yzOK:
	*fooinfo(q) = yOK;
	break;

      case zOK:
	*fooinfo(q) = dfixed;
	break;
      }
    }
  }
_Lexit: ;

  /*:614*/
}


/*:607*/
/*615:*/
Static void prunemovements(long l)
{
  pointer p;

  while (downptr != 0) {
    if (*foolocation(downptr) < l)
      goto _Ldone;
    p = downptr;
    downptr = *foolink(p);
    freenode(p, movementnodesize);
  }
_Ldone:
  while (rightptr != 0) {
    if (*foolocation(rightptr) < l)
      goto _Lexit;
    p = rightptr;
    rightptr = *foolink(p);
    freenode(p, movementnodesize);
  }
_Lexit: ;
}


/*:615*/
/*618:*/
Static void vlistout(void);


/*:618*/
/*619:*/
/*1368:*/
Static void specialout(halfword p)
{
  char oldsetting;
  poolpointer k, FORLIM;

  synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
  synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
  oldsetting = selector;
  selector = newstring;
  showtokenlist(*foolink(*foowritetokens(p)), 0, poolsize - poolptr);
  selector = oldsetting;
  if (poolptr + 1 > poolsize)
    overflow(257, poolsize - initpoolptr);
  if (curlength < 256) {
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    dviout(xxx1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dviout(curlength);
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  } else {
    dviout(xxx4);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
    dvifour(curlength);
  }
  FORLIM = poolptr;
  for (k = strstart[strptr]; k < FORLIM; k++) {
    dviout(strpool[k]);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
  poolptr = strstart[strptr];
}


/*:1368*/
/*1370:*/
Static void writeout(halfword p)
{   /*1371:*/
  char oldsetting;
  long oldmode;
  smallnumber j;
  pointer q, r;

  q = getavail();
  *fooinfo(q) = rightbracetoken + '}';
  r = getavail();
  *foolink(q) = r;
  *fooinfo(r) = endwritetoken;
  inslist(q);
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
  begintokenlist(*foowritetokens(p), writetext);
  q = getavail();
  *fooinfo(q) = leftbracetoken + '{';
  inslist(q);
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
  oldmode = mode;
  mode = 0;
  curcs = writeloc;
  q = scantoks(false, true);
  gettoken();
  if (curtok != endwritetoken) {   /*1372:*/
    printnl(258);
    print(S(1296));
    helpptr = 2;
    helpline[1] = S(1297);
    helpline[0] = S(1011);
    error();
    do {
      gettoken();
    } while (curtok != endwritetoken);
  }
  /*:1372*/
  mode = oldmode;   /*:1371*/
  endtokenlist();
  oldsetting = selector;
  j = *foowritestream(p);
  if (writeopen[j])
    selector = j;
  else {
    if (j == 17 && selector == termandlog)
      selector = logonly;
    printnl(S(266));
  }
  tokenshow(defref);
  println();
  flushlist(defref);
  selector = oldsetting;
}


/*:1370*/
/*1373:*/
Static void outwhat(halfword p)
{
  smallnumber j;

  switch (*foosubtype(p)) {

  case opennode:
  case writenode:
  case closenode:   /*1374:*/
    if (!doingleaders) {   /*:1374*/
      j = *foowritestream(p);
      if (*foosubtype(p) == writenode)
	writeout(p);
      else {
	if (writeopen[j])
	  aclose(&writefile[j]);
	if (*foosubtype(p) == closenode)
	  writeopen[j] = false;
	else if (j < 16) {
	  curname = *fooopenname(p);
	  curarea = *fooopenarea(p);
	  curext = *fooopenext(p);
	  if (curext == S(266))
	    curext = S(795);
	  packcurname();
/* p2c: tex1.p: Warning: Symbol 'PACKCURNAME' is not defined [221] */
	  while (!aopenout(&writefile[j]))
	    promptfilename(S(1299), S(795));
	  writeopen[j] = true;
	}
      }
    }
    break;

  case specialnode:
    specialout(p);
    break;

  case languagenode:
    /* blank case */
    break;

  default:
    confusion(S(1298));
    break;
  }
}  /*:1373*/


Static void hlistout(void)
{
  scaled baseline, leftedge, saveh, savev, leaderwd, lx, edge;
  pointer thisbox, p, leaderbox;
  glueord gorder;
  char gsign;
  long saveloc;
  boolean outerdoingleaders;
  double gluetemp;

  thisbox = tempptr;
  gorder = *fooglueorder(thisbox);
  gsign = *foogluesign(thisbox);
  p = *foolistptr(thisbox);
  curs++;
  if (curs > 0) {
    dviout(push);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
  if (curs > maxpush)
    maxpush = curs;
  saveloc = dvioffset + dviptr;
  baseline = curv;
  leftedge = curh;
  while (p != 0) {   /*620:*/
_Lreswitch:
    if (ischarnode(p)) {
      synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
      synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
      do {
	f = *foofont(p);
	c = *foocharacter(p);
	if (f != dvif) {   /*621:*/
	  if (!fontused[f - fontbase]) {
	    dvifontdef(f);
	    fontused[f - fontbase] = true;
	  }
	  if (f <= fontbase + 64) {
	    dviout(f - fontbase + fntnum0 - 1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	  } else {
	    dviout(fnt1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	    dviout(f - fontbase - 1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	  }
	  dvif = f;
	}
	/*:621*/
	if (c >= minquarterword + 128) {
	  dviout(set1);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	}
	dviout(c - minquarterword);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	curh += *foocharwidth(f, *foocharinfo(f, c));
	p = *foolink(p);
      } while (ischarnode(p));
      dvih = curh;
      continue;
    }
    switch (*footype(p)) {

    case hlistnode:
    case vlistnode:   /*623:*/
      if (*foolistptr(p) == 0)
	curh += *foowidth(p);
      else {   /*:623*/
	saveh = dvih;
	savev = dviv;
	curv = baseline + *fooshiftamount(p);
	tempptr = p;
	edge = curh;
	if (*footype(p) == vlistnode)
	  vlistout();
	else
	  hlistout();
	dvih = saveh;
	dviv = savev;
	curh = edge + *foowidth(p);
	curv = baseline;
      }
      break;

    case rulenode:
      ruleht = *fooheight(p);
      ruledp = *foodepth(p);
      rulewd = *foowidth(p);
      goto _Lfinrule_;
      break;

    case whatsitnode:   /*1367:*/
      outwhat(p);
      break;
      /*:1367*/

    case gluenode:   /*625:*/
      g = *fooglueptr(p);
      rulewd = *foowidth(g);
      if (gsign != normal) {
	if (gsign == stretching) {
	  if (*foostretchorder(g) == gorder) {
	    vetglue(*fooglueset(thisbox) * *foostretch(g));
/* p2c: tex1.p: Warning: Symbol 'VETGLUE' is not defined [221] */
	    rulewd += (long)floor(gluetemp + 0.5);
	  }
	} else if (*fooshrinkorder(g) == gorder) {
	  vetglue(*fooglueset(thisbox) * *fooshrink(g));
/* p2c: tex1.p: Warning: Symbol 'VETGLUE' is not defined [221] */
	  rulewd -= (long)floor(gluetemp + 0.5);
	}
      }
      if (*foosubtype(p) >= aleaders) {   /*626:*/
	leaderbox = *fooleaderptr(p);
	if (*footype(leaderbox) == rulenode) {
	  ruleht = *fooheight(leaderbox);
	  ruledp = *foodepth(leaderbox);
	  goto _Lfinrule_;
	}
	leaderwd = *foowidth(leaderbox);
	if (leaderwd > 0 && rulewd > 0) {
	  rulewd += 10;
	  edge = curh + rulewd;
	  lx = 0;   /*627:*/
	  if (*foosubtype(p) == aleaders) {
	    saveh = curh;
	    curh = leftedge + leaderwd * ((curh - leftedge) / leaderwd);
	    if (curh < saveh)
	      curh += leaderwd;
	  } else {   /*:627*/
	    lq = rulewd / leaderwd;
	    lr = rulewd % leaderwd;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
	    if (*foosubtype(p) == cleaders)
	      curh += lr / 2;
	    else {
	      lx = (lr * 2 + lq + 1) / (lq * 2 + 2);
	      curh += (lr - (lq - 1) * lx) / 2;
	    }
	  }
	  while (curh + leaderwd <= edge) {   /*628:*/
	    curv = baseline + *fooshiftamount(leaderbox);
	    synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
	    savev = dviv;
	    synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
	    saveh = dvih;
	    tempptr = leaderbox;
	    outerdoingleaders = doingleaders;
	    doingleaders = true;
	    if (*footype(leaderbox) == vlistnode)
	      vlistout();
	    else
	      hlistout();
	    doingleaders = outerdoingleaders;
	    dviv = savev;
	    dvih = saveh;
	    curv = baseline;
	    curh = saveh + leaderwd + lx;
	  }
	  /*:628*/
	  curh = edge - 10;
	  goto _Lnextp_;
	}
      }  /*:626*/
      goto _Lmovepast_;
      break;
      /*:625*/

    case kernnode:
    case mathnode:
      curh += *foowidth(p);
      break;

    case ligaturenode:   /*652:*/
      mem[ligtrick - memmin] = mem[ligchar(p) - memmin];
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
      *foolink(ligtrick) = *foolink(p);
      p = ligtrick;
      goto _Lreswitch;
      break;
      /*:652*/
    }
    goto _Lnextp_;
_Lfinrule_:   /*624:*/
    if (isrunning(ruleht)) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
      ruleht = *fooheight(thisbox);
    }
    if (isrunning(ruledp)) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
      ruledp = *foodepth(thisbox);
    }
    ruleht += ruledp;
    if (ruleht > 0 && rulewd > 0) {   /*:624*/
      synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
      curv = baseline + ruledp;
      synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
      dviout(setrule);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
      dvifour(ruleht);
      dvifour(rulewd);
      curv = baseline;
      dvih += rulewd;
    }
_Lmovepast_:
    curh += rulewd;
_Lnextp_:
    p = *foolink(p);
  }
  prunemovements(saveloc);
  if (curs > 0)
    dvipop(saveloc);
  curs--;

  /*622:*/
  /*:622*/
  /*:620*/
}


/*:619*/
/*629:*/
Static void vlistout(void)
{
  scaled leftedge, topedge, saveh, savev, leaderht, lx, edge;
  pointer thisbox, p, leaderbox;
  glueord gorder;
  char gsign;
  long saveloc;
  boolean outerdoingleaders;
  double gluetemp;

  thisbox = tempptr;
  gorder = *fooglueorder(thisbox);
  gsign = *foogluesign(thisbox);
  p = *foolistptr(thisbox);
  curs++;
  if (curs > 0) {
    dviout(push);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  }
  if (curs > maxpush)
    maxpush = curs;
  saveloc = dvioffset + dviptr;
  leftedge = curh;
  curv -= *fooheight(thisbox);
  topedge = curv;
  while (p != 0) {   /*630:*/
    if (ischarnode(p))
      confusion(S(828));
    else  /*631:*/
    {   /*:631*/
      switch (*footype(p)) {

      case hlistnode:
      case vlistnode:   /*632:*/
	if (*foolistptr(p) == 0)
	  curv += *fooheight(p) + *foodepth(p);
	else {   /*:632*/
	  curv += *fooheight(p);
	  synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
	  saveh = dvih;
	  savev = dviv;
	  curh = leftedge + *fooshiftamount(p);
	  tempptr = p;
	  if (*footype(p) == vlistnode)
	    vlistout();
	  else
	    hlistout();
	  dvih = saveh;
	  dviv = savev;
	  curv = savev + *foodepth(p);
	  curh = leftedge;
	}
	break;

      case rulenode:
	ruleht = *fooheight(p);
	ruledp = *foodepth(p);
	rulewd = *foowidth(p);
	goto _Lfinrule_;
	break;

      case whatsitnode:   /*1366:*/
	outwhat(p);
	break;
	/*:1366*/

      case gluenode:   /*634:*/
	g = *fooglueptr(p);
	ruleht = *foowidth(g);
	if (gsign != normal) {
	  if (gsign == stretching) {
	    if (*foostretchorder(g) == gorder) {
	      vetglue(*fooglueset(thisbox) * *foostretch(g));
/* p2c: tex1.p: Warning: Symbol 'VETGLUE' is not defined [221] */
	      ruleht += (long)floor(gluetemp + 0.5);
	    }
	  } else if (*fooshrinkorder(g) == gorder) {
	    vetglue(*fooglueset(thisbox) * *fooshrink(g));
/* p2c: tex1.p: Warning: Symbol 'VETGLUE' is not defined [221] */
	    ruleht -= (long)floor(gluetemp + 0.5);
	  }
	}
	if (*foosubtype(p) >= aleaders) {   /*635:*/
	  leaderbox = *fooleaderptr(p);
	  if (*footype(leaderbox) == rulenode) {
	    rulewd = *foowidth(leaderbox);
	    ruledp = 0;
	    goto _Lfinrule_;
	  }
	  leaderht = *fooheight(leaderbox) + *foodepth(leaderbox);
	  if (leaderht > 0 && ruleht > 0) {
	    ruleht += 10;
	    edge = curv + ruleht;
	    lx = 0;   /*636:*/
	    if (*foosubtype(p) == aleaders) {
	      savev = curv;
	      curv = topedge + leaderht * ((curv - topedge) / leaderht);
	      if (curv < savev)
		curv += leaderht;
	    } else {   /*:636*/
	      lq = ruleht / leaderht;
	      lr = ruleht % leaderht;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
	      if (*foosubtype(p) == cleaders)
		curv += lr / 2;
	      else {
		lx = (lr * 2 + lq + 1) / (lq * 2 + 2);
		curv += (lr - (lq - 1) * lx) / 2;
	      }
	    }
	    while (curv + leaderht <= edge) {   /*637:*/
	      curh = leftedge + *fooshiftamount(leaderbox);
	      synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
	      saveh = dvih;
	      curv += *fooheight(leaderbox);
	      synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
	      savev = dviv;
	      tempptr = leaderbox;
	      outerdoingleaders = doingleaders;
	      doingleaders = true;
	      if (*footype(leaderbox) == vlistnode)
		vlistout();
	      else
		hlistout();
	      doingleaders = outerdoingleaders;
	      dviv = savev;
	      dvih = saveh;
	      curh = leftedge;
	      curv = savev - *fooheight(leaderbox) + leaderht + lx;
	    }
	    /*:637*/
	    curv = edge - 10;
	    goto _Lnextp_;
	  }
	}
	/*:635*/
	goto _Lmovepast_;
	break;
	/*:634*/

      case kernnode:
	curv += *foowidth(p);
	break;
      }
      goto _Lnextp_;
_Lfinrule_:   /*633:*/
      if (isrunning(rulewd)) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
	rulewd = *foowidth(thisbox);
      }
      ruleht += ruledp;
      curv += ruleht;
      if (ruleht > 0 && rulewd > 0) {
	synchh();
/* p2c: tex1.p: Warning: Symbol 'SYNCHH' is not defined [221] */
	synchv();
/* p2c: tex1.p: Warning: Symbol 'SYNCHV' is not defined [221] */
	dviout(putrule);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
	dvifour(ruleht);
	dvifour(rulewd);
      }
      goto _Lnextp_;   /*:633*/
_Lmovepast_:
      curv += ruleht;
    }
_Lnextp_:
    p = *foolink(p);
  }
  /*:630*/
  prunemovements(saveloc);
  if (curs > 0)
    dvipop(saveloc);
  curs--;
}


/*:629*/
/*638:*/
Static void shipout(halfword p)
{
  long pageloc;
  char j, k;
  poolpointer s;
  char oldsetting;
  poolpointer FORLIM;

  if (tracingoutput > 0) {
    printnl(S(266));
    println();
    print(S(829));
  }
  if (termoffset > maxprintline - 9)
    println();
  else if (termoffset > 0 || fileoffset > 0)
    printchar(' ');
  printchar('[');
  j = 9;
  while (*foocount(j) == 0 && j > 0)
    j--;
  for (k = 0; k <= j; k++) {
    printint(*foocount(k));
    if (k < j)
      printchar('.');
  }
  fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  if (tracingoutput > 0) {   /*640:*/
    printchar(']');
    begindiagnostic();
    showbox(p);
    enddiagnostic(true);
  }
  /*641:*/
  if ((*fooheight(p) > maxdimen) | (*foodepth(p) > maxdimen) |
      (*fooheight(p) + *foodepth(p) + voffset > maxdimen) |
      (*foowidth(p) + hoffset > maxdimen)) {
    printnl(258);
    print(S(833));
    helpptr = 2;
    helpline[1] = S(834);
    helpline[0] = S(835);
    error();
    if (tracingoutput <= 0) {
      begindiagnostic();
      printnl(S(836));
      showbox(p);
      enddiagnostic(true);
    }
    goto _Ldone;
  }
  if (*fooheight(p) + *foodepth(p) + voffset > maxv)
    maxv = *fooheight(p) + *foodepth(p) + voffset;
  if (*foowidth(p) + hoffset > maxh)
    maxh = *foowidth(p) + hoffset;   /*:641*/
  /*617:*/
  dvih = 0;
  dviv = 0;
  curh = hoffset;
  dvif = nullfont;
  if (outputfilename == 0) {
    if (jobname == 0)
      openlogfile();
    packjobname(263);
    while (!bopenout(&dvifile))
      promptfilename(264, 263);
    outputfilename = bmakenamestring(&dvifile);
  }
  if (totalpages == 0) {   /*:617*/
    dviout(pre);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dviout(idbyte);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dvifour(25400000L);
    dvifour(473628672L);
    preparemag();
    dvifour(mag);
    oldsetting = selector;
    selector = newstring;
    print(S(827));
    printint(year);
    printchar('.');
    printtwo(month);
    printchar('.');
    printtwo(day);
    printchar(':');
    printtwo(time / 60);
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
    printtwo(time % 60);
    selector = oldsetting;
    dviout(curlength);
    FORLIM = poolptr;
/* p2c: tex1.p: Warning: Symbol 'CURLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    for (s = strstart[strptr]; s < FORLIM; s++) {
      dviout(strpool[s]);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    }
    poolptr = strstart[strptr];
  }
  pageloc = dvioffset + dviptr;
  dviout(bop);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  for (k = 0; k <= 9; k++)
    dvifour(*foocount(k));
  dvifour(lastbop);
  lastbop = pageloc;
  curv = *fooheight(p) + voffset;
  tempptr = p;
  if (*footype(p) == vlistnode)
    vlistout();
  else
    hlistout();
  dviout(eop);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
  totalpages++;
  curs = -1;
_Ldone:   /*:640*/
  if (tracingoutput <= 0)
    printchar(']');
  deadcycles = 0;
  fflush(termout);   /*639:*/
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  /*_STAT*/
  if (tracingstats > 1) {   /*_ENDSTAT*/
    printnl(S(830));
    printint(varused);
    printchar('&');
    printint(dynused);
    printchar(';');
  }
  flushnodelist(p);   /*_STAT*/
  if (tracingstats <= 1)   /*_ENDSTAT*/
    return;
  /*:639*/
  print(S(831));
  printint(varused);
  printchar('&');
  printint(dynused);
  print(S(832));
  printint(himemmin - lomemmax - 1);
  println();
}  /*:638*/


/*645:*/
Static void scanspec(groupcode c, boolean threecodes)
{
  long s;
  char speccode;

  if (threecodes)
    s = *foosaved(0);
  if (scankeyword(S(842)))
    speccode = exactly;
  else if (scankeyword(S(843)))
    speccode = additional;
  else {
    speccode = additional;
    curval = 0;
    goto _Lfound;
  }
  scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
_Lfound:
  if (threecodes) {
    *foosaved(0) = s;
    saveptr++;
  }
  *foosaved(0) = speccode;
  *foosaved(1) = curval;
  saveptr += 2;
  newsavelevel(c);
  scanleftbrace();
}


/*:645*/
/*649:*/
Static halfword hpack(halfword p, long w, smallnumber m)
{
  pointer r, q, g;
  scaled h, d, x, s;
  glueord o;
  internalfontnumber f;
  fourquarters i;
  eightbits hd;

  lastbadness = 0;
  r = getnode(boxnodesize);
  *footype(r) = hlistnode;
  *foosubtype(r) = minquarterword;
  *fooshiftamount(r) = 0;
  q = r + listoffset;
  *foolink(q) = p;
  h = 0;   /*650:*/
  d = 0;
  x = 0;
  totalstretch[0] = 0;
  totalshrink[0] = 0;
  totalstretch[fil - normal] = 0;
  totalshrink[fil - normal] = 0;
  totalstretch[fill - normal] = 0;
  totalshrink[fill - normal] = 0;
  totalstretch[filll - normal] = 0;
  totalshrink[filll - normal] = 0;   /*:650*/
  while (p != 0) {   /*651:*/
_Lreswitch:
    while (ischarnode(p)) {   /*654:*/
      f = *foofont(p);
      i = *foocharinfo(f, *foocharacter(p));
      hd = *fooheightdepth(i);
      x += *foocharwidth(f, i);
      s = *foocharheight(f, hd);
      if (s > h)
	h = s;
      s = *foochardepth(f, hd);
      if (s > d)
	d = s;
      p = *foolink(p);
    }
    /*:654*/
    if (p == 0)
      break;
    switch (*footype(p)) {

    case hlistnode:
    case vlistnode:
    case rulenode:
    case unsetnode:   /*653:*/
      x += *foowidth(p);
      if (*footype(p) >= rulenode)
	s = 0;
      else
	s = *fooshiftamount(p);
      if (*fooheight(p) - s > h)
	h = *fooheight(p) - s;
      if (*foodepth(p) + s > d)
	d = *foodepth(p) + s;
      break;
      /*:653*/

    case insnode:
    case marknode:
    case adjustnode:
      if (adjusttail != 0) {   /*655:*/
	while (*foolink(q) != p)
	  q = *foolink(q);
	if (*footype(p) == adjustnode) {
	  *foolink(adjusttail) = *fooadjustptr(p);
	  while (*foolink(adjusttail) != 0)
	    adjusttail = *foolink(adjusttail);
	  p = *foolink(p);
	  freenode(*foolink(q), smallnodesize);
	} else {
	  *foolink(adjusttail) = p;
	  adjusttail = p;
	  p = *foolink(p);
	}
	*foolink(q) = p;
	p = q;
      }
      /*:655*/
      break;

    case whatsitnode:   /*1360:*/
      break;
      /*:1360*/

    case gluenode:   /*656:*/
      g = *fooglueptr(p);
      x += *foowidth(g);
      o = *foostretchorder(g);
      totalstretch[o - normal] += *foostretch(g);
      o = *fooshrinkorder(g);
      totalshrink[o - normal] += *fooshrink(g);
      if (*foosubtype(p) >= aleaders) {
	g = *fooleaderptr(p);
	if (*fooheight(g) > h)
	  h = *fooheight(g);
	if (*foodepth(g) > d)
	  d = *foodepth(g);
      }
      break;
      /*:656*/

    case kernnode:
    case mathnode:
      x += *foowidth(p);
      break;

    case ligaturenode:   /*652:*/
      mem[ligtrick - memmin] = mem[ligchar(p) - memmin];
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
      *foolink(ligtrick) = *foolink(p);
      p = ligtrick;
      goto _Lreswitch;
      break;
      /*:652*/
    }
    p = *foolink(p);
  }
  /*:651*/
  if (adjusttail != 0)
    *foolink(adjusttail) = 0;
  *fooheight(r) = h;
  *foodepth(r) = d;   /*657:*/
  if (m == additional)
    w += x;
  *foowidth(r) = w;
  x = w - x;
  if (x == 0) {
    *foogluesign(r) = normal;
    *fooglueorder(r) = normal;
    *fooglueset(r) = 0.0;
    goto _Lexit;
  } else if (x > 0) {
    if (totalstretch[filll - normal] != 0)
      o = filll;
    else if (totalstretch[fill - normal] != 0)
      o = fill;
    else if (totalstretch[fil - normal] != 0)
      o = fil;
    else {
      o = normal;
      /*:
659*/
    }
    *fooglueorder(r) = o;
    *foogluesign(r) = stretching;
    if (totalstretch[o - normal] != 0)
      *fooglueset(r) = (double)x / totalstretch[o - normal];
    else {
      *foogluesign(r) = normal;
      *fooglueset(r) = 0.0;
    }
    if (o == normal) {
      if (*foolistptr(r) != 0) {   /*660:*/
	lastbadness = badness(x, totalstretch[0]);
	if (lastbadness > hbadness) {
	  println();
	  if (lastbadness > 100)
	    printnl(S(844));
	  else
	    printnl(S(845));
	  print(S(846));
	  printint(lastbadness);
	  goto _Lcommonending;
	}
      }
      /*:660*/
    }
    goto _Lexit;
  } else {
    if (totalshrink[filll - normal] != 0)
      o = filll;
    else if (totalshrink[fill - normal] != 0)
      o = fill;
    else if (totalshrink[fil - normal] != 0)
      o = fil;
    else
      o = normal;   /*:665*/
    *fooglueorder(r) = o;
    *foogluesign(r) = shrinking;
    if (totalshrink[o - normal] != 0)
      *fooglueset(r) = (double)(-x) / totalshrink[o - normal];
    else {
      *foogluesign(r) = normal;
      *fooglueset(r) = 0.0;
    }
    if ((totalshrink[o - normal] < -x && o == normal) & (*foolistptr(r) != 0)) {
      lastbadness = 1000000L;
      *fooglueset(r) = 1.0;   /*666:*/
      if (-x - totalshrink[0] > hfuzz || hbadness < 100) {   /*:666*/
	if (overfullrule > 0 && -x - totalshrink[0] > hfuzz) {
	  while (*foolink(q) != 0)
	    q = *foolink(q);
	  *foolink(q) = newrule();
	  *foowidth(*foolink(q)) = overfullrule;
	}
	println();
	printnl(S(852));
	printscaled(-x - totalshrink[0]);
	print(S(853));
	goto _Lcommonending;
      }
    } else if (o == normal) {
      if (*foolistptr(r) != 0) {   /*667:*/
	lastbadness = badness(-x, totalshrink[0]);
	if (lastbadness > hbadness) {
	  println();
	  printnl(S(854));
	  printint(lastbadness);
	  goto _Lcommonending;
	}
      }
      /*:667*/
    }
    goto _Lexit;
  }
_Lcommonending:   /*663:*/
  if (outputactive)
    print(S(847));
  else {
    if (packbeginline != 0) {
      if (packbeginline > 0)
	print(S(848));
      else
	print(S(849));
      printint(labs(packbeginline));
      print(S(850));
    } else
      print(S(851));
    printint(line);
  }
  println();
  fontinshortdisplay = nullfont;
  shortdisplay(*foolistptr(r));
  println();
  begindiagnostic();
  showbox(r);   /*:663*/
  enddiagnostic(true);
_Lexit:
  return r;

  /*658:*/
  /*659:*/
  /*:658*/
  /*664:*/
  /*665:*/
  /*:664*/
  /*:657*/
}


/*:649*/
/*668:*/
Static halfword vpackage(halfword p, long h, smallnumber m, long l)
{
  pointer r, g;
  scaled w, d, x, s;
  glueord o;

  lastbadness = 0;
  r = getnode(boxnodesize);
  *footype(r) = vlistnode;
  *foosubtype(r) = minquarterword;
  *fooshiftamount(r) = 0;
  *foolistptr(r) = p;
  w = 0;   /*650:*/
  d = 0;
  x = 0;
  totalstretch[0] = 0;
  totalshrink[0] = 0;
  totalstretch[fil - normal] = 0;
  totalshrink[fil - normal] = 0;
  totalstretch[fill - normal] = 0;
  totalshrink[fill - normal] = 0;
  totalstretch[filll - normal] = 0;
  totalshrink[filll - normal] = 0;   /*:650*/
  while (p != 0) {   /*669:*/
    if (ischarnode(p))
      confusion(S(855));
    else {
      switch (*footype(p)) {

      case hlistnode:
      case vlistnode:
      case rulenode:
      case unsetnode:   /*670:*/
	x += d + *fooheight(p);
	d = *foodepth(p);
	if (*footype(p) >= rulenode)
	  s = 0;
	else
	  s = *fooshiftamount(p);
	if (*foowidth(p) + s > w)
	  w = *foowidth(p) + s;
	break;
	/*:670*/

      case whatsitnode:   /*1359:*/
	break;

      /*:1359*/
      case gluenode:   /*:671*/
	/*671:*/
	x += d;
	d = 0;
	g = *fooglueptr(p);
	x += *foowidth(g);
	o = *foostretchorder(g);
	totalstretch[o - normal] += *foostretch(g);
	o = *fooshrinkorder(g);
	totalshrink[o - normal] += *fooshrink(g);
	if (*foosubtype(p) >= aleaders) {
	  g = *fooleaderptr(p);
	  if (*foowidth(g) > w)
	    w = *foowidth(g);
	}
	break;

      case kernnode:
	x += d + *foowidth(p);
	d = 0;
	break;
      }
    }
    p = *foolink(p);
  }
  /*:669*/
  *foowidth(r) = w;
  if (d > l) {   /*672:*/
    x += d - l;
    *foodepth(r) = l;
  } else
    *foodepth(r) = d;
  if (m == additional)
    h += x;
  *fooheight(r) = h;
  x = h - x;
  if (x == 0) {
    *foogluesign(r) = normal;
    *fooglueorder(r) = normal;
    *fooglueset(r) = 0.0;
    goto _Lexit;
  } else if (x > 0) {
    if (totalstretch[filll - normal] != 0)
      o = filll;
    else if (totalstretch[fill - normal] != 0)
      o = fill;
    else if (totalstretch[fil - normal] != 0)
      o = fil;
    else {
      o = normal;
      /*:
659*/
    }
    *fooglueorder(r) = o;
    *foogluesign(r) = stretching;
    if (totalstretch[o - normal] != 0)
      *fooglueset(r) = (double)x / totalstretch[o - normal];
    else {
      *foogluesign(r) = normal;
      *fooglueset(r) = 0.0;
    }
    if (o == normal) {
      if (*foolistptr(r) != 0) {   /*674:*/
	lastbadness = badness(x, totalstretch[0]);
	if (lastbadness > vbadness) {
	  println();
	  if (lastbadness > 100)
	    printnl(S(844));
	  else
	    printnl(S(845));
	  print(S(856));
	  printint(lastbadness);
	  goto _Lcommonending;
	}
      }
      /*:674*/
    }
    goto _Lexit;
  } else {
    if (totalshrink[filll - normal] != 0)
      o = filll;
    else if (totalshrink[fill - normal] != 0)
      o = fill;
    else if (totalshrink[fil - normal] != 0)
      o = fil;
    else
      o = normal;   /*:665*/
    *fooglueorder(r) = o;
    *foogluesign(r) = shrinking;
    if (totalshrink[o - normal] != 0)
      *fooglueset(r) = (double)(-x) / totalshrink[o - normal];
    else {
      *foogluesign(r) = normal;
      *fooglueset(r) = 0.0;
    }
    if ((totalshrink[o - normal] < -x && o == normal) & (*foolistptr(r) != 0)) {
      lastbadness = 1000000L;
      *fooglueset(r) = 1.0;   /*677:*/
      if (-x - totalshrink[0] > vfuzz || vbadness < 100) {   /*:677*/
	println();
	printnl(S(857));
	printscaled(-x - totalshrink[0]);
	print(S(858));
	goto _Lcommonending;
      }
    } else if (o == normal) {
      if (*foolistptr(r) != 0) {   /*678:*/
	lastbadness = badness(-x, totalshrink[0]);
	if (lastbadness > vbadness) {
	  println();
	  printnl(S(859));
	  printint(lastbadness);
	  goto _Lcommonending;
	}
      }
      /*:678*/
    }
    goto _Lexit;
  }
_Lcommonending:   /*675:*/
  if (outputactive)
    print(S(847));
  else {
    if (packbeginline != 0) {
      print(S(849));
      printint(labs(packbeginline));
      print(S(850));
    } else
      print(S(851));
    printint(line);
    println();
  }
  begindiagnostic();
  showbox(r);   /*:675*/
  enddiagnostic(true);
_Lexit:
  return r;

  /*673:*/
  /*659:*/
  /*:673*/
  /*676:*/
  /*665:*/
  /*:676*/
  /*:672*/
}


/*:668*/
/*679:*/
Static void appendtovlist(halfword b)
{
  scaled d;
  pointer p;

  if (prevdepth > ignoredepth) {
    d = *foowidth(baselineskip) - prevdepth - *fooheight(b);
    if (d < lineskiplimit)
      p = newparamglue(lineskipcode);
    else {
      p = newskipparam(baselineskipcode);
      *foowidth(tempptr) = d;
    }
    *foolink(tail) = p;
    tail = p;
  }
  *foolink(tail) = b;
  tail = b;
  prevdepth = *foodepth(b);
}


/*:679*/
/*686:*/
Static halfword newnoad(void)
{
  pointer p;

  p = getnode(noadsize);
  *footype(p) = ordnoad;
  *foosubtype(p) = normal;
  mem[*foonucleus(p) - memmin].hh = emptyfield;
  mem[*foosubscr(p) - memmin].hh = emptyfield;
  mem[*foosupscr(p) - memmin].hh = emptyfield;
  return p;
}


/*:686*/
/*688:*/
Static halfword newstyle(smallnumber s)
{
  pointer p;

  p = getnode(stylenodesize);
  *footype(p) = stylenode;
  *foosubtype(p) = s;
  *foowidth(p) = 0;
  *foodepth(p) = 0;
  return p;
}  /*:688*/


/*689:*/
Static halfword newchoice(void)
{
  pointer p;

  p = getnode(stylenodesize);
  *footype(p) = choicenode;
  *foosubtype(p) = 0;
  *foodisplaymlist(p) = 0;
  *footextmlist(p) = 0;
  *fooscriptmlist(p) = 0;
  *fooscriptscriptmlist(p) = 0;
  return p;
}


/*:689*/
/*693:*/
Static void showinfo(void)
{
  shownodelist(*fooinfo(tempptr));
}


/*:693*/
/*704:*/
Static halfword fractionrule(long t)
{
  pointer p;

  p = newrule();
  *fooheight(p) = t;
  *foodepth(p) = 0;
  return p;
}


/*:704*/
/*705:*/
Static halfword overbar(halfword b, long k, long t)
{
  pointer p, q;

  p = newkern(k);
  *foolink(p) = b;
  q = fractionrule(t);
  *foolink(q) = p;
  p = newkern(t);
  *foolink(p) = q;
  return (*foovpack(p, 0, additional));
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
}


/*:705*/
/*706:*/
/*709:*/
Static halfword charbox(internalfontnumber f, quarterword c)
{
  fourquarters q;
  eightbits hd;
  pointer b, p;

  q = *foocharinfo(f, c);
  hd = *fooheightdepth(q);
  b = newnullbox();
  *foowidth(b) = *foocharwidth(f, q) + *foocharitalic(f, q);
  *fooheight(b) = *foocharheight(f, hd);
  *foodepth(b) = *foochardepth(f, hd);
  p = getavail();
  *foocharacter(p) = c;
  *foofont(p) = f;
  *foolistptr(b) = p;
  return b;
}


/*:709*/
/*711:*/
Static void stackintobox(halfword b, internalfontnumber f, quarterword c)
{
  pointer p;

  p = charbox(f, c);
  *foolink(p) = *foolistptr(b);
  *foolistptr(b) = p;
  *fooheight(b) = *fooheight(p);
}


/*:711*/
/*712:*/
Static long heightplusdepth(internalfontnumber f, quarterword c)
{
  fourquarters q;
  eightbits hd;

  q = *foocharinfo(f, c);
  hd = *fooheightdepth(q);
  return (*foocharheight(f, hd) + *foochardepth(f, hd));
}  /*:712*/


Static halfword vardelimiter(halfword d, smallnumber s, long v)
{
  pointer b;
  internalfontnumber f, g;
  quarterword c, x, y;
  long m, n;
  scaled u, w;
  fourquarters q;
  eightbits hd;
  fourquarters r;
  smallnumber z;
  boolean largeattempt;

  f = nullfont;
  w = 0;
  largeattempt = false;
  z = *foosmallfam(d);
  x = *foosmallchar(d);
  while (true) {  /*707:*/
    if (z != 0 || x != minquarterword) {   /*:707*/
      z += s + 16;
      do {
	z -= 16;
	g = *foofamfnt(z);
	if (g != nullfont) {   /*708:*/
	  y = x;
	  if (y - minquarterword >= fontbc[g - fontbase] &&
	      y - minquarterword <= fontec[g - fontbase]) {
_Llabcontinue:
	    q = *foocharinfo(g, y);
	    if (charexists(q)) {
	      if (chartag(q) == exttag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
		f = g;
		c = y;
		goto _Lfound;
	      }
	      hd = *fooheightdepth(q);
	      u = *foocharheight(g, hd) + *foochardepth(g, hd);
	      if (u > w) {
		f = g;
		c = y;
		w = u;
		if (u >= v)
		  goto _Lfound;
	      }
	      if (chartag(q) == listtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
		y = *foorembyte(q);
		goto _Llabcontinue;
	      }
	    }
	  }
	}
	/*:708*/
      } while (z >= 16);
    }
    if (largeattempt)
      goto _Lfound;
    largeattempt = true;
    z = *foolargefam(d);
    x = *foolargechar(d);
  }
_Lfound:
  if (f != nullfont) {   /*710:*/
    if (chartag(q) == exttag) {   /*713:*/
      b = newnullbox();
      *footype(b) = vlistnode;
      r = fontinfo[extenbase[f - fontbase] + *foorembyte(q)].qqqq;   /*714:*/
      c = *fooextrep(r);
      u = heightplusdepth(f, c);
      w = 0;
      q = *foocharinfo(f, c);
      *foowidth(b) = *foocharwidth(f, q) + *foocharitalic(f, q);
      c = *fooextbot(r);
      if (c != minquarterword)
	w += heightplusdepth(f, c);
      c = *fooextmid(r);
      if (c != minquarterword)
	w += heightplusdepth(f, c);
      c = *fooexttop(r);
      if (c != minquarterword)
	w += heightplusdepth(f, c);
      n = 0;
      if (u > 0) {
	while (w < v) {   /*:714*/
	  w += u;
	  n++;
	  if (*fooextmid(r) != minquarterword)
	    w += u;
	}
      }
      c = *fooextbot(r);
      if (c != minquarterword)
	stackintobox(b, f, c);
      c = *fooextrep(r);
      for (m = 1; m <= n; m++)
	stackintobox(b, f, c);
      c = *fooextmid(r);
      if (c != minquarterword) {
	stackintobox(b, f, c);
	c = *fooextrep(r);
	for (m = 1; m <= n; m++)
	  stackintobox(b, f, c);
      }
      c = *fooexttop(r);
      if (c != minquarterword)
	stackintobox(b, f, c);
      *foodepth(b) = w - *fooheight(b);
    } else
      b = charbox(f, c);   /*:710*/
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
    /*:713*/
  } else {
    b = newnullbox();
    *foowidth(b) = nulldelimiterspace;
  }
  *fooshiftamount(b) = half(*fooheight(b) - *foodepth(b)) - *fooaxisheight(s);
  return b;
}


/*:706*/
/*715:*/
Static halfword rebox(halfword b, long w)
{
  pointer p;
  internalfontnumber f;
  scaled v;

  if ((*foowidth(b) != w) & (*foolistptr(b) != 0)) {
    if (*footype(b) == vlistnode)
      b = hpack(b, 0, additional);
    p = *foolistptr(b);
    if (ischarnode(p) & (*foolink(p) == 0)) {
      f = *foofont(p);
      v = *foocharwidth(f, *foocharinfo(f, *foocharacter(p)));
      if (v != *foowidth(b))
	*foolink(p) = newkern(*foowidth(b) - v);
    }
    freenode(b, boxnodesize);
    b = newglue(ssglue);
    *foolink(b) = p;
    while (*foolink(p) != 0)
      p = *foolink(p);
    *foolink(p) = newglue(ssglue);
    return (hpack(b, w, exactly));
  } else {
    *foowidth(b) = w;
    return b;
  }
}


/*:715*/
/*716:*/
Static halfword mathglue(halfword g, long m)
{
  pointer p;
  long n;
  scaled f;

  n = xovern(m, 65536L);
  f = texremainder;
  if (f < 0) {
    n--;
    f += 65536L;
  }
  p = getnode(gluespecsize);
  *foowidth(p) = multandadd(n, *foowidth(g), xnoverd(*foowidth(g), f, 65536L),
			    1073741823L);
  *foostretchorder(p) = *foostretchorder(g);
  if (*foostretchorder(p) == normal)
    *foostretch(p) = multandadd(n, *foostretch(g),
	xnoverd(*foostretch(g), f, 65536L), 1073741823L);
  else
    *foostretch(p) = *foostretch(g);
  *fooshrinkorder(p) = *fooshrinkorder(g);
  if (*fooshrinkorder(p) == normal)
    *fooshrink(p) = multandadd(n, *fooshrink(g),
			       xnoverd(*fooshrink(g), f, 65536L),
			       1073741823L);
  else
    *fooshrink(p) = *fooshrink(g);
  return p;
}


/*:716*/
/*717:*/
Static void mathkern(halfword p, long m)
{
  long n;
  scaled f;

  if (*foosubtype(p) != muglue)
    return;
  n = xovern(m, 65536L);
  f = texremainder;
  if (f < 0) {
    n--;
    f += 65536L;
  }
  *foowidth(p) = multandadd(n, *foowidth(p), xnoverd(*foowidth(p), f, 65536L),
			    1073741823L);
  *foosubtype(p) = explicit;
}


/*:717*/
/*718:*/
Static void flushmath(void)
{
  flushnodelist(*foolink(head));
  flushnodelist(incompleatnoad);
  *foolink(head) = 0;
  tail = head;
  incompleatnoad = 0;
}


/*:718*/
/*720:*/
Static void mlisttohlist(void);


Static halfword cleanbox(halfword p, smallnumber s)
{
  pointer q, x, r;
  smallnumber savestyle;

  switch (*foomathtype(p)) {

  case mathchar:
    curmlist = newnoad();
    mem[*foonucleus(curmlist) - memmin] = mem[p - memmin];
    break;

  case subbox:
    q = *fooinfo(p);
    goto _Lfound;
    break;

  case submlist:
    curmlist = *fooinfo(p);
    break;

  default:
    q = newnullbox();
    goto _Lfound;
    break;
  }
  savestyle = curstyle;
  curstyle = s;
  mlistpenalties = false;
  mlisttohlist();
  q = *foolink(temphead);
  curstyle = savestyle;   /*703:*/
  if (curstyle < scriptstyle)
    cursize = textsize;
  else
    cursize = (curstyle - textstyle) / 2 * 16;
  curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
_Lfound:
  if (ischarnode(q) || q == 0)   /*721:*/
    x = hpack(q, 0, additional);
  else if ((*foolink(q) == 0) & (*footype(q) <= vlistnode) &
	   (*fooshiftamount(q) == 0))
    x = q;
  else
    x = hpack(q, 0, additional);
  q = *foolistptr(x);
  if (!ischarnode(q))   /*:721*/
    return x;
  r = *foolink(q);
  if (r == 0)
    return x;
  if (*foolink(r) != 0)
    return x;
  if (ischarnode(r))
    return x;
  if (*footype(r) == kernnode) {
    freenode(r, smallnodesize);
    *foolink(q) = 0;
  }
  return x;
}


/*:720*/
/*722:*/
Static void fetch(halfword a)
{
  curc = *foocharacter(a);
  curf = *foofamfnt(*foofam(a) + cursize);
  if (curf == nullfont) {   /*723:*/
    printnl(258);
    print(S(266));
    printsize(cursize);
    printchar(' ');
    printint(*foofam(a));
    print(S(884));
    print(curc - minquarterword);
    printchar(')');
    helpptr = 4;
    helpline[3] = S(885);
    helpline[2] = S(886);
    helpline[1] = S(887);
    helpline[0] = S(888);
    error();
    curi = nullcharacter;
    *foomathtype(a) = empty;
    return;
  }  /*:723*/
  if (curc - minquarterword >= fontbc[curf - fontbase] &&
      curc - minquarterword <= fontec[curf - fontbase])
    curi = *foocharinfo(curf, curc);
  else
    curi = nullcharacter;
  if (!charexists(curi)) {
    charwarning(curf, curc - minquarterword);
    *foomathtype(a) = empty;
  }
}


/*:722*/
/*726:*/
/*734:*/
Static void makeover(halfword q)
{
  *fooinfo(*foonucleus(q)) = overbar(
      cleanbox(*foonucleus(q), *foocrampedstyle(curstyle)),
      defaultrulethickness * 3, defaultrulethickness);
  *foomathtype(*foonucleus(q)) = subbox;
}


/*:734*/
/*735:*/
Static void makeunder(halfword q)
{
  pointer p, x, y;
  scaled delta;

  x = cleanbox(*foonucleus(q), curstyle);
  p = newkern(defaultrulethickness * 3);
  *foolink(x) = p;
  *foolink(p) = fractionrule(defaultrulethickness);
  y = *foovpack(x, 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
  delta = *fooheight(y) + *foodepth(y) + defaultrulethickness;
  *fooheight(y) = *fooheight(x);
  *foodepth(y) = delta - *fooheight(y);
  *fooinfo(*foonucleus(q)) = y;
  *foomathtype(*foonucleus(q)) = subbox;
}


/*:735*/
/*736:*/
Static void makevcenter(halfword q)
{
  pointer v;
  scaled delta;

  v = *fooinfo(*foonucleus(q));
  if (*footype(v) != vlistnode)
    confusion(S(550));
  delta = *fooheight(v) + *foodepth(v);
  *fooheight(v) = *fooaxisheight(cursize) + half(delta);
  *foodepth(v) = delta - *fooheight(v);
}


/*:736*/
/*737:*/
Static void makeradical(halfword q)
{
  pointer x, y;
  scaled delta, clr;

  x = cleanbox(*foonucleus(q), *foocrampedstyle(curstyle));
  if (curstyle < textstyle)
    clr = defaultrulethickness + labs(*foomathxheight(cursize)) / 4;
  else {
    clr = defaultrulethickness;
    clr += labs(clr) / 4;
  }
  y = vardelimiter(*fooleftdelimiter(q), cursize,
		   *fooheight(x) + *foodepth(x) + clr + defaultrulethickness);
  delta = *foodepth(y) - *fooheight(x) - *foodepth(x) - clr;
  if (delta > 0)
    clr += half(delta);
  *fooshiftamount(y) = -(*fooheight(x) + clr);
  *foolink(y) = overbar(x, clr, *fooheight(y));
  *fooinfo(*foonucleus(q)) = hpack(y, 0, additional);
  *foomathtype(*foonucleus(q)) = subbox;
}


/*:737*/
/*738:*/
Static void makemathaccent(halfword q)
{
  pointer p, x, y;
  long a;
  quarterword c;
  internalfontnumber f;
  fourquarters i;
  scaled s, h, delta, w;

  fetch(*fooaccentchr(q));
  if (!charexists(curi))
    return;
  i = curi;
  c = curc;
  f = curf;   /*741:*/
  s = 0;
  if (*foomathtype(*foonucleus(q)) == mathchar) {
    fetch(*foonucleus(q));
    if (chartag(curi) == ligtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
      a = ligkernbase[curf - fontbase] + *foorembyte(curi);
      curi = fontinfo[a].qqqq;
      if (*fooskipbyte(curi) > stopflag) {
	a = ligkernbase[curf - fontbase] + *fooopbyte(curi) * 256 +
	    *foorembyte(curi) - kernbaseoffset + 32768L;
	curi = fontinfo[a].qqqq;
      }
      while (true) {
	if (*foonextchar(curi) - minquarterword == skewchar[curf - fontbase]) {
	  if (*fooopbyte(curi) >= kernflag) {
	    if (*fooskipbyte(curi) <= stopflag)
	      s = *foocharkern(curf, curi);
	  }
	  goto _Ldone1;
	}
	if (*fooskipbyte(curi) >= stopflag)
	  goto _Ldone1;
	a += *fooskipbyte(curi) - minquarterword + 1;
	curi = fontinfo[a].qqqq;
      }
    }
  }
_Ldone1:   /*:741*/
  x = cleanbox(*foonucleus(q), *foocrampedstyle(curstyle));
  w = *foowidth(x);
  h = *fooheight(x);   /*740:*/
  while (true) {
    if (chartag(i) != listtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
      goto _Ldone;
    }
    y = *foorembyte(i);
    i = *foocharinfo(f, y);
    if (!charexists(i))
      goto _Ldone;
    if (*foocharwidth(f, i) > w)
      goto _Ldone;
    c = y;
  }
_Ldone:   /*:740*/
  if (h < *fooxheight(f))
    delta = h;
  else
    delta = *fooxheight(f);
  if ((*foomathtype(*foosupscr(q)) != empty) |
      (*foomathtype(*foosubscr(q)) != empty)) {
    if (*foomathtype(*foonucleus(q)) == mathchar) {   /*742:*/
      flushnodelist(x);
      x = newnoad();
      mem[*foonucleus(x) - memmin] = mem[*foonucleus(q) - memmin];
      mem[*foosupscr(x) - memmin] = mem[*foosupscr(q) - memmin];
      mem[*foosubscr(x) - memmin] = mem[*foosubscr(q) - memmin];
      mem[*foosupscr(q) - memmin].hh = emptyfield;
      mem[*foosubscr(q) - memmin].hh = emptyfield;
      *foomathtype(*foonucleus(q)) = submlist;
      *fooinfo(*foonucleus(q)) = x;
      x = cleanbox(*foonucleus(q), curstyle);
      delta += *fooheight(x) - h;
      h = *fooheight(x);
    }
    /*:742*/
  }
  y = charbox(f, c);
  *fooshiftamount(y) = s + half(w - *foowidth(y));
  *foowidth(y) = 0;
  p = newkern(-delta);
  *foolink(p) = x;
  *foolink(y) = p;
  y = *foovpack(y, 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
  *foowidth(y) = *foowidth(x);
  if (*fooheight(y) < h) {   /*739:*/
    p = newkern(h - *fooheight(y));
    *foolink(p) = *foolistptr(y);
    *foolistptr(y) = p;
    *fooheight(y) = h;
  }  /*:739*/
  *fooinfo(*foonucleus(q)) = y;
  *foomathtype(*foonucleus(q)) = subbox;
}


/*:738*/
/*743:*/
Static void makefraction(halfword q)
{
  pointer p, v, x, y, z;
  scaled delta, delta1, delta2, shiftup, shiftdown, clr;

  if (*foothickness(q) == defaultcode)   /*744:*/
    *foothickness(q) = defaultrulethickness;
  x = cleanbox(*foonumerator(q), *foonumstyle(curstyle));
  z = cleanbox(*foodenominator(q), *foodenomstyle(curstyle));
  if (*foowidth(x) < *foowidth(z))
    x = rebox(x, *foowidth(z));
  else
    z = rebox(z, *foowidth(x));
  if (curstyle < textstyle) {
    shiftup = *foonum1(cursize);
    shiftdown = *foodenom1(cursize);
  } else {   /*:744*/
    shiftdown = *foodenom2(cursize);
    if (*foothickness(q) != 0)
      shiftup = *foonum2(cursize);
    else
      shiftup = *foonum3(cursize);
  }
  if (*foothickness(q) == 0) {   /*745:*/
    if (curstyle < textstyle)
      clr = defaultrulethickness * 7;
    else
      clr = defaultrulethickness * 3;
    delta = half(clr - shiftup + *foodepth(x) + *fooheight(z) - shiftdown);
    if (delta > 0) {
      shiftup += delta;
      shiftdown += delta;
    }
  } else  /*746:*/
  {   /*:746*/
    if (curstyle < textstyle)
      clr = *foothickness(q) * 3;
    else
      clr = *foothickness(q);
    delta = half(*foothickness(q));
    delta1 = clr - shiftup + *foodepth(x) + *fooaxisheight(cursize) + delta;
    delta2 = clr - *fooaxisheight(cursize) + delta + *fooheight(z) - shiftdown;
    if (delta1 > 0)
      shiftup += delta1;
    if (delta2 > 0)
      shiftdown += delta2;
  }
  /*:745*/
  /*747:*/
  v = newnullbox();
  *footype(v) = vlistnode;
  *fooheight(v) = shiftup + *fooheight(x);
  *foodepth(v) = *foodepth(z) + shiftdown;
  *foowidth(v) = *foowidth(x);
  if (*foothickness(q) == 0) {
    p = newkern(shiftup - *foodepth(x) - *fooheight(z) + shiftdown);
    *foolink(p) = z;
  } else {
    y = fractionrule(*foothickness(q));
    p = newkern(*fooaxisheight(cursize) - delta - *fooheight(z) + shiftdown);
    *foolink(y) = p;
    *foolink(p) = z;
    p = newkern(shiftup - *foodepth(x) - *fooaxisheight(cursize) - delta);
    *foolink(p) = y;
  }
  *foolink(x) = p;
  *foolistptr(v) = x;   /*:747*/
  /*748:*/
  if (curstyle < textstyle)
    delta = *foodelim1(cursize);
  else
    delta = *foodelim2(cursize);
  x = vardelimiter(*fooleftdelimiter(q), cursize, delta);
  *foolink(x) = v;
  z = vardelimiter(*foorightdelimiter(q), cursize, delta);
  *foolink(v) = z;
  *foonewhlist(q) = hpack(x, 0, additional);   /*:748*/
}  /*:743*/


/*749:*/
Static long makeop(halfword q)
{
  scaled delta, shiftup, shiftdown;
  pointer p, v, x, y, z;
  quarterword c;
  fourquarters i;

  if (*foosubtype(q) == normal && curstyle < textstyle)
    *foosubtype(q) = limits;
  if (*foomathtype(*foonucleus(q)) == mathchar) {
    fetch(*foonucleus(q));
    if ((curstyle < textstyle) & (chartag(curi) == listtag)) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
      c = *foorembyte(curi);
      i = *foocharinfo(curf, c);
      if (charexists(i)) {
	curc = c;
	curi = i;
	*foocharacter(*foonucleus(q)) = c;
      }
    }
    delta = *foocharitalic(curf, curi);
    x = cleanbox(*foonucleus(q), curstyle);
    if ((*foomathtype(*foosubscr(q)) != empty) & (*foosubtype(q) != limits))
      *foowidth(x) -= delta;
    *fooshiftamount(x) =
      half(*fooheight(x) - *foodepth(x)) - *fooaxisheight(cursize);
    *foomathtype(*foonucleus(q)) = subbox;
    *fooinfo(*foonucleus(q)) = x;
  } else
    delta = 0;
  if (*foosubtype(q) != limits)   /*750:*/
    return delta;
  /*:750*/
  x = cleanbox(*foosupscr(q), *foosupstyle(curstyle));
  y = cleanbox(*foonucleus(q), curstyle);
  z = cleanbox(*foosubscr(q), *foosubstyle(curstyle));
  v = newnullbox();
  *footype(v) = vlistnode;
  *foowidth(v) = *foowidth(y);
  if (*foowidth(x) > *foowidth(v))
    *foowidth(v) = *foowidth(x);
  if (*foowidth(z) > *foowidth(v))
    *foowidth(v) = *foowidth(z);
  x = rebox(x, *foowidth(v));
  y = rebox(y, *foowidth(v));
  z = rebox(z, *foowidth(v));
  *fooshiftamount(x) = half(delta);
  *fooshiftamount(z) = -*fooshiftamount(x);
  *fooheight(v) = *fooheight(y);
  *foodepth(v) = *foodepth(y);   /*751:*/
  if (*foomathtype(*foosupscr(q)) == empty) {
    freenode(x, boxnodesize);
    *foolistptr(v) = y;
  } else {
    shiftup = bigopspacing3 - *foodepth(x);
    if (shiftup < bigopspacing1)
      shiftup = bigopspacing1;
    p = newkern(shiftup);
    *foolink(p) = y;
    *foolink(x) = p;
    p = newkern(bigopspacing5);
    *foolink(p) = x;
    *foolistptr(v) = p;
    *fooheight(v) += bigopspacing5 + *fooheight(x) + *foodepth(x) + shiftup;
  }
  if (*foomathtype(*foosubscr(q)) == empty)
    freenode(z, boxnodesize);
  else {   /*:751*/
    shiftdown = bigopspacing4 - *fooheight(z);
    if (shiftdown < bigopspacing2)
      shiftdown = bigopspacing2;
    p = newkern(shiftdown);
    *foolink(y) = p;
    *foolink(p) = z;
    p = newkern(bigopspacing5);
    *foolink(z) = p;
    *foodepth(v) += bigopspacing5 + *fooheight(z) + *foodepth(z) + shiftdown;
  }
  *foonewhlist(q) = v;
  return delta;
}


/*:749*/
/*752:*/
Static void makeord(halfword q)
{
  long a;
  pointer p, r;

_Lrestart:
  if (*foomathtype(*foosubscr(q)) == empty) {
    if (*foomathtype(*foosupscr(q)) == empty) {
      if (*foomathtype(*foonucleus(q)) == mathchar) {
	p = *foolink(q);
	if (p != 0) {
	  if ((*footype(p) >= ordnoad) & (*footype(p) <= punctnoad)) {
	    if (*foomathtype(*foonucleus(p)) == mathchar) {
	      if (*foofam(*foonucleus(p)) == *foofam(*foonucleus(q))) {
		*foomathtype(*foonucleus(q)) = mathtextchar;
		fetch(*foonucleus(q));
		if (chartag(curi) == ligtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
		  a = ligkernbase[curf - fontbase] + *foorembyte(curi);
		  curc = *foocharacter(*foonucleus(p));
		  curi = fontinfo[a].qqqq;
		  if (*fooskipbyte(curi) > stopflag) {
		    a = ligkernbase[curf - fontbase] + *fooopbyte(curi) * 256 +
			*foorembyte(curi) - kernbaseoffset + 32768L;
		    curi = fontinfo[a].qqqq;
		  }
		  while (true) {  /*753:*/
		    if (*foonextchar(curi) == curc) {
		      if (*fooskipbyte(curi) <= stopflag) {
			if (*fooopbyte(curi) >= kernflag) {
			  p = newkern(*foocharkern(curf, curi));
			  *foolink(p) = *foolink(q);
			  *foolink(q) = p;
			  goto _Lexit;
			} else {   /*:753*/
			  checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
			  switch (*fooopbyte(curi)) {

			  case minquarterword + 1:
			  case minquarterword + 5:
			    *foocharacter(*foonucleus(q)) = *foorembyte(curi);
			    break;

			  case minquarterword + 2:
			  case minquarterword + 6:
			    *foocharacter(*foonucleus(p)) = *foorembyte(curi);
			    break;

			  case minquarterword + 3:
			  case minquarterword + 7:
			  case minquarterword + 11:
			    r = newnoad();
			    *foocharacter(*foonucleus(r)) = *foorembyte(curi);
			    *foofam(*foonucleus(r)) = *foofam(*foonucleus(q));
			    *foolink(q) = r;
			    *foolink(r) = p;
			    if (*fooopbyte(curi) < minquarterword + 11)
			      *foomathtype(*foonucleus(r)) = mathchar;
			    else
			      *foomathtype(*foonucleus(r)) = mathtextchar;
			    break;

			  default:
			    *foolink(q) = *foolink(p);
			    *foocharacter(*foonucleus(q)) = *foorembyte(curi);
			    mem[*foosubscr(q) - memmin] =
			      mem[*foosubscr(p) - memmin];
			    mem[*foosupscr(q) - memmin] =
			      mem[*foosupscr(p) - memmin];
			    freenode(p, noadsize);
			    break;
			  }
			  if (*fooopbyte(curi) > minquarterword + 3)
			    goto _Lexit;
			  *foomathtype(*foonucleus(q)) = mathchar;
			  goto _Lrestart;
			}
		      }
		    }
		    if (*fooskipbyte(curi) >= stopflag)
		      goto _Lexit;
		    a += *fooskipbyte(curi) - minquarterword + 1;
		    curi = fontinfo[a].qqqq;
		  }
		}
	      }
	    }
	  }
	}
      }
    }
  }
_Lexit: ;
}


/*:752*/
/*756:*/
Static void makescripts(halfword q, long delta)
{
  pointer p, x, y, z;
  scaled shiftup, shiftdown, clr;
  smallnumber t;

  p = *foonewhlist(q);
  if (ischarnode(p)) {
    shiftup = 0;
    shiftdown = 0;
  } else {
    z = hpack(p, 0, additional);
    if (curstyle < scriptstyle)
      t = scriptsize;
    else
      t = scriptscriptsize;
    shiftup = *fooheight(z) - *foosupdrop(t);
    shiftdown = *foodepth(z) + *foosubdrop(t);
    freenode(z, boxnodesize);
  }
  if (*foomathtype(*foosupscr(q)) == empty) {   /*757:*/
    x = cleanbox(*foosubscr(q), *foosubstyle(curstyle));
    *foowidth(x) += scriptspace;
    if (shiftdown < *foosub1(cursize))
      shiftdown = *foosub1(cursize);
    clr = *fooheight(x) - labs(*foomathxheight(cursize) * 4) / 5;
    if (shiftdown < clr)
      shiftdown = clr;
    *fooshiftamount(x) = shiftdown;
  } else {  /*758:*/
    x = cleanbox(*foosupscr(q), *foosupstyle(curstyle));
    *foowidth(x) += scriptspace;
    if (curstyle & 1)
      clr = *foosup3(cursize);
    else if (curstyle < textstyle)
      clr = *foosup1(cursize);
    else
      clr = *foosup2(cursize);
    if (shiftup < clr)
      shiftup = clr;
    clr = *foodepth(x) + labs(*foomathxheight(cursize)) / 4;
    if (shiftup < clr)   /*:758*/
      shiftup = clr;
    if (*foomathtype(*foosubscr(q)) == empty)
      *fooshiftamount(x) = -shiftup;
    else {   /*759:*/
      y = cleanbox(*foosubscr(q), *foosubstyle(curstyle));
      *foowidth(y) += scriptspace;
      if (shiftdown < *foosub2(cursize))
	shiftdown = *foosub2(cursize);
      clr = defaultrulethickness * 4 - shiftup + *foodepth(x) +
	    *fooheight(y) - shiftdown;
      if (clr > 0) {
	shiftdown += clr;
	clr = labs(*foomathxheight(cursize) * 4) / 5 - shiftup + *foodepth(x);
	if (clr > 0) {
	  shiftup += clr;
	  shiftdown -= clr;
	}
      }
      *fooshiftamount(x) = delta;
      p = newkern(shiftup - *foodepth(x) - *fooheight(y) + shiftdown);
      *foolink(x) = p;
      *foolink(p) = y;
      x = *foovpack(x, 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
      *fooshiftamount(x) = shiftdown;
    }
  }
  /*:757*/
  if (*foonewhlist(q) == 0) {
    *foonewhlist(q) = x;
    return;
  }
  p = *foonewhlist(q);
  while (*foolink(p) != 0)
    p = *foolink(p);
  *foolink(p) = x;

  /*:759*/
}  /*:756*/


/*762:*/
Static smallnumber makeleftright(halfword q, smallnumber style, long maxd,
				 long maxh)
{
  scaled delta, delta1, delta2;

  if (style < scriptstyle)
    cursize = textsize;
  else
    cursize = (style - textstyle) / 2 * 16;
  delta2 = maxd + *fooaxisheight(cursize);
  delta1 = maxh + maxd - delta2;
  if (delta2 > delta1)
    delta1 = delta2;
  delta = delta1 / 500 * delimiterfactor;
  delta2 = delta1 + delta1 - delimitershortfall;
  if (delta < delta2)
    delta = delta2;
  *foonewhlist(q) = vardelimiter(*foodelimiter(q), cursize, delta);
  return (*footype(q) - leftnoad + opennoad);
}  /*:762*/


Static void mlisttohlist(void)
{
  pointer mlist, q, r, p, x, y, z;
  boolean penalties;
  smallnumber style, savestyle, rtype, t;
  long pen;
  smallnumber s;
  scaled maxh, maxd, delta;

  mlist = curmlist;
  penalties = mlistpenalties;
  style = curstyle;
  q = mlist;
  r = 0;
  rtype = opnoad;
  maxh = 0;
  maxd = 0;   /*703:*/
  if (curstyle < scriptstyle)
    cursize = textsize;
  else
    cursize = (curstyle - textstyle) / 2 * 16;
  curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
  while (q != 0) {   /*727:*/
_Lreswitch:
    delta = 0;
    switch (*footype(q)) {

    case binnoad:
      switch (rtype) {

      case binnoad:
      case opnoad:
      case relnoad:
      case opennoad:
      case punctnoad:
      case leftnoad:
	*footype(q) = ordnoad;
	goto _Lreswitch;
	break;
      }
      break;

    case relnoad:
    case closenoad:
    case punctnoad:
    case rightnoad:  /*729:*/
      if (rtype == binnoad)
	*footype(r) = ordnoad;   /*:729*/
      if (*footype(q) == rightnoad)
	goto _Ldonewithnoad_;
      break;
      /*733:*/

    case leftnoad:
      goto _Ldonewithnoad_;
      break;

    case fractionnoad:
      makefraction(q);
      goto _Lcheckdimensions_;
      break;

    case opnoad:
      delta = makeop(q);
      if (*foosubtype(q) == limits)
	goto _Lcheckdimensions_;
      break;

    case ordnoad:
      makeord(q);
      break;

    case opennoad:
    case innernoad:
      /* blank case */
      break;

    case radicalnoad:
      makeradical(q);
      break;

    case overnoad:
      makeover(q);
      break;

    case undernoad:
      makeunder(q);
      break;

    case accentnoad:
      makemathaccent(q);
      break;

    case vcenternoad:   /*:733*/
      makevcenter(q);
      break;
      /*730:*/

    case stylenode:
      curstyle = *foosubtype(q);   /*703:*/
      if (curstyle < scriptstyle)
	cursize = textsize;
      else
	cursize = (curstyle - textstyle) / 2 * 16;
      curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
      goto _Ldonewithnode_;
      break;

    case choicenode:   /*731:*/
      switch (curstyle / 2) {

      case 0:
	p = *foodisplaymlist(q);
	*foodisplaymlist(q) = 0;
	break;

      case 1:
	p = *footextmlist(q);
	*footextmlist(q) = 0;
	break;

      case 2:
	p = *fooscriptmlist(q);
	*fooscriptmlist(q) = 0;
	break;

      case 3:
	p = *fooscriptscriptmlist(q);
	*fooscriptscriptmlist(q) = 0;
	break;
      }
      flushnodelist(*foodisplaymlist(q));
      flushnodelist(*footextmlist(q));
      flushnodelist(*fooscriptmlist(q));
      flushnodelist(*fooscriptscriptmlist(q));
      *footype(q) = stylenode;
      *foosubtype(q) = curstyle;
      *foowidth(q) = 0;
      *foodepth(q) = 0;
      if (p != 0) {
	z = *foolink(q);
	*foolink(q) = p;
	while (*foolink(p) != 0)
	  p = *foolink(p);
	*foolink(p) = z;
      }
      goto _Ldonewithnode_;
      break;
      /*:731*/

    case insnode:
    case marknode:
    case adjustnode:
    case whatsitnode:
    case penaltynode:
    case discnode:
      goto _Ldonewithnode_;
      break;

    case rulenode:
      if (*fooheight(q) > maxh)
	maxh = *fooheight(q);
      if (*foodepth(q) > maxd)
	maxd = *foodepth(q);
      goto _Ldonewithnode_;
      break;

    case gluenode:  /*732:*/
      if (*foosubtype(q) == muglue) {
	x = *fooglueptr(q);
	y = mathglue(x, curmu);
	deleteglueref(x);
	*fooglueptr(q) = y;
	*foosubtype(q) = normal;
      } else if ((cursize != textsize) & (*foosubtype(q) == condmathglue)) {
	p = *foolink(q);
	if (p != 0) {
	  if ((*footype(p) == gluenode) | (*footype(p) == kernnode)) {
	    *foolink(q) = *foolink(p);
	    *foolink(p) = 0;
	    flushnodelist(p);
	  }
	}
      }
      goto _Ldonewithnode_;
      break;

    case kernnode:   /*:730*/
      mathkern(q, curmu);
      goto _Ldonewithnode_;
      break;

    default:
      confusion(S(889));
      break;
    }
    /*754:*/
    switch (*foomathtype(*foonucleus(q))) {

    case mathchar:
    case mathtextchar:   /*:755*/
      /*755:*/
      fetch(*foonucleus(q));
      if (charexists(curi)) {
	delta = *foocharitalic(curf, curi);
	p = newcharacter(curf, curc - minquarterword);
	if ((*foomathtype(*foonucleus(q)) == mathtextchar) & (*foospace(curf) != 0))
	  delta = 0;
	if (*foomathtype(*foosubscr(q)) == empty && delta != 0) {
	  *foolink(p) = newkern(delta);
	  delta = 0;
	}
      } else
	p = 0;
      break;

    case empty:
      p = 0;
      break;

    case subbox:
      p = *fooinfo(*foonucleus(q));
      break;

    case submlist:
      curmlist = *fooinfo(*foonucleus(q));
      savestyle = curstyle;
      mlistpenalties = false;
      mlisttohlist();
      curstyle = savestyle;   /*703:*/
      if (curstyle < scriptstyle)
	cursize = textsize;
      else
	cursize = (curstyle - textstyle) / 2 * 16;
      curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
      p = hpack(*foolink(temphead), 0, additional);
      break;

    default:
      confusion(S(890));
      break;
    }
    *foonewhlist(q) = p;
    if ((*foomathtype(*foosubscr(q)) == empty) &
	(*foomathtype(*foosupscr(q)) == empty))
	  /*:754*/
	    goto _Lcheckdimensions_;
    /*:728*/
    makescripts(q, delta);
_Lcheckdimensions_:
    z = hpack(*foonewhlist(q), 0, additional);
    if (*fooheight(z) > maxh)
      maxh = *fooheight(z);
    if (*foodepth(z) > maxd)
      maxd = *foodepth(z);
    freenode(z, boxnodesize);
_Ldonewithnoad_:
    r = q;
    rtype = *footype(r);
_Ldonewithnode_:
    q = *foolink(q);
  }
  /*728:*/
  /*:727*/
  /*729:*/
  if (rtype == binnoad)   /*760:*/
    *footype(r) = ordnoad;   /*:729*/
  p = temphead;
  *foolink(p) = 0;
  q = mlist;
  rtype = 0;
  curstyle = style;   /*703:*/
  if (curstyle < scriptstyle)
    cursize = textsize;
  else
    cursize = (curstyle - textstyle) / 2 * 16;
  curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
  while (q != 0) {   /*761:*/
    t = ordnoad;
    s = noadsize;
    pen = infpenalty;
    switch (*footype(q)) {   /*:761*/

    case opnoad:
    case opennoad:
    case closenoad:
    case punctnoad:
    case innernoad:
      t = *footype(q);
      break;

    case binnoad:
      t = binnoad;
      pen = binoppenalty;
      break;

    case relnoad:
      t = relnoad;
      pen = relpenalty;
      break;

    case ordnoad:
    case vcenternoad:
    case overnoad:
    case undernoad:
      /* blank case */
      break;

    case radicalnoad:
      s = radicalnoadsize;
      break;

    case accentnoad:
      s = accentnoadsize;
      break;

    case fractionnoad:
      t = innernoad;
      s = fractionnoadsize;
      break;

    case leftnoad:
    case rightnoad:
      t = makeleftright(q, style, maxd, maxh);
      break;

    case stylenode:   /*763:*/
      curstyle = *foosubtype(q);
      s = stylenodesize;   /*703:*/
      if (curstyle < scriptstyle)
	cursize = textsize;
      else
	cursize = (curstyle - textstyle) / 2 * 16;
      curmu = xovern(*foomathquad(cursize), 18);   /*:703*/
      goto _Ldeleteq_;
      break;
      /*:763*/

    case whatsitnode:
    case penaltynode:
    case rulenode:
    case discnode:
    case adjustnode:
    case insnode:
    case marknode:
    case gluenode:
    case kernnode:
      *foolink(p) = q;
      p = q;
      q = *foolink(q);
      *foolink(p) = 0;
      goto _Ldone;
      break;

    default:
      confusion(S(891));
      break;
    }
    /*766:*/
    if (rtype > 0) {   /*:766*/
      switch (strpool[rtype * 8 + t + magicoffset]) {

      case '0':
	x = 0;
	break;

      case '1':
	if (curstyle < scriptstyle)
	  x = thinmuskipcode;
	else
	  x = 0;
	break;

      case '2':
	x = thinmuskipcode;
	break;

      case '3':
	if (curstyle < scriptstyle)
	  x = medmuskipcode;
	else
	  x = 0;
	break;

      case '4':
	if (curstyle < scriptstyle)
	  x = thickmuskipcode;
	else
	  x = 0;
	break;

      default:
	confusion(S(892));
	break;
      }
      if (x != 0) {
	y = mathglue(*foogluepar(x), curmu);
	z = newglue(y);
	*foogluerefcount(y) = 0;
	*foolink(p) = z;
	p = z;
	*foosubtype(z) = x + 1;
      }
    }
    /*767:*/
    if (*foonewhlist(q) != 0) {
      *foolink(p) = *foonewhlist(q);
      do {
	p = *foolink(p);
      } while (*foolink(p) != 0);
    }
    if (penalties) {
      if (*foolink(q) != 0) {
	if (pen < infpenalty) {   /*:767*/
	  rtype = *footype(*foolink(q));
	  if (rtype != penaltynode) {
	    if (rtype != relnoad) {
	      z = newpenalty(pen);
	      *foolink(p) = z;
	      p = z;
	    }
	  }
	}
      }
    }
    rtype = t;
_Ldeleteq_:
    r = q;
    q = *foolink(q);
    freenode(r, s);
_Ldone: ;
  }
  /*:760*/

  /*:732*/
}


/*:726*/
/*772:*/
Static void pushalignment(void)
{
  pointer p;

  p = getnode(alignstacknodesize);
  *foolink(p) = alignptr;
  *fooinfo(p) = curalign;
  *foollink(p) = preamble;
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
  *foorlink(p) = curspan;
  mem[p - memmin + 2].int_ = curloop;
  mem[p - memmin + 3].int_ = alignstate;
  *fooinfo(p + 4) = curhead;
  *foolink(p + 4) = curtail;
  alignptr = p;
  curhead = getavail();
}


Static void popalignment(void)
{
  pointer p;

  freeavail(curhead);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
  p = alignptr;
  curtail = *foolink(p + 4);
  curhead = *fooinfo(p + 4);
  alignstate = mem[p - memmin + 3].int_;
  curloop = mem[p - memmin + 2].int_;
  curspan = *foorlink(p);
  preamble = *foollink(p);
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
  curalign = *fooinfo(p);
  alignptr = *foolink(p);
  freenode(p, alignstacknodesize);
}


/*:772*/
/*774:*/
/*782:*/
Static void getpreambletoken(void)
{
_Lrestart:
  gettoken();
  while (curchr == spancode && curcmd == tabmark) {
    gettoken();
    if (curcmd > maxcommand) {
      expand();
      gettoken();
    }
  }
  if (curcmd == endv)
    fatalerror(S(604));
  if (curcmd != assignglue || curchr != gluebase + tabskipcode)
    return;
  scanoptionalequals();
  scanglue(glueval);
  if (globaldefs > 0)
    geqdefine(gluebase + tabskipcode, glueref, curval);
  else
    eqdefine(gluebase + tabskipcode, glueref, curval);
  goto _Lrestart;
}


/*:782*/
Static void alignpeek(void);

Static void normalparagraph(void);


Static void initalign(void)
{
  pointer savecsptr, p;

  savecsptr = curcs;
  pushalignment();
  alignstate = -1000000L;   /*776:*/
  if (mode == mmode && (tail != head || incompleatnoad != 0)) {   /*:776*/
    printnl(258);
    print(S(689));
    printesc(S(531));
    print(S(893));
    helpptr = 3;
    helpline[2] = S(894);
    helpline[1] = S(895);
    helpline[0] = S(896);
    error();
    flushmath();
  }
  pushnest();   /*775:*/
  if (mode == mmode) {
    mode = -vmode;
    prevdepth = nest[nestptr - 2].auxfield.sc;
  } else if (mode > 0)
    mode = -mode;   /*:775*/
  scanspec(aligngroup, false);
  /*777:*/
  preamble = 0;
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
  curalign = alignhead;
  curloop = 0;
  scannerstatus = aligning;
  warningindex = savecsptr;
  alignstate = -1000000L;
  while (true) {   /*778:*/
    *foolink(curalign) = newparamglue(tabskipcode);
    curalign = *foolink(curalign);   /*:778*/
    if (curcmd == carret)
      goto _Ldone;
    /*779:*/
    /*783:*/
    p = holdhead;
    *foolink(p) = 0;
    while (true) {
      getpreambletoken();
      if (curcmd == macparam)
	goto _Ldone1;
      if (curcmd <= carret && curcmd >= tabmark && alignstate == -1000000L) {
	if (p == holdhead && curloop == 0 && curcmd == tabmark) {
	  curloop = curalign;
	  continue;
	} else {
	  printnl(258);
	  print(S(902));
	  helpptr = 3;
	  helpline[2] = S(903);
	  helpline[1] = S(904);
	  helpline[0] = S(905);
	  backerror();
	  goto _Ldone1;
	}
      } else {
	if (curcmd != spacer || p != holdhead) {
	  *foolink(p) = getavail();
	  p = *foolink(p);
	  *fooinfo(p) = curtok;
	}
	continue;
      }
    }
_Ldone1:   /*:783*/
    *foolink(curalign) = newnullbox();
    curalign = *foolink(curalign);
    *fooinfo(curalign) = endspan;
    *foowidth(curalign) = nullflag;
    *fooupart(curalign) = *foolink(holdhead);   /*784:*/
    p = holdhead;
    *foolink(p) = 0;
    while (true) {
_Llabcontinue:
      getpreambletoken();
      if (curcmd <= carret && curcmd >= tabmark && alignstate == -1000000L)
	goto _Ldone2;
      if (curcmd == macparam) {
	printnl(258);
	print(S(906));
	helpptr = 3;
	helpline[2] = S(903);
	helpline[1] = S(904);
	helpline[0] = S(907);
	error();
	goto _Llabcontinue;
      }
      *foolink(p) = getavail();
      p = *foolink(p);
      *fooinfo(p) = curtok;
    }
_Ldone2:
    *foolink(p) = getavail();
    p = *foolink(p);
    *fooinfo(p) = endtemplatetoken;   /*:784*/
    *foovpart(curalign) = *foolink(holdhead);   /*:779*/
  }
_Ldone:
  scannerstatus = normal;   /*:777*/
  newsavelevel(aligngroup);
  if (everycr != 0)
    begintokenlist(everycr, everycrtext);
  alignpeek();
}


/*:774*/
/*786:*/
/*787:*/
Static void initspan(halfword p)
{
  pushnest();
  if (mode == -hmode)
    spacefactor = 1000;
  else {
    prevdepth = ignoredepth;
    normalparagraph();
  }
  curspan = p;
}


/*:787*/
Static void initrow(void)
{
  pushnest();
  mode = -hmode - vmode - mode;
  if (mode == -hmode)
    spacefactor = 0;
  else
    prevdepth = 0;
  tailappend(newglue(*fooglueptr(preamble)));
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  *foosubtype(tail) = tabskipcode + 1;
  curalign = *foolink(preamble);
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
  curtail = curhead;
  initspan(curalign);
}


/*:786*/
/*788:*/
Static void initcol(void)
{
  *fooextrainfo(curalign) = curcmd;
  if (curcmd == omit)
    alignstate = 0;
  else {
    backinput();
    begintokenlist(*fooupart(curalign), utemplate);
  }
}


/*:788*/
/*791:*/
Static boolean fincol(void)
{
  boolean Result;
  pointer p, q, r, s, u;
  scaled w;
  glueord o;
  halfword n;

  if (curalign == 0)
    confusion(S(908));
  q = *foolink(curalign);
  if (q == 0)
    confusion(S(908));
  if (alignstate < 500000L)
    fatalerror(S(604));
  p = *foolink(q);
  /*792:*/
  if ((p == 0) & (*fooextrainfo(curalign) < crcode)) {
    if (curloop != 0) {   /*793:*/
      *foolink(q) = newnullbox();
      p = *foolink(q);
      *fooinfo(p) = endspan;
      *foowidth(p) = nullflag;
      curloop = *foolink(curloop);   /*794:*/
      q = holdhead;
      r = *fooupart(curloop);
      while (r != 0) {
	*foolink(q) = getavail();
	q = *foolink(q);
	*fooinfo(q) = *fooinfo(r);
	r = *foolink(r);
      }
      *foolink(q) = 0;
      *fooupart(p) = *foolink(holdhead);
      q = holdhead;
      r = *foovpart(curloop);
      while (r != 0) {
	*foolink(q) = getavail();
	q = *foolink(q);
	*fooinfo(q) = *fooinfo(r);
	r = *foolink(r);
      }
      *foolink(q) = 0;
      *foovpart(p) = *foolink(holdhead);   /*:794*/
      curloop = *foolink(curloop);
      *foolink(p) = newglue(*fooglueptr(curloop));
    } else {   /*:792*/
      printnl(258);
      print(S(909));
      printesc(S(898));
      helpptr = 3;
      helpline[2] = S(910);
      helpline[1] = S(911);
      helpline[0] = S(912);
      *fooextrainfo(curalign) = crcode;
      error();
    }
    /*:793*/
  }
  if (*fooextrainfo(curalign) != spancode) {
    unsave();
    newsavelevel(aligngroup);   /*796:*/
    if (mode == -hmode) {
      adjusttail = curtail;
      u = hpack(*foolink(head), 0, additional);
      w = *foowidth(u);
      curtail = adjusttail;
      adjusttail = 0;
    } else {
      u = vpackage(*foolink(head), 0, additional, 0);
      w = *fooheight(u);
    }
    n = minquarterword;
    if (curspan != curalign) {   /*798:*/
      q = curspan;
      do {
	n++;
	q = *foolink(*foolink(q));
      } while (q != curalign);
      if (n > maxquarterword)
	confusion(S(913));
      q = curspan;
      while (*foolink(*fooinfo(q)) < n)
	q = *fooinfo(q);
      if (*foolink(*fooinfo(q)) > n) {
	s = getnode(spannodesize);
	*fooinfo(s) = *fooinfo(q);
	*foolink(s) = n;
	*fooinfo(q) = s;
	*foowidth(s) = w;
      } else if (*foowidth(*fooinfo(q)) < w)
	*foowidth(*fooinfo(q)) = w;
    } else if (w > *foowidth(curalign))   /*:798*/
      *foowidth(curalign) = w;
    *footype(u) = unsetnode;
    *foospancount(u) = n;   /*659:*/
    if (totalstretch[filll - normal] != 0)
      o = filll;
    else if (totalstretch[fill - normal] != 0)
      o = fill;
    else if (totalstretch[fil - normal] != 0)
      o = fil;
    else {
      o = normal;
      /*:
659*/
    }
    *fooglueorder(u) = o;
    *foogluestretch(u) = totalstretch[o - normal];   /*665:*/
    if (totalshrink[filll - normal] != 0)
      o = filll;
    else if (totalshrink[fill - normal] != 0)
      o = fill;
    else if (totalshrink[fil - normal] != 0)
      o = fil;
    else
      o = normal;   /*:665*/
    *foogluesign(u) = o;
    *fooglueshrink(u) = totalshrink[o - normal];
    popnest();
    *foolink(tail) = u;
    tail = u;   /*:796*/
    /*795:*/
    tailappend(newglue(*fooglueptr(*foolink(curalign))));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *foosubtype(tail) = tabskipcode + 1;   /*:795*/
    if (*fooextrainfo(curalign) >= crcode) {
      Result = true;
      goto _Lexit;
    }
    initspan(p);
  }
  alignstate = 1000000L;   /*406:*/
  do {
    getxtoken();   /*:406*/
  } while (curcmd == spacer);
  curalign = p;
  initcol();
  Result = false;
_Lexit:
  return Result;
}


/*:791*/
/*799:*/
Static void finrow(void)
{
  pointer p;

  if (mode == -hmode) {
    p = hpack(*foolink(head), 0, additional);
    popnest();
    appendtovlist(p);
    if (curhead != curtail) {
      *foolink(tail) = *foolink(curhead);
      tail = curtail;
    }
  } else {
    p = *foovpack(*foolink(head), 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
    popnest();
    *foolink(tail) = p;
    tail = p;
    spacefactor = 1000;
  }
  *footype(p) = unsetnode;
  *foogluestretch(p) = 0;
  if (everycr != 0)
    begintokenlist(everycr, everycrtext);
  alignpeek();
}


/*:799*/
/*800:*/
Static void doassignments(void);

Static void resumeafterdisplay(void);

Static void buildpage(void);


Static void finalign(void)
{
  pointer p, q, r, s, u, v;
  scaled t, w, o, rulesave;
  halfword n;
  memoryword auxsave;

  if (curgroup != aligngroup)
    confusion(S(914));
  unsave();
  if (curgroup != aligngroup)
    confusion(S(915));
  unsave();
  if (nest[nestptr - 1].modefield == mmode)
    o = displayindent;
  else
    o = 0;
  /*801:*/
  q = *foolink(preamble);
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
  do {   /*804:*/
    flushlist(*fooupart(q));
    flushlist(*foovpart(q));
    p = *foolink(*foolink(q));
    if (*foowidth(q) == nullflag) {   /*802:*/
      *foowidth(q) = 0;
      r = *foolink(q);
      s = *fooglueptr(r);
      if (s != zeroglue) {
	addglueref(zeroglue);
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
	deleteglueref(s);
	*fooglueptr(r) = zeroglue;
      }
    }
    /*:802*/
    if (*fooinfo(q) != endspan) {   /*803:*/
      t = *foowidth(q) + *foowidth(*fooglueptr(*foolink(q)));
      r = *fooinfo(q);
      s = endspan;
      *fooinfo(s) = p;
      n = minquarterword + 1;
      do {
	*foowidth(r) -= t;
	u = *fooinfo(r);
	while (*foolink(r) > n) {
	  s = *fooinfo(s);
	  n = *foolink(*fooinfo(s)) + 1;
	}
	if (*foolink(r) < n) {
	  *fooinfo(r) = *fooinfo(s);
	  *fooinfo(s) = r;
	  (*foolink(r))--;
	  s = r;
	} else {
	  if (*foowidth(r) > *foowidth(*fooinfo(s)))
	    *foowidth(*fooinfo(s)) = *foowidth(r);
	  freenode(r, spannodesize);
	}
	r = u;
      } while (r != endspan);
    }
    /*:803*/
    *footype(q) = unsetnode;
    *foospancount(q) = minquarterword;
    *fooheight(q) = 0;
    *foodepth(q) = 0;
    *fooglueorder(q) = normal;
    *foogluesign(q) = normal;
    *foogluestretch(q) = 0;
    *fooglueshrink(q) = 0;
    q = p;   /*:801*/
  } while (q != 0);
  saveptr -= 2;
  packbeginline = -modeline;
  if (mode == -vmode) {
    rulesave = overfullrule;
    overfullrule = 0;
    p = hpack(preamble, *foosaved(1), *foosaved(0));
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
    overfullrule = rulesave;
  } else {
    q = *foolink(preamble);
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
    do {
      *fooheight(q) = *foowidth(q);
      *foowidth(q) = 0;
      q = *foolink(*foolink(q));
    } while (q != 0);
    p = *foovpack(preamble, *foosaved(1), *foosaved(0));
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
    q = *foolink(preamble);
/* p2c: tex1.p: Warning: Symbol 'PREAMBLE' is not defined [221] */
    do {
      *foowidth(q) = *fooheight(q);
      *fooheight(q) = 0;
      q = *foolink(*foolink(q));
    } while (q != 0);
  }
  packbeginline = 0;   /*:804*/
  /*805:*/
  q = *foolink(head);
  s = head;
  while (q != 0) {   /*:805*/
    if (!ischarnode(q)) {
      if (*footype(q) == unsetnode) {   /*807:*/
	if (mode == -vmode) {
	  *footype(q) = hlistnode;
	  *foowidth(q) = *foowidth(p);
	} else {
	  *footype(q) = vlistnode;
	  *fooheight(q) = *fooheight(p);
	}
	*fooglueorder(q) = *fooglueorder(p);
	*foogluesign(q) = *foogluesign(p);
	*fooglueset(q) = *fooglueset(p);
	*fooshiftamount(q) = o;
	r = *foolink(*foolistptr(q));
	s = *foolink(*foolistptr(p));
	do {   /*808:*/
	  n = *foospancount(r);
	  t = *foowidth(s);
	  w = t;
	  u = holdhead;
	  while (n > minquarterword) {
	    n--;
	    /*809:*/
	    s = *foolink(s);
	    v = *fooglueptr(s);
	    *foolink(u) = newglue(v);
	    u = *foolink(u);
	    *foosubtype(u) = tabskipcode + 1;
	    t += *foowidth(v);
	    if (*foogluesign(p) == stretching) {
	      if (*foostretchorder(v) == *fooglueorder(p))
		t += *fooglueset(p) * *foostretch(v);
	    } else if (*foogluesign(p) == shrinking) {
	      if (*fooshrinkorder(v) == *fooglueorder(p))
		t -= *fooglueset(p) * *fooshrink(v);
	    }
	    s = *foolink(s);
	    *foolink(u) = newnullbox();
	    u = *foolink(u);
	    t += *foowidth(s);
	    if (mode == -vmode)
	      *foowidth(u) = *foowidth(s);
	    else {   /*:809*/
	      *footype(u) = vlistnode;
	      *fooheight(u) = *foowidth(s);
	    }
	  }
	  if (mode == -vmode) {   /*810:*/
	    *fooheight(r) = *fooheight(q);
	    *foodepth(r) = *foodepth(q);
	    if (t == *foowidth(r)) {
	      *foogluesign(r) = normal;
	      *fooglueorder(r) = normal;
	      *fooglueset(r) = 0.0;
	    } else if (t > *foowidth(r)) {
	      *foogluesign(r) = stretching;
	      if (*foogluestretch(r) == 0)
		*fooglueset(r) = 0.0;
	      else
		*fooglueset(r) = (double)(t - *foowidth(r)) / *foogluestretch(r);
	    } else {
	      *fooglueorder(r) = *foogluesign(r);
	      *foogluesign(r) = shrinking;
	      if (*fooglueshrink(r) == 0)
		*fooglueset(r) = 0.0;
	      else if ((*fooglueorder(r) == normal) &
		       (*foowidth(r) - t > *fooglueshrink(r)))
		*fooglueset(r) = 1.0;
	      else
		*fooglueset(r) = (double)(*foowidth(r) - t) / *fooglueshrink(r);
	    }
	    *foowidth(r) = w;
	    *footype(r) = hlistnode;
	  } else  /*811:*/
	  {   /*:811*/
	    *foowidth(r) = *foowidth(q);
	    if (t == *fooheight(r)) {
	      *foogluesign(r) = normal;
	      *fooglueorder(r) = normal;
	      *fooglueset(r) = 0.0;
	    } else if (t > *fooheight(r)) {
	      *foogluesign(r) = stretching;
	      if (*foogluestretch(r) == 0)
		*fooglueset(r) = 0.0;
	      else
		*fooglueset(r) = (double)(t - *fooheight(r)) / *foogluestretch(r);
	    } else {
	      *fooglueorder(r) = *foogluesign(r);
	      *foogluesign(r) = shrinking;
	      if (*fooglueshrink(r) == 0)
		*fooglueset(r) = 0.0;
	      else if ((*fooglueorder(r) == normal) &
		       (*fooheight(r) - t > *fooglueshrink(r)))
		*fooglueset(r) = 1.0;
	      else
		*fooglueset(r) = (double)(*fooheight(r) - t) / *fooglueshrink(r);
	    }
	    *fooheight(r) = w;
	    *footype(r) = vlistnode;
	  }
	  /*:810*/
	  *fooshiftamount(r) = 0;
	  if (u != holdhead) {   /*:808*/
	    *foolink(u) = *foolink(r);
	    *foolink(r) = *foolink(holdhead);
	    r = u;
	  }
	  r = *foolink(*foolink(r));
	  s = *foolink(*foolink(s));
	} while (r != 0);
      }  /*:807*/
      else if (*footype(q) == rulenode) {
	if (isrunning(*foowidth(q))) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
	  *foowidth(q) = *foowidth(p);
	}
	if (isrunning(*fooheight(q))) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
	  *fooheight(q) = *fooheight(p);
	}
	if (isrunning(*foodepth(q))) {
/* p2c: tex1.p: Warning: Symbol 'ISRUNNING' is not defined [221] */
	  *foodepth(q) = *foodepth(p);
	}
	if (o != 0) {
	  r = *foolink(q);
	  *foolink(q) = 0;
	  q = hpack(q, 0, additional);
	  *fooshiftamount(q) = o;
	  *foolink(q) = r;
	  *foolink(s) = q;
	}
      }
    }
    s = q;
    q = *foolink(q);
  }
  flushnodelist(p);
  popalignment();   /*812:*/
  memcpy(&auxsave, &aux, sizeof(memoryword));
/* p2c: tex1.p: Warning: Incompatible types or sizes [167] */
  p = *foolink(head);
  q = tail;
  popnest();
  if (mode == mmode) {   /*1206:*/
    doassignments();
    if (curcmd != mathshift) {   /*1207:*/
      printnl(258);
      print(S(1169));
      helpptr = 2;
      helpline[1] = S(894);
      helpline[0] = S(895);
      backerror();
    } else {   /*1197:*/
      getxtoken();
      if (curcmd != mathshift) {
	printnl(258);
	print(S(1165));
	helpptr = 2;
	helpline[1] = S(1166);
	helpline[0] = S(1167);
	backerror();
      }
    }
    /*:1207*/
    popnest();
    tailappend(newpenalty(predisplaypenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    tailappend(newparamglue(abovedisplayskipcode));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *foolink(tail) = p;
    if (p != 0)
      tail = q;
    tailappend(newpenalty(postdisplaypenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    tailappend(newparamglue(belowdisplayskipcode));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    prevdepth = auxsave.sc;
    resumeafterdisplay();
    return;
  }
  /*:1206*/
  aux = auxsave;
  *foolink(tail) = p;
  if (p != 0)
    tail = q;
  if (mode == vmode)
    buildpage();

  /*806:*/
  /*:806*/
  /*:1197*/
  /*:812*/
}  /*785:*/


Static void alignpeek(void)
{
_Lrestart:
  alignstate = 1000000L;
  /*406:*/
  do {
    getxtoken();
    /*:406*/
  } while (curcmd == spacer);
  if (curcmd == noalign) {
    scanleftbrace();
    newsavelevel(noaligngroup);
    if (mode == -vmode)
      normalparagraph();
    return;
  }
  if (curcmd == rightbrace) {
    finalign();
    return;
  }
  if (curcmd == carret && curchr == crcrcode)
    goto _Lrestart;
  initrow();
  initcol();
}


/*:785*/
/*:800*/
/*815:*/
/*826:*/
Static halfword finiteshrink(halfword p)
{
  pointer q;

  if (noshrinkerroryet) {
    noshrinkerroryet = false;
    printnl(258);
    print(S(916));
    helpptr = 5;
    helpline[4] = S(917);
    helpline[3] = S(918);
    helpline[2] = S(919);
    helpline[1] = S(920);
    helpline[0] = S(921);
    error();
  }
  q = newspec(p);
  *fooshrinkorder(q) = normal;
  deleteglueref(p);
  return q;
}  /*:826*/


/*829:*/
Static void trybreak(long pi, smallnumber breaktype)
{  /*831:*/
  pointer r, prevr;
  halfword oldl;
  boolean nobreakyet;
  /*830:*/
  pointer prevprevr, s, q, v, savelink;
  long t;
  internalfontnumber f;
  halfword l;
  boolean noderstaysactive;
  scaled linewidth, shortfall;   /*:830*/
  char fitclass;
  halfword b;
  long d;
  boolean artificialdemerits;

  if (labs(pi) >= infpenalty) {
    if (pi > 0)
      goto _Lexit;
    pi = ejectpenalty;
    /*:831*/
  }
  nobreakyet = true;
  prevr = active;
  oldl = 0;
  copytocuractive(1);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  copytocuractive(2);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  copytocuractive(3);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  copytocuractive(4);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  copytocuractive(5);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  copytocuractive(6);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
  while (true) {
_Llabcontinue:
    r = *foolink(prevr);   /*832:*/
    if (*footype(r) == deltanode) {   /*:832*/
      updatewidth(1);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      updatewidth(2);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      updatewidth(3);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      updatewidth(4);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      updatewidth(5);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      updatewidth(6);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
      prevprevr = prevr;
      prevr = r;
      goto _Llabcontinue;
    }
    /*835:*/
    l = *foolinenumber(r);
    if (l > oldl) {   /*:835*/
      if (minimumdemerits < awfulbad && (oldl != easyline || r == lastactive))
      {   /*836:*/
	if (nobreakyet) {   /*837:*/
	  nobreakyet = false;
	  setbreakwidthtobackground(1);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  setbreakwidthtobackground(2);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  setbreakwidthtobackground(3);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  setbreakwidthtobackground(4);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  setbreakwidthtobackground(5);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  setbreakwidthtobackground(6);
/* p2c: tex1.p:
 * Warning: Symbol 'SETBREAKWIDTHTOBACKGROUND' is not defined [221] */
	  s = curp;
	  if (breaktype > unhyphenated) {
	    if (curp != 0) {   /*840:*/
	      t = *fooreplacecount(curp);
	      v = curp;
	      s = *foopostbreak(curp);
	      while (t > 0) {
		t--;
		v = *foolink(v);   /*841:*/
		if (ischarnode(v)) {
		  f = *foofont(v);
		  breakwidth[0] -= *foocharwidth(f,
		      *foocharinfo(f, *foocharacter(v)));
		  continue;
		}
		switch (*footype(v)) {   /*:841*/

		case ligaturenode:
		  f = *foofont(ligchar(v));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		  breakwidth[0] -= *foocharwidth(f,
		      *foocharinfo(f, *foocharacter(ligchar(v))));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		  break;

		case hlistnode:
		case vlistnode:
		case rulenode:
		case kernnode:
		  breakwidth[0] -= *foowidth(v);
		  break;

		default:
		  confusion(S(922));
		  break;
		}
	      }
	      while (s != 0) {   /*842:*/
		if (ischarnode(s)) {
		  f = *foofont(s);
		  breakwidth[0] += *foocharwidth(f,
		      *foocharinfo(f, *foocharacter(s)));
		} else {
		  switch (*footype(s)) {   /*:842*/

		  case ligaturenode:
		    f = *foofont(ligchar(s));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		    breakwidth[0] += *foocharwidth(f,
			*foocharinfo(f, *foocharacter(ligchar(s))));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		    break;

		  case hlistnode:
		  case vlistnode:
		  case rulenode:
		  case kernnode:
		    breakwidth[0] += *foowidth(s);
		    break;

		  default:
		    confusion(S(923));
		    break;
		  }
		}
		s = *foolink(s);
	      }
	      breakwidth[0] += discwidth;
	      if (*foopostbreak(curp) == 0)
		s = *foolink(v);
	    }
	    /*:840*/
	  }
	  while (s != 0) {
	    if (ischarnode(s))
	      goto _Ldone;
	    switch (*footype(s)) {

	    case gluenode:   /*838:*/
	      v = *fooglueptr(s);
	      breakwidth[0] -= *foowidth(v);
	      breakwidth[*foostretchorder(v) + 1] -= *foostretch(v);
	      breakwidth[5] -= *fooshrink(v);
	      break;
	      /*:838*/

	    case penaltynode:
	      /* blank case */
	      break;

	    case mathnode:
	      breakwidth[0] -= *foowidth(s);
	      break;

	    case kernnode:
	      if (*foosubtype(s) != explicit)
		goto _Ldone;
	      breakwidth[0] -= *foowidth(s);
	      break;

	    default:
	      goto _Ldone;
	      break;
	    }
	    s = *foolink(s);
	  }
_Ldone: ;
	}
	/*:837*/
	/*843:*/
	if (*footype(prevr) == deltanode) {
	  converttobreakwidth(1);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	  converttobreakwidth(2);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	  converttobreakwidth(3);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	  converttobreakwidth(4);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	  converttobreakwidth(5);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	  converttobreakwidth(6);
/* p2c: tex1.p:
 * Warning: Symbol 'CONVERTTOBREAKWIDTH' is not defined [221] */
	} else if (prevr == active) {
	  storebreakwidth(1);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	  storebreakwidth(2);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	  storebreakwidth(3);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	  storebreakwidth(4);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	  storebreakwidth(5);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	  storebreakwidth(6);
/* p2c: tex1.p: Warning: Symbol 'STOREBREAKWIDTH' is not defined [221] */
	} else {
	  q = getnode(deltanodesize);
	  *foolink(q) = r;
	  *footype(q) = deltanode;
	  *foosubtype(q) = 0;
	  newdeltatobreakwidth(1);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  newdeltatobreakwidth(2);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  newdeltatobreakwidth(3);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  newdeltatobreakwidth(4);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  newdeltatobreakwidth(5);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  newdeltatobreakwidth(6);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTATOBREAKWIDTH' is not defined [221] */
	  *foolink(prevr) = q;
	  prevprevr = prevr;
	  prevr = q;
	}
	if (labs(adjdemerits) >= awfulbad - minimumdemerits)
	  minimumdemerits = awfulbad - 1;
	else
	  minimumdemerits += labs(adjdemerits);
	for (fitclass = veryloosefit; fitclass <= tightfit; fitclass++) {
	  if (minimaldemerits[fitclass - veryloosefit] <= minimumdemerits)
	  {   /*845:*/
	    q = getnode(passivenodesize);
	    *foolink(q) = passive;
	    passive = q;
	    *foocurbreak(q) = curp;   /*_STAT*/
	    passnumber++;
	    *fooserial(q) = passnumber;   /*_ENDSTAT*/
	    *fooprevbreak(q) = bestplace[fitclass - veryloosefit];
	    q = getnode(activenodesize);
	    *foobreaknode(q) = passive;
	    *foolinenumber(q) = bestplline[fitclass - veryloosefit] + 1;
	    *foofitness(q) = fitclass;
	    *footype(q) = breaktype;
	    *foototaldemerits(q) = minimaldemerits[fitclass - veryloosefit];
	    *foolink(q) = r;
	    *foolink(prevr) = q;
	    prevr = q;   /*_STAT*/
	    if (tracingparagraphs > 0) {   /*846:*/
	      printnl(S(924));
	      printint(*fooserial(passive));
	      print(S(925));
	      printint(*foolinenumber(q) - 1);
	      printchar('.');
	      printint(fitclass);
	      if (breaktype == hyphenated)
		printchar('-');
	      print(S(926));
	      printint(*foototaldemerits(q));
	      print(S(927));
	      if (*fooprevbreak(passive) == 0)
		printchar('0');
	      else
		printint(*fooserial(*fooprevbreak(passive)));
	    }
	    /*:846*/
	    /*_ENDSTAT*/
	  }
	  /*:845*/
	  minimaldemerits[fitclass - veryloosefit] = awfulbad;
	}
	minimumdemerits = awfulbad;   /*844:*/
	if (r != lastactive) {   /*:844*/
	  q = getnode(deltanodesize);
	  *foolink(q) = r;
	  *footype(q) = deltanode;
	  *foosubtype(q) = 0;
	  newdeltafrombreakwidth(1);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  newdeltafrombreakwidth(2);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  newdeltafrombreakwidth(3);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  newdeltafrombreakwidth(4);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  newdeltafrombreakwidth(5);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  newdeltafrombreakwidth(6);
/* p2c: tex1.p:
 * Warning: Symbol 'NEWDELTAFROMBREAKWIDTH' is not defined [221] */
	  *foolink(prevr) = q;
	  prevprevr = prevr;
	  prevr = q;
	}
      }
      /*:836*/
      if (r == lastactive)   /*850:*/
	goto _Lexit;
      if (l > easyline) {
	linewidth = secondwidth;
	oldl = maxhalfword - 1;
      } else {   /*:850*/
	oldl = l;
	if (l > lastspecialline)
	  linewidth = secondwidth;
	else if (parshapeptr == 0)
	  linewidth = firstwidth;
	else
	  linewidth = mem[parshapeptr + l * 2 - memmin].sc;
      }
    }
    /*851:*/
    artificialdemerits = false;
    shortfall = linewidth - curactivewidth[0];
    if (shortfall > 0) {   /*852:*/
      if (curactivewidth[2] != 0 || curactivewidth[3] != 0 ||
	  curactivewidth[4] != 0) {
	b = 0;
	fitclass = decentfit;
      } else {   /*:852*/
	if (shortfall > 7230584L) {
	  if (curactivewidth[1] < 1663497L) {
	    b = infbad;
	    fitclass = veryloosefit;
	    goto _Ldone1;
	  }
	}
	b = badness(shortfall, curactivewidth[1]);
	if (b > 12) {
	  if (b > 99)
	    fitclass = veryloosefit;
	  else
	    fitclass = loosefit;
	} else
	  fitclass = decentfit;
_Ldone1: ;
      }
    } else  /*853:*/
    {   /*:853*/
      if (-shortfall > curactivewidth[5])
	b = infbad + 1;
      else
	b = badness(-shortfall, curactivewidth[5]);
      if (b > 12)
	fitclass = tightfit;
      else
	fitclass = decentfit;
    }
    if (b > infbad || pi == ejectpenalty) {   /*854:*/
      if (((finalpass && minimumdemerits == awfulbad) &
	   (*foolink(r) == lastactive)) && prevr == active)
	artificialdemerits = true;
      else if (b > threshold)
	goto _Ldeactivate_;
      noderstaysactive = false;
    }  /*:854*/
    else {
      prevr = r;
      if (b > threshold)
	goto _Llabcontinue;
      noderstaysactive = true;
    }  /*855:*/
    if (artificialdemerits)
      d = 0;
    else {   /*859:*/
      d = linepenalty + b;
      if (labs(d) >= 10000)
	d = 100000000L;
      else
	d *= d;
      if (pi != 0) {
	if (pi > 0)
	  d += pi * pi;
	else if (pi > ejectpenalty)
	  d -= pi * pi;
      }
      if ((breaktype == hyphenated) & (*footype(r) == hyphenated)) {
	if (curp != 0)
	  d += doublehyphendemerits;
	else
	  d += finalhyphendemerits;
      }
      if (labs(fitclass - *foofitness(r)) > 1)
	d += adjdemerits;
    }
    /*_STAT*/
    if (tracingparagraphs > 0) {   /*:856*/
      /*856:*/
      if (printednode != curp) {   /*857:*/
	printnl(S(266));
	if (curp == 0)
	  shortdisplay(*foolink(printednode));
	else {
	  savelink = *foolink(curp);
	  *foolink(curp) = 0;
	  printnl(S(266));
	  shortdisplay(*foolink(printednode));
	  *foolink(curp) = savelink;
	}
	printednode = curp;
      }
      /*:857*/
      printnl(S(64));
      if (curp == 0)
	printesc(S(606));
      else if (*footype(curp) != gluenode) {
	if (*footype(curp) == penaltynode)
	  printesc(S(542));
	else if (*footype(curp) == discnode)
	  printesc(S(361));
	else if (*footype(curp) == kernnode)
	  printesc(S(352));
	else
	  printesc(S(355));
      }
      print(S(928));
      if (*foobreaknode(r) == 0)
	printchar('0');
      else
	printint(*fooserial(*foobreaknode(r)));
      print(S(929));
      if (b > infbad)
	printchar('*');
      else
	printint(b);
      print(S(930));
      printint(pi);
      print(S(931));
      if (artificialdemerits)
	printchar('*');
      else
	printint(d);
    }
    /*_ENDSTAT*/
    d += *foototaldemerits(r);
    if (d <= minimaldemerits[fitclass - veryloosefit]) {   /*:855*/
      minimaldemerits[fitclass - veryloosefit] = d;
      bestplace[fitclass - veryloosefit] = *foobreaknode(r);
      bestplline[fitclass - veryloosefit] = l;
      if (d < minimumdemerits)
	minimumdemerits = d;
    }
    if (noderstaysactive)
      goto _Llabcontinue;
_Ldeactivate_:   /*860:*/
    *foolink(prevr) = *foolink(r);
    freenode(r, activenodesize);
    if (prevr == active) {   /*861:*/
      r = *foolink(active);
      if (*footype(r) != deltanode)
	continue;
      updateactive(1);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      updateactive(2);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      updateactive(3);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      updateactive(4);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      updateactive(5);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      updateactive(6);
/* p2c: tex1.p: Warning: Symbol 'UPDATEACTIVE' is not defined [221] */
      copytocuractive(1);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      copytocuractive(2);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      copytocuractive(3);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      copytocuractive(4);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      copytocuractive(5);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      copytocuractive(6);
/* p2c: tex1.p: Warning: Symbol 'COPYTOCURACTIVE' is not defined [221] */
      *foolink(active) = *foolink(r);
      freenode(r, deltanodesize);
      continue;
    }  /*:861*/
    /*:851*/
    if (*footype(prevr) != deltanode)   /*:860*/
      continue;
    r = *foolink(prevr);
    if (r == lastactive) {
      downdatewidth(1);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      downdatewidth(2);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      downdatewidth(3);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      downdatewidth(4);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      downdatewidth(5);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      downdatewidth(6);
/* p2c: tex1.p: Warning: Symbol 'DOWNDATEWIDTH' is not defined [221] */
      *foolink(prevprevr) = lastactive;
      freenode(prevr, deltanodesize);
      prevr = prevprevr;
      continue;
    }
    if (*footype(r) != deltanode)
      continue;
    updatewidth(1);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    updatewidth(2);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    updatewidth(3);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    updatewidth(4);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    updatewidth(5);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    updatewidth(6);
/* p2c: tex1.p: Warning: Symbol 'UPDATEWIDTH' is not defined [221] */
    combinetwodeltas(1);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    combinetwodeltas(2);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    combinetwodeltas(3);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    combinetwodeltas(4);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    combinetwodeltas(5);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    combinetwodeltas(6);
/* p2c: tex1.p: Warning: Symbol 'COMBINETWODELTAS' is not defined [221] */
    *foolink(prevr) = *foolink(r);
    freenode(r, deltanodesize);
  }
_Lexit:   /*_STAT*/
  /*858:*/
  if (curp != printednode)
    return;
  if (curp == 0)
    return;
  if (*footype(curp) != discnode)   /*:858*/
    return;
  /*_ENDSTAT*/
  t = *fooreplacecount(curp);
  while (t > 0) {
    t--;
    printednode = *foolink(printednode);
  }

  /*:843*/
  /*:859*/
}  /*:829*/


/*877:*/
Static void postlinebreak(long finalwidowpenalty)
{   /*878:*/
  pointer q, r, s;
  boolean discbreak, postdiscbreak;
  scaled curwidth, curindent;
  quarterword t;
  long pen;
  halfword curline;

  q = *foobreaknode(bestbet);
  curp = 0;
  do {
    r = q;
    q = *fooprevbreak(q);
    *foonextbreak(r) = curp;
    curp = r;   /*:878*/
  } while (q != 0);
  curline = prevgraf + 1;
  do {   /*880:*/
    q = *foocurbreak(curp);
    discbreak = false;
    postdiscbreak = false;
    if (q != 0) {
      if (*footype(q) == gluenode) {
	deleteglueref(*fooglueptr(q));
	*fooglueptr(q) = rightskip;
	*foosubtype(q) = rightskipcode + 1;
	addglueref(rightskip);
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
	goto _Ldone;
      }
      if (*footype(q) == discnode) {   /*882:*/
	t = *fooreplacecount(q);   /*883:*/
	if (t == 0)
	  r = *foolink(q);
	else {   /*:883*/
	  r = q;
	  while (t > 1) {
	    r = *foolink(r);
	    t--;
	  }
	  s = *foolink(r);
	  r = *foolink(s);
	  *foolink(s) = 0;
	  flushnodelist(*foolink(q));
	  *fooreplacecount(q) = 0;
	}
	if (*foopostbreak(q) != 0) {   /*884:*/
	  s = *foopostbreak(q);
	  while (*foolink(s) != 0)
	    s = *foolink(s);
	  *foolink(s) = r;
	  r = *foopostbreak(q);
	  *foopostbreak(q) = 0;
	  postdiscbreak = true;
	}
	/*:884*/
	if (*fooprebreak(q) != 0) {   /*885:*/
	  s = *fooprebreak(q);
	  *foolink(q) = s;
	  while (*foolink(s) != 0)
	    s = *foolink(s);
	  *fooprebreak(q) = 0;
	  q = s;
	}  /*:885*/
	*foolink(q) = r;
	discbreak = true;
      }  /*:882*/
      else if ((*footype(q) == mathnode) | (*footype(q) == kernnode))
	*foowidth(q) = 0;
    } else {
      q = temphead;
      while (*foolink(q) != 0)
	q = *foolink(q);
    }
    /*886:*/
    r = newparamglue(rightskipcode);
    *foolink(r) = *foolink(q);
    *foolink(q) = r;
    q = r;   /*:886*/
_Ldone:   /*:881*/
    /*887:*/
    r = *foolink(q);
    *foolink(q) = 0;
    q = *foolink(temphead);
    *foolink(temphead) = r;
    if (leftskip != zeroglue) {   /*:887*/
      r = newparamglue(leftskipcode);
      *foolink(r) = q;
      q = r;
    }
    /*889:*/
    if (curline > lastspecialline) {
      curwidth = secondwidth;
      curindent = secondindent;
    } else if (parshapeptr == 0) {
      curwidth = firstwidth;
      curindent = firstindent;
    } else {
      curwidth = mem[parshapeptr + curline * 2 - memmin].sc;
      curindent = mem[parshapeptr + curline * 2 - memmin - 1].sc;
    }
    adjusttail = adjusthead;
    justbox = hpack(q, curwidth, exactly);
    *fooshiftamount(justbox) = curindent;   /*:889*/
    /*888:*/
    appendtovlist(justbox);
    if (adjusthead != adjusttail) {
      *foolink(tail) = *foolink(adjusthead);
      tail = adjusttail;
    }
    adjusttail = 0;   /*:888*/
    /*890:*/
    if (curline + 1 != bestline) {   /*:890*/
      pen = interlinepenalty;
      if (curline == prevgraf + 1)
	pen += clubpenalty;
      if (curline + 2 == bestline)
	pen += finalwidowpenalty;
      if (discbreak)
	pen += brokenpenalty;
      if (pen != 0) {
	r = newpenalty(pen);
	*foolink(tail) = r;
	tail = r;
      }
    }
    /*:880*/
    curline++;
    curp = *foonextbreak(curp);
    if (curp != 0) {
      if (!postdiscbreak) {   /*879:*/
	r = temphead;
	while (true) {
	  q = *foolink(r);
	  if (q == *foocurbreak(curp))
	    goto _Ldone1;
	  if (ischarnode(q))
	    goto _Ldone1;
	  if (nondiscardable(q)) {
/* p2c: tex1.p: Warning: Symbol 'NONDISCARDABLE' is not defined [221] */
	    goto _Ldone1;
	  }
	  if (*footype(q) == kernnode) {
	    if (*foosubtype(q) != explicit)
	      goto _Ldone1;
	  }
	  r = q;
	}
_Ldone1:
	if (r != temphead) {
	  *foolink(r) = 0;
	  flushnodelist(*foolink(temphead));
	  *foolink(temphead) = q;
	}
      }
      /*:879*/
    }
  } while (curp != 0);
  /*881:*/
  if ((curline != bestline) | (*foolink(temphead) != 0))
    confusion(S(938));
  prevgraf = bestline - 1;
}


/*:877*/
/*895:*/
/*906:*/
Static smallnumber reconstitute(smallnumber j, smallnumber n, halfword bchar,
				halfword hchar)
{
  pointer p, t;
  fourquarters q;
  halfword currh, testchar;
  scaled w;
  fontindex k;

  hyphenpassed = 0;
  t = holdhead;
  w = 0;
  *foolink(holdhead) = 0;   /*908:*/
  curl = hu[j];
  curq = t;
  if (j == 0) {
    ligaturepresent = initlig;
    p = initlist;
    if (ligaturepresent)
      lfthit = initlft;
    while (p > 0) {
      appendcharnodetot(*foocharacter(p));
/* p2c: tex1.p: Warning: Symbol 'APPENDCHARNODETOT' is not defined [221] */
      p = *foolink(p);
    }
  } else if (curl < nonchar) {
    appendcharnodetot(curl);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHARNODETOT' is not defined [221] */
  }
  ligstack = 0;   /*:908*/
  setcurr();
/* p2c: tex1.p: Warning: Symbol 'SETCURR' is not defined [221] */
_Llabcontinue:   /*909:*/
  if (curl == nonchar) {
    k = bcharlabel[hf - fontbase];
    if (k == nonaddress)
      goto _Ldone;
    q = fontinfo[k].qqqq;
  } else {
    q = *foocharinfo(hf, curl);
    if (chartag(q) != ligtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
      goto _Ldone;
    }
    k = ligkernbase[hf - fontbase] + *foorembyte(q);
    q = fontinfo[k].qqqq;
    if (*fooskipbyte(q) > stopflag) {
      k = ligkernbase[hf - fontbase] + *fooopbyte(q) * 256 +
	  *foorembyte(q) - kernbaseoffset + 32768L;
      q = fontinfo[k].qqqq;
    }
  }
  if (currh < nonchar)
    testchar = currh;
  else
    testchar = curr;
  while (true) {
    if (*foonextchar(q) == testchar) {
      if (*fooskipbyte(q) <= stopflag) {
	if (currh < nonchar) {
	  hyphenpassed = j;
	  hchar = nonchar;
	  currh = nonchar;
	  goto _Llabcontinue;
	} else {
	  if (hchar < nonchar) {
	    if (hyf[j] & 1) {
	      hyphenpassed = j;
	      hchar = nonchar;
	    }
	  }
	  if (*fooopbyte(q) < kernflag) {   /*911:*/
	    if (curl == nonchar)
	      lfthit = true;
	    if (j == n) {
	      if (ligstack == 0)
		rthit = true;
	    }
	    checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
	    switch (*fooopbyte(q)) {

	    case minquarterword + 1:
	    case minquarterword + 5:
	      curl = *foorembyte(q);
	      ligaturepresent = true;
	      break;

	    case minquarterword + 2:
	    case minquarterword + 6:
	      curr = *foorembyte(q);
	      if (ligstack > 0)
		*foocharacter(ligstack) = curr;
	      else {
		ligstack = newligitem(curr);
		if (j == n)
		  bchar = nonchar;
		else {
		  p = getavail();
		  *fooligptr(ligstack) = p;
		  *foocharacter(p) = hu[j + 1];
		  *foofont(p) = hf;
		}
	      }
	      break;

	    case minquarterword + 3:
	      curr = *foorembyte(q);
	      p = ligstack;
	      ligstack = newligitem(curr);
	      *foolink(ligstack) = p;
	      break;

	    case minquarterword + 7:
	    case minquarterword + 11:
	      wraplig(false);
/* p2c: tex1.p: Warning: Symbol 'WRAPLIG' is not defined [221] */
	      curq = t;
	      curl = *foorembyte(q);
	      ligaturepresent = true;
	      break;

	    default:
	      curl = *foorembyte(q);
	      ligaturepresent = true;
	      if (ligstack > 0) {
		popligstack();
/* p2c: tex1.p: Warning: Symbol 'POPLIGSTACK' is not defined [221] */
	      } else if (j == n)
		goto _Ldone;
	      else {
		appendcharnodetot(curr);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHARNODETOT' is not defined [221] */
		j++;
		setcurr();
/* p2c: tex1.p: Warning: Symbol 'SETCURR' is not defined [221] */
	      }
	      break;
	    }
	    if (*fooopbyte(q) > minquarterword + 4) {
	      if (*fooopbyte(q) != minquarterword + 7)
		goto _Ldone;
	    }
	    goto _Llabcontinue;
	  }
	  /*:911*/
	  w = *foocharkern(hf, q);
	  goto _Ldone;
	}
      }
    }
    if (*fooskipbyte(q) >= stopflag) {
      if (currh == nonchar)
	goto _Ldone;
      else {
	currh = nonchar;
	goto _Llabcontinue;
      }
    }
    k += *fooskipbyte(q) - minquarterword + 1;
    q = fontinfo[k].qqqq;
  }
_Ldone:   /*:909*/
  /*910:*/
  wraplig(rthit);
/* p2c: tex1.p: Warning: Symbol 'WRAPLIG' is not defined [221] */
  if (w != 0) {
    *foolink(t) = newkern(w);
    t = *foolink(t);
    w = 0;
  }
  if (ligstack <= 0)   /*:910*/
    return j;
  curq = t;
  curl = *foocharacter(ligstack);
  ligaturepresent = true;
  popligstack();
/* p2c: tex1.p: Warning: Symbol 'POPLIGSTACK' is not defined [221] */
  goto _Llabcontinue;
/* p2c: tex1.p: Note: Deleting unreachable code [255] */
}


/*:906*/
Static void hyphenate(void)   /*:929*/
{  /*923:*/
  /*901:*/
  char i, j, l;
  pointer q, r, s;
  halfword bchar;
  /*:901*/
  /*912:*/
  pointer majortail, minortail, hyfnode;
  ASCIIcode c;
  char cloc;
  long rcount;
  /*:912*/
  /*922:*/
  triepointer z;
  long v;
  /*:922*/
  /*929:*/
  hyphpointer h;
  strnumber k;
  poolpointer u;
  char FORLIM;

  FORLIM = hn;
  for (j = 0; j <= FORLIM; j++)   /*930:*/
    hyf[j] = 0;
  h = hc[1];
  hn++;
  hc[hn] = curlang;
  FORLIM = hn;
  for (j = 2; j <= FORLIM; j++)
    h = (h + h + hc[j]) % hyphsize;
  while (true) {  /*931:*/
    k = hyphword[h];
    if (k == 0)
      goto _Lnotfound;
    if (flength(k) < hn) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
      goto _Lnotfound;
    }
    if (flength(k) == hn) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
      j = 1;
      u = strstart[k];
      do {
	if (strpool[u] < hc[j])
	  goto _Lnotfound;
	if (strpool[u] > hc[j])
	  goto _Ldone;
	j++;
	u++;
      } while (j <= hn);   /*932:*/
      s = hyphlist[h];
      while (s != 0) {   /*:932*/
	hyf[*fooinfo(s)] = 1;
	s = *foolink(s);
      }
      hn--;
      goto _Lfound;
    }
_Ldone:   /*:931*/
    if (h > 0)
      h--;
    else
      h = hyphsize;
  }
_Lnotfound:
  hn--;   /*:930*/
  if (*footriechar(curlang + 1) != curlang)
    goto _Lexit;
  hc[0] = 0;
  hc[hn + 1] = 0;
  hc[hn + 2] = 256;
  FORLIM = hn - rhyf + 1;
  for (j = 0; j <= FORLIM; j++) {
    z = *footrielink(curlang + 1) + hc[j];
    l = j;
    while (hc[l] == *footriechar(z) - minquarterword) {
      if (*footrieop(z) != minquarterword) {   /*924:*/
	v = *footrieop(z);
	do {
	  v += opstart[curlang];
	  i = l - hyfdistance[v - 1];
	  if (hyfnum[v - 1] > hyf[i])
	    hyf[i] = hyfnum[v - 1];
	  v = hyfnext[v - 1];
	} while (v != minquarterword);
      }
      /*:924*/
      l++;
      z = *footrielink(z) + hc[l];
    }
  }
_Lfound:
  FORLIM = lhyf;
  for (j = 0; j < FORLIM; j++)
    hyf[j] = 0;
  FORLIM = rhyf;
  for (j = 0; j < FORLIM; j++)   /*902:*/
    hyf[hn - j] = 0;   /*:923*/
  FORLIM = hn - rhyf;
  for (j = lhyf; j <= FORLIM; j++) {
    if (hyf[j] & 1)
      goto _Lfound1;
  }
  goto _Lexit;
_Lfound1:   /*:902*/
  /*903:*/
  q = *foolink(hb);
  *foolink(hb) = 0;
  r = *foolink(ha);
  *foolink(ha) = 0;
  bchar = hyfbchar;
  if (ischarnode(ha)) {
    if (*foofont(ha) != hf)
      goto _Lfound2;
    initlist = ha;
    initlig = false;
    hu[0] = *foocharacter(ha) - minquarterword;
  } else if (*footype(ha) == ligaturenode) {
    if (*foofont(ligchar(ha)) != hf) {
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
      goto _Lfound2;
    }
    initlist = *fooligptr(ha);
    initlig = true;
    initlft = (*foosubtype(ha) > 1);
    hu[0] = *foocharacter(ligchar(ha)) - minquarterword;
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
    if (initlist == 0) {
      if (initlft) {
	hu[0] = 256;
	initlig = false;
      }
    }
    freenode(ha, smallnodesize);
  } else {
    if (!ischarnode(r)) {
      if (*footype(r) == ligaturenode) {
	if (*foosubtype(r) > 1)
	  goto _Lfound2;
      }
    }
    j = 1;
    s = ha;
    initlist = 0;
    goto _Lcommonending;
  }
  s = curp;
  while (*foolink(s) != ha)
    s = *foolink(s);
  j = 0;
  goto _Lcommonending;
_Lfound2:
  s = ha;
  j = 0;
  hu[0] = 256;
  initlig = false;
  initlist = 0;
_Lcommonending:
  flushnodelist(r);   /*913:*/
  do {
    l = j;
    j = reconstitute(j, hn, bchar, hyfchar) + 1;
    if (hyphenpassed == 0) {
      *foolink(s) = *foolink(holdhead);
      while (*foolink(s) > 0)
	s = *foolink(s);
      if (hyf[j - 1] & 1) {
	l = j;
	hyphenpassed = j - 1;
	*foolink(holdhead) = 0;
      }
    }
    if (hyphenpassed > 0) {   /*914:*/
      do {
	r = getnode(smallnodesize);
	*foolink(r) = *foolink(holdhead);
	*footype(r) = discnode;
	majortail = r;
	rcount = 0;
	while (*foolink(majortail) > 0) {
	  advancemajortail();
/* p2c: tex1.p: Warning: Symbol 'ADVANCEMAJORTAIL' is not defined [221] */
	}
	i = hyphenpassed;
	hyf[i] = 0;   /*915:*/
	minortail = 0;
	*fooprebreak(r) = 0;
	hyfnode = newcharacter(hf, hyfchar);
	if (hyfnode != 0) {
	  i++;
	  c = hu[i];
	  hu[i] = hyfchar;
	  freeavail(hyfnode);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
	}
	while (l <= i) {
	  l = reconstitute(l, i, fontbchar[hf - fontbase], nonchar) + 1;
	  if (*foolink(holdhead) <= 0)
	    continue;
	  if (minortail == 0)
	    *fooprebreak(r) = *foolink(holdhead);
	  else
	    *foolink(minortail) = *foolink(holdhead);
	  minortail = *foolink(holdhead);
	  while (*foolink(minortail) > 0)
	    minortail = *foolink(minortail);
	}
	if (hyfnode != 0) {   /*:915*/
	  hu[i] = c;
	  l = i;
	  i--;
	}
	/*916:*/
	minortail = 0;
	*foopostbreak(r) = 0;
	cloc = 0;
	if (bcharlabel[hf - fontbase] != nonaddress) {
	  l--;
	  c = hu[l];
	  cloc = l;
	  hu[l] = 256;
	}
	while (l < j) {   /*:916*/
	  do {
	    l = reconstitute(l, hn, bchar, nonchar) + 1;
	    if (cloc > 0) {
	      hu[cloc] = c;
	      cloc = 0;
	    }
	    if (*foolink(holdhead) > 0) {
	      if (minortail == 0)
		*foopostbreak(r) = *foolink(holdhead);
	      else
		*foolink(minortail) = *foolink(holdhead);
	      minortail = *foolink(holdhead);
	      while (*foolink(minortail) > 0)
		minortail = *foolink(minortail);
	    }
	  } while (l < j);
	  while (l > j) {   /*917:*/
	    j = reconstitute(j, hn, bchar, nonchar) + 1;
	    *foolink(majortail) = *foolink(holdhead);
	    while (*foolink(majortail) > 0) {
	      advancemajortail();
/* p2c: tex1.p: Warning: Symbol 'ADVANCEMAJORTAIL' is not defined [221] */
	    }
	  }
	  /*:917*/
	}
	/*918:*/
	if (rcount > 127) {
	  *foolink(s) = *foolink(r);
	  *foolink(r) = 0;
	  flushnodelist(r);
	} else {
	  *foolink(s) = r;
	  *fooreplacecount(r) = rcount;
	}
	s = majortail;   /*:918*/
	hyphenpassed = j - 1;
	*foolink(holdhead) = 0;   /*:914*/
      } while (hyf[j - 1] & 1);
    }
  } while (j <= hn);
  *foolink(s) = q;   /*:913*/
  /*:903*/
  flushlist(initlist);
_Lexit: ;
}


/*:895*/
/*942:*/
/*944:*/
Static quarterword newtrieop(smallnumber d, smallnumber n, quarterword v)
{
  quarterword Result;
  short h;
  quarterword u;
  short l;

  h = abs(n + d * 313 + v * 361 + curlang * 1009) % (trieopsize + trieopsize) -
      trieopsize;
  while (true) {
    l = trieophash[h + trieopsize];
    if (l == 0) {
      if (trieopptr == trieopsize)
	overflow(S(948), trieopsize);
      u = trieused[curlang];
      if (u == maxquarterword)
	overflow(S(949), maxquarterword - minquarterword);
      trieopptr++;
      u++;
      trieused[curlang] = u;
      hyfdistance[trieopptr - 1] = d;
      hyfnum[trieopptr - 1] = n;
      hyfnext[trieopptr - 1] = v;
      trieoplang[trieopptr - 1] = curlang;
      trieophash[h + trieopsize] = trieopptr;
      trieopval[trieopptr - 1] = u;
      Result = u;
      goto _Lexit;
    }
    if (hyfdistance[l - 1] == d && hyfnum[l - 1] == n &&
	hyfnext[l - 1] == v && trieoplang[l - 1] == curlang) {
      Result = trieopval[l - 1];
      goto _Lexit;
    }
    if (h > -trieopsize)
      h--;
    else
      h = trieopsize;
  }
_Lexit:
  return Result;
}  /*:944*/


/*948:*/
Static triepointer trienode(triepointer p)
{
  triepointer Result, h, q;

  h = abs(triec[p] + trieo[p] * 1009 + triel[p] * 2718 + trier[p] * 3142) %
      triesize;
  while (true) {
    q = triehash[h];
    if (q == 0) {
      triehash[h] = p;
      Result = p;
      goto _Lexit;
    }
    if (triec[q] == triec[p] && trieo[q] == trieo[p] &&
	triel[q] == triel[p] && trier[q] == trier[p]) {
      Result = q;
      goto _Lexit;
    }
    if (h > 0)
      h--;
    else
      h = triesize;
  }
_Lexit:
  return Result;
}


/*:948*/
/*949:*/
Static triepointer compresstrie(triepointer p)
{
  if (p == 0)
    return 0;
  else {
    triel[p] = compresstrie(triel[p]);
    trier[p] = compresstrie(trier[p]);
    return (trienode(p));
  }
}


/*:949*/
/*953:*/
Static void firstfit(triepointer p)
{
  triepointer h, z, q;
  ASCIIcode c;
  triepointer l, r;
  short ll;

  c = triec[p];
  z = triemin[c];
  while (true) {
    h = z - c;   /*954:*/
    if (triemax < h + 256) {   /*:954*/
      if (triesize <= h + 256)
	overflow(S(950), triesize);
      do {
	triemax++;
	P_clrbits_B(trietaken, triemax - 1, 0, 3);
	*footrielink(triemax) = triemax + 1;
	*footrieback(triemax) = triemax - 1;
      } while (triemax != h + 256);
    }
    if (P_getbits_UB(trietaken, h - 1, 0, 3))   /*955:*/
      goto _Lnotfound;
    q = trier[p];
    while (q > 0) {
      if (*footrielink(h + triec[q]) == 0)
	goto _Lnotfound;
      q = trier[q];
    }
    goto _Lfound;   /*:955*/
_Lnotfound:
    z = *footrielink(z);
  }
_Lfound:   /*956:*/
  P_putbits_UB(trietaken, h - 1, 1, 0, 3);
  triehash[p] = h;
  q = p;
  do {
    z = h + triec[q];
    l = *footrieback(z);
    r = *footrielink(z);
    *footrieback(r) = l;
    *footrielink(l) = r;
    *footrielink(z) = 0;
    if (l < 256) {
      if (z < 256)
	ll = z;
      else
	ll = 256;
      do {
	triemin[l] = r;
	l++;
      } while (l != ll);
    }
    q = trier[q];   /*:956*/
  } while (q != 0);
}


/*:953*/
/*957:*/
Static void triepack(triepointer p)
{
  triepointer q;

  do {
    q = triel[p];
    if (q > 0 && triehash[q] == 0) {
      firstfit(q);
      triepack(q);
    }
    p = trier[p];
  } while (p != 0);
}


/*:957*/
/*959:*/
Static void triefix(triepointer p)
{
  triepointer q;
  ASCIIcode c;
  triepointer z;

  z = triehash[p];
  do {
    q = triel[p];
    c = triec[p];
    *footrielink(z + c) = triehash[q];
    *footriechar(z + c) = c;
    *footrieop(z + c) = trieo[p];
    if (q > 0)
      triefix(q);
    p = trier[p];
  } while (p != 0);
}


/*:959*/
/*960:*/
Static void newpatterns(void)
{
  char k, l;
  boolean digitsensed;
  quarterword v;
  triepointer p, q;
  boolean firstchild;
  ASCIIcode c;

  if (trienotready) {
    setcurlang();
/* p2c: tex1.p: Warning: Symbol 'SETCURLANG' is not defined [221] */
    scanleftbrace();
    /*961:*/
    k = 0;
    hyf[0] = 0;
    digitsensed = false;
    while (true) {
      getxtoken();
      switch (curcmd) {

      case letter:
      case otherchar:   /*962:*/
	if (digitsensed | (curchr < '0') | (curchr > '9')) {
	  if (curchr == '.')
	    curchr = 0;
	  else {
	    curchr = *foolccode(curchr);
	    if (curchr == 0) {
	      printnl(258);
	      print(S(956));
	      helpptr = 1;
	      helpline[0] = S(955);
	      error();
	    }
	  }
	  if (k < 63) {
	    k++;
	    hc[k] = curchr;
	    hyf[k] = 0;
	    digitsensed = false;
	  }
	} else if (k < 63) {
	  hyf[k] = curchr - '0';
	  digitsensed = true;
	}
	break;

      case spacer:
      case rightbrace:
	if (k > 0) {   /*963:*/
	  if (hc[1] == 0)
	    hyf[0] = 0;
	  if (hc[k] == 0)
	    hyf[k] = 0;
	  l = k;
	  v = minquarterword;
	  while (true) {
	    if (hyf[l] != 0)
	      v = newtrieop(k - l, hyf[l], v);
	    if (l <= 0)
	      goto _Ldone1;
	    l--;
	  }
_Ldone1:   /*:965*/
	  q = 0;
	  hc[0] = curlang;
	  while (l <= k) {
	    c = hc[l];
	    l++;
	    p = triel[q];
	    firstchild = true;
	    while (p > 0 && c > triec[p]) {
	      q = p;
	      p = trier[q];
	      firstchild = false;
	    }
	    if (p == 0 || c < triec[p]) {   /*964:*/
	      if (trieptr == triesize)
		overflow(S(950), triesize);
	      trieptr++;
	      trier[trieptr] = p;
	      p = trieptr;
	      triel[p] = 0;
	      if (firstchild)
		triel[q] = p;
	      else
		trier[q] = p;
	      triec[p] = c;
	      trieo[p] = minquarterword;
	    }
	    /*:964*/
	    q = p;
	  }
	  if (trieo[q] != minquarterword) {
	    printnl(258);
	    print(S(957));
	    helpptr = 1;
	    helpline[0] = S(955);
	    error();
	  }
	  trieo[q] = v;
	}
	/*965:*/
	/*:963*/
	if (curcmd == rightbrace)
	  goto _Ldone;
	k = 0;
	hyf[0] = 0;
	digitsensed = false;
	break;

      default:
	printnl(258);
	print(S(954));
	printesc(S(952));
	helpptr = 1;
	helpline[0] = S(955);
	error();
	break;
      }
    }
_Ldone:   /*:961*/
    return;
  }
  printnl(258);
  print(S(951));
  printesc(S(952));
  helpptr = 1;
  helpline[0] = S(953);
  error();
  *foolink(garbage) = scantoks(false, false);
  flushlist(defref);

  /*:962*/
}


/*:960*/
/*966:*/
Static void inittrie(void)
{   /*952:*/
  triepointer p;
  long j, k, t;
  triepointer r, s;
  twohalves h;
  long FORLIM;
  triepointer FORLIM1;

  /*945:*/
  opstart[0] = -minquarterword;
  for (j = 1; j <= 255; j++)
    opstart[j] = opstart[j - 1] + trieused[j - 1] - minquarterword;
  FORLIM = trieopptr;
  for (j = 1; j <= FORLIM; j++)
    trieophash[j + trieopsize] = opstart[trieoplang[j - 1]] + trieopval[j - 1];
  FORLIM = trieopptr;
  for (j = 1; j <= FORLIM; j++) {
    while (trieophash[j + trieopsize] > j) {   /*:945*/
      k = trieophash[j + trieopsize];
      t = hyfdistance[k - 1];
      hyfdistance[k - 1] = hyfdistance[j - 1];
      hyfdistance[j - 1] = t;
      t = hyfnum[k - 1];
      hyfnum[k - 1] = hyfnum[j - 1];
      hyfnum[j - 1] = t;
      t = hyfnext[k - 1];
      hyfnext[k - 1] = hyfnext[j - 1];
      hyfnext[j - 1] = t;
      trieophash[j + trieopsize] = trieophash[k + trieopsize];
      trieophash[k + trieopsize] = k;
    }
  }
  for (p = 0; p <= triesize; p++)
    triehash[p] = 0;
  trieroot = compresstrie(trieroot);
  FORLIM1 = trieptr;
  for (p = 0; p <= FORLIM1; p++)
    triehash[p] = 0;
  for (p = 0; p <= 255; p++)
    triemin[p] = p + 1;
  *footrielink(0) = 1;
  triemax = 0;   /*:952*/
  if (trieroot != 0) {
    firstfit(trieroot);
    triepack(trieroot);
  }
  /*958:*/
  h.rh = 0;
  h.UU.U2.b0 = minquarterword;
  h.UU.U2.b1 = minquarterword;
  if (trieroot == 0) {
    for (r = 0; r <= 256; r++)
      trie[r] = h;
    triemax = 256;
  } else {
    triefix(trieroot);
    r = 0;
    do {
      s = *footrielink(r);
      trie[r] = h;
      r = s;
    } while (r <= triemax);
  }
  *footriechar(0) = '?';   /*:958*/
  trienotready = false;
}


/*:966*/
/*:942*/
Static void linebreak(long finalwidowpenalty)
{
  /*862:*/
  boolean autobreaking;
  pointer prevp, q, r, s, prevs;
  internalfontnumber f;
  /*:862*/
  /*893:*/
  smallnumber j;
  uchar c;   /*:893*/

  packbeginline = modeline;   /*816:*/
  *foolink(temphead) = *foolink(head);
  if (ischarnode(tail)) {
    tailappend(newpenalty(infpenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  } else if (*footype(tail) != gluenode) {
    tailappend(newpenalty(infpenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  } else {
    *footype(tail) = penaltynode;
    deleteglueref(*fooglueptr(tail));
    flushnodelist(*fooleaderptr(tail));
    *foopenalty(tail) = infpenalty;
  }
  *foolink(tail) = newparamglue(parfillskipcode);
  initcurlang = prevgraf % 65536L;
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  initlhyf = prevgraf / 4194304L;
  initrhyf = (prevgraf / 65536L) & 63;
  popnest();   /*:816*/
  /*827:*/
  noshrinkerroryet = true;
  checkshrinkage(leftskip);
/* p2c: tex1.p: Warning: Symbol 'CHECKSHRINKAGE' is not defined [221] */
  checkshrinkage(rightskip);
/* p2c: tex1.p: Warning: Symbol 'CHECKSHRINKAGE' is not defined [221] */
  q = leftskip;
  r = rightskip;
  background[0] = *foowidth(q) + *foowidth(r);
  background[1] = 0;
  background[2] = 0;
  background[3] = 0;
  background[4] = 0;
  background[*foostretchorder(q) + 1] = *foostretch(q);
  background[*foostretchorder(r) + 1] += *foostretch(r);
  background[5] = *fooshrink(q) + *fooshrink(r);   /*:827*/
  /*834:*/
  minimumdemerits = awfulbad;
  minimaldemerits[tightfit - veryloosefit] = awfulbad;
  minimaldemerits[decentfit - veryloosefit] = awfulbad;
  minimaldemerits[loosefit - veryloosefit] = awfulbad;
  minimaldemerits[0] = awfulbad;   /*:834*/
  /*848:*/
  if (parshapeptr == 0) {
    if (hangindent == 0) {
      lastspecialline = 0;
      secondwidth = hsize;
      secondindent = 0;
    } else  /*849:*/
    {   /*:849*/
      lastspecialline = labs(hangafter);
      if (hangafter < 0) {
	firstwidth = hsize - labs(hangindent);
	if (hangindent >= 0)
	  firstindent = hangindent;
	else
	  firstindent = 0;
	secondwidth = hsize;
	secondindent = 0;
      } else {
	firstwidth = hsize;
	firstindent = 0;
	secondwidth = hsize - labs(hangindent);
	if (hangindent >= 0)
	  secondindent = hangindent;
	else
	  secondindent = 0;
      }
    }
  } else {
    lastspecialline = *fooinfo(parshapeptr) - 1;
    secondwidth = mem[parshapeptr + (lastspecialline + 1) * 2 - memmin].sc;
    secondindent = mem[parshapeptr + lastspecialline * 2 - memmin + 1].sc;
  }
  if (looseness == 0)
    easyline = lastspecialline;
  else {
    easyline = maxhalfword;
    /*:848*/
  }
  /*863:*/
  threshold = pretolerance;
  if (threshold >= 0) {  /*_STAT*/
    if (tracingparagraphs > 0) {   /*_ENDSTAT*/
      begindiagnostic();
      printnl(S(932));
    }
    secondpass = false;
    finalpass = false;
  } else {
    threshold = tolerance;
    secondpass = true;
    finalpass = (emergencystretch <= 0);   /*_STAT*/
    if (tracingparagraphs > 0)   /*_ENDSTAT*/
      begindiagnostic();
  }
  while (true) {
    if (threshold > infbad)
      threshold = infbad;
    if (secondpass) {   /*891:*/
      if (trienotready)
	inittrie();
      curlang = initcurlang;
      lhyf = initlhyf;
      rhyf = initrhyf;
    }
    /*:891*/
    /*864:*/
    q = getnode(activenodesize);
    *footype(q) = unhyphenated;
    *foofitness(q) = decentfit;
    *foolink(q) = lastactive;
    *foobreaknode(q) = 0;
    *foolinenumber(q) = prevgraf + 1;
    *foototaldemerits(q) = 0;
    *foolink(active) = q;
    storebackground(1);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    storebackground(2);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    storebackground(3);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    storebackground(4);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    storebackground(5);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    storebackground(6);
/* p2c: tex1.p: Warning: Symbol 'STOREBACKGROUND' is not defined [221] */
    passive = 0;
    printednode = temphead;
    passnumber = 0;
    fontinshortdisplay = nullfont;   /*:864*/
    curp = *foolink(temphead);
    autobreaking = true;
    prevp = curp;
    while ((curp != 0) & (*foolink(active) != lastactive)) {   /*866:*/
      if (ischarnode(curp)) {   /*867:*/
	prevp = curp;
	do {
	  f = *foofont(curp);
	  actwidth += *foocharwidth(f, *foocharinfo(f, *foocharacter(curp)));
	  curp = *foolink(curp);
	} while (ischarnode(curp));
      }
      /*:867*/
      switch (*footype(curp)) {

      case hlistnode:
      case vlistnode:
      case rulenode:
	actwidth += *foowidth(curp);
	break;

      case whatsitnode:   /*1362:*/
	advpast(curp);   /*:1362*/
/* p2c: tex1.p: Warning: Symbol 'ADVPAST' is not defined [221] */
	break;

      case gluenode:  /*868:*/
	if (autobreaking) {
	  if (ischarnode(prevp))
	    trybreak(0, unhyphenated);
	  else if (precedesbreak(prevp)) {
/* p2c: tex1.p: Warning: Symbol 'PRECEDESBREAK' is not defined [221] */
	    trybreak(0, unhyphenated);
	  } else if ((*footype(prevp) == kernnode) &
		     (*foosubtype(prevp) != explicit))
	    trybreak(0, unhyphenated);
	}
	checkshrinkage(*fooglueptr(curp));
/* p2c: tex1.p: Warning: Symbol 'CHECKSHRINKAGE' is not defined [221] */
	q = *fooglueptr(curp);
	actwidth += *foowidth(q);
	activewidth[*foostretchorder(q) + 1] += *foostretch(q);
	activewidth[5] += *fooshrink(q);   /*:868*/
	if (secondpass && autobreaking) {   /*894:*/
	  prevs = curp;
	  s = *foolink(prevs);
	  if (s != 0) {  /*896:*/
	    while (true) {
	      if (ischarnode(s)) {
		c = *foocharacter(s) - minquarterword;
		hf = *foofont(s);
	      } else if (*footype(s) == ligaturenode) {
		if (*fooligptr(s) == 0)
		  goto _Llabcontinue;
		q = *fooligptr(s);
		c = *foocharacter(q) - minquarterword;
		hf = *foofont(q);
	      } else if ((*footype(s) == kernnode) & (*foosubtype(s) == normal))
		goto _Llabcontinue;
	      else if (*footype(s) == whatsitnode) {
		advpast(s);   /*:1363*/
/* p2c: tex1.p: Warning: Symbol 'ADVPAST' is not defined [221] */
		goto _Llabcontinue;
	      } else
		goto _Ldone1;
	      if (*foolccode(c) != 0) {
		if (*foolccode(c) == c || uchyph > 0)
		  goto _Ldone2;
		else
		  goto _Ldone1;
	      }
_Llabcontinue:
	      prevs = s;
	      s = *foolink(prevs);
	    }
_Ldone2:
	    hyfchar = hyphenchar[hf - fontbase];
	    if (hyfchar < 0)
	      goto _Ldone1;
	    if (hyfchar > 255)
	      goto _Ldone1;
	    ha = prevs;   /*:896*/
	    if (lhyf + rhyf > 63)   /*897:*/
	      goto _Ldone1;
	    hn = 0;
	    while (true) {
	      if (ischarnode(s)) {
		if (*foofont(s) != hf)
		  goto _Ldone3;
		hyfbchar = *foocharacter(s);
		c = hyfbchar - minquarterword;
		if (*foolccode(c) == 0)
		  goto _Ldone3;
		if (hn == 63)
		  goto _Ldone3;
		hb = s;
		hn++;
		hu[hn] = c;
		hc[hn] = *foolccode(c);
		hyfbchar = nonchar;
	      } else if (*footype(s) == ligaturenode) {
		if (*foofont(ligchar(s)) != hf) {
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		  goto _Ldone3;
		}
		j = hn;
		q = *fooligptr(s);
		if (q > 0)
		  hyfbchar = *foocharacter(q);
		while (q > 0) {
		  c = *foocharacter(q) - minquarterword;
		  if (*foolccode(c) == 0)
		    goto _Ldone3;
		  if (j == 63)
		    goto _Ldone3;
		  j++;
		  hu[j] = c;
		  hc[j] = *foolccode(c);
		  q = *foolink(q);
		}
		hb = s;
		hn = j;
		if ((*foosubtype(s)) & 1)
		  hyfbchar = fontbchar[hf - fontbase];
		else
		  hyfbchar = nonchar;
	      } else if ((*footype(s) == kernnode) & (*foosubtype(s) == normal)) {
		hb = s;
		hyfbchar = fontbchar[hf - fontbase];
	      } else
		goto _Ldone3;
	      s = *foolink(s);
	    }
_Ldone3:   /*:897*/
	    /*899:*/
	    if (hn < lhyf + rhyf)
	      goto _Ldone1;
	    while (true) {
	      if (!ischarnode(s)) {
		switch (*footype(s)) {

		case ligaturenode:
		  /* blank case */
		  break;

		case kernnode:
		  if (*foosubtype(s) != normal)
		    goto _Ldone4;
		  break;

		case whatsitnode:
		case gluenode:
		case penaltynode:
		case insnode:
		case adjustnode:
		case marknode:
		  goto _Ldone4;
		  break;

		default:
		  goto _Ldone1;
		  break;
		}
	      }
	      s = *foolink(s);
	    }
_Ldone4:   /*:899*/
	    hyphenate();
	  }
_Ldone1: ;
	}
	/*:894*/
	break;

      case kernnode:
	if (*foosubtype(curp) == explicit) {
	  kernbreak();
/* p2c: tex1.p: Warning: Symbol 'KERNBREAK' is not defined [221] */
	} else
	  actwidth += *foowidth(curp);
	break;

      case ligaturenode:
	f = *foofont(ligchar(curp));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	actwidth += *foocharwidth(f,
	    *foocharinfo(f, *foocharacter(ligchar(curp))));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	break;

      case discnode:   /*869:*/
	s = *fooprebreak(curp);
	discwidth = 0;
	if (s == 0)
	  trybreak(exhyphenpenalty, hyphenated);
	else {
	  do {   /*870:*/
	    if (ischarnode(s)) {
	      f = *foofont(s);
	      discwidth += *foocharwidth(f, *foocharinfo(f, *foocharacter(s)));
	    } else {
	      switch (*footype(s)) {   /*:870*/

	      case ligaturenode:
		f = *foofont(ligchar(s));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		discwidth += *foocharwidth(f,
		    *foocharinfo(f, *foocharacter(ligchar(s))));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
		break;

	      case hlistnode:
	      case vlistnode:
	      case rulenode:
	      case kernnode:
		discwidth += *foowidth(s);
		break;

	      default:
		confusion(S(936));
		break;
	      }
	    }
	    s = *foolink(s);
	  } while (s != 0);
	  actwidth += discwidth;
	  trybreak(hyphenpenalty, hyphenated);
	  actwidth -= discwidth;
	}
	r = *fooreplacecount(curp);
	s = *foolink(curp);
	while (r > 0) {  /*871:*/
	  if (ischarnode(s)) {
	    f = *foofont(s);
	    actwidth += *foocharwidth(f, *foocharinfo(f, *foocharacter(s)));
	  } else {
	    switch (*footype(s)) {   /*:871*/

	    case ligaturenode:
	      f = *foofont(ligchar(s));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	      actwidth += *foocharwidth(f,
		  *foocharinfo(f, *foocharacter(ligchar(s))));
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	      break;

	    case hlistnode:
	    case vlistnode:
	    case rulenode:
	    case kernnode:
	      actwidth += *foowidth(s);
	      break;

	    default:
	      confusion(S(937));
	      break;
	    }
	  }
	  r--;
	  s = *foolink(s);
	}
	prevp = curp;
	curp = s;
	goto _Ldone5;
	break;
	/*:869*/

      case mathnode:
	autobreaking = (*foosubtype(curp) == after);
	kernbreak();
/* p2c: tex1.p: Warning: Symbol 'KERNBREAK' is not defined [221] */
	break;

      case penaltynode:
	trybreak(*foopenalty(curp), unhyphenated);
	break;

      case marknode:
      case insnode:
      case adjustnode:
	/* blank case */
	break;

      default:
	confusion(S(935));
	break;
      }
      prevp = curp;
      curp = *foolink(curp);
_Ldone5: ;
    }
    /*:866*/
    if (curp == 0) {   /*873:*/
      trybreak(ejectpenalty, hyphenated);
      if (*foolink(active) != lastactive) {   /*874:*/
	r = *foolink(active);
	fewestdemerits = awfulbad;
	do {
	  if (*footype(r) != deltanode) {
	    if (*foototaldemerits(r) < fewestdemerits) {
	      fewestdemerits = *foototaldemerits(r);
	      bestbet = r;
	    }
	  }
	  r = *foolink(r);
	} while (r != lastactive);
	bestline = *foolinenumber(bestbet);   /*:874*/
	if (looseness == 0)
	  goto _Ldone;
	/*875:*/
	r = *foolink(active);
	actuallooseness = 0;
	do {
	  if (*footype(r) != deltanode) {
	    linediff = *foolinenumber(r) - bestline;
	    if (linediff < actuallooseness && looseness <= linediff ||
		linediff > actuallooseness && looseness >= linediff) {
	      bestbet = r;
	      actuallooseness = linediff;
	      fewestdemerits = *foototaldemerits(r);
	    } else if ((linediff == actuallooseness) &
		       (*foototaldemerits(r) < fewestdemerits)) {
	      bestbet = r;
	      fewestdemerits = *foototaldemerits(r);
	    }
	  }
	  r = *foolink(r);
	} while (r != lastactive);
	bestline = *foolinenumber(bestbet);   /*:875*/
	if (actuallooseness == looseness || finalpass)
	  goto _Ldone;
      }
    }
    /*:873*/
    /*865:*/
    q = *foolink(active);
    while (q != lastactive) {
      curp = *foolink(q);
      if (*footype(q) == deltanode)
	freenode(q, deltanodesize);
      else
	freenode(q, activenodesize);
      q = curp;
    }
    q = passive;
    while (q != 0) {   /*:865*/
      curp = *foolink(q);
      freenode(q, passivenodesize);
      q = curp;
    }
    if (secondpass) {  /*_STAT*/
      if (tracingparagraphs > 0)   /*_ENDSTAT*/
	printnl(S(934));
      background[1] += emergencystretch;
      finalpass = true;
      continue;
    }
    if (tracingparagraphs > 0)   /*_ENDSTAT*/
      printnl(S(933));
    threshold = tolerance;
    secondpass = true;
    finalpass = (emergencystretch <= 0);
  }
_Ldone:   /*_STAT*/
  if (tracingparagraphs > 0) {   /*_ENDSTAT*/
    enddiagnostic(true);
    normalizeselector();
  }
  /*:863*/
  /*876:*/
  /*:876*/
  postlinebreak(finalwidowpenalty);   /*865:*/
  q = *foolink(active);
  while (q != lastactive) {
    curp = *foolink(q);
    if (*footype(q) == deltanode)
      freenode(q, deltanodesize);
    else
      freenode(q, activenodesize);
    q = curp;
  }
  q = passive;
  while (q != 0) {   /*:865*/
    curp = *foolink(q);
    freenode(q, passivenodesize);
    q = curp;
  }
  packbeginline = 0;

  /*1363:*/
  /*898:*/
  /*:898*/
  /*_STAT*/
}


/*:815*/
/*934:*/
Static void newhyphexceptions(void)
{
  char n;
  char j;
  hyphpointer h;
  strnumber k, s, t;
  pointer p, q;
  poolpointer u, v;

  scanleftbrace();
  setcurlang();   /*935:*/
/* p2c: tex1.p: Warning: Symbol 'SETCURLANG' is not defined [221] */
  n = 0;
  p = 0;
  while (true) {   /*:935*/
    getxtoken();
_Lreswitch:
    switch (curcmd) {

    case letter:
    case otherchar:
    case chargiven:   /*937:*/
      if (curchr == '-') {   /*938:*/
	if (n < 63) {
	  q = getavail();
	  *foolink(q) = p;
	  *fooinfo(q) = n;
	  p = q;
	}
      }  /*:938*/
      else {   /*:937*/
	if (*foolccode(curchr) == 0) {
	  printnl(258);
	  print(S(944));
	  helpptr = 2;
	  helpline[1] = S(945);
	  helpline[0] = S(946);
	  error();
	} else if (n < 63) {
	  n++;
	  hc[n] = *foolccode(curchr);
	}
      }
      break;

    case charnum:
      scancharnum();
      curchr = curval;
      curcmd = chargiven;
      goto _Lreswitch;
      break;

    case spacer:
    case rightbrace:   /*936:*/
      if (n > 1) {   /*939:*/
	n++;
	hc[n] = curlang;
	if (poolptr + n > poolsize)
	  overflow(257, poolsize - initpoolptr);
	h = 0;
	for (j = 1; j <= n; j++) {
	  h = (h + h + hc[j]) % hyphsize;
	  appendchar(hc[j]);
/* p2c: tex1.p: Warning: Symbol 'APPENDCHAR' is not defined [221] */
	}
	s = makestring();   /*940:*/
	if (hyphcount == hyphsize)
	  overflow(S(947), hyphsize);
	hyphcount++;
	while (hyphword[h] != 0) {  /*941:*/
	  k = hyphword[h];
	  if (flength(k) < flength(s)) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
	    goto _Lfound;
	  }
	  if (flength(k) > flength(s)) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
	    goto _Lnotfound;
	  }
	  u = strstart[k];
	  v = strstart[s];
	  do {
	    if (strpool[u] < strpool[v])
	      goto _Lfound;
	    if (strpool[u] > strpool[v])
	      goto _Lnotfound;
	    u++;
	    v++;
	  } while (u != strstart[k + 1]);
_Lfound:
	  q = hyphlist[h];
	  hyphlist[h] = p;
	  p = q;
	  t = hyphword[h];
	  hyphword[h] = s;
	  s = t;
_Lnotfound:   /*:941*/
	  if (h > 0)
	    h--;
	  else
	    h = hyphsize;
	}
	hyphword[h] = s;
	hyphlist[h] = p;   /*:940*/
      }
      /*:939*/
      if (curcmd == rightbrace)
	goto _Lexit;
      n = 0;
      p = 0;
      break;

    default:
      printnl(258);
      print(S(689));
      printesc(S(940));
      print(S(941));
      helpptr = 2;
      helpline[1] = S(942);
      helpline[0] = S(943);
      error();   /*:936*/
      break;
    }
  }
_Lexit: ;
}


/*:934*/
/*968:*/
Static halfword prunepagetop(halfword p)
{
  pointer prevp, q;

  prevp = temphead;
  *foolink(temphead) = p;
  while (p != 0) {
    switch (*footype(p)) {

    case hlistnode:
    case vlistnode:
    case rulenode:   /*969:*/
      q = newskipparam(splittopskipcode);
      *foolink(prevp) = q;
      *foolink(q) = p;
      if (*foowidth(tempptr) > *fooheight(p))
	*foowidth(tempptr) -= *fooheight(p);
      else
	*foowidth(tempptr) = 0;
      p = 0;
      break;
      /*:969*/

    case whatsitnode:
    case marknode:
    case insnode:
      prevp = p;
      p = *foolink(prevp);
      break;

    case gluenode:
    case kernnode:
    case penaltynode:
      q = p;
      p = *foolink(q);
      *foolink(q) = 0;
      *foolink(prevp) = p;
      flushnodelist(q);
      break;

    default:
      confusion(S(958));
      break;
    }
  }
  return (*foolink(temphead));
}


/*:968*/
/*970:*/
Static halfword vertbreak(halfword p, long h, long d)
{
  pointer prevp, q, r, bestplace;
  long pi, b, leastcost;
  scaled prevdp;
  smallnumber t;

  prevp = p;
  leastcost = awfulbad;
  setheightzero(1);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  setheightzero(2);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  setheightzero(3);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  setheightzero(4);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  setheightzero(5);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  setheightzero(6);
/* p2c: tex1.p: Warning: Symbol 'SETHEIGHTZERO' is not defined [221] */
  prevdp = 0;
  while (true) {  /*972:*/
    if (p == 0)   /*974:*/
      pi = ejectpenalty;
    else {  /*973:*/
      switch (*footype(p)) {   /*:973*/

      case hlistnode:
      case vlistnode:
      case rulenode:
	curheight += prevdp + *fooheight(p);
	prevdp = *foodepth(p);
	goto _Lnotfound;
	break;

      case whatsitnode:   /*1365:*/
	goto _Lnotfound;   /*:1365*/
	break;

      case gluenode:
	if (!precedesbreak(prevp))
	  goto _Lupdateheights_;
/* p2c: tex1.p: Warning: Symbol 'PRECEDESBREAK' is not defined [221] */
	pi = 0;
	break;

      case kernnode:
	if (*foolink(p) == 0)
	  t = penaltynode;
	else
	  t = *footype(*foolink(p));
	if (t != gluenode)
	  goto _Lupdateheights_;
	pi = 0;
	break;

      case penaltynode:
	pi = *foopenalty(p);
	break;

      case marknode:
      case insnode:
	goto _Lnotfound;
	break;

      default:
	confusion(S(959));
	break;
      }
    }
    if (pi < infpenalty)   /*:974*/
    {  /*975:*/
      if (curheight < h) {
	if (activeheight[2] != 0 || activeheight[3] != 0 ||
	    activeheight[4] != 0)
	  b = 0;
	else
	  b = badness(h - curheight, activeheight[1]);
      } else if (curheight - h > activeheight[5])
	b = awfulbad;
      else
	b = badness(curheight - h, activeheight[5]);   /*:975*/
      if (b < awfulbad) {
	if (pi <= ejectpenalty)
	  b = pi;
	else if (b < infbad)
	  b += pi;
	else
	  b = deplorable;
      }
      if (b <= leastcost) {
	bestplace = p;
	leastcost = b;
	bestheightplusdepth = curheight + prevdp;
      }
      if (b == awfulbad || pi <= ejectpenalty)
	goto _Ldone;
    }
    if ((*footype(p) < gluenode) | (*footype(p) > kernnode))
      goto _Lnotfound;
_Lupdateheights_:   /*976:*/
    if (*footype(p) == kernnode)
      q = p;
    else {
      q = *fooglueptr(p);
      activeheight[*foostretchorder(q) + 1] += *foostretch(q);
      activeheight[5] += *fooshrink(q);
      if ((*fooshrinkorder(q) != normal) & (*fooshrink(q) != 0)) {
	printnl(258);
	print(S(960));
	helpptr = 4;
	helpline[3] = S(961);
	helpline[2] = S(962);
	helpline[1] = S(963);
	helpline[0] = S(921);
	error();
	r = newspec(q);
	*fooshrinkorder(r) = normal;
	deleteglueref(q);
	*fooglueptr(p) = r;
	q = r;
      }
    }
    curheight += prevdp + *foowidth(q);
    prevdp = 0;   /*:976*/
_Lnotfound:
    if (prevdp > d) {   /*:972*/
      curheight += prevdp - d;
      prevdp = d;
    }
    prevp = p;
    p = *foolink(prevp);
  }
_Ldone:
  return bestplace;
}


/*:970*/
/*977:*/
Static halfword vsplit(eightbits n, long h)
{
  halfword Result;
  pointer v, p, q;

  v = *foobox(n);
  if (splitfirstmark != 0) {
    deletetokenref(splitfirstmark);
    splitfirstmark = 0;
    deletetokenref(splitbotmark);
    splitbotmark = 0;
  }
  /*978:*/
  if (v == 0) {
    Result = 0;
    goto _Lexit;
  }
  if (*footype(v) != vlistnode) {   /*:978*/
    printnl(258);
    print(S(266));
    printesc(S(964));
    print(S(965));
    printesc(S(966));
    helpptr = 2;
    helpline[1] = S(967);
    helpline[0] = S(968);
    error();
    Result = 0;
    goto _Lexit;
  }
  q = vertbreak(*foolistptr(v), h, splitmaxdepth);   /*979:*/
  p = *foolistptr(v);
  if (p == q)
    *foolistptr(v) = 0;
  else {
    while (true) {
      if (*footype(p) == marknode) {
	if (splitfirstmark == 0) {
	  splitfirstmark = *foomarkptr(p);
	  splitbotmark = splitfirstmark;
	  *footokenrefcount(splitfirstmark) += 2;
	} else {
	  deletetokenref(splitbotmark);
	  splitbotmark = *foomarkptr(p);
	  addtokenref(splitbotmark);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
	}
      }
      if (*foolink(p) == q) {
	*foolink(p) = 0;
	goto _Ldone;
      }
      p = *foolink(p);
    }
  }
_Ldone:   /*:979*/
  q = prunepagetop(q);
  p = *foolistptr(v);
  freenode(v, boxnodesize);
  if (q == 0)
    *foobox(n) = 0;
  else {
    *foobox(n) = *foovpack(q, 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
  }
  Result = vpackage(p, h, exactly, splitmaxdepth);
_Lexit:
  return Result;
}


/*:977*/
/*985:*/
Static void printtotals(void)
{
  printscaled(pagetotal);
  if (pagesofar[2] != 0) {
    print(270);
    printscaled(pagesofar[2]);
    print(S(266));
  }
  if (pagesofar[3] != 0) {
    print(270);
    printscaled(pagesofar[3]);
    print(S(325));
  }
  if (pagesofar[4] != 0) {
    print(270);
    printscaled(pagesofar[4]);
    print(S(977));
  }
  if (pagesofar[5] != 0) {
    print(270);
    printscaled(pagesofar[5]);
    print(S(978));
  }
  if (pageshrink != 0) {
    print(S(326));
    printscaled(pageshrink);
  }
}


/*:985*/
/*987:*/
Static void freezepagespecs(smallnumber s)
{
  pagecontents = s;
  pagegoal = vsize;
  pagemaxdepth = maxdepth;
  pagedepth = 0;
  setpagesofarzero(1);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  setpagesofarzero(2);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  setpagesofarzero(3);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  setpagesofarzero(4);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  setpagesofarzero(5);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  setpagesofarzero(6);
/* p2c: tex1.p: Warning: Symbol 'SETPAGESOFARZERO' is not defined [221] */
  leastpagecost = awfulbad;   /*_STAT*/
  if (tracingpages <= 0)   /*_ENDSTAT*/
    return;
  begindiagnostic();
  printnl(S(986));
  printscaled(pagegoal);
  print(S(987));
  printscaled(pagemaxdepth);
  enddiagnostic(false);
}  /*:987*/


/*992:*/
Static void boxerror(eightbits n)
{
  error();
  begindiagnostic();
  printnl(S(836));
  showbox(*foobox(n));
  enddiagnostic(true);
  flushnodelist(*foobox(n));
  *foobox(n) = 0;
}


/*:992*/
/*993:*/
Static void ensurevbox(eightbits n)
{
  pointer p;

  p = *foobox(n);
  if (p == 0)
    return;
  if (*footype(p) != hlistnode)
    return;
  printnl(258);
  print(S(988));
  helpptr = 3;
  helpline[2] = S(989);
  helpline[1] = S(990);
  helpline[0] = S(991);
  boxerror(n);
}


/*:993*/
/*994:*/
/*1012:*/
Static void fireup(halfword c)
{  /*1013:*/
  pointer p, q, r, s, prevp, savesplittopskip;
  uchar n;
  boolean wait;
  long savevbadness;
  scaled savevfuzz;

  if (*footype(bestpagebreak) == penaltynode) {
    geqworddefine(intbase + outputpenaltycode, *foopenalty(bestpagebreak));
    *foopenalty(bestpagebreak) = infpenalty;
  } else   /*:1013*/
    geqworddefine(intbase + outputpenaltycode, infpenalty);
  if (botmark != 0) {   /*1014:*/
    if (topmark != 0)
      deletetokenref(topmark);
    topmark = botmark;
    addtokenref(topmark);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
    deletetokenref(firstmark);
    firstmark = 0;
  }
  if (c == bestpagebreak)   /*1015:*/
    bestpagebreak = 0;
  if (*foobox(255) != 0) {   /*:1015*/
    printnl(258);
    print(S(266));
    printesc(S(420));
    print(S(1002));
    helpptr = 2;
    helpline[1] = S(1003);
    helpline[0] = S(991);
    boxerror(255);
  }
  insertpenalties = 0;
  savesplittopskip = splittopskip;
  if (holdinginserts <= 0) {   /*1018:*/
    r = *foolink(pageinshead);
    while (r != pageinshead) {
      if (*foobestinsptr(r) != 0) {
	n = *foosubtype(r) - minquarterword;
	ensurevbox(n);
	if (*foobox(n) == 0)
	  *foobox(n) = newnullbox();
	p = *foobox(n) + listoffset;
	while (*foolink(p) != 0)
	  p = *foolink(p);
	*foolastinsptr(r) = p;
      }
      r = *foolink(r);
    }
  }
  /*:1018*/
  q = holdhead;
  *foolink(q) = 0;
  prevp = pagehead;
  p = *foolink(prevp);
  while (p != bestpagebreak) {
    if (*footype(p) == insnode) {
      if (holdinginserts <= 0) {   /*1020:*/
	r = *foolink(pageinshead);
	while (*foosubtype(r) != *foosubtype(p))
	  r = *foolink(r);
	if (*foobestinsptr(r) == 0)   /*1022:*/
	  wait = true;
	else {
	  wait = false;
	  s = *foolastinsptr(r);
	  *foolink(s) = *fooinsptr(p);
	  if (*foobestinsptr(r) == p) {   /*1021:*/
	    if (*footype(r) == splitup) {
	      if ((*foobrokenins(r) == p) & (*foobrokenptr(r) != 0)) {
		while (*foolink(s) != *foobrokenptr(r))
		  s = *foolink(s);
		*foolink(s) = 0;
		splittopskip = *foosplittopptr(p);
		*fooinsptr(p) = prunepagetop(*foobrokenptr(r));
		if (*fooinsptr(p) != 0) {
		  tempptr = *foovpack(*fooinsptr(p), 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
		  *fooheight(p) = *fooheight(tempptr) + *foodepth(tempptr);
		  freenode(tempptr, boxnodesize);
		  wait = true;
		}
	      }
	    }
	    *foobestinsptr(r) = 0;
	    n = *foosubtype(r) - minquarterword;
	    tempptr = *foolistptr(*foobox(n));
	    freenode(*foobox(n), boxnodesize);
	    *foobox(n) = *foovpack(tempptr, 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
	  }  /*:1021*/
	  else {
	    while (*foolink(s) != 0)
	      s = *foolink(s);
	    *foolastinsptr(r) = s;
	  }
	}
	*foolink(prevp) = *foolink(p);
	*foolink(p) = 0;
	if (wait) {
	  *foolink(q) = p;
	  q = p;
	  insertpenalties++;
	} else {
	  deleteglueref(*foosplittopptr(p));
	  freenode(p, insnodesize);
	}
	p = prevp;   /*:1022*/
      }
      /*:1020*/
    } else if (*footype(p) == marknode) {
      if (firstmark == 0) {
	firstmark = *foomarkptr(p);
	addtokenref(firstmark);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
      }
      if (botmark != 0)
	deletetokenref(botmark);
      botmark = *foomarkptr(p);
      addtokenref(botmark);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
    }
    prevp = p;
    p = *foolink(prevp);
  }
  splittopskip = savesplittopskip;   /*1017:*/
  if (p != 0) {
    if (*foolink(contribhead) == 0) {
      if (nestptr == 0)
	tail = pagetail;
      else
	contribtail = pagetail;
    }
    *foolink(pagetail) = *foolink(contribhead);
    *foolink(contribhead) = p;
    *foolink(prevp) = 0;
  }
  savevbadness = vbadness;
  vbadness = infbad;
  savevfuzz = vfuzz;
  vfuzz = maxdimen;
  *foobox(255) = vpackage(*foolink(pagehead), bestsize, exactly, pagemaxdepth);
  vbadness = savevbadness;
  vfuzz = savevfuzz;
  if (lastglue != maxhalfword)   /*991:*/
    deleteglueref(lastglue);
  pagecontents = empty;
  pagetail = pagehead;
  *foolink(pagehead) = 0;
  lastglue = maxhalfword;
  lastpenalty = 0;
  lastkern = 0;
  pagedepth = 0;
  pagemaxdepth = 0;   /*:991*/
  if (q != holdhead) {   /*:1017*/
    *foolink(pagehead) = *foolink(holdhead);
    pagetail = q;
  }
  /*1019:*/
  r = *foolink(pageinshead);
  while (r != pageinshead) {
    q = *foolink(r);
    freenode(r, pageinsnodesize);
    r = q;
  }
  *foolink(pageinshead) = pageinshead;   /*:1019*/
  /*:1014*/
  if (topmark != 0 && firstmark == 0) {
    firstmark = topmark;
    addtokenref(topmark);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
  }
  if (outputroutine != 0) {   /*1023:*/
    if (deadcycles < maxdeadcycles) {   /*1024:*/
      outputactive = true;
      deadcycles++;
      pushnest();
      mode = -vmode;
      prevdepth = ignoredepth;
      modeline = -line;
      begintokenlist(outputroutine, outputtext);
      newsavelevel(outputgroup);
      normalparagraph();
      scanleftbrace();
      goto _Lexit;
    }
    /*:1024*/
    printnl(258);
    print(S(1004));
    printint(deadcycles);
    print(S(1005));
    helpptr = 3;
    helpline[2] = S(1006);
    helpline[1] = S(1007);
    helpline[0] = S(1008);
    error();
  }
  if (*foolink(pagehead) != 0) {
    if (*foolink(contribhead) == 0) {
      if (nestptr == 0)
	tail = pagetail;
      else
	contribtail = pagetail;
    } else
      *foolink(pagetail) = *foolink(contribhead);
    *foolink(contribhead) = *foolink(pagehead);
    *foolink(pagehead) = 0;
    pagetail = pagehead;
  }
  shipout(*foobox(255));
  *foobox(255) = 0;   /*:1023*/
_Lexit: ;

  /*1016:*/
  /*:1016*/
  /*1025:*/
  /*:1025*/
}


/*:1012*/
Static void buildpage(void)
{
  pointer p, q, r;
  long b, c, pi;
  uchar n;
  scaled delta, h, w;

  if (*foolink(contribhead) == 0 || outputactive)
    goto _Lexit;
  do {
_Llabcontinue:
    p = *foolink(contribhead);   /*996:*/
    if (lastglue != maxhalfword)
      deleteglueref(lastglue);
    lastpenalty = 0;
    lastkern = 0;
    if (*footype(p) == gluenode) {   /*997:*/
      lastglue = *fooglueptr(p);
      addglueref(lastglue);
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
    } else {   /*:996*/
      lastglue = maxhalfword;
      if (*footype(p) == penaltynode)
	lastpenalty = *foopenalty(p);
      else if (*footype(p) == kernnode)
	lastkern = *foowidth(p);
    }
    /*1000:*/
    switch (*footype(p)) {   /*:1000*/

    case hlistnode:
    case vlistnode:
    case rulenode:
      if (pagecontents < boxthere) {   /*1001:*/
	if (pagecontents == empty)
	  freezepagespecs(boxthere);
	else
	  pagecontents = boxthere;
	q = newskipparam(topskipcode);
	if (*foowidth(tempptr) > *fooheight(p))
	  *foowidth(tempptr) -= *fooheight(p);
	else
	  *foowidth(tempptr) = 0;
	*foolink(q) = p;
	*foolink(contribhead) = q;
	goto _Llabcontinue;
      } else  /*1002:*/
      {   /*:1002*/
	pagetotal += pagedepth + *fooheight(p);
	pagedepth = *foodepth(p);
	goto _Lcontribute_;
      }
      /*:1001*/
      break;

    case whatsitnode:   /*1364:*/
      goto _Lcontribute_;   /*:1364*/
      break;

    case gluenode:
      if (pagecontents < boxthere)
	goto _Ldone1;
      if (!precedesbreak(pagetail))
	goto _Lupdateheights_;
/* p2c: tex1.p: Warning: Symbol 'PRECEDESBREAK' is not defined [221] */
      pi = 0;
      break;

    case kernnode:
      if (pagecontents < boxthere)
	goto _Ldone1;
      if (*foolink(p) == 0)
	goto _Lexit;
      if (*footype(*foolink(p)) != gluenode)
	goto _Lupdateheights_;
      pi = 0;
      break;

    case penaltynode:
      if (pagecontents < boxthere)
	goto _Ldone1;
      pi = *foopenalty(p);
      break;

    case marknode:
      goto _Lcontribute_;
      break;

    case insnode:   /*1008:*/
      if (pagecontents == empty)
	freezepagespecs(insertsonly);
      n = *foosubtype(p);
      r = pageinshead;
      while (n >= *foosubtype(*foolink(r)))
	r = *foolink(r);
      n -= minquarterword;
      if (*foosubtype(r) != n) {   /*1009:*/
	q = getnode(pageinsnodesize);
	*foolink(q) = *foolink(r);
	*foolink(r) = q;
	r = q;
	*foosubtype(r) = n;
	*footype(r) = inserting;
	ensurevbox(n);
	if (*foobox(n) == 0)
	  *fooheight(r) = 0;
	else
	  *fooheight(r) = *fooheight(*foobox(n)) + *foodepth(*foobox(n));
	*foobestinsptr(r) = 0;
	q = *fooskip(n);
	if (*foocount(n) == 1000)
	  h = *fooheight(r);
	else
	  h = xovern(*fooheight(r), 1000) * *foocount(n);
	pagegoal += -h - *foowidth(q);
	pagesofar[*foostretchorder(q) + 2] += *foostretch(q);
	pageshrink += *fooshrink(q);
	if ((*fooshrinkorder(q) != normal) & (*fooshrink(q) != 0)) {
	  printnl(258);
	  print(S(997));
	  printesc(S(407));
	  printint(n);
	  helpptr = 3;
	  helpline[2] = S(998);
	  helpline[1] = S(999);
	  helpline[0] = S(921);
	  error();
	}
      }
      /*:1009*/
      if (*footype(r) == splitup)
	insertpenalties += *foofloatcost(p);
      else {
	*foolastinsptr(r) = p;
	delta = pagegoal - pagetotal - pagedepth + pageshrink;
	if (*foocount(n) == 1000)
	  h = *fooheight(p);
	else
	  h = xovern(*fooheight(p), 1000) * *foocount(n);
	if ((h <= 0 || h <= delta) & (*fooheight(p) + *fooheight(r) <=
				      *foodimen(n))) {
	  pagegoal -= h;
	  *fooheight(r) += *fooheight(p);
	} else  /*1010:*/
	{   /*:1010*/
	  if (*foocount(n) <= 0)
	    w = maxdimen;
	  else {
	    w = pagegoal - pagetotal - pagedepth;
	    if (*foocount(n) != 1000)
	      w = xovern(w, *foocount(n)) * 1000;
	  }
	  if (w > *foodimen(n) - *fooheight(r))
	    w = *foodimen(n) - *fooheight(r);
	  q = vertbreak(*fooinsptr(p), w, *foodepth(p));
	  *fooheight(r) += bestheightplusdepth;   /*_STAT*/
	  if (tracingpages > 0) {   /*1011:*/
	    begindiagnostic();
	    printnl(S(1000));
	    printint(n);
	    print(S(1001));
	    printscaled(w);
	    printchar(',');
	    printscaled(bestheightplusdepth);
	    print(S(930));
	    if (q == 0)
	      printint(ejectpenalty);
	    else if (*footype(q) == penaltynode)
	      printint(*foopenalty(q));
	    else
	      printchar('0');
	    enddiagnostic(false);
	  }
	  /*:1011*/
	  /*_ENDSTAT*/
	  if (*foocount(n) != 1000)
	    bestheightplusdepth = xovern(bestheightplusdepth, 1000) * *foocount(n);
	  pagegoal -= bestheightplusdepth;
	  *footype(r) = splitup;
	  *foobrokenptr(r) = q;
	  *foobrokenins(r) = p;
	  if (q == 0)
	    insertpenalties += ejectpenalty;
	  else if (*footype(q) == penaltynode)
	    insertpenalties += *foopenalty(q);
	}
      }
      goto _Lcontribute_;
      break;
      /*:1008*/

    default:
      confusion(S(992));
      break;
    }
    /*1005:*/
    if (pi < infpenalty)   /*:1005*/
    {  /*1007:*/
      if (pagetotal < pagegoal) {
	if (pagesofar[3] != 0 || pagesofar[4] != 0 || pagesofar[5] != 0)
	  b = 0;
	else
	  b = badness(pagegoal - pagetotal, pagesofar[2]);
      } else if (pagetotal - pagegoal > pageshrink)
	b = awfulbad;
      else
	b = badness(pagetotal - pagegoal, pageshrink);   /*:1007*/
      if (b < awfulbad) {
	if (pi <= ejectpenalty)
	  c = pi;
	else if (b < infbad)
	  c = b + pi + insertpenalties;
	else
	  c = deplorable;
      } else
	c = b;
      if (insertpenalties >= 10000)   /*_STAT*/
	c = awfulbad;
      if (tracingpages > 0) {   /*1006:*/
	begindiagnostic();
	printnl('%');
	print(S(926));
	printtotals();
	print(S(995));
	printscaled(pagegoal);
	print(S(929));
	if (b == awfulbad)
	  printchar('*');
	else
	  printint(b);
	print(S(930));
	printint(pi);
	print(S(996));
	if (c == awfulbad)
	  printchar('*');
	else
	  printint(c);
	if (c <= leastpagecost)
	  printchar('#');
	enddiagnostic(false);
      }
      /*:1006*/
      /*_ENDSTAT*/
      if (c <= leastpagecost) {
	bestpagebreak = p;
	bestsize = pagegoal;
	leastpagecost = c;
	r = *foolink(pageinshead);
	while (r != pageinshead) {
	  *foobestinsptr(r) = *foolastinsptr(r);
	  r = *foolink(r);
	}
      }
      if (c == awfulbad || pi <= ejectpenalty) {
	fireup(p);
	if (outputactive)
	  goto _Lexit;
	goto _Ldone;
      }
    }
    if ((*footype(p) < gluenode) | (*footype(p) > kernnode))
      goto _Lcontribute_;
_Lupdateheights_:   /*1004:*/
    if (*footype(p) == kernnode)
      q = p;
    else {
      q = *fooglueptr(p);
      pagesofar[*foostretchorder(q) + 2] += *foostretch(q);
      pageshrink += *fooshrink(q);
      if ((*fooshrinkorder(q) != normal) & (*fooshrink(q) != 0)) {
	printnl(258);
	print(S(993));
	helpptr = 4;
	helpline[3] = S(994);
	helpline[2] = S(962);
	helpline[1] = S(963);
	helpline[0] = S(921);
	error();
	r = newspec(q);
	*fooshrinkorder(r) = normal;
	deleteglueref(q);
	*fooglueptr(p) = r;
	q = r;
      }
    }
    pagetotal += pagedepth + *foowidth(q);
    pagedepth = 0;   /*:1004*/
_Lcontribute_:   /*1003:*/
    if (pagedepth > pagemaxdepth) {   /*:1003*/
      pagetotal += pagedepth - pagemaxdepth;
      pagedepth = pagemaxdepth;
    }
    /*998:*/
    *foolink(pagetail) = p;
    pagetail = p;
    *foolink(contribhead) = *foolink(p);
    *foolink(p) = 0;
    goto _Ldone;   /*:998*/
_Ldone1:   /*999:*/
    *foolink(contribhead) = *foolink(p);
    *foolink(p) = 0;   /*:999*/
    flushnodelist(p);
_Ldone: ;   /*:997*/
  } while (*foolink(contribhead) != 0);   /*995:*/
  if (nestptr == 0)
    tail = contribhead;
  else
    contribtail = contribhead;   /*:995*/
_Lexit: ;
}


/*:994*/
/*1030:*/
/*1043:*/
Static void appspace(void)
{
  pointer q;

  if (spacefactor >= 2000 && xspaceskip != zeroglue)
    q = newparamglue(xspaceskipcode);
  else {
    if (spaceskip != zeroglue)
      mainp = spaceskip;
    else {   /*1042:*/
      mainp = fontglue[curfont - fontbase];
      if (mainp == 0) {
	mainp = newspec(zeroglue);
	maink = parambase[curfont - fontbase] + spacecode;
	*foowidth(mainp) = fontinfo[maink].sc;
	*foostretch(mainp) = fontinfo[maink + 1].sc;
	*fooshrink(mainp) = fontinfo[maink + 2].sc;
	fontglue[curfont - fontbase] = mainp;
      }
    }
    mainp = newspec(mainp);   /*1044:*/
    if (spacefactor >= 2000)
      *foowidth(mainp) += *fooextraspace(curfont);
    *foostretch(mainp) = xnoverd(*foostretch(mainp), spacefactor, 1000);
    *fooshrink(mainp) = xnoverd(*fooshrink(mainp), 1000, spacefactor);
	/*:1044*/
    q = newglue(mainp);
    *foogluerefcount(mainp) = 0;
  }
  *foolink(tail) = q;
  tail = q;

  /*:1042*/
}


/*:1043*/
/*1047:*/
Static void insertdollarsign(void)
{
  backinput();
  curtok = mathshifttoken + '$';
  printnl(258);
  print(S(1016));
  helpptr = 2;
  helpline[1] = S(1017);
  helpline[0] = S(1018);
  inserror();
}


/*:1047*/
/*1049:*/
Static void youcant(void)
{
  printnl(258);
  print(S(694));
  printcmdchr(curcmd, curchr);
  print(S(1019));
  printmode(mode);
}


/*:1049*/
/*1050:*/
Static void reportillegalcase(void)
{
  youcant();
  helpptr = 4;
  helpline[3] = S(1020);
  helpline[2] = S(1021);
  helpline[1] = S(1022);
  helpline[0] = S(1023);
  error();
}


/*:1050*/
/*1051:*/
Static boolean privileged(void)
{
  if (mode > 0)
    return true;
  else {
    reportillegalcase();
    return false;
  }
}


/*:1051*/
/*1054:*/
Static boolean itsallover(void)
{
  boolean Result;

  if (privileged()) {
    if (pagehead == pagetail && head == tail && deadcycles == 0) {
      Result = true;
      goto _Lexit;
    }
    backinput();
    tailappend(newnullbox());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *foowidth(tail) = hsize;
    tailappend(newglue(fillglue));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    tailappend(newpenalty(-1073741824L));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    buildpage();
  }
  Result = false;
_Lexit:
  return Result;
}


/*:1054*/
/*1060:*/
Static void appendglue(void)
{
  smallnumber s;

  s = curchr;
  switch (s) {

  case filcode:
    curval = filglue;
    break;

  case fillcode:
    curval = fillglue;
    break;

  case sscode:
    curval = ssglue;
    break;

  case filnegcode:
    curval = filnegglue;
    break;

  case skipcode:
    scanglue(glueval);
    break;

  case mskipcode:
    scanglue(muval);
    break;
  }
  tailappend(newglue(curval));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  if (s < skipcode)
    return;
  (*foogluerefcount(curval))--;
  if (s > skipcode)
    *foosubtype(tail) = muglue;
}  /*:1060*/


/*1061:*/
Static void appendkern(void)
{
  quarterword s;

  s = curchr;
  scandimen(s == muglue, false, false);
  tailappend(newkern(curval));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  *foosubtype(tail) = s;
}


/*:1061*/
/*1064:*/
Static void offsave(void)
{
  pointer p;

  if (curgroup == bottomlevel) {   /*1066:*/
    printnl(258);
    print(S(784));
    printcmdchr(curcmd, curchr);
    helpptr = 1;
    helpline[0] = S(1042);
    error();
    return;
  }  /*:1066*/
  backinput();
  p = getavail();
  *foolink(temphead) = p;
  printnl(258);
  print(S(634));   /*1065:*/
  switch (curgroup) {   /*:1065*/

  case semisimplegroup:
    *fooinfo(p) = cstokenflag + frozenendgroup;
    printesc(S(527));
    break;

  case mathshiftgroup:
    *fooinfo(p) = mathshifttoken + '$';
    printchar('$');
    break;

  case mathleftgroup:
    *fooinfo(p) = cstokenflag + frozenright;
    *foolink(p) = getavail();
    p = *foolink(p);
    *fooinfo(p) = othertoken + '.';
    printesc(S(1041));
    break;

  default:
    *fooinfo(p) = rightbracetoken + '}';
    printchar('}');
    break;
  }
  print(S(635));
  inslist(*foolink(temphead));
/* p2c: tex1.p: Warning: Symbol 'INSLIST' is not defined [221] */
  helpptr = 5;
  helpline[4] = S(1036);
  helpline[3] = S(1037);
  helpline[2] = S(1038);
  helpline[1] = S(1039);
  helpline[0] = S(1040);
  error();
}


/*:1064*/
/*1069:*/
Static void extrarightbrace(void)
{
  printnl(258);
  print(S(1047));
  switch (curgroup) {

  case semisimplegroup:
    printesc(S(527));
    break;

  case mathshiftgroup:
    printchar('$');
    break;

  case mathleftgroup:
    printesc(S(877));
    break;
  }
  helpptr = 5;
  helpline[4] = S(1048);
  helpline[3] = S(1049);
  helpline[2] = S(1050);
  helpline[1] = S(1051);
  helpline[0] = S(1052);
  error();
  alignstate++;
}


/*:1069*/
/*1070:*/
Static void normalparagraph(void)
{
  if (looseness != 0)
    eqworddefine(intbase + loosenesscode, 0);
  if (hangindent != 0)
    eqworddefine(dimenbase + hangindentcode, 0);
  if (hangafter != 1)
    eqworddefine(intbase + hangaftercode, 1);
  if (parshapeptr != 0)
    eqdefine(parshapeloc, shaperef, 0);
}  /*:1070*/


/*1075:*/
Static void boxend(long boxcontext)
{
  pointer p;

  if (boxcontext < boxflag) {   /*1076:*/
    if (curbox == 0)
      return;
    *fooshiftamount(curbox) = boxcontext;
    if (labs(mode) == vmode) {
      appendtovlist(curbox);
      if (adjusttail != 0) {
	if (adjusthead != adjusttail) {
	  *foolink(tail) = *foolink(adjusthead);
	  tail = adjusttail;
	}
	adjusttail = 0;
      }
      if (mode > 0)
	buildpage();
      return;
    }
    if (labs(mode) == hmode)
      spacefactor = 1000;
    else {
      p = newnoad();
      *foomathtype(*foonucleus(p)) = subbox;
      *fooinfo(*foonucleus(p)) = curbox;
      curbox = p;
    }
    *foolink(tail) = curbox;
    tail = curbox;
    return;
  }  /*:1076*/
  if (boxcontext < shipoutflag) {   /*1077:*/
    if (boxcontext < boxflag + 256)
      eqdefine(boxbase - boxflag + boxcontext, boxref, curbox);
    else   /*:1077*/
      geqdefine(boxbase - boxflag + boxcontext - 256, boxref, curbox);
    return;
  }
  if (curbox == 0)
    return;
  if (boxcontext <= shipoutflag)   /*1078:*/
  {  /*404:*/
    shipout(curbox);
    return;
  }
  /*:1078*/
  do {
    getxtoken();   /*:404*/
  } while (curcmd == spacer || curcmd == relax);
  if (curcmd == hskip && labs(mode) != vmode ||
      curcmd == vskip && labs(mode) == vmode ||
      curcmd == mskip && labs(mode) == mmode) {
    appendglue();
    *foosubtype(tail) = boxcontext - leaderflag + aleaders;
    *fooleaderptr(tail) = curbox;
    return;
  }
  printnl(258);
  print(S(1065));
  helpptr = 3;
  helpline[2] = S(1066);
  helpline[1] = S(1067);
  helpline[0] = S(1068);
  backerror();
  flushnodelist(curbox);
}


/*:1075*/
/*1079:*/
Static void beginbox(long boxcontext)
{
  pointer p, q;
  quarterword m;
  halfword k;
  eightbits n;
  quarterword FORLIM;

  switch (curchr) {

  case boxcode:
    scaneightbitint();
    curbox = *foobox(curval);
    *foobox(curval) = 0;
    break;

  case copycode:
    scaneightbitint();
    curbox = copynodelist(*foobox(curval));
    break;

  case lastboxcode:   /*1080:*/
    curbox = 0;
    if (labs(mode) == mmode) {
      youcant();
      helpptr = 1;
      helpline[0] = S(1069);
      error();
    } else if (mode == vmode && head == tail) {
      youcant();
      helpptr = 2;
      helpline[1] = S(1070);
      helpline[0] = S(1071);
      error();
    } else {
      if (!ischarnode(tail)) {
	if ((*footype(tail) == hlistnode) | (*footype(tail) == vlistnode))
	{   /*1081:*/
	  q = head;
	  do {
	    p = q;
	    if (!ischarnode(q)) {
	      if (*footype(q) == discnode) {
		FORLIM = *fooreplacecount(q);
		for (m = 1; m <= FORLIM; m++)
		  p = *foolink(p);
		if (p == tail)
		  goto _Ldone;
	      }
	    }
	    q = *foolink(p);
	  } while (q != tail);
	  curbox = tail;
	  *fooshiftamount(curbox) = 0;
	  tail = p;
	  *foolink(p) = 0;
_Ldone: ;
	}
	/*:1081*/
      }
    }
    break;
    /*:1080*/

  case vsplitcode:   /*1082:*/
    scaneightbitint();
    n = curval;
    if (!scankeyword(S(842))) {
      printnl(258);
      print(S(1072));
      helpptr = 2;
      helpline[1] = S(1073);
      helpline[0] = S(1074);
      error();
    }
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    curbox = vsplit(n, curval);
    break;
    /*:1082*/
    /*1083:*/

  default:
    k = curchr - vtopcode;
    *foosaved(0) = boxcontext;
    if (k == hmode) {
      if (boxcontext < boxflag && labs(mode) == vmode)
	scanspec(adjustedhboxgroup, true);
      else
	scanspec(hboxgroup, true);
    } else {
      if (k == vmode)
	scanspec(vboxgroup, true);
      else {
	scanspec(vtopgroup, true);
	k = vmode;
      }
      normalparagraph();
    }
    pushnest();
    mode = -k;
    if (k == vmode) {
      prevdepth = ignoredepth;
      if (everyvbox != 0)
	begintokenlist(everyvbox, everyvboxtext);
    } else {
      spacefactor = 1000;
      if (everyhbox != 0)
	begintokenlist(everyhbox, everyhboxtext);
    }
    goto _Lexit;   /*:1083*/
    break;
  }
  boxend(boxcontext);
_Lexit: ;
}


/*:1079*/
/*1084:*/
Static void scanbox(long boxcontext)
{   /*404:*/
  do {
    getxtoken();   /*:404*/
  } while (curcmd == spacer || curcmd == relax);
  if (curcmd == makebox) {
    beginbox(boxcontext);
    return;
  }
  if (boxcontext >= leaderflag && (curcmd == hrule || curcmd == vrule)) {
    curbox = scanrulespec();
    boxend(boxcontext);
    return;
  }
  printnl(258);
  print(S(1075));
  helpptr = 3;
  helpline[2] = S(1076);
  helpline[1] = S(1077);
  helpline[0] = S(1078);
  backerror();
}


/*:1084*/
/*1086:*/
Static void package(smallnumber c)
{
  scaled h, d;
  pointer p;

  d = boxmaxdepth;
  unsave();
  saveptr -= 3;
  if (mode == -hmode)
    curbox = hpack(*foolink(head), *foosaved(2), *foosaved(1));
  else {
    curbox = vpackage(*foolink(head), *foosaved(2), *foosaved(1), d);
    if (c == vtopcode) {   /*1087:*/
      h = 0;
      p = *foolistptr(curbox);
      if (p != 0) {
	if (*footype(p) <= rulenode)
	  h = *fooheight(p);
      }
      *foodepth(curbox) += *fooheight(curbox) - h;
      *fooheight(curbox) = h;
    }
    /*:1087*/
  }
  popnest();
  boxend(*foosaved(0));
}


/*:1086*/
/*1091:*/
Static smallnumber normmin(long h)
{
  if (h <= 0)
    return 1;
  else if (h >= 63)
    return 63;
  else
    return h;
}


Static void newgraf(boolean indented)
{
  prevgraf = 0;
  if (mode == vmode || head != tail) {
    tailappend(newparamglue(parskipcode));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  }
  pushnest();
  mode = hmode;
  spacefactor = 1000;
  setcurlang();
/* p2c: tex1.p: Warning: Symbol 'SETCURLANG' is not defined [221] */
  clang = curlang;
  prevgraf = (normmin(lefthyphenmin) * 64 + normmin(righthyphenmin)) * 65536L +
	     curlang;
  if (indented) {
    tail = newnullbox();
    *foolink(head) = tail;
    *foowidth(tail) = parindent;
  }
  if (everypar != 0)
    begintokenlist(everypar, everypartext);
  if (nestptr == 1)
    buildpage();
}


/*:1091*/
/*1093:*/
Static void indentinhmode(void)
{
  pointer p, q;

  if (curchr <= 0)
    return;
  p = newnullbox();
  *foowidth(p) = parindent;
  if (labs(mode) == hmode)
    spacefactor = 1000;
  else {
    q = newnoad();
    *foomathtype(*foonucleus(q)) = subbox;
    *fooinfo(*foonucleus(q)) = p;
    p = q;
  }
  tailappend(p);
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
}


/*:1093*/
/*1095:*/
Static void headforvmode(void)
{
  if (mode < 0) {
    if (curcmd != hrule) {
      offsave();
      return;
    }
    printnl(258);
    print(S(694));
    printesc(S(532));
    print(S(1081));
    helpptr = 2;
    helpline[1] = S(1082);
    helpline[0] = S(1083);
    error();
    return;
  }
  backinput();
  curtok = partoken;
  backinput();
  tokentype = inserted;
}


/*:1095*/
/*1096:*/
Static void endgraf(void)
{
  if (mode != hmode)
    return;
  if (head == tail)
    popnest();
  else
    linebreak(widowpenalty);
  normalparagraph();
  errorcount = 0;
}


/*:1096*/
/*1099:*/
Static void begininsertoradjust(void)
{
  if (curcmd == vadjust)
    curval = 255;
  else {
    scaneightbitint();
    if (curval == 255) {
      printnl(258);
      print(S(1084));
      printesc(S(343));
      printint(255);
      helpptr = 1;
      helpline[0] = S(1085);
      error();
      curval = 0;
    }
  }
  *foosaved(0) = curval;
  saveptr++;
  newsavelevel(insertgroup);
  scanleftbrace();
  normalparagraph();
  pushnest();
  mode = -vmode;
  prevdepth = ignoredepth;
}


/*:1099*/
/*1101:*/
Static void makemark(void)
{
  pointer p;

  p = scantoks(false, true);
  p = getnode(smallnodesize);
  *footype(p) = marknode;
  *foosubtype(p) = 0;
  *foomarkptr(p) = defref;
  *foolink(tail) = p;
  tail = p;
}


/*:1101*/
/*1103:*/
Static void appendpenalty(void)
{
  scanint();
  tailappend(newpenalty(curval));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  if (mode == vmode)
    buildpage();
}


/*:1103*/
/*1105:*/
Static void deletelast(void)
{
  pointer p, q;
  quarterword m, FORLIM;

  if (mode == vmode && tail == head) {   /*1106:*/
    if (curchr != gluenode || lastglue != maxhalfword) {
      youcant();
      helpptr = 2;
      helpline[1] = S(1070);
      helpline[0] = S(1086);
      if (curchr == kernnode)
	helpline[0] = S(1087);
      else if (curchr != gluenode)
	helpline[0] = S(1088);
      error();
    }
  }  /*:1106*/
  else {
    if (!ischarnode(tail)) {
      if (*footype(tail) == curchr) {
	q = head;
	do {
	  p = q;
	  if (!ischarnode(q)) {
	    if (*footype(q) == discnode) {
	      FORLIM = *fooreplacecount(q);
	      for (m = 1; m <= FORLIM; m++)
		p = *foolink(p);
	      if (p == tail)
		goto _Lexit;
	    }
	  }
	  q = *foolink(p);
	} while (q != tail);
	*foolink(p) = 0;
	flushnodelist(tail);
	tail = p;
      }
    }
  }
_Lexit: ;
}


/*:1105*/
/*1110:*/
Static void unpackage(void)
{
  pointer p;
  char c;

  c = curchr;
  scaneightbitint();
  p = *foobox(curval);
  if (p == 0)
    goto _Lexit;
  if ((labs(mode) == mmode) |
      ((labs(mode) == vmode) & (*footype(p) != vlistnode)) |
      ((labs(mode) == hmode) & (*footype(p) != hlistnode))) {
    printnl(258);
    print(S(1096));
    helpptr = 3;
    helpline[2] = S(1097);
    helpline[1] = S(1098);
    helpline[0] = S(1099);
    error();
    goto _Lexit;
  }
  if (c == copycode)
    *foolink(tail) = copynodelist(*foolistptr(p));
  else {
    *foolink(tail) = *foolistptr(p);
    *foobox(curval) = 0;
    freenode(p, boxnodesize);
  }
  while (*foolink(tail) != 0)
    tail = *foolink(tail);
_Lexit: ;
}


/*:1110*/
/*1113:*/
Static void appenditaliccorrection(void)
{
  pointer p;
  internalfontnumber f;

  if (tail != head) {
    if (ischarnode(tail))
      p = tail;
    else if (*footype(tail) == ligaturenode) {
      p = ligchar(tail);
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
    } else
      goto _Lexit;
    f = *foofont(p);
    tailappend(newkern(*foocharitalic(f, *foocharinfo(f, *foocharacter(p)))));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *foosubtype(tail) = explicit;
  }
_Lexit: ;
}


/*:1113*/
/*1117:*/
Static void appenddiscretionary(void)
{
  long c;

  tailappend(newdisc());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  if (curchr == 1) {
    c = hyphenchar[curfont - fontbase];
    if (c >= 0) {
      if (c < 256)
	*fooprebreak(tail) = newcharacter(curfont, c);
    }
    return;
  }
  saveptr++;
  *foosaved(-1) = 0;
  newsavelevel(discgroup);
  scanleftbrace();
  pushnest();
  mode = -hmode;
  spacefactor = 1000;
}


/*:1117*/
/*1119:*/
Static void builddiscretionary(void)
{
  pointer p, q;
  long n;

  unsave();   /*1121:*/
  q = head;
  p = *foolink(q);
  n = 0;
  while (p != 0) {
    if (!ischarnode(p)) {
      if (*footype(p) > rulenode) {
	if (*footype(p) != kernnode) {
	  if (*footype(p) != ligaturenode) {
	    printnl(258);
	    print(S(1106));
	    helpptr = 1;
	    helpline[0] = S(1107);
	    error();
	    begindiagnostic();
	    printnl(S(1108));
	    showbox(p);
	    enddiagnostic(true);
	    flushnodelist(p);
	    *foolink(q) = 0;
	    goto _Ldone;
	  }
	}
      }
    }
    q = p;
    p = *foolink(q);
    n++;
  }
_Ldone:   /*:1121*/
  p = *foolink(head);
  popnest();
  switch (*foosaved(-1)) {

  case 0:
    *fooprebreak(tail) = p;
    break;

  case 1:
    *foopostbreak(tail) = p;
    break;

  case 2:   /*1120:*/
    if (n > 0 && labs(mode) == mmode) {
      printnl(258);
      print(S(1100));
      printesc(S(361));
      helpptr = 2;
      helpline[1] = S(1101);
      helpline[0] = S(1102);
      flushnodelist(p);
      n = 0;
      error();
    } else
      *foolink(tail) = p;
    if (n <= maxquarterword)
      *fooreplacecount(tail) = n;
    else {
      printnl(258);
      print(S(1103));
      helpptr = 2;
      helpline[1] = S(1104);
      helpline[0] = S(1105);
      error();
    }
    if (n > 0)
      tail = q;
    saveptr--;
    goto _Lexit;
    break;
    /*:1120*/
  }
  (*foosaved(-1))++;
  newsavelevel(discgroup);
  scanleftbrace();
  pushnest();
  mode = -hmode;
  spacefactor = 1000;
_Lexit: ;
}


/*:1119*/
/*1123:*/
Static void makeaccent(void)
{
  double s, t;
  pointer p, q, r;
  internalfontnumber f;
  scaled a, h, x, w, delta;
  fourquarters i;

  scancharnum();
  f = curfont;
  p = newcharacter(f, curval);
  if (p == 0)
    return;
  x = *fooxheight(f);
  s = *fooslant(f) / 65536.0;
  a = *foocharwidth(f, *foocharinfo(f, *foocharacter(p)));
  doassignments();   /*1124:*/
  q = 0;
  f = curfont;
  if (curcmd == letter || curcmd == otherchar || curcmd == chargiven)
    q = newcharacter(f, curchr);
  else if (curcmd == charnum) {
    scancharnum();
    q = newcharacter(f, curval);
  } else
    backinput();
  if (q != 0) {   /*1125:*/
    t = *fooslant(f) / 65536.0;
    i = *foocharinfo(f, *foocharacter(q));
    w = *foocharwidth(f, i);
    h = *foocharheight(f, *fooheightdepth(i));
    if (h != x) {
      p = hpack(p, 0, additional);
      *fooshiftamount(p) = x - h;
    }
    delta = (long)floor((w - a) / 2.0 + h * t - x * s + 0.5);
    r = newkern(delta);
    *foosubtype(r) = acckern;
    *foolink(tail) = r;
    *foolink(r) = p;
    tail = newkern(-a - delta);
    *foosubtype(tail) = acckern;
    *foolink(p) = tail;
    p = q;
  }
  /*:1125*/
  *foolink(tail) = p;
  tail = p;
  spacefactor = 1000;

  /*:1124*/
}


/*:1123*/
/*1127:*/
Static void alignerror(void)
{
  if (labs(alignstate) > 2) {   /*1128:*/
    printnl(258);
    print(S(1113));
    printcmdchr(curcmd, curchr);
    if (curtok == tabtoken + '&') {
      helpptr = 6;
      helpline[5] = S(1114);
      helpline[4] = S(1115);
      helpline[3] = S(1116);
      helpline[2] = S(1117);
      helpline[1] = S(1118);
      helpline[0] = S(1119);
    } else {
      helpptr = 5;
      helpline[4] = S(1114);
      helpline[3] = S(1120);
      helpline[2] = S(1117);
      helpline[1] = S(1118);
      helpline[0] = S(1119);
    }
    error();
    return;
  }
  /*:1128*/
  backinput();
  if (alignstate < 0) {
    printnl(258);
    print(S(666));
    alignstate++;
    curtok = leftbracetoken + '{';
  } else {
    printnl(258);
    print(S(1109));
    alignstate--;
    curtok = rightbracetoken + '}';
  }
  helpptr = 3;
  helpline[2] = S(1110);
  helpline[1] = S(1111);
  helpline[0] = S(1112);
  inserror();
}


/*:1127*/
/*1129:*/
Static void noalignerror(void)
{
  printnl(258);
  print(S(1113));
  printesc(S(538));
  helpptr = 2;
  helpline[1] = S(1121);
  helpline[0] = S(1122);
  error();
}


Static void omiterror(void)
{
  printnl(258);
  print(S(1113));
  printesc(S(541));
  helpptr = 2;
  helpline[1] = S(1123);
  helpline[0] = S(1122);
  error();
}


/*:1129*/
/*1131:*/
Static void doendv(void)
{
  if (curgroup != aligngroup) {
    offsave();
    return;
  }
  endgraf();
  if (fincol())
    finrow();
}


/*:1131*/
/*1135:*/
Static void cserror(void)
{
  printnl(258);
  print(S(784));
  printesc(S(516));
  helpptr = 1;
  helpline[0] = S(1125);
  error();
}  /*:1135*/


/*1136:*/
Static void pushmath(groupcode c)
{
  pushnest();
  mode = -mmode;
  incompleatnoad = 0;
  newsavelevel(c);
}


/*:1136*/
/*1138:*/
Static void initmath(void)
{
  scaled w, l, s, v, d;
  pointer p, q;
  internalfontnumber f;
  long n;

  gettoken();
  if (curcmd == mathshift && mode > 0) {   /*1145:*/
    if (head == tail) {
      popnest();
      w = -maxdimen;
    } else {
      linebreak(displaywidowpenalty);   /*1146:*/
      v = *fooshiftamount(justbox) + *fooquad(curfont) * 2;
      w = -maxdimen;
      p = *foolistptr(justbox);
      while (p != 0) {  /*1147:*/
_Lreswitch:
	if (ischarnode(p)) {
	  f = *foofont(p);
	  d = *foocharwidth(f, *foocharinfo(f, *foocharacter(p)));
	  goto _Lfound;
	}
	switch (*footype(p)) {   /*:1147*/

	case hlistnode:
	case vlistnode:
	case rulenode:
	  d = *foowidth(p);
	  goto _Lfound;
	  break;

	case ligaturenode:   /*652:*/
	  mem[ligtrick - memmin] = mem[ligchar(p) - memmin];
/* p2c: tex1.p: Warning: Symbol 'LIGCHAR' is not defined [221] */
	  *foolink(ligtrick) = *foolink(p);
	  p = ligtrick;
	  goto _Lreswitch;
	  break;
	  /*:652*/

	case kernnode:
	case mathnode:
	  d = *foowidth(p);
	  break;

	case gluenode:   /*1148:*/
	  q = *fooglueptr(p);
	  d = *foowidth(q);
	  if (*foogluesign(justbox) == stretching) {
	    if ((*fooglueorder(justbox) == *foostretchorder(q)) &
		(*foostretch(q) != 0))
	      v = maxdimen;
	  } else if (*foogluesign(justbox) == shrinking) {
	    if ((*fooglueorder(justbox) == *fooshrinkorder(q)) &
		(*fooshrink(q) != 0))
	      v = maxdimen;
	  }
	  if (*foosubtype(p) >= aleaders)
	    goto _Lfound;
	  break;
	  /*:1148*/

	case whatsitnode:   /*1361:*/
	  d = 0;   /*:1361*/
	  break;

	default:
	  d = 0;
	  break;
	}
	if (v < maxdimen)
	  v += d;
	goto _Lnotfound;
_Lfound:
	if (v >= maxdimen) {
	  w = maxdimen;
	  goto _Ldone;
	}
	v += d;
	w = v;
_Lnotfound:
	p = *foolink(p);
      }
_Ldone: ;   /*:1146*/
    }  /*1149:*/
    if (parshapeptr == 0) {
      if (hangindent != 0 &&
	  (hangafter >= 0 && prevgraf + 2 > hangafter ||
	   prevgraf + 1 < -hangafter)) {
	l = hsize - labs(hangindent);
	if (hangindent > 0)
	  s = hangindent;
	else
	  s = 0;
      } else {
	l = hsize;
	s = 0;
      }
    } else {   /*:1149*/
      n = *fooinfo(parshapeptr);
      if (prevgraf + 2 >= n)
	p = parshapeptr + n * 2;
      else
	p = parshapeptr + (prevgraf + 2) * 2;
      s = mem[p - memmin - 1].sc;
      l = mem[p - memmin].sc;
    }
    pushmath(mathshiftgroup);
    mode = mmode;
    eqworddefine(intbase + curfamcode, -1);
    eqworddefine(dimenbase + predisplaysizecode, w);
    eqworddefine(dimenbase + displaywidthcode, l);
    eqworddefine(dimenbase + displayindentcode, s);
    if (everydisplay != 0)
      begintokenlist(everydisplay, everydisplaytext);
    if (nestptr == 1)
      buildpage();
    return;
  }
  /*:1145*/
  backinput();   /*1139:*/
  pushmath(mathshiftgroup);
  eqworddefine(intbase + curfamcode, -1);
  if (everymath != 0)   /*:1139*/
    begintokenlist(everymath, everymathtext);
}


/*:1138*/
/*1142:*/
Static void starteqno(void)
{
  *foosaved(0) = curchr;
  saveptr++;   /*1139:*/
  pushmath(mathshiftgroup);
  eqworddefine(intbase + curfamcode, -1);
  if (everymath != 0)   /*:1139*/
    begintokenlist(everymath, everymathtext);
}


/*:1142*/
/*1151:*/
Static void scanmath(halfword p)
{
  long c;

_Lrestart:   /*404:*/
  do {
    getxtoken();   /*:404*/
  } while (curcmd == spacer || curcmd == relax);
_Lreswitch:
  switch (curcmd) {

  case letter:
  case otherchar:
  case chargiven:
    c = *foomathcode(curchr);
    if (c == 32768L) {   /*1152:*/
      curcs = curchr + activebase;
      curcmd = *fooeqtype(curcs);
      curchr = *fooequiv(curcs);
      xtoken();
      backinput();   /*:1152*/
      goto _Lrestart;
    }
    break;

  case charnum:
    scancharnum();
    curchr = curval;
    curcmd = chargiven;
    goto _Lreswitch;
    break;

  case mathcharnum:
    scanfifteenbitint();
    c = curval;
    break;

  case mathgiven:
    c = curchr;
    break;

  case delimnum:   /*1153:*/
    scantwentysevenbitint();
    c = curval / 4096;
    break;

  default:
    backinput();
    scanleftbrace();
    *foosaved(0) = p;
    saveptr++;
    pushmath(mathgroup);
    goto _Lexit;   /*:1153*/
    break;
  }
  *foomathtype(p) = mathchar;
  *foocharacter(p) = c & 255;
  if (c >= varcode && faminrange) {
/* p2c: tex1.p: Warning: Symbol 'FAMINRANGE' is not defined [221] */
    *foofam(p) = curfam;
  } else
    *foofam(p) = (c / 256) & 15;
_Lexit: ;
}


/*:1151*/
/*1155:*/
Static void setmathchar(long c)
{
  pointer p;

  if (c >= 32768L) {   /*1152:*/
    curcs = curchr + activebase;
    curcmd = *fooeqtype(curcs);
    curchr = *fooequiv(curcs);
    xtoken();
    backinput();
    return;
  }  /*:1152*/
  p = newnoad();
  *foomathtype(*foonucleus(p)) = mathchar;
  *foocharacter(*foonucleus(p)) = c & 255;
  *foofam(*foonucleus(p)) = (c / 256) & 15;
  if (c >= varcode) {
    if (faminrange) {
/* p2c: tex1.p: Warning: Symbol 'FAMINRANGE' is not defined [221] */
      *foofam(*foonucleus(p)) = curfam;
    }
    *footype(p) = ordnoad;
  } else
    *footype(p) = ordnoad + c / 4096;
  *foolink(tail) = p;
  tail = p;
}


/*:1155*/
/*1159:*/
Static void mathlimitswitch(void)
{
  if (head != tail) {
    if (*footype(tail) == opnoad) {
      *foosubtype(tail) = curchr;
      goto _Lexit;
    }
  }
  printnl(258);
  print(S(1129));
  helpptr = 1;
  helpline[0] = S(1130);
  error();
_Lexit: ;
}


/*:1159*/
/*1160:*/
Static void scandelimiter(halfword p, boolean r)
{
  if (r)
    scantwentysevenbitint();
  else {   /*404:*/
    do {
      getxtoken();   /*:404*/
    } while (curcmd == spacer || curcmd == relax);
    switch (curcmd) {

    case letter:
    case otherchar:
      curval = *foodelcode(curchr);
      break;

    case delimnum:
      scantwentysevenbitint();
      break;

    default:
      curval = -1;
      break;
    }
  }
  if (curval < 0) {   /*1161:*/
    printnl(258);
    print(S(1131));
    helpptr = 6;
    helpline[5] = S(1132);
    helpline[4] = S(1133);
    helpline[3] = S(1134);
    helpline[2] = S(1135);
    helpline[1] = S(1136);
    helpline[0] = S(1137);
    backerror();
    curval = 0;
  }
  /*:1161*/
  *foosmallfam(p) = (curval / 1048576L) & 15;
  *foosmallchar(p) = (curval / 4096) & 255;
  *foolargefam(p) = (curval / 256) & 15;
  *foolargechar(p) = curval & 255;
}


/*:1160*/
/*1163:*/
Static void mathradical(void)
{
  tailappend(getnode(radicalnoadsize));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  *footype(tail) = radicalnoad;
  *foosubtype(tail) = normal;
  mem[*foonucleus(tail) - memmin].hh = emptyfield;
  mem[*foosubscr(tail) - memmin].hh = emptyfield;
  mem[*foosupscr(tail) - memmin].hh = emptyfield;
  scandelimiter(*fooleftdelimiter(tail), true);
  scanmath(*foonucleus(tail));
}


/*:1163*/
/*1165:*/
Static void mathac(void)
{
  if (curcmd == accent) {   /*1166:*/
    printnl(258);
    print(S(1138));
    printesc(S(534));
    print(S(1139));
    helpptr = 2;
    helpline[1] = S(1140);
    helpline[0] = S(1141);
    error();
  }
  /*:1166*/
  tailappend(getnode(accentnoadsize));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  *footype(tail) = accentnoad;
  *foosubtype(tail) = normal;
  mem[*foonucleus(tail) - memmin].hh = emptyfield;
  mem[*foosubscr(tail) - memmin].hh = emptyfield;
  mem[*foosupscr(tail) - memmin].hh = emptyfield;
  *foomathtype(*fooaccentchr(tail)) = mathchar;
  scanfifteenbitint();
  *foocharacter(*fooaccentchr(tail)) = curval & 255;
  if (curval >= varcode && faminrange) {
/* p2c: tex1.p: Warning: Symbol 'FAMINRANGE' is not defined [221] */
    *foofam(*fooaccentchr(tail)) = curfam;
  } else
    *foofam(*fooaccentchr(tail)) = (curval / 256) & 15;
  scanmath(*foonucleus(tail));
}


/*:1165*/
/*1172:*/
Static void appendchoices(void)
{
  tailappend(newchoice());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  saveptr++;
  *foosaved(-1) = 0;
  pushmath(mathchoicegroup);
  scanleftbrace();
}


/*:1172*/
/*1174:*/
/*1184:*/
Static halfword finmlist(halfword p)
{
  pointer q;

  if (incompleatnoad != 0) {   /*1185:*/
    *foomathtype(*foodenominator(incompleatnoad)) = submlist;
    *fooinfo(*foodenominator(incompleatnoad)) = *foolink(head);
    if (p == 0)
      q = incompleatnoad;
    else {
      q = *fooinfo(*foonumerator(incompleatnoad));
      if (*footype(q) != leftnoad)
	confusion(S(877));
      *fooinfo(*foonumerator(incompleatnoad)) = *foolink(q);
      *foolink(q) = incompleatnoad;
      *foolink(incompleatnoad) = p;
    }
  }  /*:1185*/
  else {
    *foolink(tail) = p;
    q = *foolink(head);
  }
  popnest();
  return q;
}


/*:1184*/
Static void buildchoices(void)
{
  pointer p;

  unsave();
  p = finmlist(0);
  switch (*foosaved(-1)) {

  case 0:
    *foodisplaymlist(tail) = p;
    break;

  case 1:
    *footextmlist(tail) = p;
    break;

  case 2:
    *fooscriptmlist(tail) = p;
    break;

  case 3:
    *fooscriptscriptmlist(tail) = p;
    saveptr--;
    goto _Lexit;
    break;
  }
  (*foosaved(-1))++;
  pushmath(mathchoicegroup);
  scanleftbrace();
_Lexit: ;
}


/*:1174*/
/*1176:*/
Static void subsup(void)
{
  smallnumber t;
  pointer p;

  t = empty;
  p = 0;
  if (tail != head) {
    if (scriptsallowed(tail)) {
/* p2c: tex1.p: Warning: Symbol 'SCRIPTSALLOWED' is not defined [221] */
      p = *foosupscr(tail) + curcmd - supmark;
      t = *foomathtype(p);
    }
  }
  if (p == 0 || t != empty) {   /*1177:*/
    tailappend(newnoad());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    p = *foosupscr(tail) + curcmd - supmark;
    if (t != empty) {
      if (curcmd == supmark) {
	printnl(258);
	print(S(1142));
	helpptr = 1;
	helpline[0] = S(1143);
      } else {
	printnl(258);
	print(S(1144));
	helpptr = 1;
	helpline[0] = S(1145);
      }
      error();
    }
  }
  /*:1177*/
  scanmath(p);
}


/*:1176*/
/*1181:*/
Static void mathfraction(void)
{
  smallnumber c;

  c = curchr;
  if (incompleatnoad != 0) {   /*1183:*/
    if (c >= delimitedcode) {
      scandelimiter(garbage, false);
      scandelimiter(garbage, false);
    }
    if (c % delimitedcode == abovecode) {
      scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    }
    printnl(258);
    print(S(1152));
    helpptr = 3;
    helpline[2] = S(1153);
    helpline[1] = S(1154);
    helpline[0] = S(1155);
    error();
    return;
  }  /*:1183*/
  incompleatnoad = getnode(fractionnoadsize);
  *footype(incompleatnoad) = fractionnoad;
  *foosubtype(incompleatnoad) = normal;
  *foomathtype(*foonumerator(incompleatnoad)) = submlist;
  *fooinfo(*foonumerator(incompleatnoad)) = *foolink(head);
  mem[*foodenominator(incompleatnoad) - memmin].hh = emptyfield;
  mem[*fooleftdelimiter(incompleatnoad) - memmin].qqqq = nulldelimiter;
  mem[*foorightdelimiter(incompleatnoad) - memmin].qqqq = nulldelimiter;
  *foolink(head) = 0;
  tail = head;   /*1182:*/
  if (c >= delimitedcode) {
    scandelimiter(*fooleftdelimiter(incompleatnoad), false);
    scandelimiter(*foorightdelimiter(incompleatnoad), false);
  }
  switch (c % delimitedcode) {   /*:1182*/

  case abovecode:
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    *foothickness(incompleatnoad) = curval;
    break;

  case overcode:
    *foothickness(incompleatnoad) = defaultcode;
    break;

  case atopcode:
    *foothickness(incompleatnoad) = 0;
    break;
  }
}  /*:1181*/


/*1191:*/
Static void mathleftright(void)
{
  smallnumber t;
  pointer p;

  t = curchr;
  if (t == rightnoad && curgroup != mathleftgroup) {   /*1192:*/
    if (curgroup != mathshiftgroup) {
      offsave();
      return;
    }
    scandelimiter(garbage, false);
    printnl(258);
    print(S(784));
    printesc(S(877));
    helpptr = 1;
    helpline[0] = S(1156);
    error();
    return;
  }
  /*:1192*/
  p = newnoad();
  *footype(p) = t;
  scandelimiter(*foodelimiter(p), false);
  if (t == leftnoad) {
    pushmath(mathleftgroup);
    *foolink(head) = p;
    tail = p;
    return;
  }
  p = finmlist(p);
  unsave();
  tailappend(newnoad());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  *footype(tail) = innernoad;
  *foomathtype(*foonucleus(tail)) = submlist;
  *fooinfo(*foonucleus(tail)) = p;
}


/*:1191*/
/*1194:*/
Static void aftermath(void)
{
  boolean l, danger;
  long m;
  pointer p, a;
  /*1198:*/
  pointer b, r, t;   /*:1198*/
  scaled w, z, e, q, d, s;
  smallnumber g1, g2;

  danger = false;   /*1195:*/
  if ((fontparams[*foofamfnt(textsize + 2) - fontbase] < totalmathsyparams) |
      (fontparams[*foofamfnt(scriptsize + 2) - fontbase] < totalmathsyparams) |
      (fontparams[*foofamfnt(scriptscriptsize + 2) - fontbase] <
       totalmathsyparams)) {
    printnl(258);
    print(S(1157));
    helpptr = 3;
    helpline[2] = S(1158);
    helpline[1] = S(1159);
    helpline[0] = S(1160);
    error();
    flushmath();
    danger = true;
  } else if ((fontparams[*foofamfnt(textsize + 3) - fontbase] <
	      totalmathexparams) |
	     (fontparams[*foofamfnt(scriptsize + 3) - fontbase] <
	      totalmathexparams) |
	     (fontparams[*foofamfnt(scriptscriptsize + 3) - fontbase] <
	      totalmathexparams)) {
    printnl(258);
    print(S(1161));
    helpptr = 3;
    helpline[2] = S(1162);
    helpline[1] = S(1163);
    helpline[0] = S(1164);
    error();
    flushmath();
    danger = true;
  }
  m = mode;
  l = false;
  p = finmlist(0);
  if (mode == -m) {   /*1197:*/
    getxtoken();
    if (curcmd != mathshift) {   /*:1197*/
      printnl(258);
      print(S(1165));
      helpptr = 2;
      helpline[1] = S(1166);
      helpline[0] = S(1167);
      backerror();
    }
    curmlist = p;
    curstyle = textstyle;
    mlistpenalties = false;
    mlisttohlist();
    a = hpack(*foolink(temphead), 0, additional);
    unsave();
    saveptr--;
    if (*foosaved(0) == 1)
      l = true;
    danger = false;   /*1195:*/
    if ((fontparams[*foofamfnt(textsize + 2) - fontbase] < totalmathsyparams) |
	(fontparams[*foofamfnt(scriptsize + 2) - fontbase] < totalmathsyparams) |
	(fontparams[*foofamfnt(scriptscriptsize + 2) - fontbase] <
	 totalmathsyparams)) {
      printnl(258);
      print(S(1157));
      helpptr = 3;
      helpline[2] = S(1158);
      helpline[1] = S(1159);
      helpline[0] = S(1160);
      error();
      flushmath();
      danger = true;
    } else if ((fontparams[*foofamfnt(textsize + 3) - fontbase] <
		totalmathexparams) |
	       (fontparams[*foofamfnt(scriptsize + 3) - fontbase] <
		totalmathexparams) |
	       (fontparams[*foofamfnt(scriptscriptsize + 3) - fontbase] <
		totalmathexparams)) {
      printnl(258);
      print(S(1161));
      helpptr = 3;
      helpline[2] = S(1162);
      helpline[1] = S(1163);
      helpline[0] = S(1164);
      error();
      flushmath();
      danger = true;
    }
    m = mode;
    p = finmlist(0);
  } else
    a = 0;
  if (m < 0) {   /*1196:*/
    tailappend(newmath(mathsurround, before));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    curmlist = p;
    curstyle = textstyle;
    mlistpenalties = (mode > 0);
    mlisttohlist();
    *foolink(tail) = *foolink(temphead);
    while (*foolink(tail) != 0)
      tail = *foolink(tail);
    tailappend(newmath(mathsurround, after));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    spacefactor = 1000;
    unsave();
    return;
  }
  /*:1196*/
  if (a == 0) {   /*1197:*/
    getxtoken();
    if (curcmd != mathshift) {
      printnl(258);
      print(S(1165));
      helpptr = 2;
      helpline[1] = S(1166);
      helpline[0] = S(1167);
      backerror();
    }
  }
  /*:1197*/
  /*1199:*/
  curmlist = p;
  curstyle = displaystyle;
  mlistpenalties = false;
  mlisttohlist();
  p = *foolink(temphead);
  adjusttail = adjusthead;
  b = hpack(p, 0, additional);
  p = *foolistptr(b);
  t = adjusttail;
  adjusttail = 0;
  w = *foowidth(b);
  z = displaywidth;
  s = displayindent;
  if (a == 0 || danger) {
    e = 0;
    q = 0;
  } else {
    e = *foowidth(a);
    q = e + *foomathquad(textsize);
  }
  if (w + q > z) {   /*1201:*/
    if (e != 0 && (w - totalshrink[0] + q <= z ||
		   totalshrink[fil - normal] != 0 ||
		   totalshrink[fill - normal] != 0 ||
		   totalshrink[filll - normal] != 0)) {
      freenode(b, boxnodesize);
      b = hpack(p, z - q, exactly);
    } else {
      e = 0;
      if (w > z) {
	freenode(b, boxnodesize);
	b = hpack(p, z, exactly);
      }
    }
    w = *foowidth(b);
  }
  /*:1201*/
  /*1202:*/
  d = half(z - w);
  if (e > 0 && d < e * 2) {   /*:1202*/
    d = half(z - w - e);
    if (p != 0) {
      if (!ischarnode(p)) {
	if (*footype(p) == gluenode)
	  d = 0;
      }
    }
  }
  /*1203:*/
  tailappend(newpenalty(predisplaypenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  if (d + s <= predisplaysize || l) {
    g1 = abovedisplayskipcode;
    g2 = belowdisplayskipcode;
  } else {
    g1 = abovedisplayshortskipcode;
    g2 = belowdisplayshortskipcode;
  }
  if (l && e == 0) {   /*1204:*/
    *fooshiftamount(a) = s;
    appendtovlist(a);
    tailappend(newpenalty(infpenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  } else {
    tailappend(newparamglue(g1));   /*:1203*/
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  }
  if (e != 0) {
    r = newkern(z - w - e - d);
    if (l) {
      *foolink(a) = r;
      *foolink(r) = b;
      b = a;
      d = 0;
    } else {
      *foolink(b) = r;
      *foolink(r) = a;
    }
    b = hpack(b, 0, additional);
  }
  *fooshiftamount(b) = s + d;   /*:1204*/
  appendtovlist(b);   /*1205:*/
  if (a != 0 && e == 0 && !l) {
    tailappend(newpenalty(infpenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *fooshiftamount(a) = s + z - *foowidth(a);
    appendtovlist(a);
    g2 = 0;
  }
  if (t != adjusthead) {
    *foolink(tail) = *foolink(adjusthead);
    tail = t;
  }
  tailappend(newpenalty(postdisplaypenalty));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  if (g2 > 0) {   /*:1199*/
    tailappend(newparamglue(g2));   /*:1205*/
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  }
  resumeafterdisplay();

  /*:1195*/
  /*:1195*/
}


/*:1194*/
/*1200:*/
Static void resumeafterdisplay(void)
{
  if (curgroup != mathshiftgroup)
    confusion(S(1168));
  unsave();
  prevgraf += 3;
  pushnest();
  mode = hmode;
  spacefactor = 1000;
  setcurlang();
/* p2c: tex1.p: Warning: Symbol 'SETCURLANG' is not defined [221] */
  clang = curlang;
  prevgraf = (normmin(lefthyphenmin) * 64 + normmin(righthyphenmin)) * 65536L +
	     curlang;
      /*443:*/
  getxtoken();
  if (curcmd != spacer)   /*:443*/
    backinput();
  if (nestptr == 1)
    buildpage();
}


/*:1200*/
/*1211:*/
/*1215:*/
Static void getrtoken(void)
{
_Lrestart:
  do {
    gettoken();
  } while (curtok == spacetoken);
  if (curcs != 0 && curcs <= frozencontrolsequence)
    return;
  printnl(258);
  print(S(1183));
  helpptr = 5;
  helpline[4] = S(1184);
  helpline[3] = S(1185);
  helpline[2] = S(1186);
  helpline[1] = S(1187);
  helpline[0] = S(1188);
  if (curcs == 0)
    backinput();
  curtok = cstokenflag + frozenprotection;
  inserror();
  goto _Lrestart;
}


/*:1215*/
/*1229:*/
Static void trapzeroglue(void)
{
  if (!((*foowidth(curval) == 0) & (*foostretch(curval) == 0) &
	(*fooshrink(curval) == 0)))
    return;
  addglueref(zeroglue);
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
  deleteglueref(curval);
  curval = zeroglue;
}


/*:1229*/
/*1236:*/
Static void doregistercommand(smallnumber a)
{
  pointer l, q, r, s;
  char p;

  q = curcmd;   /*1237:*/
  if (q != register_) {
    getxtoken();
    if (curcmd >= assignint && curcmd <= assignmuglue) {
      l = curchr;
      p = curcmd - assignint;
      goto _Lfound;
    }
    if (curcmd != register_) {
      printnl(258);
      print(S(694));
      printcmdchr(curcmd, curchr);
      print(S(695));
      printcmdchr(q, 0);
      helpptr = 1;
      helpline[0] = S(1209);
      error();
      goto _Lexit;
    }
  }
  p = curchr;
  scaneightbitint();
  switch (p) {

  case intval:
    l = curval + countbase;
    break;

  case dimenval:
    l = curval + scaledbase;
    break;

  case glueval:
    l = curval + skipbase;
    break;

  case muval:
    l = curval + muskipbase;
    break;
  }
_Lfound:   /*:1237*/
  if (q == register_)
    scanoptionalequals();
  else
    scankeyword(S(1205));
  aritherror = false;
  if (q < multiply) {   /*1238:*/
    if (p < glueval) {
      if (p == intval)
	scanint();
      else {
	scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
      }
      if (q == advance)
	curval += eqtb[l - activebase].int_;
    } else {   /*:1238*/
      scanglue(p);
      if (q == advance) {   /*1239:*/
	q = newspec(curval);
	r = *fooequiv(l);
	deleteglueref(curval);
	*foowidth(q) += *foowidth(r);
	if (*foostretch(q) == 0)
	  *foostretchorder(q) = normal;
	if (*foostretchorder(q) == *foostretchorder(r))
	  *foostretch(q) += *foostretch(r);
	else if ((*foostretchorder(q) < *foostretchorder(r)) &
		 (*foostretch(r) != 0)) {
	  *foostretch(q) = *foostretch(r);
	  *foostretchorder(q) = *foostretchorder(r);
	}
	if (*fooshrink(q) == 0)
	  *fooshrinkorder(q) = normal;
	if (*fooshrinkorder(q) == *fooshrinkorder(r))
	  *fooshrink(q) += *fooshrink(r);
	else if ((*fooshrinkorder(q) < *fooshrinkorder(r)) & (*fooshrink(r) != 0)) {
	  *fooshrink(q) = *fooshrink(r);
	  *fooshrinkorder(q) = *fooshrinkorder(r);
	}
	curval = q;
      }
      /*:1239*/
    }
  } else {   /*1240:*/
    scanint();
    if (p < glueval) {
      if (q == multiply) {
	if (p == intval)
	  curval = multandadd(eqtb[l - activebase].int_, curval, 0,
			      2147483647L);
	else
	  curval = multandadd(eqtb[l - activebase].int_, curval, 0,
			      1073741823L);
      } else
	curval = xovern(eqtb[l - activebase].int_, curval);
    } else {
      s = *fooequiv(l);
      r = newspec(s);
      if (q == multiply) {
	*foowidth(r) = multandadd(*foowidth(s), curval, 0, 1073741823L);
	*foostretch(r) = multandadd(*foostretch(s), curval, 0, 1073741823L);
	*fooshrink(r) = multandadd(*fooshrink(s), curval, 0, 1073741823L);
      } else {
	*foowidth(r) = xovern(*foowidth(s), curval);
	*foostretch(r) = xovern(*foostretch(s), curval);
	*fooshrink(r) = xovern(*fooshrink(s), curval);
      }
      curval = r;
    }
  }  /*:1240*/
  if (aritherror) {
    printnl(258);
    print(S(1206));
    helpptr = 2;
    helpline[1] = S(1207);
    helpline[0] = S(1208);
    error();
    goto _Lexit;
  }
  if (p < glueval) {
    worddefine(l, curval);
/* p2c: tex1.p: Warning: Symbol 'WORDDEFINE' is not defined [221] */
  } else {
    trapzeroglue();
    define(l, glueref, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
  }
_Lexit: ;
}


/*:1236*/
/*1243:*/
Static void alteraux(void)
{
  halfword c;

  if (curchr != labs(mode)) {
    reportillegalcase();
    return;
  }
  c = curchr;
  scanoptionalequals();
  if (c == vmode) {
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    prevdepth = curval;
    return;
  }
  scanint();
  if (curval > 0 && curval <= 32767) {
    spacefactor = curval;
    return;
  }
  printnl(258);
  print(S(1212));
  helpptr = 1;
  helpline[0] = S(1213);
  interror(curval);
}


/*:1243*/
/*1244:*/
Static void alterprevgraf(void)
{
  char p;

  nest[nestptr] = curlist;
  p = nestptr;
  while (abs(nest[p].modefield) != vmode)
    p--;
  scanoptionalequals();
  scanint();
  if (curval >= 0) {
    nest[p].pgfield = curval;
    curlist = nest[nestptr];
    return;
  }
  printnl(258);
  print(S(954));
  printesc(S(543));
  helpptr = 1;
  helpline[0] = S(1214);
  interror(curval);
}


/*:1244*/
/*1245:*/
Static void alterpagesofar(void)
{
  char c;

  c = curchr;
  scanoptionalequals();
  scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
  pagesofar[c] = curval;
}  /*:1245*/


/*1246:*/
Static void alterinteger(void)
{
  char c;

  c = curchr;
  scanoptionalequals();
  scanint();
  if (c == 0)
    deadcycles = curval;
  else
    insertpenalties = curval;
}  /*:1246*/


/*1247:*/
Static void alterboxdimen(void)
{
  smallnumber c;
  eightbits b;

  c = curchr;
  scaneightbitint();
  b = curval;
  scanoptionalequals();
  scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
  if (*foobox(b) != 0)
    mem[*foobox(b) + c - memmin].sc = curval;
}


/*:1247*/
/*1257:*/
Static void newfont(smallnumber a)
{
  pointer u;
  scaled s;
  internalfontnumber f;
  strnumber t;
  char oldsetting;
  strnumber flushablestring;
  internalfontnumber FORLIM;

  if (jobname == 0)
    openlogfile();
  getrtoken();
  u = curcs;
  if (u >= hashbase)
    t = *footext(u);
  else if (u >= singlebase) {
    if (u == nullcs)
      t = S(1218);
    else
      t = u - singlebase;
  } else {
    oldsetting = selector;
    selector = newstring;
    print(S(1218));
    print(u - activebase);
    selector = oldsetting;
    if (poolptr + 1 > poolsize)
      overflow(257, poolsize - initpoolptr);
    t = makestring();
  }
  define(u, setfont, nullfont);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
  scanoptionalequals();
  scanfilename();   /*1258:*/
  nameinprogress = true;
  if (scankeyword(S(1219))) {   /*1259:*/
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    s = curval;
    if (s <= 0 || s >= 134217728L) {
      printnl(258);
      print(S(1221));
      printscaled(s);
      print(S(1222));
      helpptr = 2;
      helpline[1] = S(1223);
      helpline[0] = S(1224);
      error();
      s = unity * 10;
    }
  }  /*:1259*/
  else if (scankeyword(S(1220))) {
    scanint();
    s = -curval;
    if (curval <= 0 || curval > 32768L) {
      printnl(258);
      print(S(562));
      helpptr = 1;
      helpline[0] = S(563);
      interror(curval);
      s = -1000;
    }
  } else
    s = -1000;
  nameinprogress = false;   /*:1258*/
  /*1260:*/
  flushablestring = strptr - 1;
  FORLIM = fontptr;
  for (f = fontbase + 1; f <= FORLIM; f++) {
    if (streqstr(fontname[f - fontbase], curname) &
	streqstr(fontarea[f - fontbase], curarea))
    {   /*:1260*/
      if (curname == flushablestring) {
	flushstring();
/* p2c: tex1.p: Warning: Symbol 'FLUSHSTRING' is not defined [221] */
	curname = fontname[f - fontbase];
      }
      if (s > 0) {
	if (s == fontsize[f - fontbase])
	  goto _Lcommonending;
      } else if (fontsize[f - fontbase] ==
		 xnoverd(fontdsize[f - fontbase], -s, 1000))
	goto _Lcommonending;
    }
  }
  f = readfontinfo(u, curname, curarea, s);
_Lcommonending:
  *fooequiv(u) = f;
  eqtb[fontidbase + f - activebase] = eqtb[u - activebase];
  *foofontidtext(f) = t;
}


/*:1257*/
/*1265:*/
Static void newinteraction(void)
{
  println();
  interaction = curchr;   /*75:*/
  if (interaction == batchmode)
    selector = noprint;
  else {
    selector = termonly;
    /*
:75*/
  }
  if (logopened)
    selector += 2;
}  /*:1265*/


Static void prefixedcommand(void)
{
  smallnumber a;
  internalfontnumber f;
  halfword j;
  fontindex k;
  pointer p, q;
  long n;
  boolean e;

  a = 0;
  while (curcmd == prefix) {
    if (!((a / curchr) & 1))
      a += curchr;
    /*404:*/
    do {
      getxtoken();
      /*:404*/
    } while (curcmd == spacer || curcmd == relax);
    if (curcmd > maxnonprefixedcommand)   /*1212:*/
      continue;
    /*:1212*/
    printnl(258);
    print(S(1178));
    printcmdchr(curcmd, curchr);
    printchar('\'');
    helpptr = 1;
    helpline[0] = S(1179);
    backerror();
    goto _Lexit;
  }  /*1213:*/
  if (curcmd != def && (a & 3) != 0) {   /*:1213*/
    printnl(258);
    print(S(694));
    printesc(S(1170));
    print(S(1180));
    printesc(S(1171));
    print(S(1181));
    printcmdchr(curcmd, curchr);
    printchar('\'');
    helpptr = 1;
    helpline[0] = S(1182);
    error();
  }
  /*1214:*/
  if (globaldefs != 0) {
    if (globaldefs < 0) {
      if (global) {
/* p2c: tex1.p: Warning: Symbol 'GLOBAL' is not defined [221] */
	a -= 4;
      }
    } else {   /*:1214*/
      if (~global) {
/* p2c: tex1.p: Warning: Symbol 'GLOBAL' is not defined [221] */
	a += 4;
      }
    }
  }
  switch (curcmd) {   /*1217:*/

  case setfont:   /*:1217*/
    define(curfontloc, data, curchr);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;

  /*1218:*/
  case def:   /*:1218*/
    if ((curchr & 1) && ~global && globaldefs >= 0) {
/* p2c: tex1.p: Warning: Symbol 'GLOBAL' is not defined [221] */
      a += 4;
    }
    e = (curchr >= 2);
    getrtoken();
    p = curcs;
    q = scantoks(true, e);
    define(p, call + (a & 3), defref);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;
    /*1221:*/

  case let:
    n = curchr;
    getrtoken();
    p = curcs;
    if (n == normal) {
      do {
	gettoken();
      } while (curcmd == spacer);
      if (curtok == othertoken + '=') {
	gettoken();
	if (curcmd == spacer)
	  gettoken();
      }
    } else {
      gettoken();
      q = curtok;
      gettoken();
      backinput();
      curtok = q;
      backinput();
    }
    if (curcmd >= call) {
      addtokenref(curchr);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
    }
    define(p, curcmd, curchr);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;

  /*:1221*/
  /*1224:*/
  case shorthanddef:
    n = curchr;
    getrtoken();
    p = curcs;
    define(p, relax, 256);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    scanoptionalequals();
    switch (n) {

    case chardefcode:
      scancharnum();
      define(p, chargiven, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
      break;

    case mathchardefcode:
      scanfifteenbitint();
      define(p, mathgiven, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
      break;

    default:
      scaneightbitint();
      switch (n) {

      case countdefcode:
	define(p, assignint, countbase + curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	break;

      case dimendefcode:
	define(p, assigndimen, scaledbase + curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	break;

      case skipdefcode:
	define(p, assignglue, skipbase + curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	break;

      case muskipdefcode:
	define(p, assignmuglue, muskipbase + curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	break;

      case toksdefcode:
	define(p, assigntoks, toksbase + curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	break;
      }
      break;
    }
    break;
    /*:1224*/

  /*1225:*/
  case readtocs:   /*:1225*/
    scanint();
    n = curval;
    if (!scankeyword(S(842))) {
      printnl(258);
      print(S(1072));
      helpptr = 2;
      helpline[1] = S(1199);
      helpline[0] = S(1200);
      error();
    }
    getrtoken();
    p = curcs;
    readtoks(n, p);
    define(p, call, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;
    /*1226:*/

  case toksregister:
  case assigntoks:   /*:1226*/
    q = curcs;
    if (curcmd == toksregister) {
      scaneightbitint();
      p = toksbase + curval;
    } else
      p = curchr;
    scanoptionalequals();   /*404:*/
    do {
      getxtoken();   /*:404*/
    } while (curcmd == spacer || curcmd == relax);
    if (curcmd != leftbrace) {   /*1227:*/
      if (curcmd == toksregister) {
	scaneightbitint();
	curcmd = assigntoks;
	curchr = toksbase + curval;
      }
      if (curcmd == assigntoks) {
	q = *fooequiv(curchr);
	if (q == 0) {
	  define(p, undefinedcs, 0);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	} else {
	  addtokenref(q);
/* p2c: tex1.p: Warning: Symbol 'ADDTOKENREF' is not defined [221] */
	  define(p, call, q);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
	}
	goto _Ldone;
      }
    }
    /*:1227*/
    backinput();
    curcs = q;
    q = scantoks(false, false);
    if (*foolink(defref) == 0) {
      define(p, undefinedcs, 0);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
      freeavail(defref);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
    } else {
      if (p == outputroutineloc) {
	*foolink(q) = getavail();
	q = *foolink(q);
	*fooinfo(q) = rightbracetoken + '}';
	q = getavail();
	*fooinfo(q) = leftbracetoken + '{';
	*foolink(q) = *foolink(defref);
	*foolink(defref) = q;
      }
      define(p, call, defref);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    }
    break;
    /*1228:*/

  case assignint:
    p = curchr;
    scanoptionalequals();
    scanint();
    worddefine(p, curval);
/* p2c: tex1.p: Warning: Symbol 'WORDDEFINE' is not defined [221] */
    break;

  case assigndimen:
    p = curchr;
    scanoptionalequals();
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    worddefine(p, curval);
/* p2c: tex1.p: Warning: Symbol 'WORDDEFINE' is not defined [221] */
    break;

  case assignglue:
  case assignmuglue:   /*:1228*/
    p = curchr;
    n = curcmd;
    scanoptionalequals();
    if (n == assignmuglue)
      scanglue(muval);
    else
      scanglue(glueval);
    trapzeroglue();
    define(p, glueref, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;
    /*1232:*/

  case defcode:   /*:1232*/
    /*1233:*/
    if (curchr == catcodebase)
      n = maxcharcode;
    else if (curchr == mathcodebase)
      n = 32768L;
    else if (curchr == sfcodebase)
      n = 32767;
    else if (curchr == delcodebase)
      n = 16777215L;
    else
      n = 255;   /*:1233*/
    p = curchr;
    scancharnum();
    p += curval;
    scanoptionalequals();
    scanint();
    if (curval < 0 && p < delcodebase || curval > n) {
      printnl(258);
      print(S(1201));
      printint(curval);
      if (p < delcodebase)
	print(S(1202));
      else
	print(S(1203));
      printint(n);
      helpptr = 1;
      helpline[0] = S(1204);
      error();
      curval = 0;
    }
    if (p < mathcodebase) {
      define(p, data, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    } else if (p < delcodebase) {
      define(p, data, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    } else {
      worddefine(p, curval);
/* p2c: tex1.p: Warning: Symbol 'WORDDEFINE' is not defined [221] */
    }
    break;
    /*1234:*/

  case deffamily:   /*:1234*/
    p = curchr;
    scanfourbitint();
    p += curval;
    scanoptionalequals();
    scanfontident();
    define(p, data, curval);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;
    /*1235:*/

  case register_:
  case advance:
  case multiply:
  case divide:   /*:1235*/
    doregistercommand(a);
    break;
    /*1241:*/

  case setbox:   /*:1241*/
    scaneightbitint();
    if (global) {
/* p2c: tex1.p: Warning: Symbol 'GLOBAL' is not defined [221] */
      n = curval + 256;
    } else
      n = curval;
    scanoptionalequals();
    if (setboxallowed)
      scanbox(boxflag + n);
    else {
      printnl(258);
      print(S(689));
      printesc(S(547));
      helpptr = 2;
      helpline[1] = S(1210);
      helpline[0] = S(1211);
      error();
    }
    break;
    /*1242:*/

  case setaux:
    alteraux();
    break;

  case setprevgraf:
    alterprevgraf();
    break;

  case setpagedimen:
    alterpagesofar();
    break;

  case setpageint:
    alterinteger();
    break;

  case setboxdimen:   /*:1242*/
    alterboxdimen();
    break;
    /*1248:*/

  case setshape:   /*:1248*/
    scanoptionalequals();
    scanint();
    n = curval;
    if (n <= 0)
      p = 0;
    else {
      p = getnode(n * 2 + 1);
      *fooinfo(p) = n;
      for (j = 1; j <= n; j++) {
	scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
	mem[p + j * 2 - memmin - 1].sc = curval;
	scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
	mem[p + j * 2 - memmin].sc = curval;
      }
    }
    define(parshapeloc, shaperef, p);
/* p2c: tex1.p: Warning: Symbol 'DEFINE' is not defined [221] */
    break;
    /*1252:*/

  case hyphdata:   /*:1252*/
    if (curchr == 1) {
      newpatterns();
      goto _Ldone;
/* p2c: tex1.p: Note: Deleting unreachable code [255] */
    } else {
      newhyphexceptions();
      goto _Ldone;
    }
    break;
    /*1253:*/

  case assignfontdimen:
    findfontdimen(true);
    k = curval;
    scanoptionalequals();
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    fontinfo[k].sc = curval;
    break;

  case assignfontint:
    n = curchr;
    scanfontident();
    f = curval;
    scanoptionalequals();
    scanint();
    if (n == 0)
      hyphenchar[f - fontbase] = curval;
    else
      skewchar[f - fontbase] = curval;
    break;
    /*:1253*/

  /*1256:*/
  case deffont:
    newfont(a);
    break;

  /*:1256*/
  /*1264:*/
  case setinteraction:
    newinteraction();
    break;

  /*:1264*/
  default:
    confusion(S(1177));
    break;
  }
_Ldone:
  /*1269:*/
  if (aftertoken != 0) {   /*:1269*/
    curtok = aftertoken;
    backinput();
    aftertoken = 0;
  }
_Lexit: ;
}


/*:1211*/
/*1270:*/
Static void doassignments(void)
{
  while (true) {   /*404:*/
    do {
      getxtoken();   /*:404*/
    } while (curcmd == spacer || curcmd == relax);
    if (curcmd <= maxnonprefixedcommand)
      goto _Lexit;
    setboxallowed = false;
    prefixedcommand();
    setboxallowed = true;
  }
_Lexit: ;
}


/*:1270*/
/*1275:*/
Static void openorclosein(void)
{
  char c;
  char n;

  c = curchr;
  scanfourbitint();
  n = curval;
  if (readopen[n] != closed) {
    aclose(&readfile[n]);
    readopen[n] = closed;
  }
  if (c == 0)
    return;
  scanoptionalequals();
  scanfilename();
  if (curext == S(266))
    curext = S(795);
  packcurname();
/* p2c: tex1.p: Warning: Symbol 'PACKCURNAME' is not defined [221] */
  if (aopenin(&readfile[n]))
    readopen[n] = justopen;
}


/*:1275*/
/*1279:*/
Static void issuemessage(void)
{
  char oldsetting;
  char c;
  strnumber s;

  c = curchr;
  *foolink(garbage) = scantoks(false, true);
  oldsetting = selector;
  selector = newstring;
  tokenshow(defref);
  selector = oldsetting;
  flushlist(defref);
  if (poolptr + 1 > poolsize)
    overflow(257, poolsize - initpoolptr);
  s = makestring();
  if (c == 0) {   /*1280:*/
    if (termoffset + flength(s) > maxprintline - 2) {
/* p2c: tex1.p: Warning: Symbol 'FLENGTH' is not defined [221] */
      println();
    } else if (termoffset > 0 || fileoffset > 0)
      printchar(' ');
    slowprint(s);
    fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  } else  /*1283:*/
  {   /*:1283*/
    printnl(258);
    print(S(266));
    slowprint(s);
    if (errhelp != 0)
      useerrhelp = true;
    else if (longhelpseen) {
      helpptr = 1;
      helpline[0] = S(1231);
    } else {
      if (interaction < errorstopmode)
	longhelpseen = true;
      helpptr = 4;
      helpline[3] = S(1232);
      helpline[2] = S(1233);
      helpline[1] = S(1234);
      helpline[0] = S(1235);
    }
    error();
    useerrhelp = false;
  }
  /*:1280*/
  flushstring();
/* p2c: tex1.p: Warning: Symbol 'FLUSHSTRING' is not defined [221] */
}


/*:1279*/
/*1288:*/
Static void shiftcase(void)
{
  pointer b, p;
  halfword t;
  eightbits c;

  b = curchr;
  p = scantoks(false, false);
  p = *foolink(defref);
  while (p != 0) {  /*1289:*/
    t = *fooinfo(p);
    if (t < cstokenflag + singlebase) {   /*:1289*/
      c = t & 255;
      if (*fooequiv(b + c) != 0)
	*fooinfo(p) = t - c + *fooequiv(b + c);
    }
    p = *foolink(p);
  }
  backlist(*foolink(defref));
/* p2c: tex1.p: Warning: Symbol 'BACKLIST' is not defined [221] */
  freeavail(defref);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
}


/*:1288*/
/*1293:*/
Static void showwhatever(void)
{
  pointer p;

  switch (curchr) {

  case showlists:
    begindiagnostic();
    showactivities();
    break;

  case showboxcode:   /*1296:*/
    scaneightbitint();
    begindiagnostic();
    printnl(S(1253));
    printint(curval);
    printchar('=');
    if (*foobox(curval) == 0)
      print(S(421));
    else
      showbox(*foobox(curval));
    break;
    /*:1296*/

  case showcode:   /*1294:*/
    gettoken();
    printnl(S(1247));
    if (curcs != 0) {
      sprintcs(curcs);
      printchar('=');
    }
    printmeaning();
    goto _Lcommonending;
    break;
    /*:1294*/
    /*1297:*/

  default:
    p = thetoks();
    printnl(S(1247));
    tokenshow(temphead);
    flushlist(*foolink(temphead));
    goto _Lcommonending;   /*:1297*/
    break;
  }/*1298:*/
  enddiagnostic(true);
  printnl(258);
  print(S(1254));
  if (selector == termandlog) {
    if (tracingonline <= 0) {   /*:1298*/
      selector = termonly;
      print(S(1255));
      selector = termandlog;
    }
  }
_Lcommonending:
  if (interaction < errorstopmode) {
    helpptr = 0;
    errorcount--;
  } else if (tracingonline > 0) {
    helpptr = 3;
    helpline[2] = S(1242);
    helpline[1] = S(1243);
    helpline[0] = S(1244);
  } else {
    helpptr = 5;
    helpline[4] = S(1242);
    helpline[3] = S(1243);
    helpline[2] = S(1244);
    helpline[1] = S(1245);
    helpline[0] = S(1246);
  }
  error();
}


/*:1293*/
/*1302:*/
Static void storefmtfile(void)
{  /*1304:*/
  long j, k, l, x;
  pointer p, q;
  fourquarters w;
  long FORLIM;
  halfword FORLIM1;

  if (saveptr != 0) {
    printnl(258);
    print(S(1257));
    helpptr = 1;
    helpline[0] = S(1258);
    if (interaction == errorstopmode)
      interaction = scrollmode;
    if (logopened)   /*_DEBUG*/
      error();
    if (interaction > batchmode)
      debughelp();
    /*_ENDDEBUG*/
    history = fatalerrorstop;
    jumpout();
  }
  /*:1304*/
  /*1328:*/
  selector = newstring;
  print(S(1271));
  print(jobname);
  printchar(' ');
/* p2c: tex1.p: Note: Using % for possibly-negative arguments [317] */
  printint(year % 100);
  printchar('.');
  printint(month);
  printchar('.');
  printint(day);
  printchar(')');
  if (interaction == batchmode)
    selector = logonly;
  else
    selector = termandlog;
  if (poolptr + 1 > poolsize)
    overflow(257, poolsize - initpoolptr);
  formatident = makestring();
  packjobname(formatextension);
  while (!wopenout(&fmtfile))
    promptfilename(S(1272), formatextension);
  printnl(S(1273));
  slowprint(wmakenamestring(&fmtfile));
  flushstring();
/* p2c: tex1.p: Warning: Symbol 'FLUSHSTRING' is not defined [221] */
  printnl(S(266));   /*:1328*/
  slowprint(formatident);   /*1307:*/
  pppfmtfile.int_ = 371982687L;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = membot;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = memtop;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = eqtbsize;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = hashprime;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = hyphsize;
  pput(pppfmtfile);   /*:1307*/
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  /*1309:*/
  pppfmtfile.int_ = poolptr;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = strptr;
  pput(pppfmtfile);
  FORLIM = strptr;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = 0; k <= FORLIM; k++) {
    pppfmtfile.int_ = strstart[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  k = 0;
  while (k + 4 < poolptr) {
    w.b0 = strpool[k];
    w.b1 = strpool[k + 1];
    w.b2 = strpool[k + 2];
    w.b3 = strpool[k + 3];
    pppfmtfile.qqqq = w;
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    k += 4;
  }
  k = poolptr - 4;
  w.b0 = strpool[k];
  w.b1 = strpool[k + 1];
  w.b2 = strpool[k + 2];
  w.b3 = strpool[k + 3];
  pppfmtfile.qqqq = w;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  println();
  printint(strptr);
  print(S(1259));   /*:1309*/
  printint(poolptr);   /*1311:*/
  sortavail();
  varused = 0;
  pppfmtfile.int_ = lomemmax;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = rover;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  p = membot;
  q = rover;
  x = 0;
  do {
    for (k = p; k <= q + 1; k++) {
      pppfmtfile = mem[k - memmin];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    }
    x += q - p + 2;
    varused += q - p;
    p = q + *foonodesize(q);
    q = *foorlink(q);
  } while (q != rover);
  varused += lomemmax - p;
  dynused = memend - himemmin + 1;
  FORLIM = lomemmax;
  for (k = p; k <= FORLIM; k++) {
    pppfmtfile = mem[k - memmin];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  x += lomemmax - p + 1;
  pppfmtfile.int_ = himemmin;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = avail;
  pput(pppfmtfile);
  FORLIM = memend;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = himemmin; k <= FORLIM; k++) {
    pppfmtfile = mem[k - memmin];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  x += memend - himemmin + 1;
  p = avail;
  while (p != 0) {
    dynused--;
    p = *foolink(p);
  }
  pppfmtfile.int_ = varused;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = dynused;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  println();
  printint(x);
  print(S(1260));
  printint(varused);
  printchar('&');   /*:1311*/
  printint(dynused);   /*1313:*/
  /*1315:*/
  k = activebase;
  do {   /*1316:*/
    j = k;
    while (j < intbase - 1) {
      if ((*fooequiv(j) == *fooequiv(j + 1)) & (*fooeqtype(j) ==
	    *fooeqtype(j + 1)) & (*fooeqlevel(j) == *fooeqlevel(j + 1)))
	goto _Lfound1;
      j++;
    }
    l = intbase;
    goto _Ldone1;
_Lfound1:
    j++;
    l = j;
    while (j < intbase - 1) {
      if ((*fooequiv(j) != *fooequiv(j + 1)) | (*fooeqtype(j) !=
	    *fooeqtype(j + 1)) | (*fooeqlevel(j) != *fooeqlevel(j + 1)))
	goto _Ldone1;
      j++;
    }
_Ldone1:
    pppfmtfile.int_ = l - k;
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    while (k < l) {
      pppfmtfile = eqtb[k - activebase];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      k++;
    }
    k = j + 1;
    pppfmtfile.int_ = k - l;
    pput(pppfmtfile);   /*:1315*/
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  } while (k != intbase);
  do {
    j = k;
    while (j < eqtbsize) {
      if (eqtb[j - activebase].int_ == eqtb[j - activebase + 1].int_)
	goto _Lfound2;
      j++;
    }
    l = eqtbsize + 1;
    goto _Ldone2;
_Lfound2:
    j++;
    l = j;
    while (j < eqtbsize) {
      if (eqtb[j - activebase].int_ != eqtb[j - activebase + 1].int_)
	goto _Ldone2;
      j++;
    }
_Ldone2:
    pppfmtfile.int_ = l - k;
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    while (k < l) {
      pppfmtfile = eqtb[k - activebase];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      k++;
    }
    k = j + 1;
    pppfmtfile.int_ = k - l;
    pput(pppfmtfile);   /*:1316*/
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  } while (k <= eqtbsize);
  pppfmtfile.int_ = parloc;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = writeloc;
  pput(pppfmtfile);   /*1318:*/
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = hashused;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  cscount = frozencontrolsequence - hashused - 1;
  FORLIM1 = hashused;
  for (p = hashbase; p <= FORLIM1; p++) {
    if (*footext(p) != 0) {
      pppfmtfile.int_ = p;
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      pppfmtfile.hh = hash[p - hashbase];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      cscount++;
    }
  }
  for (p = hashused + 1; p < undefinedcontrolsequence; p++) {
    pppfmtfile.hh = hash[p - hashbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  pppfmtfile.int_ = cscount;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  println();
  printint(cscount);   /*:1318*/
  /*:1313*/
  print(S(1261));   /*1320:*/
  pppfmtfile.int_ = fmemptr;
  pput(pppfmtfile);
  FORLIM = fmemptr;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = 0; k < FORLIM; k++) {
    pppfmtfile = fontinfo[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  pppfmtfile.int_ = fontptr;
  pput(pppfmtfile);
  FORLIM = fontptr;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = nullfont; k <= FORLIM; k++) {   /*1322:*/
    pppfmtfile.qqqq = fontcheck[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontsize[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontdsize[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontparams[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = hyphenchar[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = skewchar[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontname[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontarea[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontbc[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontec[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = charbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = widthbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = heightbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = depthbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = italicbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = ligkernbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = kernbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = extenbase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = parambase[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontglue[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = bcharlabel[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontbchar[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = fontfalsebchar[k - fontbase];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    printnl(S(1264));
    printesc(*foofontidtext(k));
    printchar('=');
    printfilename(fontname[k - fontbase], fontarea[k - fontbase],
		  S(266));
    if (fontsize[k - fontbase] != fontdsize[k - fontbase]) {
      print(S(267));
      printscaled(fontsize[k - fontbase]);
      print(S(268));
    }
  }
  /*:1322*/
  println();
  printint(fmemptr - 7);
  print(S(1262));
  printint(fontptr - fontbase);
  print(S(1263));
  if (fontptr != fontbase + 1)   /*:1320*/
    printchar('s');
  /*1324:*/
  pppfmtfile.int_ = hyphcount;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = 0; k <= hyphsize; k++) {
    if (hyphword[k] != 0) {
      pppfmtfile.int_ = k;
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      pppfmtfile.int_ = hyphword[k];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      pppfmtfile.int_ = hyphlist[k];
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    }
  }
  println();
  printint(hyphcount);
  print(S(1265));
  if (hyphcount != 1)
    printchar('s');
  if (trienotready)
    inittrie();
  pppfmtfile.int_ = triemax;
  pput(pppfmtfile);
  FORLIM = triemax;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = 0; k <= FORLIM; k++) {
    pppfmtfile.hh = trie[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  pppfmtfile.int_ = trieopptr;
  pput(pppfmtfile);
  FORLIM = trieopptr;
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  for (k = 0; k < FORLIM; k++) {
    pppfmtfile.int_ = hyfdistance[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = hyfnum[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    pppfmtfile.int_ = hyfnext[k];
    pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  }
  printnl(S(1266));
  printint(triemax);
  print(S(1267));
  printint(trieopptr);
  print(S(1268));
  if (trieopptr != 1)
    printchar('s');
  print(S(1269));
  printint(trieopsize);
  for (k = 255; k >= 0; k--) {   /*1326:*/
    if (trieused[k] > minquarterword) {   /*:1324*/
      printnl(S(802));
      printint(trieused[k] - minquarterword);
      print(S(1270));
      printint(k);
      pppfmtfile.int_ = k;
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
      pppfmtfile.int_ = trieused[k] - minquarterword;
      pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
    }
  }
  pppfmtfile.int_ = interaction;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = formatident;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  pppfmtfile.int_ = 69069L;
  pput(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PPUT' is not defined [221] */
  tracingstats = 0;   /*:1326*/
  /*1329:*/
  /*:1329*/
  wclose(&fmtfile);
}


/*:1302*/
/*1348:*/
/*1349:*/
Static void newwhatsit(smallnumber s, smallnumber w)
{
  pointer p;

  p = getnode(w);
  *footype(p) = whatsitnode;
  *foosubtype(p) = s;
  *foolink(tail) = p;
  tail = p;
}


/*:1349*/
/*1350:*/
Static void newwritewhatsit(smallnumber w)
{
  newwhatsit(curchr, w);
  if (w != writenodesize)
    scanfourbitint();
  else {
    scanint();
    if (curval < 0)
      curval = 17;
    else if (curval > 15)
      curval = 16;
  }
  *foowritestream(tail) = curval;
}


/*:1350*/
Static void doextension(void)
{
  long k;
  pointer p;

  switch (curchr) {

  case opennode:   /*1351:*/
    newwritewhatsit(opennodesize);
    scanoptionalequals();
    scanfilename();
    *fooopenname(tail) = curname;
    *fooopenarea(tail) = curarea;
    *fooopenext(tail) = curext;
    break;
    /*:1351*/

  case writenode:   /*1352:*/
    k = curcs;
    newwritewhatsit(writenodesize);
    curcs = k;
    p = scantoks(false, false);
    *foowritetokens(tail) = defref;
    break;
    /*:1352*/

  case closenode:   /*1353:*/
    newwritewhatsit(writenodesize);
    *foowritetokens(tail) = 0;
    break;
    /*:1353*/

  case specialnode:   /*1354:*/
    newwhatsit(specialnode, writenodesize);
    *foowritestream(tail) = 0;
    p = scantoks(false, true);
    *foowritetokens(tail) = defref;
    break;
    /*:1354*/

  case immediatecode:   /*1375:*/
    getxtoken();
    if (curcmd == extension && curchr <= closenode) {
      p = tail;
      doextension();
      outwhat(tail);
      flushnodelist(tail);
      tail = p;
      *foolink(p) = 0;
    } else
      backinput();
    break;
    /*:1375*/

  case setlanguagecode:   /*1377:*/
    if (labs(mode) != hmode)
      reportillegalcase();
    else {   /*:1377*/
      newwhatsit(languagenode, smallnodesize);
      scanint();
      if (curval <= 0)
	clang = 0;
      else if (curval > 255)
	clang = 0;
      else
	clang = curval;
      *foowhatlang(tail) = clang;
      *foowhatlhm(tail) = normmin(lefthyphenmin);
      *foowhatrhm(tail) = normmin(righthyphenmin);
    }
    break;

  default:
    confusion(S(1290));
    break;
  }
}


/*:1348*/
/*1376:*/
Static void fixlanguage(void)
{
  ASCIIcode l;

  if (language <= 0)
    l = 0;
  else if (language > 255)
    l = 0;
  else
    l = language;
  if (l == clang)
    return;
  newwhatsit(languagenode, smallnodesize);
  *foowhatlang(tail) = l;
  clang = l;
  *foowhatlhm(tail) = normmin(lefthyphenmin);
  *foowhatrhm(tail) = normmin(righthyphenmin);
}


/*:1376*/
/*1068:*/
Static void handlerightbrace(void)
{
  pointer p, q;
  scaled d;
  long f;

  switch (curgroup) {

  case simplegroup:
    unsave();
    break;

  case bottomlevel:
    printnl(258);
    print(S(1043));
    helpptr = 2;
    helpline[1] = S(1044);
    helpline[0] = S(1045);
    error();
    break;

  case semisimplegroup:
  case mathshiftgroup:
  case mathleftgroup:
    extrarightbrace();
    break;

  /*1085:*/
  case hboxgroup:
    package(0);
    break;

  case adjustedhboxgroup:
    adjusttail = adjusthead;
    package(0);
    break;

  case vboxgroup:
    endgraf();
    package(0);
    break;

  case vtopgroup:   /*:1085*/
    endgraf();
    package(vtopcode);
    break;
    /*1100:*/

  case insertgroup:
    endgraf();
    q = splittopskip;
    addglueref(q);
/* p2c: tex1.p: Warning: Symbol 'ADDGLUEREF' is not defined [221] */
    d = splitmaxdepth;
    f = floatingpenalty;
    unsave();
    saveptr--;
    p = *foovpack(*foolink(head), 0, additional);
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
    popnest();
    if (*foosaved(0) < 255) {
      tailappend(getnode(insnodesize));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
      *footype(tail) = insnode;
      *foosubtype(tail) = *foosaved(0);
      *fooheight(tail) = *fooheight(p) + *foodepth(p);
      *fooinsptr(tail) = *foolistptr(p);
      *foosplittopptr(tail) = q;
      *foodepth(tail) = d;
      *foofloatcost(tail) = f;
    } else {
      tailappend(getnode(smallnodesize));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
      *footype(tail) = adjustnode;
      *foosubtype(tail) = 0;
      *fooadjustptr(tail) = *foolistptr(p);
      deleteglueref(q);
    }
    freenode(p, boxnodesize);
    if (nestptr == 0)
      buildpage();
    break;

  case outputgroup:   /*1026:*/
    if (loc != 0 || tokentype != outputtext && tokentype != backedup)
    {   /*:1027*/
      printnl(258);
      print(S(1009));
      helpptr = 2;
      helpline[1] = S(1010);
      helpline[0] = S(1011);
      error();
      do {
	gettoken();
      } while (loc != 0);
    }
    endtokenlist();
    endgraf();
    unsave();
    outputactive = false;
    insertpenalties = 0;   /*1028:*/
    if (*foobox(255) != 0) {   /*:1028*/
      printnl(258);
      print(S(1012));
      printesc(S(420));
      printint(255);
      helpptr = 3;
      helpline[2] = S(1013);
      helpline[1] = S(1014);
      helpline[0] = S(1015);
      boxerror(255);
    }
    if (tail != head) {
      *foolink(pagetail) = *foolink(head);
      pagetail = tail;
    }
    if (*foolink(pagehead) != 0) {
      if (*foolink(contribhead) == 0)
	contribtail = pagetail;
      *foolink(pagetail) = *foolink(contribhead);
      *foolink(contribhead) = *foolink(pagehead);
      *foolink(pagehead) = 0;
      pagetail = pagehead;
    }
    popnest();
    buildpage();
    break;
    /*:1026*/
    /*:1100*/
    /*1118:*/

  case discgroup:   /*:1118*/
    builddiscretionary();
    break;
    /*1132:*/

  case aligngroup:   /*:1132*/
    backinput();
    curtok = cstokenflag + frozencr;
    printnl(258);
    print(S(634));
    printesc(S(898));
    print(S(635));
    helpptr = 1;
    helpline[0] = S(1124);
    inserror();
    break;
    /*1133:*/

  case noaligngroup:   /*:1133*/
    endgraf();
    unsave();
    alignpeek();
    break;
    /*1168:*/

  case vcentergroup:   /*:1168*/
    endgraf();
    unsave();
    saveptr -= 2;
    p = *foovpack(*foolink(head), *foosaved(1), *foosaved(0));
/* p2c: tex1.p: Warning: Too many arguments for foovpack [299] */
    popnest();
    tailappend(newnoad());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *footype(tail) = vcenternoad;
    *foomathtype(*foonucleus(tail)) = subbox;
    *fooinfo(*foonucleus(tail)) = p;
    break;
    /*1173:*/

  case mathchoicegroup:   /*:1173*/
    buildchoices();
    break;
    /*1186:*/

  case mathgroup:
    unsave();
    saveptr--;
    *foomathtype(*foosaved(0)) = submlist;
    p = finmlist(0);
    *fooinfo(*foosaved(0)) = p;
    if (p != 0) {
      if (*foolink(p) == 0) {
	if (*footype(p) == ordnoad) {
	  if (*foomathtype(*foosubscr(p)) == empty) {
	    if (*foomathtype(*foosupscr(p)) == empty) {
	      mem[*foosaved(0) - memmin].hh = mem[*foonucleus(p) - memmin].hh;
	      freenode(p, noadsize);
	    }
	  }
	} else if (*footype(p) == accentnoad) {
	  if (*foosaved(0) == *foonucleus(tail)) {
	    if (*footype(tail) == ordnoad) {   /*1187:*/
	      q = head;
	      while (*foolink(q) != tail)
		q = *foolink(q);
	      *foolink(q) = p;
	      freenode(tail, noadsize);
	      tail = p;
	    }
	    /*:1187*/
	  }
	}
      }
    }
    break;
    /*:1186*/

  default:
    confusion(S(1046));
    break;
  }

  /*
1027:*/
}  /*:1068*/


Static void maincontrol(void)
{
  long t;

  if (everyjob != 0)
    begintokenlist(everyjob, everyjobtext);
_Lbigswitch_:
  getxtoken();
_Lreswitch:   /*1031:*/
  if (interrupt != 0) {
    if (OKtointerrupt) {
      backinput();
      checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
      goto _Lbigswitch_;
    }  /*_DEBUG*/
  }
  if (panicking)   /*_ENDDEBUG*/
    checkmem(false);
  if (tracingcommands > 0)   /*:1031*/
    showcurcmdchr();
  switch (labs(mode) + curcmd) {

  case hmode + letter:
  case hmode + otherchar:
  case hmode + chargiven:
    goto _Lmainloop;
    break;

  case hmode + charnum:
    scancharnum();
    curchr = curval;
    goto _Lmainloop;
    break;

  case hmode + noboundary:
    getxtoken();
    if (curcmd == letter || curcmd == otherchar || curcmd == chargiven ||
	curcmd == charnum)
      cancelboundary = true;
    goto _Lreswitch;
    break;

  case hmode + spacer:
    if (spacefactor == 1000)
      goto _Lappendnormalspace_;
    appspace();
    break;

  case hmode + exspace:
  case mmode + exspace:   /*1045:*/
    goto _Lappendnormalspace_;
    break;

  case vmode:
  case hmode:
  case mmode:
  case vmode + spacer:
  case mmode + spacer:
  case mmode + noboundary:
    /* blank case */
    break;

  case vmode + ignorespaces:
  case hmode + ignorespaces:
  case mmode + ignorespaces:  /*406:*/
    do {
      getxtoken();   /*:406*/
    } while (curcmd == spacer);
    goto _Lreswitch;
    break;

  case vmode + stop:   /*1048:*/
    if (itsallover())
      goto _Lexit;
    break;

  case vmode + vmove:
  case hmode + hmove:
  case mmode + hmove:
  case vmode + lastitem:
  case hmode + lastitem:
  case mmode + lastitem:
  case vmode + vadjust:
  case vmode + italcorr:
  case vmode + eqno:
  case hmode + eqno:
  case vmode + macparam:
  case hmode + macparam:
  case mmode + macparam:   /*:1048*/
    reportillegalcase();
    break;
    /*1098:*/
    /*:1098*/
    /*1111:*/
    /*:1111*/
    /*1144:*/
    /*:1144*/
    /*1046:*/

  case vmode + supmark:
  case hmode + supmark:
  case vmode + submark:
  case hmode + submark:
  case vmode + mathcharnum:
  case hmode + mathcharnum:
  case vmode + mathgiven:
  case hmode + mathgiven:
  case vmode + mathcomp:
  case hmode + mathcomp:
  case vmode + delimnum:
  case hmode + delimnum:
  case vmode + leftright:
  case hmode + leftright:
  case vmode + above:
  case hmode + above:
  case vmode + radical:
  case hmode + radical:
  case vmode + mathstyle:
  case hmode + mathstyle:
  case vmode + mathchoice:
  case hmode + mathchoice:
  case vmode + vcenter:
  case hmode + vcenter:
  case vmode + nonscript:
  case hmode + nonscript:
  case vmode + mkern:
  case hmode + mkern:
  case vmode + limitswitch:
  case hmode + limitswitch:
  case vmode + mskip:
  case hmode + mskip:
  case vmode + mathaccent:
  case hmode + mathaccent:
  case mmode + endv:
  case mmode + parend:
  case mmode + stop:
  case mmode + vskip:
  case mmode + unvbox:
  case mmode + valign:
  case mmode + hrule:   /*:1046*/
    insertdollarsign();
    break;

  /*1056:*/
  case vmode + hrule:
  case hmode + vrule:
  case mmode + vrule:   /*:1056*/
    tailappend(scanrulespec());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    if (labs(mode) == vmode)
      prevdepth = ignoredepth;
    else if (labs(mode) == hmode)
      spacefactor = 1000;
    break;
    /*1057:*/

  case vmode + vskip:
  case hmode + hskip:
  case mmode + hskip:
  case mmode + mskip:
    appendglue();
    break;

  case vmode + kern:
  case hmode + kern:
  case mmode + kern:
  case mmode + mkern:   /*:1057*/
    appendkern();
    break;
    /*1063:*/

  case vmode + leftbrace:
  case hmode + leftbrace:
    newsavelevel(simplegroup);
    break;

  case vmode + begingroup:
  case hmode + begingroup:
  case mmode + begingroup:
    newsavelevel(semisimplegroup);
    break;

  case vmode + endgroup:
  case hmode + endgroup:
  case mmode + endgroup:   /*:1063*/
    if (curgroup == semisimplegroup)
      unsave();
    else
      offsave();
    break;
    /*1067:*/

  case vmode + rightbrace:
  case hmode + rightbrace:
  case mmode + rightbrace:
    handlerightbrace();
    break;

  /*:1067*/
  /*1073:*/
  case vmode + hmove:
  case hmode + vmove:
  case mmode + vmove:
    t = curchr;
    scannormaldimen();
/* p2c: tex1.p: Warning: Symbol 'SCANNORMALDIMEN' is not defined [221] */
    if (t == 0)
      scanbox(curval);
    else
      scanbox(-curval);
    break;

  case vmode + leadership:
  case hmode + leadership:
  case mmode + leadership:
    scanbox(leaderflag - aleaders + curchr);
    break;

  case vmode + makebox:
  case hmode + makebox:
  case mmode + makebox:
    beginbox(0);
    break;

  /*:1073*/
  /*1090:*/
  case vmode + startpar:
    newgraf(curchr > 0);
    break;

  case vmode + letter:
  case vmode + otherchar:
  case vmode + charnum:
  case vmode + chargiven:
  case vmode + mathshift:
  case vmode + unhbox:
  case vmode + vrule:
  case vmode + accent:
  case vmode + discretionary:
  case vmode + hskip:
  case vmode + valign:
  case vmode + exspace:
  case vmode + noboundary:   /*:1090*/
    backinput();
    newgraf(true);
    break;
    /*1092:*/

  case hmode + startpar:
  case mmode + startpar:   /*:1092*/
    indentinhmode();
    break;
    /*1094:*/

  case vmode + parend:
    normalparagraph();
    if (mode > 0)
      buildpage();
    break;

  case hmode + parend:
    if (alignstate < 0)
      offsave();
    endgraf();
    if (mode == vmode)
      buildpage();
    break;

  case hmode + stop:
  case hmode + vskip:
  case hmode + hrule:
  case hmode + unvbox:
  case hmode + halign:   /*:1094*/
    headforvmode();
    break;
    /*1097:*/

  case vmode + insert_:
  case hmode + insert_:
  case mmode + insert_:
  case hmode + vadjust:
  case mmode + vadjust:
    begininsertoradjust();
    break;

  case vmode + mark_:
  case hmode + mark_:
  case mmode + mark_:   /*:1097*/
    makemark();
    break;

  /*1102:*/
  case vmode + breakpenalty:
  case hmode + breakpenalty:
  case mmode + breakpenalty:
    appendpenalty();
    break;

  /*:1102*/
  /*1104:*/
  case vmode + removeitem:
  case hmode + removeitem:
  case mmode + removeitem:   /*:1104*/
    deletelast();
    break;

  /*1109:*/
  case vmode + unvbox:
  case hmode + unhbox:
  case mmode + unhbox:
    unpackage();
    break;

  /*:1109*/
  /*1112:*/
  case hmode + italcorr:
    appenditaliccorrection();
    break;

  case mmode + italcorr:   /*:1112*/
    tailappend(newkern(0));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    break;
    /*1116:*/

  case hmode + discretionary:
  case mmode + discretionary:   /*:1116*/
    appenddiscretionary();
    break;

  /*1122:*/
  case hmode + accent:
    makeaccent();
    break;

  /*:1122*/
  /*1126:*/
  case vmode + carret:
  case hmode + carret:
  case mmode + carret:
  case vmode + tabmark:
  case hmode + tabmark:
  case mmode + tabmark:
    alignerror();
    break;

  case vmode + noalign:
  case hmode + noalign:
  case mmode + noalign:
    noalignerror();
    break;

  case vmode + omit:
  case hmode + omit:
  case mmode + omit:   /*:1126*/
    omiterror();
    break;
    /*1130:*/

  case vmode + halign:
  case hmode + valign:
    initalign();
    break;

  case mmode + halign:
    if (privileged()) {
      if (curgroup == mathshiftgroup)
	initalign();
      else
	offsave();
    }
    break;

  case vmode + endv:
  case hmode + endv:   /*:1130*/
    doendv();
    break;
    /*1134:*/

  case vmode + endcsname:
  case hmode + endcsname:
  case mmode + endcsname:   /*:1134*/
    cserror();
    break;
    /*1137:*/

  case hmode + mathshift:   /*:1137*/
    initmath();
    break;
    /*1140:*/

  case mmode + eqno:   /*:1140*/
    if (privileged()) {
      if (curgroup == mathshiftgroup)
	starteqno();
      else
	offsave();
    }
    break;
    /*1150:*/

  case mmode + leftbrace:   /*:1150*/
    tailappend(newnoad());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    backinput();
    scanmath(*foonucleus(tail));
    break;
    /*1154:*/

  case mmode + letter:
  case mmode + otherchar:
  case mmode + chargiven:
    setmathchar(*foomathcode(curchr));
    break;

  case mmode + charnum:
    scancharnum();
    curchr = curval;
    setmathchar(*foomathcode(curchr));
    break;

  case mmode + mathcharnum:
    scanfifteenbitint();
    setmathchar(curval);
    break;

  case mmode + mathgiven:
    setmathchar(curchr);
    break;

  case mmode + delimnum:   /*:1154*/
    scantwentysevenbitint();
    setmathchar(curval / 4096);
    break;
    /*1158:*/

  case mmode + mathcomp:
    tailappend(newnoad());
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *footype(tail) = curchr;
    scanmath(*foonucleus(tail));
    break;

  case mmode + limitswitch:   /*:1158*/
    mathlimitswitch();
    break;
    /*1162:*/

  case mmode + radical:   /*:1162*/
    mathradical();
    break;
    /*1164:*/

  case mmode + accent:
  case mmode + mathaccent:   /*:1164*/
    mathac();
    break;
    /*1167:*/

  case mmode + vcenter:
    scanspec(vcentergroup, false);
    normalparagraph();
    pushnest();
    mode = -vmode;
    prevdepth = ignoredepth;
    if (everyvbox != 0)
      begintokenlist(everyvbox, everyvboxtext);
    break;
    /*:1167*/

  /*1171:*/
  case mmode + mathstyle:
    tailappend(newstyle(curchr));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    break;

  case mmode + nonscript:
    tailappend(newglue(zeroglue));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
    *foosubtype(tail) = condmathglue;
    break;

  case mmode + mathchoice:
    appendchoices();
    break;

  /*:1171*/
  /*1175:*/
  case mmode + submark:
  case mmode + supmark:
    subsup();
    break;

  /*:1175*/
  /*1180:*/
  case mmode + above:   /*:1180*/
    mathfraction();
    break;
    /*1190:*/

  case mmode + leftright:
    mathleftright();
    break;

  /*:1190*/
  /*1193:*/
  case mmode + mathshift:
    if (curgroup == mathshiftgroup)
      aftermath();
    else
      offsave();
    break;

  /*:1193*/
  /*1210:*/
  case vmode + toksregister:
  case hmode + toksregister:
  case mmode + toksregister:
  case vmode + assigntoks:
  case hmode + assigntoks:
  case mmode + assigntoks:
  case vmode + assignint:
  case hmode + assignint:
  case mmode + assignint:
  case vmode + assigndimen:
  case hmode + assigndimen:
  case mmode + assigndimen:
  case vmode + assignglue:
  case hmode + assignglue:
  case mmode + assignglue:
  case vmode + assignmuglue:
  case hmode + assignmuglue:
  case mmode + assignmuglue:
  case vmode + assignfontdimen:
  case hmode + assignfontdimen:
  case mmode + assignfontdimen:
  case vmode + assignfontint:
  case hmode + assignfontint:
  case mmode + assignfontint:
  case vmode + setaux:
  case hmode + setaux:
  case mmode + setaux:
  case vmode + setprevgraf:
  case hmode + setprevgraf:
  case mmode + setprevgraf:
  case vmode + setpagedimen:
  case hmode + setpagedimen:
  case mmode + setpagedimen:
  case vmode + setpageint:
  case hmode + setpageint:
  case mmode + setpageint:
  case vmode + setboxdimen:
  case hmode + setboxdimen:
  case mmode + setboxdimen:
  case vmode + setshape:
  case hmode + setshape:
  case mmode + setshape:
  case vmode + defcode:
  case hmode + defcode:
  case mmode + defcode:
  case vmode + deffamily:
  case hmode + deffamily:
  case mmode + deffamily:
  case vmode + setfont:
  case hmode + setfont:
  case mmode + setfont:
  case vmode + deffont:
  case hmode + deffont:
  case mmode + deffont:
  case vmode + register_:
  case hmode + register_:
  case mmode + register_:
  case vmode + advance:
  case hmode + advance:
  case mmode + advance:
  case vmode + multiply:
  case hmode + multiply:
  case mmode + multiply:
  case vmode + divide:
  case hmode + divide:
  case mmode + divide:
  case vmode + prefix:
  case hmode + prefix:
  case mmode + prefix:
  case vmode + let:
  case hmode + let:
  case mmode + let:
  case vmode + shorthanddef:
  case hmode + shorthanddef:
  case mmode + shorthanddef:
  case vmode + readtocs:
  case hmode + readtocs:
  case mmode + readtocs:
  case vmode + def:
  case hmode + def:
  case mmode + def:
  case vmode + setbox:
  case hmode + setbox:
  case mmode + setbox:
  case vmode + hyphdata:
  case hmode + hyphdata:
  case mmode + hyphdata:
  case vmode + setinteraction:
  case hmode + setinteraction:
  case mmode + setinteraction:   /*:1210*/
    prefixedcommand();
    break;
    /*1268:*/

  case vmode + afterassignment:
  case hmode + afterassignment:
  case mmode + afterassignment:   /*:1268*/
    gettoken();
    aftertoken = curtok;
    break;
    /*1271:*/

  case vmode + aftergroup:
  case hmode + aftergroup:
  case mmode + aftergroup:   /*:1271*/
    gettoken();
    saveforafter(curtok);
    break;
    /*1274:*/

  case vmode + instream:
  case hmode + instream:
  case mmode + instream:   /*:1274*/
    openorclosein();
    break;

  /*1276:*/
  case vmode + message:
  case hmode + message:
  case mmode + message:
    issuemessage();
    break;

  /*:1276*/
  /*1285:*/
  case vmode + caseshift:
  case hmode + caseshift:
  case mmode + caseshift:
    shiftcase();
    break;

  /*:1285*/
  /*1290:*/
  case vmode + xray:
  case hmode + xray:
  case mmode + xray:
    showwhatever();
    break;

  /*:1290*/
  /*1347:*/
  case vmode + extension:
  case hmode + extension:
  case mmode + extension:   /*:1347*/
    doextension();
    break;
    /*:1045*/
  }
  goto _Lbigswitch_;
_Lmainloop:
  /*1034:*/
  adjustspacefactor();
/* p2c: tex1.p: Warning: Symbol 'ADJUSTSPACEFACTOR' is not defined [221] */
  mainf = curfont;
  bchar = fontbchar[mainf - fontbase];
  falsebchar = fontfalsebchar[mainf - fontbase];
  if (mode > 0) {
    if (language != clang)
      fixlanguage();
  }
  fastgetavail(ligstack);
/* p2c: tex1.p: Warning: Symbol 'FASTGETAVAIL' is not defined [221] */
  *foofont(ligstack) = mainf;
  curl = curchr;
  *foocharacter(ligstack) = curl;
  curq = tail;
  if (cancelboundary) {
    cancelboundary = false;
    maink = nonaddress;
  } else
    maink = bcharlabel[mainf - fontbase];
  if (maink == nonaddress)
    goto _Lmainloopmove2;
  curr = curl;
  curl = nonchar;
  goto _Lmainligloop1;
_Lmainloopwrapup:   /*1035:*/
  wrapup(rthit);   /*:1035*/
/* p2c: tex1.p: Warning: Symbol 'WRAPUP' is not defined [221] */
_Lmainloopmove:   /*1036:*/
  if (ligstack == 0)
    goto _Lreswitch;
  curq = tail;
  curl = *foocharacter(ligstack);
_Lmainloopmove1:
  if (!ischarnode(ligstack))
    goto _Lmainloopmovelig;
_Lmainloopmove2:
  if (curchr < fontbc[mainf - fontbase] || curchr > fontec[mainf - fontbase]) {
    charwarning(mainf, curchr);
    freeavail(ligstack);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
    goto _Lbigswitch_;
  }
  maini = *foocharinfo(mainf, curl);
  if (!charexists(maini)) {
    charwarning(mainf, curchr);
    freeavail(ligstack);
/* p2c: tex1.p: Warning: Symbol 'FREEAVAIL' is not defined [221] */
    goto _Lbigswitch_;
  }
  tailappend(ligstack);   /*:1036*/
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
_Lmainlooplookahead:   /*1038:*/
  getnext();
  if (curcmd == letter)
    goto _Lmainlooplookahead1;
  if (curcmd == otherchar)
    goto _Lmainlooplookahead1;
  if (curcmd == chargiven)
    goto _Lmainlooplookahead1;
  xtoken();
  if (curcmd == letter)
    goto _Lmainlooplookahead1;
  if (curcmd == otherchar)
    goto _Lmainlooplookahead1;
  if (curcmd == chargiven)
    goto _Lmainlooplookahead1;
  if (curcmd == charnum) {
    scancharnum();
    curchr = curval;
    goto _Lmainlooplookahead1;
  }
  if (curcmd == noboundary)
    bchar = nonchar;
  curr = bchar;
  ligstack = 0;
  goto _Lmainligloop;
_Lmainlooplookahead1:
  adjustspacefactor();
/* p2c: tex1.p: Warning: Symbol 'ADJUSTSPACEFACTOR' is not defined [221] */
  fastgetavail(ligstack);
/* p2c: tex1.p: Warning: Symbol 'FASTGETAVAIL' is not defined [221] */
  *foofont(ligstack) = mainf;
  curr = curchr;
  *foocharacter(ligstack) = curr;
  if (curr == falsebchar)
    curr = nonchar;   /*:1038*/
_Lmainligloop:   /*1039:*/
  if (chartag(maini) != ligtag) {
/* p2c: tex1.p: Warning: Symbol 'CHARTAG' is not defined [221] */
    goto _Lmainloopwrapup;
  }
  maink = ligkernbase[mainf - fontbase] + *foorembyte(maini);
  mainj = fontinfo[maink].qqqq;
  if (*fooskipbyte(mainj) <= stopflag)
    goto _Lmainligloop2;
  maink = ligkernbase[mainf - fontbase] + *fooopbyte(mainj) * 256 +
	  *foorembyte(mainj) - kernbaseoffset + 32768L;
_Lmainligloop1:
  mainj = fontinfo[maink].qqqq;
_Lmainligloop2:
  if (*foonextchar(mainj) == curr) {
    if (*fooskipbyte(mainj) <= stopflag) {   /*1040:*/
      if (*fooopbyte(mainj) >= kernflag) {
	wrapup(rthit);
/* p2c: tex1.p: Warning: Symbol 'WRAPUP' is not defined [221] */
	tailappend(newkern(*foocharkern(mainf, mainj)));
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
	goto _Lmainloopmove;
      }
      if (curl == nonchar)
	lfthit = true;
      else if (ligstack == 0)
	rthit = true;
      checkinterrupt();
/* p2c: tex1.p: Warning: Symbol 'CHECKINTERRUPT' is not defined [221] */
      switch (*fooopbyte(mainj)) {

      case minquarterword + 1:
      case minquarterword + 5:
	curl = *foorembyte(mainj);
	maini = *foocharinfo(mainf, curl);
	ligaturepresent = true;
	break;

      case minquarterword + 2:
      case minquarterword + 6:
	curr = *foorembyte(mainj);
	if (ligstack == 0) {
	  ligstack = newligitem(curr);
	  bchar = nonchar;
	} else if (ischarnode(ligstack)) {
	  mainp = ligstack;
	  ligstack = newligitem(curr);
	  *fooligptr(ligstack) = mainp;
	} else
	  *foocharacter(ligstack) = curr;
	break;

      case minquarterword + 3:
	curr = *foorembyte(mainj);
	mainp = ligstack;
	ligstack = newligitem(curr);
	*foolink(ligstack) = mainp;
	break;

      case minquarterword + 7:
      case minquarterword + 11:
	wrapup(false);
/* p2c: tex1.p: Warning: Symbol 'WRAPUP' is not defined [221] */
	curq = tail;
	curl = *foorembyte(mainj);
	maini = *foocharinfo(mainf, curl);
	ligaturepresent = true;
	break;

      default:
	curl = *foorembyte(mainj);
	ligaturepresent = true;
	if (ligstack == 0)
	  goto _Lmainloopwrapup;
	else
	  goto _Lmainloopmove1;
	break;
      }
      if (*fooopbyte(mainj) > minquarterword + 4) {
	if (*fooopbyte(mainj) != minquarterword + 7)
	  goto _Lmainloopwrapup;
      }
      if (curl < nonchar)
	goto _Lmainligloop;
      maink = bcharlabel[mainf - fontbase];
      goto _Lmainligloop1;
    }
    /*:1040*/
  }
  if (*fooskipbyte(mainj) == minquarterword)
    maink++;
  else {
    if (*fooskipbyte(mainj) >= stopflag)
      goto _Lmainloopwrapup;
    maink += *fooskipbyte(mainj) - minquarterword + 1;
  }
  goto _Lmainligloop1;   /*:1039*/
_Lmainloopmovelig:   /*1037:*/
  mainp = *fooligptr(ligstack);
  if (mainp > 0) {
    tailappend(mainp);
/* p2c: tex1.p: Warning: Symbol 'TAILAPPEND' is not defined [221] */
  }
  tempptr = ligstack;
  ligstack = *foolink(tempptr);
  freenode(tempptr, smallnodesize);
  maini = *foocharinfo(mainf, curl);
  ligaturepresent = true;
  if (ligstack == 0) {
    if (mainp > 0)
      goto _Lmainlooplookahead;
    curr = bchar;
  } else
    curr = *foocharacter(ligstack);
  goto _Lmainligloop;   /*:1037*/
  /*:1034*/
_Lappendnormalspace_:   /*1041:*/
  if (spaceskip == zeroglue) {  /*1042:*/
    mainp = fontglue[curfont - fontbase];
    if (mainp == 0) {   /*:1042*/
      mainp = newspec(zeroglue);
      maink = parambase[curfont - fontbase] + spacecode;
      *foowidth(mainp) = fontinfo[maink].sc;
      *foostretch(mainp) = fontinfo[maink + 1].sc;
      *fooshrink(mainp) = fontinfo[maink + 2].sc;
      fontglue[curfont - fontbase] = mainp;
    }
    tempptr = newglue(mainp);
  } else
    tempptr = newparamglue(spaceskipcode);
  *foolink(tail) = tempptr;
  tail = tempptr;
  goto _Lbigswitch_;   /*:1041*/
_Lexit: ;
}


/*:1030*/
/*1284:*/
Static void giveerrhelp(void)
{
  tokenshow(errhelp);
}


/*:1284*/
/*1303:*/
/*524:*/
Static boolean openfmtfile(void)
{
  boolean Result;
  short j;

  j = loc;
  if (buffer[loc] == '&') {
    loc++;
    j = loc;
    buffer[last] = ' ';
    while (buffer[j] != ' ')
      j++;
    packbufferedname(0, loc, j - 1);
    if (wopenin(&fmtfile))
      goto _Lfound;
    packbufferedname(formatarealength, loc, j - 1);
    if (wopenin(&fmtfile))
      goto _Lfound;
    fprintf(termout, "Sorry, I can't find that format; will try PLAIN.\n");
    fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  }
  packbufferedname(formatdefaultlength - formatextlength, 1, 0);
  if (!wopenin(&fmtfile)) {
    fprintf(termout, "I can't find the PLAIN format file!\n");
    Result = false;
    goto _Lexit;
  }
_Lfound:
  loc = j;
  Result = true;
_Lexit:
  return Result;
}


/*:524*/
Static boolean loadfmtfile(void)
{  /*1308:*/
  boolean Result;
  long j, k, x;
  pointer p, q;
  fourquarters w;
  long FORLIM;

  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != 371982687L)
    goto _Lbadfmt_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != membot)
    goto _Lbadfmt_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != memtop)
    goto _Lbadfmt_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != eqtbsize)
    goto _Lbadfmt_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != hashprime)
    goto _Lbadfmt_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x != hyphsize)   /*1310:*/
    goto _Lbadfmt_;   /*:1308*/
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > poolsize) {
    fprintf(termout, "---! Must increase the string pool size\n");
    goto _Lbadfmt_;
  }
  poolptr = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > maxstrings) {
    fprintf(termout, "---! Must increase the max strings\n");
    goto _Lbadfmt_;
  }
  strptr = x;
  FORLIM = strptr;
  for (k = 0; k <= FORLIM; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > poolptr)
      goto _Lbadfmt_;
    strstart[k] = x;
  }
  k = 0;
  while (k + 4 < poolptr) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    w = pppfmtfile.qqqq;
    strpool[k] = w.b0 - minquarterword;
    strpool[k + 1] = w.b1 - minquarterword;
    strpool[k + 2] = w.b2 - minquarterword;
    strpool[k + 3] = w.b3 - minquarterword;
    k += 4;
  }
  k = poolptr - 4;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  w = pppfmtfile.qqqq;
  strpool[k] = w.b0 - minquarterword;
  strpool[k + 1] = w.b1 - minquarterword;
  strpool[k + 2] = w.b2 - minquarterword;
  strpool[k + 3] = w.b3 - minquarterword;
  initstrptr = strptr;
  initpoolptr = poolptr;   /*:1310*/
  /*1312:*/
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < lomemstatmax + 1000 || x >= himemstatmin)
    goto _Lbadfmt_;
  lomemmax = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x <= lomemstatmax || x > lomemmax)
    goto _Lbadfmt_;
  rover = x;
  p = membot;
  q = rover;
  do {
    for (k = p; k <= q + 1; k++) {
      pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
      mem[k - memmin] = pppfmtfile;
    }
    p = q + *foonodesize(q);
    if ((p > lomemmax) | ((q >= *foorlink(q)) & (*foorlink(q) != rover)))
      goto _Lbadfmt_;
    q = *foorlink(q);
  } while (q != rover);
  FORLIM = lomemmax;
  for (k = p; k <= FORLIM; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    mem[k - memmin] = pppfmtfile;
  }
  if (memmin < membot - 2) {
    p = *foollink(rover);
    q = memmin + 1;
    *foolink(memmin) = 0;
    *fooinfo(memmin) = 0;
    *foorlink(p) = q;
    *foollink(rover) = q;
    *foorlink(q) = rover;
    *foollink(q) = p;
    *foolink(q) = emptyflag;
    *foonodesize(q) = membot - q;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x <= lomemmax || x > himemstatmin)
    goto _Lbadfmt_;
  himemmin = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if ((unsigned long)x > memtop)
    goto _Lbadfmt_;
  avail = x;
  memend = memtop;
  FORLIM = memend;
  for (k = himemmin; k <= FORLIM; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    mem[k - memmin] = pppfmtfile;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  varused = pppfmtfile.int_;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  dynused = pppfmtfile.int_;   /*:1312*/
  /*1314:*/
  /*1317:*/
  k = activebase;
  do {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if (x < 1 || k + x > eqtbsize + 1)
      goto _Lbadfmt_;
    for (j = k; j < k + x; j++) {
      pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
      eqtb[j - activebase] = pppfmtfile;
    }
    k += x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if (x < 0 || k + x > eqtbsize + 1)
      goto _Lbadfmt_;
    for (j = k; j < k + x; j++)
      eqtb[j - activebase] = eqtb[k - activebase - 1];
    k += x;   /*:1317*/
  } while (k <= eqtbsize);
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < hashbase || x > frozencontrolsequence)
    goto _Lbadfmt_;
  parloc = x;
  partoken = cstokenflag + parloc;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < hashbase || x > frozencontrolsequence)   /*1319:*/
    goto _Lbadfmt_;
  writeloc = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < hashbase || x > frozencontrolsequence)
    goto _Lbadfmt_;
  hashused = x;
  p = hashbase - 1;
  do {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if (x <= p || x > hashused)
      goto _Lbadfmt_;
    p = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    hash[p - hashbase] = pppfmtfile.hh;
  } while (p != hashused);
  for (p = hashused + 1; p < undefinedcontrolsequence; p++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    hash[p - hashbase] = pppfmtfile.hh;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  cscount = pppfmtfile.int_;   /*:1319*/
  /*:1314*/
  /*1321:*/
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < 7)
    goto _Lbadfmt_;
  if (x > fontmemsize) {
    fprintf(termout, "---! Must increase the font mem size\n");
    goto _Lbadfmt_;
  }
  fmemptr = x;
  FORLIM = fmemptr;
  for (k = 0; k < FORLIM; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    fontinfo[k] = pppfmtfile;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < fontbase)
    goto _Lbadfmt_;
  if (x > fontmax) {
    fprintf(termout, "---! Must increase the font max\n");
    goto _Lbadfmt_;
  }
  fontptr = x;
  FORLIM = fontptr;
  for (k = nullfont; k <= FORLIM; k++) {   /*1323:*/
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    fontcheck[k - fontbase] = pppfmtfile.qqqq;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    fontsize[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    fontdsize[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > maxhalfword)
      goto _Lbadfmt_;
    fontparams[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    hyphenchar[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    skewchar[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > strptr)
      goto _Lbadfmt_;
    fontname[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > strptr)
      goto _Lbadfmt_;
    fontarea[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > 255)
      goto _Lbadfmt_;
    fontbc[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > 255)
      goto _Lbadfmt_;
    fontec[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    charbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    widthbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    heightbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    depthbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    italicbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    ligkernbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    kernbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    extenbase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    parambase[k - fontbase] = pppfmtfile.int_;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > lomemmax)
      goto _Lbadfmt_;
    fontglue[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x >= fmemptr)
      goto _Lbadfmt_;
    bcharlabel[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > nonchar)
      goto _Lbadfmt_;
    fontbchar[k - fontbase] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > nonchar)
      goto _Lbadfmt_;
    fontfalsebchar[k - fontbase] = x;
  }
  /*:1323*/
  /*:1321*/
  /*1325:*/
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if ((unsigned long)x > hyphsize)
    goto _Lbadfmt_;
  hyphcount = x;
  FORLIM = hyphcount;
  for (k = 1; k <= FORLIM; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > hyphsize)
      goto _Lbadfmt_;
    j = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > strptr)
      goto _Lbadfmt_;
    hyphword[j] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > maxhalfword)
      goto _Lbadfmt_;
    hyphlist[j] = x;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > triesize) {
    fprintf(termout, "---! Must increase the trie size\n");
    goto _Lbadfmt_;
  }
  j = x;
  triemax = j;
  for (k = 0; k <= j; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    trie[k] = pppfmtfile.hh;
  }
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if (x < 0)
    goto _Lbadfmt_;
  if (x > trieopsize) {
    fprintf(termout, "---! Must increase the trie op size\n");
    goto _Lbadfmt_;
  }
  j = x;
  trieopptr = j;
  for (k = 1; k <= j; k++) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > 63)
      goto _Lbadfmt_;
    hyfdistance[k - 1] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > 63)
      goto _Lbadfmt_;
    hyfnum[k - 1] = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x > maxquarterword)
      goto _Lbadfmt_;
    hyfnext[k - 1] = x;
  }
  for (k = 0; k <= 255; k++)
    trieused[k] = minquarterword;
  k = 256;
  while (j > 0) {
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if ((unsigned long)x >= k)
      goto _Lbadfmt_;
    k = x;
    pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
    x = pppfmtfile.int_;
    if (x < 1 || x > j)
      goto _Lbadfmt_;
    trieused[k] = x;
    j -= x;
    opstart[k] = j - minquarterword;
  }
  trienotready = false;   /*:1325*/
  /*1327:*/
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if ((unsigned long)x > errorstopmode)
    goto _Lbadfmt_;
  interaction = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if ((unsigned long)x > strptr)
    goto _Lbadfmt_;
  formatident = x;
  pget(pppfmtfile);
/* p2c: tex1.p: Warning: Symbol 'PGET' is not defined [221] */
  x = pppfmtfile.int_;
  if ((x != 69069L) | P_eof(fmtfile))
    goto _Lbadfmt_;   /*:1327*/
  Result = true;
  goto _Lexit;
_Lbadfmt_:
  fprintf(termout, "(Fatal format file error; I'm stymied)\n");
  Result = false;
_Lexit:
  return Result;
}


/*:1303*/
/*1330:*/
/*1333:*/
Static void closefilesandterminate(void)
{  /*1378:*/
  long k;
  Char TEMP;

  for (k = 0; k <= 15; k++) {
    if (writeopen[k])   /*:1378*/
      aclose(&writefile[k]);
  }
  /*_STAT*/
  if (tracingstats > 0) {   /*_ENDSTAT*/
    /*1334:*/
    if (logopened) {   /*:1334*/
      fprintf(logfile, " \n");
      fprintf(logfile, "Here is how much of TeX's memory you used:\n");
      TEMP = ' ';
      fwrite(&TEMP, 1, 1, logfile);
      TEMP = strptr - initstrptr;
      fwrite(&TEMP, 1, 1, logfile);
/* p2c: tex1.p: Warning: Expected a ')', found a colon [227] */
      if (strptr != initstrptr + 1) {
	TEMP = 's';
	fwrite(&TEMP, 1, 1, logfile);
      }
      fprintf(logfile, " out of %ld\n", (long)(maxstrings - initstrptr));
      fprintf(logfile, " %d string characters out of %ld\n",
	      poolptr - initpoolptr, (long)(poolsize - initpoolptr));
      fprintf(logfile, " %ld words of memory out of %ld\n",
	      lomemmax - memmin + memend - himemmin + 2L,
	      memend - memmin + 1L);
      fprintf(logfile, " %ld multiletter control sequences out of %ld\n",
	      cscount, (long)hashsize);
      TEMP = ' ';
      fwrite(&TEMP, 1, 1, logfile);
      TEMP = fmemptr;
      fwrite(&TEMP, 1, 1, logfile);
/* p2c: tex1.p: Warning: Expected a ')', found a colon [227] */
      if (fontptr != fontbase + 1) {
	TEMP = 's';
	fwrite(&TEMP, 1, 1, logfile);
      }
      fprintf(logfile, ", out of %ld for %ld\n",
	      (long)fontmemsize, (long)(fontmax - fontbase));
      TEMP = ' ';
      fwrite(&TEMP, 1, 1, logfile);
      TEMP = hyphcount;
      fwrite(&TEMP, 1, 1, logfile);
/* p2c: tex1.p: Warning: Expected a ')', found a colon [227] */
      if (hyphcount != 1) {
	TEMP = 's';
	fwrite(&TEMP, 1, 1, logfile);
      }
      fprintf(logfile, " out of %ld\n", (long)hyphsize);
      fprintf(logfile,
	" %di,%dn,%ldp,%db,%ds stack positions out of %ldi,%ldn,%ldp,%ldb,%lds\n",
	maxinstack, maxneststack, maxparamstack, maxbufstack + 1,
	maxsavestack + 6, (long)stacksize, (long)nestsize, (long)paramsize,
	(long)bufsize, (long)savesize);
    }
  }
  /*642:*/
  while (curs > -1) {
    if (curs > 0) {
      dviout(pop);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    } else {
      dviout(eop);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
      totalpages++;
    }
    curs--;
  }
  if (totalpages == 0)
    printnl(S(837));
  else {   /*:642*/
    dviout(post);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dvifour(lastbop);
    lastbop = dvioffset + dviptr - 5;
    dvifour(25400000L);
    dvifour(473628672L);
    preparemag();
    dvifour(mag);
    dvifour(maxv);
    dvifour(maxh);
    dviout(maxpush / 256);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dviout(maxpush & 255);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dviout((totalpages / 256) & 255);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dviout(totalpages & 255);   /*643:*/
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    while (fontptr > fontbase) {   /*:643*/
      if (fontused[fontptr - fontbase])
	dvifontdef(fontptr);
      fontptr--;
    }
    dviout(postpost);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    dvifour(lastbop);
    dviout(idbyte);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
    k = ((dvibufsize - dviptr) & 3) + 4;
    while (k > 0) {
      dviout(223);
/* p2c: tex1.p: Warning: Symbol 'DVIOUT' is not defined [221] */
      k--;
    }  /*599:*/
    if (dvilimit == halfbuf)
      writedvi(halfbuf, dvibufsize - 1);
    if (dviptr > 0)   /*:599*/
      writedvi(0, dviptr - 1);
    printnl(S(838));
    slowprint(outputfilename);
    print(S(300));
    printint(totalpages);
    print(S(839));
    if (totalpages != 1)
      printchar('s');
    print(S(840));
    printint(dvioffset + dviptr);
    print(S(841));
    bclose(&dvifile);
  }
  if (!logopened)
    return;
  putc('\n', logfile);
  aclose(&logfile);
  selector -= 2;
  if (selector != termonly)
    return;
  printnl(S(1274));
  slowprint(logname);
  printchar('.');
}


/*:1333*/
/*1335:*/
Static void finalcleanup(void)
{
  smallnumber c;

  c = curchr;
  if (jobname == 0)
    openlogfile();
  while (inputptr > 0) {
    if (state == tokenlist)
      endtokenlist();
    else
      endfilereading();
  }
  while (openparens > 0) {
    print(S(1275));
    openparens--;
  }
  if (curlevel > levelone) {
    printnl('(');
    printesc(S(1276));
    print(S(1277));
    printint(curlevel - levelone);
    printchar(')');
  }
  while (condptr != 0) {
    printnl('(');
    printesc(S(1276));
    print(S(1278));
    printcmdchr(iftest, curif);
    if (ifline != 0) {
      print(S(1279));
      printint(ifline);
    }
    print(S(1280));
    ifline = *fooiflinefield(condptr);
    curif = *foosubtype(condptr);
    tempptr = condptr;
    condptr = *foolink(condptr);
    freenode(tempptr, ifnodesize);
  }
  if (history != spotless) {
    if (history == warningissued || interaction < errorstopmode) {
      if (selector == termandlog) {
	selector = termonly;
	printnl(S(1281));
	selector = termandlog;
      }
    }
  }
  if (c == 1) {
    for (c = topmarkcode; c <= splitbotmarkcode; c++) {
      if (curmark[c - topmarkcode] != 0)
	deletetokenref(curmark[c - topmarkcode]);
    }
    storefmtfile();
    goto _Lexit;
/* p2c: tex1.p: Note: Deleting unreachable code [255] */
  }
_Lexit: ;
}


/*:1335*/
/*1336:*/
Static void initprim(void)
{
  nonewcontrolsequence = false;   /*226:*/
  primitive(S(388), assignglue, gluebase);
  primitive(S(389), assignglue, gluebase + baselineskipcode);
  primitive(S(390), assignglue, gluebase + parskipcode);
  primitive(S(391), assignglue, gluebase + abovedisplayskipcode);
  primitive(S(392), assignglue, gluebase + belowdisplayskipcode);
  primitive(S(393), assignglue,
	    gluebase + abovedisplayshortskipcode);
  primitive(S(394), assignglue,
	    gluebase + belowdisplayshortskipcode);
  primitive(S(395), assignglue, gluebase + leftskipcode);
  primitive(S(396), assignglue, gluebase + rightskipcode);
  primitive(S(397), assignglue, gluebase + topskipcode);
  primitive(S(398), assignglue, gluebase + splittopskipcode);
  primitive(S(399), assignglue, gluebase + tabskipcode);
  primitive(S(400), assignglue, gluebase + spaceskipcode);
  primitive(S(401), assignglue, gluebase + xspaceskipcode);
  primitive(S(402), assignglue, gluebase + parfillskipcode);
  primitive(S(403), assignmuglue, gluebase + thinmuskipcode);
  primitive(S(404), assignmuglue, gluebase + medmuskipcode);
  primitive(S(405), assignmuglue, gluebase + thickmuskipcode);
  /*:226*/
  /*230:*/
  primitive(S(409), assigntoks, outputroutineloc);
  primitive(S(410), assigntoks, everyparloc);
  primitive(S(411), assigntoks, everymathloc);
  primitive(S(412), assigntoks, everydisplayloc);
  primitive(S(413), assigntoks, everyhboxloc);
  primitive(S(414), assigntoks, everyvboxloc);
  primitive(S(415), assigntoks, everyjobloc);
  primitive(S(416), assigntoks, everycrloc);
  primitive(S(417), assigntoks, errhelploc);   /*:230*/
  /*238:*/
  primitive(S(431), assignint, intbase);
  primitive(S(432), assignint, intbase + tolerancecode);
  primitive(S(433), assignint, intbase + linepenaltycode);
  primitive(S(434), assignint, intbase + hyphenpenaltycode);
  primitive(S(435), assignint, intbase + exhyphenpenaltycode);
  primitive(S(436), assignint, intbase + clubpenaltycode);
  primitive(S(437), assignint, intbase + widowpenaltycode);
  primitive(S(438), assignint, intbase + displaywidowpenaltycode);
  primitive(S(439), assignint, intbase + brokenpenaltycode);
  primitive(S(440), assignint, intbase + binoppenaltycode);
  primitive(S(441), assignint, intbase + relpenaltycode);
  primitive(S(442), assignint, intbase + predisplaypenaltycode);
  primitive(S(443), assignint, intbase + postdisplaypenaltycode);
  primitive(S(444), assignint, intbase + interlinepenaltycode);
  primitive(S(445), assignint, intbase + doublehyphendemeritscode);
  primitive(S(446), assignint, intbase + finalhyphendemeritscode);
  primitive(S(447), assignint, intbase + adjdemeritscode);
  primitive(S(448), assignint, intbase + magcode);
  primitive(S(449), assignint, intbase + delimiterfactorcode);
  primitive(S(450), assignint, intbase + loosenesscode);
  primitive(S(451), assignint, intbase + timecode);
  primitive(S(452), assignint, intbase + daycode);
  primitive(S(453), assignint, intbase + monthcode);
  primitive(S(454), assignint, intbase + yearcode);
  primitive(S(455), assignint, intbase + showboxbreadthcode);
  primitive(S(456), assignint, intbase + showboxdepthcode);
  primitive(S(457), assignint, intbase + hbadnesscode);
  primitive(S(458), assignint, intbase + vbadnesscode);
  primitive(S(459), assignint, intbase + pausingcode);
  primitive(S(460), assignint, intbase + tracingonlinecode);
  primitive(S(461), assignint, intbase + tracingmacroscode);
  primitive(S(462), assignint, intbase + tracingstatscode);
  primitive(S(463), assignint, intbase + tracingparagraphscode);
  primitive(S(464), assignint, intbase + tracingpagescode);
  primitive(S(465), assignint, intbase + tracingoutputcode);
  primitive(S(466), assignint, intbase + tracinglostcharscode);
  primitive(S(467), assignint, intbase + tracingcommandscode);
  primitive(S(468), assignint, intbase + tracingrestorescode);
  primitive(S(469), assignint, intbase + uchyphcode);
  primitive(S(470), assignint, intbase + outputpenaltycode);
  primitive(S(471), assignint, intbase + maxdeadcyclescode);
  primitive(S(472), assignint, intbase + hangaftercode);
  primitive(S(473), assignint, intbase + floatingpenaltycode);
  primitive(S(474), assignint, intbase + globaldefscode);
  primitive(S(475), assignint, intbase + curfamcode);
  primitive(S(476), assignint, intbase + escapecharcode);
  primitive(S(477), assignint, intbase + defaulthyphencharcode);
  primitive(S(478), assignint, intbase + defaultskewcharcode);
  primitive(S(479), assignint, intbase + endlinecharcode);
  primitive(S(480), assignint, intbase + newlinecharcode);
  primitive(S(481), assignint, intbase + languagecode);
  primitive(S(482), assignint, intbase + lefthyphenmincode);
  primitive(S(483), assignint, intbase + righthyphenmincode);
  primitive(S(484), assignint, intbase + holdinginsertscode);
  primitive(S(485), assignint, intbase + errorcontextlinescode);
  /*:238*/
  /*248:*/
  primitive(S(489), assigndimen, dimenbase);
  primitive(S(490), assigndimen, dimenbase + mathsurroundcode);
  primitive(S(491), assigndimen, dimenbase + lineskiplimitcode);
  primitive(S(492), assigndimen, dimenbase + hsizecode);
  primitive(S(493), assigndimen, dimenbase + vsizecode);
  primitive(S(494), assigndimen, dimenbase + maxdepthcode);
  primitive(S(495), assigndimen, dimenbase + splitmaxdepthcode);
  primitive(S(496), assigndimen, dimenbase + boxmaxdepthcode);
  primitive(S(497), assigndimen, dimenbase + hfuzzcode);
  primitive(S(498), assigndimen, dimenbase + vfuzzcode);
  primitive(S(499), assigndimen,
	    dimenbase + delimitershortfallcode);
  primitive(S(500), assigndimen,
	    dimenbase + nulldelimiterspacecode);
  primitive(S(501), assigndimen, dimenbase + scriptspacecode);
  primitive(S(502), assigndimen, dimenbase + predisplaysizecode);
  primitive(S(503), assigndimen, dimenbase + displaywidthcode);
  primitive(S(504), assigndimen, dimenbase + displayindentcode);
  primitive(S(505), assigndimen, dimenbase + overfullrulecode);
  primitive(S(506), assigndimen, dimenbase + hangindentcode);
  primitive(S(507), assigndimen, dimenbase + hoffsetcode);
  primitive(S(508), assigndimen, dimenbase + voffsetcode);
  primitive(S(509), assigndimen, dimenbase + emergencystretchcode);
  /*:248*/
  /*265:*/
  primitive(' ', exspace, 0);
  primitive('/', italcorr, 0);
  primitive(S(519), accent, 0);
  primitive(S(520), advance, 0);
  primitive(S(521), afterassignment, 0);
  primitive(S(522), aftergroup, 0);
  primitive(S(523), begingroup, 0);
  primitive(S(524), charnum, 0);
  primitive(S(515), csname, 0);
  primitive(S(525), delimnum, 0);
  primitive(S(526), divide, 0);
  primitive(S(516), endcsname, 0);
  primitive(S(527), endgroup, 0);
  *footext(frozenendgroup) = S(527);
  eqtb[frozenendgroup - activebase] = eqtb[curval - activebase];
  primitive(S(528), expandafter, 0);
  primitive(S(529), deffont, 0);
  primitive(S(530), assignfontdimen, 0);
  primitive(S(531), halign, 0);
  primitive(S(532), hrule, 0);
  primitive(S(533), ignorespaces, 0);
  primitive(S(343), insert_, 0);
  primitive(S(363), mark_, 0);
  primitive(S(534), mathaccent, 0);
  primitive(S(535), mathcharnum, 0);
  primitive(S(536), mathchoice, 0);
  primitive(S(537), multiply, 0);
  primitive(S(538), noalign, 0);
  primitive(S(539), noboundary, 0);
  primitive(S(540), noexpand, 0);
  primitive(S(348), nonscript, 0);
  primitive(S(541), omit, 0);
  primitive(S(419), setshape, 0);
  primitive(S(542), breakpenalty, 0);
  primitive(S(543), setprevgraf, 0);
  primitive(S(544), radical, 0);
  primitive(S(545), readtocs, 0);
  primitive(S(546), relax, 256);
  *footext(frozenrelax) = S(546);
  eqtb[frozenrelax - activebase] = eqtb[curval - activebase];
  primitive(S(547), setbox, 0);
  primitive(S(548), the, 0);
  primitive(S(418), toksregister, 0);
  primitive(S(364), vadjust, 0);
  primitive(S(549), valign, 0);
  primitive(S(550), vcenter, 0);
  primitive(S(551), vrule, 0);   /*:265*/
  /*334:*/
  primitive(S(606), parend, 256);
  parloc = curval;
  partoken = cstokenflag + parloc;   /*:334*/
  /*376:*/
  primitive(S(638), input, 0);
  primitive(S(639), input, 1);   /*:376*/
  /*384:*/
  primitive(S(640), topbotmark, topmarkcode);
  primitive(S(641), topbotmark, firstmarkcode);
  primitive(S(642), topbotmark, botmarkcode);
  primitive(S(643), topbotmark, splitfirstmarkcode);
  primitive(S(644), topbotmark, splitbotmarkcode);   /*:384*/
  /*411:*/
  primitive(S(487), register_, intval);
  primitive(S(511), register_, dimenval);
  primitive(S(407), register_, glueval);
  primitive(S(408), register_, muval);   /*:411*/
  /*416:*/
  primitive(S(677), setaux, hmode);
  primitive(S(678), setaux, vmode);
  primitive(S(679), setpageint, 0);
  primitive(S(680), setpageint, 1);
  primitive(S(681), setboxdimen, widthoffset);
  primitive(S(682), setboxdimen, heightoffset);
  primitive(S(683), setboxdimen, depthoffset);
  primitive(S(684), lastitem, intval);
  primitive(S(685), lastitem, dimenval);
  primitive(S(686), lastitem, glueval);
  primitive(S(687), lastitem, inputlinenocode);
  primitive(S(688), lastitem, badnesscode);   /*:416*/
  /*468:*/
  primitive(S(744), convert, numbercode);
  primitive(S(745), convert, romannumeralcode);
  primitive(S(746), convert, stringcode);
  primitive(S(747), convert, meaningcode);
  primitive(S(748), convert, fontnamecode);
  primitive(S(749), convert, jobnamecode);   /*:468*/
  /*487:*/
  primitive(S(764), iftest, ifcharcode);
  primitive(S(765), iftest, ifcatcode);
  primitive(S(766), iftest, ifintcode);
  primitive(S(767), iftest, ifdimcode);
  primitive(S(768), iftest, ifoddcode);
  primitive(S(769), iftest, ifvmodecode);
  primitive(S(770), iftest, ifhmodecode);
  primitive(S(771), iftest, ifmmodecode);
  primitive(S(772), iftest, ifinnercode);
  primitive(S(773), iftest, ifvoidcode);
  primitive(S(774), iftest, ifhboxcode);
  primitive(S(775), iftest, ifvboxcode);
  primitive(S(776), iftest, ifxcode);
  primitive(S(777), iftest, ifeofcode);
  primitive(S(778), iftest, iftruecode);
  primitive(S(779), iftest, iffalsecode);
  primitive(S(780), iftest, ifcasecode);   /*:487*/
  /*491:*/
  primitive(S(781), fiorelse, ficode);
  *footext(frozenfi) = S(781);
  eqtb[frozenfi - activebase] = eqtb[curval - activebase];
  primitive(S(782), fiorelse, orcode);
  primitive(S(783), fiorelse, elsecode);   /*:491*/
  /*553:*/
  primitive(S(803), setfont, nullfont);
  *footext(frozennullfont) = S(803);
  eqtb[frozennullfont - activebase] = eqtb[curval - activebase];   /*:553*/
  /*780:*/
  primitive(S(897), tabmark, spancode);
  primitive(S(898), carret, crcode);
  *footext(frozencr) = S(898);
  eqtb[frozencr - activebase] = eqtb[curval - activebase];
  primitive(S(899), carret, crcrcode);
  *footext(frozenendtemplate) = S(900);
  *footext(frozenendv) = S(900);
  *fooeqtype(frozenendv) = endv;
  *fooequiv(frozenendv) = nulllist;
  *fooeqlevel(frozenendv) = levelone;
  eqtb[frozenendtemplate - activebase] = eqtb[frozenendv - activebase];
  *fooeqtype(frozenendtemplate) = endtemplate;   /*:780*/
  /*983:*/
  primitive(S(969), setpagedimen, 0);
  primitive(S(970), setpagedimen, 1);
  primitive(S(971), setpagedimen, 2);
  primitive(S(972), setpagedimen, 3);
  primitive(S(973), setpagedimen, 4);
  primitive(S(974), setpagedimen, 5);
  primitive(S(975), setpagedimen, 6);
  primitive(S(976), setpagedimen, 7);   /*:983*/
  /*1052:*/
  primitive(S(1024), stop, 0);
  primitive(S(1025), stop, 1);   /*:1052*/
  /*1058:*/
  primitive(S(1026), hskip, skipcode);
  primitive(S(1027), hskip, filcode);
  primitive(S(1028), hskip, fillcode);
  primitive(S(1029), hskip, sscode);
  primitive(S(1030), hskip, filnegcode);
  primitive(S(1031), vskip, skipcode);
  primitive(S(1032), vskip, filcode);
  primitive(S(1033), vskip, fillcode);
  primitive(S(1034), vskip, sscode);
  primitive(S(1035), vskip, filnegcode);
  primitive(S(349), mskip, mskipcode);
  primitive(S(352), kern, explicit);
  primitive(S(354), mkern, muglue);   /*:1058*/
  /*1071:*/
  primitive(S(1053), hmove, 1);
  primitive(S(1054), hmove, 0);
  primitive(S(1055), vmove, 1);
  primitive(S(1056), vmove, 0);
  primitive(S(420), makebox, boxcode);
  primitive(S(1057), makebox, copycode);
  primitive(S(1058), makebox, lastboxcode);
  primitive(S(964), makebox, vsplitcode);
  primitive(S(1059), makebox, vtopcode);
  primitive(S(966), makebox, vtopcode + vmode);
  primitive(S(1060), makebox, vtopcode + hmode);
  primitive(S(1061), leadership, aleaders - 1);
  primitive(S(1062), leadership, aleaders);
  primitive(S(1063), leadership, cleaders);
  primitive(S(1064), leadership, xleaders);   /*:1071*/
  /*1088:*/
  primitive(S(1079), startpar, 1);
  primitive(S(1080), startpar, 0);   /*:1088*/
  /*1107:*/
  primitive(S(1089), removeitem, penaltynode);
  primitive(S(1090), removeitem, kernnode);
  primitive(S(1091), removeitem, gluenode);
  primitive(S(1092), unhbox, boxcode);
  primitive(S(1093), unhbox, copycode);
  primitive(S(1094), unvbox, boxcode);
  primitive(S(1095), unvbox, copycode);   /*:1107*/
  /*1114:*/
  primitive('-', discretionary, 1);
  primitive(S(361), discretionary, 0);   /*:1114*/
  /*1141:*/
  primitive(S(1126), eqno, 0);
  primitive(S(1127), eqno, 1);   /*:1141*/
  /*1156:*/
  primitive(S(866), mathcomp, ordnoad);
  primitive(S(867), mathcomp, opnoad);
  primitive(S(868), mathcomp, binnoad);
  primitive(S(869), mathcomp, relnoad);
  primitive(S(870), mathcomp, opennoad);
  primitive(S(871), mathcomp, closenoad);
  primitive(S(872), mathcomp, punctnoad);
  primitive(S(873), mathcomp, innernoad);
  primitive(S(875), mathcomp, undernoad);
  primitive(S(874), mathcomp, overnoad);
  primitive(S(1128), limitswitch, normal);
  primitive(S(878), limitswitch, limits);
  primitive(S(879), limitswitch, nolimits);   /*:1156*/
  /*1169:*/
  primitive(S(861), mathstyle, displaystyle);
  primitive(S(862), mathstyle, textstyle);
  primitive(S(863), mathstyle, scriptstyle);
  primitive(S(864), mathstyle, scriptscriptstyle);   /*:1169*/
  /*1178:*/
  primitive(S(1146), above, abovecode);
  primitive(S(1147), above, overcode);
  primitive(S(1148), above, atopcode);
  primitive(S(1149), above, delimitedcode);
  primitive(S(1150), above, delimitedcode + overcode);
  primitive(S(1151), above, delimitedcode + atopcode);   /*:1178*/
  /*1188:*/
  primitive(S(876), leftright, leftnoad);
  primitive(S(877), leftright, rightnoad);
  *footext(frozenright) = S(877);
  eqtb[frozenright - activebase] = eqtb[curval - activebase];   /*:1188*/
  /*1208:*/
  primitive(S(1170), prefix, 1);
  primitive(S(1171), prefix, 2);
  primitive(S(1172), prefix, 4);
  primitive(S(1173), def, 0);
  primitive(S(1174), def, 1);
  primitive(S(1175), def, 2);
  primitive(S(1176), def, 3);
  /*:1208*/
  /*1219:*/
  primitive(S(1190), let, normal);
  primitive(S(1191), let, normal + 1);   /*:1219*/
  /*1222:*/
  primitive(S(1192), shorthanddef, chardefcode);
  primitive(S(1193), shorthanddef, mathchardefcode);
  primitive(S(1194), shorthanddef, countdefcode);
  primitive(S(1195), shorthanddef, dimendefcode);
  primitive(S(1196), shorthanddef, skipdefcode);
  primitive(S(1197), shorthanddef, muskipdefcode);
  primitive(S(1198), shorthanddef, toksdefcode);   /*:1222*/
  /*1230:*/
  primitive(S(426), defcode, catcodebase);
  primitive(S(430), defcode, mathcodebase);
  primitive(S(427), defcode, lccodebase);
  primitive(S(428), defcode, uccodebase);
  primitive(S(429), defcode, sfcodebase);
  primitive(S(488), defcode, delcodebase);
  primitive(S(423), deffamily, mathfontbase);
  primitive(S(424), deffamily, mathfontbase + scriptsize);
  primitive(S(425), deffamily, mathfontbase + scriptscriptsize);
  /*:1230*/
  /*1250:*/
  primitive(S(940), hyphdata, 0);
  primitive(S(952), hyphdata, 1);   /*:1250*/
  /*1254:*/
  primitive(S(1216), assignfontint, 0);
  primitive(S(1217), assignfontint, 1);   /*:1254*/
  /*1262:*/
  primitive(S(288), setinteraction, batchmode);
  primitive(S(289), setinteraction, nonstopmode);
  primitive(S(290), setinteraction, scrollmode);
  primitive(S(1226), setinteraction, errorstopmode);   /*:1262*/
  /*1272:*/
  primitive(S(1227), instream, 1);
  primitive(S(1228), instream, 0);   /*:1272*/
  /*1277:*/
  primitive(S(1229), message, 0);
  primitive(S(1230), message, 1);   /*:1277*/
  /*1286:*/
  primitive(S(1236), caseshift, lccodebase);
  primitive(S(1237), caseshift, uccodebase);   /*:1286*/
  /*1291:*/
  primitive(S(1238), xray, showcode);
  primitive(S(1239), xray, showboxcode);
  primitive(S(1240), xray, showthecode);
  primitive(S(1241), xray, showlists);   /*:1291*/
  /*1344:*/
  primitive(S(1284), extension, opennode);
  primitive(S(603), extension, writenode);
  writeloc = curval;
  primitive(S(1285), extension, closenode);
  primitive(S(1286), extension, specialnode);
  primitive(S(1287), extension, immediatecode);
  primitive(S(1288), extension, setlanguagecode);   /*:1344*/
  nonewcontrolsequence = true;
}


/*:1336*/
/*1338:*/
/*_DEBUG*/
Static void debughelp(void)
{
  long k, l, m, n;

  while (true) {
    printnl(S(1283));
    fflush(termout);
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
    fread(&m, 1, 1, termin);
    if (m < 0) {
      goto _Lexit;
      continue;
    }
    if (m == 0) {
      goto _Lbreakpoint_;
_Lbreakpoint_:
      m = 0;   /*'BREAKPOINT'*/
      continue;
    }
    fread(&n, 1, 1, termin);
    switch (m) {   /*1339:*/

    case 1:
      printword(mem[n - memmin]);
      break;

    case 2:
      printint(*fooinfo(n));
      break;

    case 3:
      printint(*foolink(n));
      break;

    case 4:
      printword(eqtb[n - activebase]);
      break;

    case 5:
      printword(fontinfo[n]);
      break;

    case 6:
      printword(savestack[n]);
      break;

    case 7:
      showbox(n);
      break;

    case 8:
      breadthmax = 10000;
      depththreshold = poolsize - poolptr - 10;
      shownodelist(n);
      break;

    case 9:
      showtokenlist(n, 0, 1000);
      break;

    case 10:
      slowprint(n);
      break;

    case 11:
      checkmem(n > 0);
      break;

    case 12:
      searchmem(n);
      break;

    case 13:
      fread(&l, 1, 1, termin);
      printcmdchr(n, l);
      break;

    case 14:
      for (k = 0; k <= n; k++)
	print(buffer[k]);
      break;

    case 15:
      fontinshortdisplay = nullfont;
      shortdisplay(n);
      break;

    case 16:   /*:1339*/
      panicking = !panicking;
      break;

    default:
      print('?');
      break;
    }
  }
_Lexit: ;
}


/*_ENDDEBUG*/
/*:1338*/
/*:1330*/
/*1332:*/
main(int argc, Char *argv[])
{
  Char TEMP;

  PASCAL_MAIN(argc, argv);
  if (setjmp(_JLendofTEX))
    goto _LendofTEX;
  if (setjmp(_JLfinalend))
    goto _Lfinalend;
  fmtfile = NULL;
/* p2c: tex1.p:
 * Note: Array of files writefile should be initialized [257] */
  tfmfile = NULL;
  dvifile = NULL;
  logfile = NULL;
/* p2c: tex1.p:
 * Note: Array of files inputfile should be initialized [257] */
/* p2c: tex1.p: Note: Array of files readfile should be initialized [257] */
  poolfile = NULL;
  termout = NULL;
  termin = NULL;
  curfile = NULL;
  fooinit();
  history = fatalerrorstop;
  topenout();
/* p2c: tex1.p: Warning: Symbol 'TOPENOUT' is not defined [221] */
  if (readyalready == 314159L)   /*14:*/
    goto _LstartofTEX;
  bad = 0;
  if (halferrorline < 30 || halferrorline > errorline - 15)
    bad = 1;
  if (maxprintline < 60)
    bad = 2;
  if ((dvibufsize & 7) != 0)
    bad = 3;
  if (membot + 1100 > memtop)
    bad = 4;
  if (hashprime > hashsize)
    bad = 5;
  if (maxinopen >= 128)
    bad = 6;
  if (memtop < 267)   /*:14*/
    bad = 7;
  /*111:*/
  if (memmin != membot || memmax != memtop)
    bad = 10;
  if (memmin > membot || memmax < memtop)
    bad = 10;
  if (minquarterword > 0 || maxquarterword < 127)
    bad = 11;
  if (maxhalfword < 32767)
    bad = 12;
  if (minquarterword < 0 || maxquarterword > maxhalfword)
    bad = 13;
  if (memmin < 0 || memmax >= maxhalfword || membot - memmin > maxhalfword + 1)
    bad = 14;
  if (fontbase < minquarterword || fontmax > maxquarterword)
    bad = 15;
  if (fontmax > fontbase + 256)
    bad = 16;
  if (savesize > maxhalfword || maxstrings > maxhalfword)
    bad = 17;
  if (bufsize > maxhalfword)
    bad = 18;
  if (maxquarterword - minquarterword < 255)   /*:111*/
    bad = 19;
  /*290:*/
  if (cstokenflag + undefinedcontrolsequence > maxhalfword)   /*:290*/
    bad = 21;
  /*522:*/
  if (formatdefaultlength > filenamesize)
    bad = 31;
  /*:522*/
  /*1249:*/
  if (maxhalfword * 2 < memtop - memmin)   /*:1249*/
    bad = 41;
  if (bad > 0) {
    fprintf(termout,
	    "Ouch---my internal constants have been clobbered!---case %ld\n",
	    bad);
    goto _Lfinalend;
  }
  initialize();
  if (!getstringsstarted())
    goto _Lfinalend;
  initprim();
  initstrptr = strptr;
  initpoolptr = poolptr;
  fixdateandtime();
  readyalready = 314159L;
_LstartofTEX:   /*55:*/
  selector = termonly;
  tally = 0;
  termoffset = 0;
  fileoffset = 0;
  /*:55*/
  /*61:*/
  TEMP = 'T';
/* p2c: tex1.p: Warning: Char constant with more than one character [154] */
  fwrite(&TEMP, 1, 1, termout);
  if (formatident == 0)
    fprintf(termout, " (no format preloaded)\n");
  else {
    slowprint(formatident);
    println();
  }
  fflush(termout);   /*:61*/
/* p2c: tex1.p: Warning: Symbol 'FFLUSH' is not defined [221] */
  /*528:*/
  jobname = 0;
  nameinprogress = false;
  logopened = false;   /*:528*/
  /*533:*/
  outputfilename = 0;   /*:533*/
  /*1337:*/
  /*331:*/
  inputptr = 0;
  maxinstack = 0;
  inopen = 0;
  openparens = 0;
  maxbufstack = 0;
  paramptr = 0;
  maxparamstack = 0;
  first = bufsize;
  do {
    buffer[first] = 0;
    first--;
  } while (first != 0);
  scannerstatus = normal;
  warningindex = 0;
  first = 1;
  state = newline;
  start = 1;
  iindex = 0;
  line = 0;
  name = 0;
  forceeof = false;
  alignstate = 1000000L;
  if (!initterminal())
    goto _Lfinalend;
  limit = last;
  first = last + 1;   /*:331*/
  if ((formatident == 0) | (buffer[loc] == '&')) {
    if (formatident != 0)
      initialize();
    if (!openfmtfile())
      goto _Lfinalend;
    if (!loadfmtfile()) {
      wclose(&fmtfile);
      goto _Lfinalend;
    }
    wclose(&fmtfile);
    while ((loc < limit) & (buffer[loc] == ' '))
      loc++;
  }
  if (endlinecharinactive) {
/* p2c: tex1.p:
 * Warning: Symbol 'ENDLINECHARINACTIVE' is not defined [221] */
    limit--;
  } else
    buffer[limit] = endlinechar;
  fixdateandtime();   /*765:*/
  magicoffset = strstart[256] - ordnoad * 9;   /*:765*/
  /*75:*/
  if (interaction == batchmode)
    selector = noprint;
  else {
    selector = termonly;
    /*
:75*/
  }
  if ((loc < limit) & (*foocatcode(buffer[loc]) != escape))   /*:1337*/
    startinput();
  history = spotless;
  maincontrol();
  finalcleanup();
_LendofTEX:
  closefilesandterminate();
_Lfinalend:
  readyalready = 0;
  if (curfile != NULL)
    fclose(curfile);
  if (termin != NULL)
    fclose(termin);
  if (termout != NULL)
    fclose(termout);
  if (poolfile != NULL)
    fclose(poolfile);
  if (logfile != NULL)
    fclose(logfile);
  if (dvifile != NULL)
    fclose(dvifile);
  if (tfmfile != NULL)
    fclose(tfmfile);
  if (fmtfile != NULL)
    fclose(fmtfile);
  exit(EXIT_SUCCESS);
}  /*:1332*/



/* End. */
