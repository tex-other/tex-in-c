/* #include <stdio.h> */

#define S(x) (x)

typedef unsigned char uchar;
typedef signed char schar;
typedef unsigned char boolean;
typedef uchar Char;
#define true 1
#define false 0
#define Static static

/*6:*/
/*:6*/
/*11:*/

#define dwa_do_8	((int)16*1024*1024)
#define memmax          3000000
#define memmin          0
#define bufsize         5000
#define errorline       72
#define halferrorline   42
#define maxprintline    79
#define stacksize       200
#define maxinopen       6
#define fontmax         75
#define fontmemsize     200000
#define paramsize       60
#define nestsize        40
/*
#define maxstrings      300000
#define stringvacancies  8000
#define poolsize        3200000
*/
#define savesize        600
#define triesize        131000
#define trieopsize      5000
#define filenamesize    240

#define banner          "This is TeX, Version 3.14159"

#define maxhalfword     655350000L
#define emptyflag       maxhalfword

#define memtop          3000000
#define pageinshead     (memtop-charnodesize+1)
#define contribhead     (pageinshead-charnodesize)
#define pagehead        (contribhead-charnodesize)
#define temphead        (pagehead-charnodesize)
#define holdhead        (temphead-charnodesize)
#define adjusthead      (holdhead-charnodesize)
#define active          (adjusthead-charnodesize-charnodesize)
#define lastactive      active
#define alignhead       (active-charnodesize)
#define endspan         (alignhead-charnodesize)
#define omittemplate    (endspan-charnodesize)
#define nulllist        (omittemplate-charnodesize)
#define ligtrick        (nulllist-charnodesize)
#define garbage         (ligtrick)

#define backuphead      (ligtrick-charnodesize)

#define himemstatmin    (backuphead)


#define varcode         28672
/*
#define cstokenflag     4095
*/
#define cstokenflag     (dwa_do_8*16-1)

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
#define hashsize        210000
#define hashprime       171553
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
#define fontidbase      (frozennullfont)
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


#define leftbracetoken  (1*dwa_do_8)
#define leftbracelimit  (2*dwa_do_8)
#define rightbracetoken  (2*dwa_do_8)
#define rightbracelimit  (3*dwa_do_8)
#define mathshifttoken  (3*dwa_do_8)
#define tabtoken        (4*dwa_do_8)
#define outparamtoken   (5*dwa_do_8)
#define spacetoken      (10*dwa_do_8 + 32)
#define lettertoken     (11*dwa_do_8)
#define othertoken      (12*dwa_do_8)
#define matchtoken      (13*dwa_do_8)
#define endmatchtoken   (14*dwa_do_8)

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
#if 0
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
#endif
#define movepast        13
#define finrule         14
#define nextp           15
#define exactly         0
#define additional      1
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

#define noadsize        (4*charnodesize)
#define radicalnoadsize  (5*charnodesize)
#define fractionnoadsize  (6*charnodesize)
#define accentnoadsize  (5*charnodesize)

#define fractionnoad    (radicalnoad + 1)

#define undernoad       (fractionnoad + 1)
#define overnoad        (undernoad + 1)
#define accentnoad      (overnoad + 1)

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

#define nullfont        0

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
typedef unsigned short quarterword;

typedef int halfword;

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

typedef int pointer;

typedef union memoryword {
  long int_;
  glueratio gr;
  twohalves hh;
  fourquarters qqqq;
  long sc;
} memoryword;

struct my_mem { 
	char is_char_node;
	memoryword mm;
};
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
  quarterword tok_type;
  pointer tok_list, tok_loc, tok_name, tok_param;
} instaterecord;

/*:300*/
/*594:
typedef short dviindex;
:594*/
typedef int triepointer;
/*925:*/
typedef short hyphpointer;

/*:925*/

