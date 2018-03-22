{4:}{9:}{$C-,A+,D-}{_DEBUG}{$C+,D+}{_ENDDEBUG}{:9}program TEX;label{6:}
startofTEX,endofTEX,finalend;{:6}const{11:}memmax=30000;memmin=0;
bufsize=500;errorline=72;halferrorline=42;maxprintline=79;stacksize=200;
maxinopen=6;fontmax=75;fontmemsize=20000;paramsize=60;nestsize=40;
maxstrings=3000;stringvacancies=8000;poolsize=32000;savesize=600;
triesize=8000;trieopsize=500;dvibufsize=800;filenamesize=40;
banner='This is TeX, Version 3.14159';maxhalfword=65535;
emptyflag=maxhalfword;memtop=30000;pageinshead=memtop;
contribhead=memtop-1;pagehead=memtop-2;temphead=memtop-3;
holdhead=memtop-4;adjusthead=memtop-5;active=memtop-7;lastactive=active;
alignhead=memtop-8;endspan=memtop-9;omittemplate=memtop-10;
nulllist=memtop-11;ligtrick=memtop-12;garbage=memtop-12;
backuphead=memtop-13;himemstatmin=memtop-13;varcode=7*4096;
cstokenflag=4095;maxdimen=1073741823;nullflag=-1073741824;
infinity=2147483647;defaultcode=1073741824;awfulbad=1073741823;
boxflag=1073741824;ignoredepth=-65536000;unity=65536;two=2*65536;
membot=0;fontbase=0;hashsize=2100;hashprime=1777;hyphsize=307;empty=0;
firsttextchar=0;lasttextchar=255;nullcode=0;carriagereturn=13;
invalidcode=127;noprint=16;termonly=17;logonly=18;termandlog=19;
pseudo=20;newstring=21;maxselector=21;batchmode=0;nonstopmode=1;
scrollmode=2;errorstopmode=3;spotless=0;warningissued=1;
errormessageissued=2;fatalerrorstop=3;infbad=10000;minquarterword=0;
maxquarterword=255;hlistnode=0;boxnodesize=7;widthoffset=1;
depthoffset=2;heightoffset=3;listoffset=5;normal=0;stretching=1;
shrinking=2;glueoffset=6;vlistnode=1;rulenode=2;rulenodesize=4;
insnode=3;insnodesize=5;marknode=4;smallnodesize=2;adjustnode=5;
ligaturenode=6;discnode=7;whatsitnode=8;mathnode=9;before=0;after=1;
gluenode=10;condmathglue=98;muglue=99;aleaders=100;cleaders=101;
xleaders=102;gluespecsize=4;fil=1;fill=2;filll=3;kernnode=11;explicit=1;
acckern=2;penaltynode=12;infpenalty=infbad;ejectpenalty=-infpenalty;
unsetnode=13;himemstatusage=14;escape=0;relax=0;leftbrace=1;
rightbrace=2;mathshift=3;tabmark=4;carret=5;outparam=5;macparam=6;
supmark=7;submark=8;ignore=9;endv=9;spacer=10;letter=11;otherchar=12;
activechar=13;parend=13;match=13;comment=14;endmatch=14;stop=14;
invalidchar=15;delimnum=15;maxcharcode=15;charnum=16;mathcharnum=17;
mark=18;xray=19;makebox=20;hmove=21;vmove=22;unhbox=23;unvbox=24;
removeitem=25;hskip=26;vskip=27;mskip=28;kern=29;mkern=30;leadership=31;
halign=32;valign=33;noalign=34;vrule=35;hrule=36;insert=37;vadjust=38;
ignorespaces=39;afterassignment=40;aftergroup=41;breakpenalty=42;
startpar=43;italcorr=44;accent=45;mathaccent=46;discretionary=47;
eqno=48;leftright=49;mathcomp=50;limitswitch=51;above=52;mathstyle=53;
mathchoice=54;nonscript=55;vcenter=56;caseshift=57;message=58;
extension=59;instream=60;begingroup=61;endgroup=62;omit=63;exspace=64;
noboundary=65;radical=66;endcsname=67;mininternal=68;chargiven=68;
mathgiven=69;lastitem=70;maxnonprefixedcommand=70;toksregister=71;
assigntoks=72;assignint=73;assigndimen=74;assignglue=75;assignmuglue=76;
assignfontdimen=77;assignfontint=78;setaux=79;setprevgraf=80;
setpagedimen=81;setpageint=82;setboxdimen=83;setshape=84;defcode=85;
deffamily=86;setfont=87;deffont=88;register=89;maxinternal=89;
advance=90;multiply=91;divide=92;prefix=93;let=94;shorthanddef=95;
readtocs=96;def=97;setbox=98;hyphdata=99;setinteraction=100;
maxcommand=100;undefinedcs=maxcommand+1;expandafter=maxcommand+2;
noexpand=maxcommand+3;input=maxcommand+4;iftest=maxcommand+5;
fiorelse=maxcommand+6;csname=maxcommand+7;convert=maxcommand+8;
the=maxcommand+9;topbotmark=maxcommand+10;call=maxcommand+11;
longcall=maxcommand+12;outercall=maxcommand+13;
longoutercall=maxcommand+14;endtemplate=maxcommand+15;
dontexpand=maxcommand+16;glueref=maxcommand+17;shaperef=maxcommand+18;
boxref=maxcommand+19;data=maxcommand+20;vmode=1;
hmode=vmode+maxcommand+1;mmode=hmode+maxcommand+1;
levelzero=minquarterword;levelone=levelzero+1;activebase=1;
singlebase=activebase+256;nullcs=singlebase+256;hashbase=nullcs+1;
frozencontrolsequence=hashbase+hashsize;
frozenprotection=frozencontrolsequence;frozencr=frozencontrolsequence+1;
frozenendgroup=frozencontrolsequence+2;
frozenright=frozencontrolsequence+3;frozenfi=frozencontrolsequence+4;
frozenendtemplate=frozencontrolsequence+5;
frozenendv=frozencontrolsequence+6;frozenrelax=frozencontrolsequence+7;
endwrite=frozencontrolsequence+8;
frozendontexpand=frozencontrolsequence+9;
frozennullfont=frozencontrolsequence+10;
fontidbase=frozennullfont-fontbase;
undefinedcontrolsequence=frozennullfont+257;
gluebase=undefinedcontrolsequence+1;lineskipcode=0;baselineskipcode=1;
parskipcode=2;abovedisplayskipcode=3;belowdisplayskipcode=4;
abovedisplayshortskipcode=5;belowdisplayshortskipcode=6;leftskipcode=7;
rightskipcode=8;topskipcode=9;splittopskipcode=10;tabskipcode=11;
spaceskipcode=12;xspaceskipcode=13;parfillskipcode=14;thinmuskipcode=15;
medmuskipcode=16;thickmuskipcode=17;gluepars=18;
skipbase=gluebase+gluepars;muskipbase=skipbase+256;
localbase=muskipbase+256;parshapeloc=localbase;
outputroutineloc=localbase+1;everyparloc=localbase+2;
everymathloc=localbase+3;everydisplayloc=localbase+4;
everyhboxloc=localbase+5;everyvboxloc=localbase+6;
everyjobloc=localbase+7;everycrloc=localbase+8;errhelploc=localbase+9;
toksbase=localbase+10;boxbase=toksbase+256;curfontloc=boxbase+256;
mathfontbase=curfontloc+1;catcodebase=mathfontbase+48;
lccodebase=catcodebase+256;uccodebase=lccodebase+256;
sfcodebase=uccodebase+256;mathcodebase=sfcodebase+256;
intbase=mathcodebase+256;pretolerancecode=0;tolerancecode=1;
linepenaltycode=2;hyphenpenaltycode=3;exhyphenpenaltycode=4;
clubpenaltycode=5;widowpenaltycode=6;displaywidowpenaltycode=7;
brokenpenaltycode=8;binoppenaltycode=9;relpenaltycode=10;
predisplaypenaltycode=11;postdisplaypenaltycode=12;
interlinepenaltycode=13;doublehyphendemeritscode=14;
finalhyphendemeritscode=15;adjdemeritscode=16;magcode=17;
delimiterfactorcode=18;loosenesscode=19;timecode=20;daycode=21;
monthcode=22;yearcode=23;showboxbreadthcode=24;showboxdepthcode=25;
hbadnesscode=26;vbadnesscode=27;pausingcode=28;tracingonlinecode=29;
tracingmacroscode=30;tracingstatscode=31;tracingparagraphscode=32;
tracingpagescode=33;tracingoutputcode=34;tracinglostcharscode=35;
tracingcommandscode=36;tracingrestorescode=37;uchyphcode=38;
outputpenaltycode=39;maxdeadcyclescode=40;hangaftercode=41;
floatingpenaltycode=42;globaldefscode=43;curfamcode=44;
escapecharcode=45;defaulthyphencharcode=46;defaultskewcharcode=47;
endlinecharcode=48;newlinecharcode=49;languagecode=50;
lefthyphenmincode=51;righthyphenmincode=52;holdinginsertscode=53;
errorcontextlinescode=54;intpars=55;countbase=intbase+intpars;
delcodebase=countbase+256;dimenbase=delcodebase+256;parindentcode=0;
mathsurroundcode=1;lineskiplimitcode=2;hsizecode=3;vsizecode=4;
maxdepthcode=5;splitmaxdepthcode=6;boxmaxdepthcode=7;hfuzzcode=8;
vfuzzcode=9;delimitershortfallcode=10;nulldelimiterspacecode=11;
scriptspacecode=12;predisplaysizecode=13;displaywidthcode=14;
displayindentcode=15;overfullrulecode=16;hangindentcode=17;
hoffsetcode=18;voffsetcode=19;emergencystretchcode=20;dimenpars=21;
scaledbase=dimenbase+dimenpars;eqtbsize=scaledbase+255;
restoreoldvalue=0;restorezero=1;inserttoken=2;levelboundary=3;
bottomlevel=0;simplegroup=1;hboxgroup=2;adjustedhboxgroup=3;vboxgroup=4;
vtopgroup=5;aligngroup=6;noaligngroup=7;outputgroup=8;mathgroup=9;
discgroup=10;insertgroup=11;vcentergroup=12;mathchoicegroup=13;
semisimplegroup=14;mathshiftgroup=15;mathleftgroup=16;maxgroupcode=16;
leftbracetoken=256;leftbracelimit=512;rightbracetoken=512;
rightbracelimit=768;mathshifttoken=768;tabtoken=1024;outparamtoken=1280;
spacetoken=2592;lettertoken=2816;othertoken=3072;matchtoken=3328;
endmatchtoken=3584;midline=1;skipblanks=2+maxcharcode;
newline=3+maxcharcode+maxcharcode;skipping=1;defining=2;matching=3;
aligning=4;absorbing=5;tokenlist=0;parameter=0;utemplate=1;vtemplate=2;
backedup=3;inserted=4;macro=5;outputtext=6;everypartext=7;
everymathtext=8;everydisplaytext=9;everyhboxtext=10;everyvboxtext=11;
everyjobtext=12;everycrtext=13;marktext=14;writetext=15;switch=25;
startcs=26;noexpandflag=257;topmarkcode=0;firstmarkcode=1;botmarkcode=2;
splitfirstmarkcode=3;splitbotmarkcode=4;intval=0;dimenval=1;glueval=2;
muval=3;identval=4;tokval=5;inputlinenocode=glueval+1;
badnesscode=glueval+2;octaltoken=othertoken+39;hextoken=othertoken+34;
alphatoken=othertoken+96;pointtoken=othertoken+46;
continentalpointtoken=othertoken+44;zerotoken=othertoken+48;
Atoken=lettertoken+65;otherAtoken=othertoken+65;attachfraction=88;
attachsign=89;defaultrule=26214;numbercode=0;romannumeralcode=1;
stringcode=2;meaningcode=3;fontnamecode=4;jobnamecode=5;closed=2;
justopen=1;ifcharcode=0;ifcatcode=1;ifintcode=2;ifdimcode=3;ifoddcode=4;
ifvmodecode=5;ifhmodecode=6;ifmmodecode=7;ifinnercode=8;ifvoidcode=9;
ifhboxcode=10;ifvboxcode=11;ifxcode=12;ifeofcode=13;iftruecode=14;
iffalsecode=15;ifcasecode=16;ifnodesize=2;ifcode=1;ficode=2;elsecode=3;
orcode=4;formatdefaultlength=20;formatarealength=11;formatextlength=4;
formatextension=271;notag=0;ligtag=1;listtag=2;exttag=3;slantcode=1;
spacecode=2;spacestretchcode=3;spaceshrinkcode=4;xheightcode=5;
quadcode=6;extraspacecode=7;nonaddress=0;badtfm=11;setchar0=0;set1=128;
setrule=132;putrule=137;nop=138;bop=139;eop=140;push=141;pop=142;
right1=143;w0=147;w1=148;x0=152;x1=153;down1=157;y0=161;y1=162;z0=166;
z1=167;fntnum0=171;fnt1=235;xxx1=239;xxx4=242;fntdef1=243;pre=247;
post=248;postpost=249;idbyte=2;movementnodesize=3;yhere=1;zhere=2;
yzOK=3;yOK=4;zOK=5;dfixed=6;noneseen=0;yseen=6;zseen=12;movepast=13;
finrule=14;nextp=15;exactly=0;additional=1;noadsize=4;mathchar=1;
subbox=2;submlist=3;mathtextchar=4;ordnoad=unsetnode+3;opnoad=ordnoad+1;
binnoad=ordnoad+2;relnoad=ordnoad+3;opennoad=ordnoad+4;
closenoad=ordnoad+5;punctnoad=ordnoad+6;innernoad=ordnoad+7;limits=1;
nolimits=2;radicalnoad=innernoad+1;radicalnoadsize=5;
fractionnoad=radicalnoad+1;fractionnoadsize=6;undernoad=fractionnoad+1;
overnoad=undernoad+1;accentnoad=overnoad+1;accentnoadsize=5;
vcenternoad=accentnoad+1;leftnoad=vcenternoad+1;rightnoad=leftnoad+1;
stylenode=unsetnode+1;stylenodesize=3;displaystyle=0;textstyle=2;
scriptstyle=4;scriptscriptstyle=6;cramped=1;choicenode=unsetnode+2;
textsize=0;scriptsize=16;scriptscriptsize=32;totalmathsyparams=22;
totalmathexparams=13;donewithnoad=80;donewithnode=81;checkdimensions=82;
deleteq=83;alignstacknodesize=5;spancode=256;crcode=257;
crcrcode=crcode+1;spannodesize=2;tightfit=3;loosefit=1;veryloosefit=0;
decentfit=2;activenodesize=3;unhyphenated=0;hyphenated=1;
passivenodesize=2;deltanodesize=7;deltanode=2;deactivate=60;
updateheights=90;insertsonly=1;boxthere=2;pageinsnodesize=4;inserting=0;
splitup=1;contribute=80;bigswitch=60;appendnormalspace=120;filcode=0;
fillcode=1;sscode=2;filnegcode=3;skipcode=4;mskipcode=5;boxcode=0;
copycode=1;lastboxcode=2;vsplitcode=3;vtopcode=4;abovecode=0;overcode=1;
atopcode=2;delimitedcode=3;chardefcode=0;mathchardefcode=1;
countdefcode=2;dimendefcode=3;skipdefcode=4;muskipdefcode=5;
toksdefcode=6;showcode=0;showboxcode=1;showthecode=2;showlists=3;
badfmt=6666;breakpoint=888;writenodesize=2;opennodesize=3;opennode=0;
writenode=1;closenode=2;specialnode=3;languagenode=4;immediatecode=4;
setlanguagecode=5;endtemplatetoken=cstokenflag+frozenendtemplate;
kernbaseoffset=256*(128);zeroglue=membot;filglue=zeroglue+gluespecsize;
fillglue=filglue+gluespecsize;ssglue=fillglue+gluespecsize;
filnegglue=ssglue+gluespecsize;lomemstatmax=filnegglue+gluespecsize-1;
deplorable=100000;shipoutflag=boxflag+512;leaderflag=boxflag+513;
nullfont=fontbase;endwritetoken=cstokenflag+endwrite;
poolname='TeXformats:TEX.POOL                     ';{:11}type{18:}
ASCIIcode=0..255;{:18}{25:}eightbits=0..255;
alphafile=packed file of char;bytefile=packed file of eightbits;{:25}
{38:}poolpointer=0..poolsize;strnumber=0..maxstrings;
packedASCIIcode=0..255;{:38}{101:}scaled=integer;
nonnegativeinteger=0..2147483647;smallnumber=0..63;{:101}{109:}
glueratio=real;{:109}{113:}quarterword=minquarterword..maxquarterword;
halfword=0..maxhalfword;twochoices=1..2;fourchoices=1..4;
twohalves=packed record rh:halfword;case twochoices of 1:(lh:halfword);
2:(b0:quarterword;b1:quarterword);end;
fourquarters=packed record b0:quarterword;b1:quarterword;b2:quarterword;
b3:quarterword;end;manychoices=0..5;pointer=halfword;
memoryword=record case manychoices of 1:(int:integer);2:(gr:glueratio);
3:(hh:twohalves);4:(qqqq:fourquarters);5:(sc:integer);end;
wordfile=file of memoryword;{:113}{150:}glueord=normal..filll;{:150}
{212:}liststaterecord=record modefield:-mmode..mmode;
headfield,tailfield:pointer;pgfield,mlfield:integer;auxfield:memoryword;
end;{:212}{269:}groupcode=0..maxgroupcode;{:269}{300:}
instaterecord=record statefield,indexfield:quarterword;
startfield,locfield,limitfield,namefield:halfword;end;{:300}{548:}
internalfontnumber=fontbase..fontmax;fontindex=0..fontmemsize;{:548}
{594:}dviindex=0..dvibufsize;{:594}{920:}triepointer=0..triesize;{:920}
{925:}hyphpointer=0..hyphsize;{:925}var{13:}bad:integer;{Pseudozmienne}
mode:integer;head:integer;tail:integer;prevgraf:integer;aux:integer;
prevdepth:integer;spacefactor:integer;clang:integer;
incompleatnoad:integer;modeline:integer;topmark:integer;
firstmark:integer;botmark:integer;splitfirstmark:integer;
splitbotmark:integer;nonchar:integer;stopflag:integer;kernflag:integer;
defaultrulethickness:integer;bigopspacing1:integer;
bigopspacing2:integer;bigopspacing3:integer;bigopspacing4:integer;
bigopspacing5:integer;activeheight:array[1..6]of scaled;
trieroot:triepointer;actwidth:scaled;curheight:scaled;pagegoal:scaled;
pagetotal:scaled;pageshrink:scaled;pagedepth:scaled;curfile:alphafile;
state:quarterword;iindex:quarterword;tokentype:quarterword;
contribtail:pointer;start:halfword;loc:halfword;limit:halfword;
name:halfword;paramstart:halfword;parshapeptr:halfword;
outputroutine:halfword;everypar:halfword;everymath:halfword;
everydisplay:halfword;everyhbox:halfword;everyvbox:halfword;
everyjob:halfword;everycr:halfword;errhelp:halfword;curfont:halfword;
lineskip:integer;baselineskip:integer;parskip:integer;
abovedisplayskip:integer;belowdisplayskip:integer;
abovedisplayshortskip:integer;belowdisplayshortskip:integer;
leftskip:integer;rightskip:integer;topskip:integer;splittopskip:integer;
tabskip:integer;spaceskip:integer;xspaceskip:integer;
parfillskip:integer;thinmuskip:integer;medmuskip:integer;
thickmuskip:integer;pretolerance:integer;tolerance:integer;
linepenalty:integer;hyphenpenalty:integer;exhyphenpenalty:integer;
clubpenalty:integer;widowpenalty:integer;displaywidowpenalty:integer;
brokenpenalty:integer;binoppenalty:integer;relpenalty:integer;
predisplaypenalty:integer;postdisplaypenalty:integer;
interlinepenalty:integer;doublehyphendemerits:integer;
finalhyphendemerits:integer;adjdemerits:integer;mag:integer;
delimiterfactor:integer;looseness:integer;time:integer;day:integer;
month:integer;year:integer;showboxbreadth:integer;showboxdepth:integer;
hbadness:integer;vbadness:integer;pausing:integer;tracingonline:integer;
tracingmacros:integer;tracingstats:integer;tracingparagraphs:integer;
tracingpages:integer;tracingoutput:integer;tracinglostchars:integer;
tracingcommands:integer;tracingrestores:integer;uchyph:integer;
outputpenalty:integer;maxdeadcycles:integer;hangafter:integer;
floatingpenalty:integer;globaldefs:integer;curfam:integer;
escapechar:integer;defaulthyphenchar:integer;defaultskewchar:integer;
endlinechar:integer;newlinechar:integer;language:integer;
lefthyphenmin:integer;righthyphenmin:integer;holdinginserts:integer;
errorcontextlines:integer;parindent:integer;mathsurround:integer;
lineskiplimit:integer;hsize:integer;vsize:integer;maxdepth:integer;
splitmaxdepth:integer;boxmaxdepth:integer;hfuzz:integer;vfuzz:integer;
delimitershortfall:integer;nulldelimiterspace:integer;
scriptspace:integer;predisplaysize:integer;displaywidth:integer;
displayindent:integer;overfullrule:integer;hangindent:integer;
hoffset:integer;voffset:integer;emergencystretch:integer;
{Koniec pseudozmiennych}pppfmtfile:memoryword;{:13}{20:}
xord:array[char]of ASCIIcode;xchr:array[ASCIIcode]of char;{:20}{26:}
nameoffile:packed array[1..filenamesize]of char;
namelength:0..filenamesize;{:26}{30:}
buffer:array[0..bufsize]of ASCIIcode;first:0..bufsize;last:0..bufsize;
maxbufstack:0..bufsize;{:30}{32:}termin:alphafile;termout:alphafile;
{:32}{39:}strpool:packed array[poolpointer]of packedASCIIcode;
strstart:array[strnumber]of poolpointer;poolptr:poolpointer;
strptr:strnumber;initpoolptr:poolpointer;initstrptr:strnumber;{:39}{50:}
poolfile:alphafile;{:50}{54:}logfile:alphafile;selector:0..maxselector;
dig:array[0..22]of 0..15;tally:integer;termoffset:0..maxprintline;
fileoffset:0..maxprintline;trickbuf:array[0..errorline]of ASCIIcode;
trickcount:integer;firstcount:integer;{:54}{73:}
interaction:batchmode..errorstopmode;{:73}{76:}deletionsallowed:boolean;
setboxallowed:boolean;history:spotless..fatalerrorstop;
errorcount:-1..100;{:76}{79:}helpline:array[0..5]of strnumber;
helpptr:0..6;useerrhelp:boolean;{:79}{96:}interrupt:integer;
OKtointerrupt:boolean;{:96}{104:}aritherror:boolean;texremainder:scaled;
{:104}{115:}tempptr:pointer;{:115}{116:}
mem:array[memmin..memmax]of memoryword;lomemmax:pointer;
himemmin:pointer;{:116}{117:}varused,dynused:integer;{:117}{118:}
avail:pointer;memend:pointer;{:118}{124:}rover:pointer;{:124}{165:}
{_DEBUG}free:packed array[memmin..memmax]of boolean;
wasfree:packed array[memmin..memmax]of boolean;
wasmemend,waslomax,washimin:pointer;panicking:boolean;{_ENDDEBUG}{:165}
{173:}fontinshortdisplay:integer;{:173}{181:}depththreshold:integer;
breadthmax:integer;{:181}{213:}
nest:array[0..nestsize]of liststaterecord;nestptr:0..nestsize;
maxneststack:0..nestsize;curlist:liststaterecord;
shownmode:-mmode..mmode;{:213}{246:}oldsetting:0..maxselector;{:246}
{253:}eqtb:array[activebase..eqtbsize]of memoryword;
xeqlevel:array[intbase..eqtbsize]of quarterword;{:253}{256:}
hash:array[hashbase..undefinedcontrolsequence-1]of twohalves;
hashused:pointer;nonewcontrolsequence:boolean;cscount:integer;{:256}
{271:}savestack:array[0..savesize]of memoryword;saveptr:0..savesize;
maxsavestack:0..savesize;curlevel:quarterword;curgroup:groupcode;
curboundary:0..savesize;{:271}{286:}magset:integer;{:286}{297:}
curcmd:eightbits;curchr:halfword;curcs:pointer;curtok:halfword;{:297}
{301:}inputstack:array[0..stacksize]of instaterecord;
inputptr:0..stacksize;maxinstack:0..stacksize;curinput:instaterecord;
{:301}{304:}inopen:0..maxinopen;openparens:0..maxinopen;
inputfile:array[1..maxinopen]of alphafile;line:integer;
linestack:array[1..maxinopen]of integer;{:304}{305:}
scannerstatus:normal..absorbing;warningindex:pointer;defref:pointer;
{:305}{308:}paramstack:array[0..paramsize]of pointer;
paramptr:0..paramsize;maxparamstack:integer;{:308}{309:}
alignstate:integer;{:309}{310:}baseptr:0..stacksize;{:310}{333:}
parloc:pointer;partoken:halfword;{:333}{361:}forceeof:boolean;{:361}
{382:}curmark:array[topmarkcode..splitbotmarkcode]of pointer;{:382}
{387:}longstate:call..longoutercall;{:387}{388:}
pstack:array[0..8]of pointer;{:388}{410:}curval:integer;
curvallevel:intval..tokval;{:410}{438:}radix:smallnumber;{:438}{447:}
curorder:glueord;{:447}{480:}readfile:array[0..15]of alphafile;
readopen:array[0..16]of normal..closed;{:480}{489:}condptr:pointer;
iflimit:normal..orcode;curif:smallnumber;ifline:integer;{:489}{493:}
skipline:integer;{:493}{512:}curname:strnumber;curarea:strnumber;
curext:strnumber;{:512}{513:}areadelimiter:poolpointer;
extdelimiter:poolpointer;{:513}{520:}
TEXformatdefault:packed array[1..formatdefaultlength]of char;{:520}
{527:}nameinprogress:boolean;jobname:strnumber;logopened:boolean;{:527}
{532:}dvifile:bytefile;outputfilename:strnumber;logname:strnumber;{:532}
{539:}tfmfile:bytefile;{:539}{549:}
fontinfo:array[fontindex]of memoryword;fmemptr:fontindex;
fontptr:internalfontnumber;
fontcheck:array[internalfontnumber]of fourquarters;
fontsize:array[internalfontnumber]of scaled;
fontdsize:array[internalfontnumber]of scaled;
fontparams:array[internalfontnumber]of fontindex;
fontname:array[internalfontnumber]of strnumber;
fontarea:array[internalfontnumber]of strnumber;
fontbc:array[internalfontnumber]of eightbits;
fontec:array[internalfontnumber]of eightbits;
fontglue:array[internalfontnumber]of pointer;
fontused:array[internalfontnumber]of boolean;
hyphenchar:array[internalfontnumber]of integer;
skewchar:array[internalfontnumber]of integer;
bcharlabel:array[internalfontnumber]of fontindex;
fontbchar:array[internalfontnumber]of minquarterword..nonchar;
fontfalsebchar:array[internalfontnumber]of minquarterword..nonchar;
{:549}{550:}charbase:array[internalfontnumber]of integer;
widthbase:array[internalfontnumber]of integer;
heightbase:array[internalfontnumber]of integer;
depthbase:array[internalfontnumber]of integer;
italicbase:array[internalfontnumber]of integer;
ligkernbase:array[internalfontnumber]of integer;
kernbase:array[internalfontnumber]of integer;
extenbase:array[internalfontnumber]of integer;
parambase:array[internalfontnumber]of integer;{:550}{555:}
nullcharacter:fourquarters;{:555}{592:}totalpages:integer;maxv:scaled;
maxh:scaled;maxpush:integer;lastbop:integer;deadcycles:integer;
doingleaders:boolean;c,f:quarterword;ruleht,ruledp,rulewd:scaled;
g:pointer;lq,lr:integer;{:592}{595:}dvibuf:array[dviindex]of eightbits;
halfbuf:dviindex;dvilimit:dviindex;dviptr:dviindex;dvioffset:integer;
dvigone:integer;{:595}{605:}downptr,rightptr:pointer;{:605}{616:}
dvih,dviv:scaled;curh,curv:scaled;dvif:internalfontnumber;curs:integer;
{:616}{646:}totalstretch,totalshrink:array[glueord]of scaled;
lastbadness:integer;{:646}{647:}adjusttail:pointer;{:647}{661:}
packbeginline:integer;{:661}{684:}emptyfield:twohalves;
nulldelimiter:fourquarters;{:684}{719:}curmlist:pointer;
curstyle:smallnumber;cursize:smallnumber;curmu:scaled;
mlistpenalties:boolean;{:719}{724:}curf:internalfontnumber;
curc:quarterword;curi:fourquarters;{:724}{764:}magicoffset:integer;
{:764}{770:}curalign:pointer;curspan:pointer;curloop:pointer;
alignptr:pointer;curhead,curtail:pointer;{:770}{814:}justbox:pointer;
{:814}{821:}passive:pointer;printednode:pointer;passnumber:halfword;
{:821}{823:}activewidth:array[1..6]of scaled;
curactivewidth:array[1..6]of scaled;background:array[1..6]of scaled;
breakwidth:array[1..6]of scaled;{:823}{825:}noshrinkerroryet:boolean;
{:825}{828:}curp:pointer;secondpass:boolean;finalpass:boolean;
threshold:integer;{:828}{833:}
minimaldemerits:array[veryloosefit..tightfit]of integer;
minimumdemerits:integer;
bestplace:array[veryloosefit..tightfit]of pointer;
bestplline:array[veryloosefit..tightfit]of halfword;{:833}{839:}
discwidth:scaled;{:839}{847:}easyline:halfword;lastspecialline:halfword;
firstwidth:scaled;secondwidth:scaled;firstindent:scaled;
secondindent:scaled;{:847}{872:}bestbet:pointer;fewestdemerits:integer;
bestline:halfword;actuallooseness:integer;linediff:integer;{:872}{892:}
hc:array[0..65]of 0..256;hn:smallnumber;ha,hb:pointer;
hf:internalfontnumber;hu:array[0..63]of 0..256;hyfchar:integer;
curlang,initcurlang:ASCIIcode;lhyf,rhyf,initlhyf,initrhyf:integer;
hyfbchar:halfword;{:892}{900:}hyf:array[0..64]of 0..9;initlist:pointer;
initlig:boolean;initlft:boolean;{:900}{905:}hyphenpassed:smallnumber;
{:905}{907:}curl,curr:halfword;curq:pointer;ligstack:pointer;
ligaturepresent:boolean;lfthit,rthit:boolean;{:907}{921:}
trie:array[triepointer]of twohalves;
hyfdistance:array[1..trieopsize]of smallnumber;
hyfnum:array[1..trieopsize]of smallnumber;
hyfnext:array[1..trieopsize]of quarterword;
opstart:array[ASCIIcode]of 0..trieopsize;{:921}{926:}
hyphword:array[hyphpointer]of strnumber;
hyphlist:array[hyphpointer]of pointer;hyphcount:hyphpointer;{:926}{943:}
trieophash:array[-trieopsize..trieopsize]of 0..trieopsize;
trieused:array[ASCIIcode]of quarterword;
trieoplang:array[1..trieopsize]of ASCIIcode;
trieopval:array[1..trieopsize]of quarterword;trieopptr:0..trieopsize;
{:943}{947:}triec:packed array[triepointer]of packedASCIIcode;
trieo:packed array[triepointer]of quarterword;
triel:packed array[triepointer]of triepointer;
trier:packed array[triepointer]of triepointer;trieptr:triepointer;
triehash:packed array[triepointer]of triepointer;{:947}{950:}
trietaken:packed array[1..triesize]of boolean;
triemin:array[ASCIIcode]of triepointer;triemax:triepointer;
trienotready:boolean;{:950}{971:}bestheightplusdepth:scaled;{:971}{980:}
pagetail:pointer;pagecontents:empty..boxthere;pagemaxdepth:scaled;
bestpagebreak:pointer;leastpagecost:integer;bestsize:scaled;{:980}{982:}
pagesofar:array[0..7]of scaled;lastglue:pointer;lastpenalty:integer;
lastkern:scaled;insertpenalties:integer;{:982}{989:}
outputactive:boolean;{:989}{1032:}mainf:internalfontnumber;
maini:fourquarters;mainj:fourquarters;maink:fontindex;mainp:pointer;
mains:integer;bchar:halfword;falsebchar:halfword;cancelboundary:boolean;
insdisc:boolean;{:1032}{1074:}curbox:pointer;{:1074}{1266:}
aftertoken:halfword;{:1266}{1281:}longhelpseen:boolean;{:1281}{1299:}
formatident:strnumber;{:1299}{1305:}fmtfile:wordfile;{:1305}{1331:}
readyalready:integer;{:1331}{1342:}writefile:array[0..15]of alphafile;
writeopen:array[0..17]of boolean;{:1342}{1345:}writeloc:pointer;{:1345}
{Pseudo-funkcje}function foolink(x:integer):^integer;forward;
function fooinfo(x:integer):^integer;forward;
function charexists(x:integer):boolean;forward;
function ischarnode(x:integer):boolean;forward;procedure fooinit;
var aaa,jjj:integer;begin aaa:=1;
for jjj:=0 to 25 do aaa:=(3*aaa+15)mod 366;mode:=aaa;head:=aaa;
tail:=aaa;prevgraf:=aaa;aux:=aaa;prevdepth:=aaa;spacefactor:=aaa;
clang:=aaa;incompleatnoad:=aaa;modeline:=aaa;topmark:=aaa;
firstmark:=aaa;botmark:=aaa;splitfirstmark:=aaa;splitbotmark:=aaa;
nonchar:=aaa;stopflag:=aaa;kernflag:=aaa;defaultrulethickness:=aaa;
bigopspacing1:=aaa;bigopspacing2:=aaa;bigopspacing3:=aaa;
bigopspacing4:=aaa;bigopspacing5:=aaa;end;
function getstringsstarted:boolean;forward;
function tobar(char:integer):integer;forward;
function strprotector(x:integer):integer;forward;
function foocharinfo(x,y:integer):^fourquarters;forward;
function foocharwidth(x,y:integer):^integer;forward;
function foocharitalic(x,y:integer):^integer;forward;
function foocharheight(x,y:integer):^integer;forward;
function foochardepth(x,y:integer):^integer;forward;
function foocharkern(x,y:integer):^integer;forward;
function fooslant(x:integer):^integer;forward;
function foospace(x:integer):^integer;forward;
function foospacestretch(x:integer):^integer;forward;
function foospaceshrink(x:integer):^integer;forward;
function fooxheight(x:integer):^integer;forward;
function fooquad(x:integer):^integer;forward;
function fooextraspace(x:integer):^integer;forward;
function foomathxheight(x:integer):^integer;forward;
function foomathquad(x:integer):^integer;forward;
function foonum1(x:integer):^integer;forward;
function foonum2(x:integer):^integer;forward;
function foonum3(x:integer):^integer;forward;
function foodenom1(x:integer):^integer;forward;
function foodenom2(x:integer):^integer;forward;
function foosup1(x:integer):^integer;forward;
function foosup2(x:integer):^integer;forward;
function foosup3(x:integer):^integer;forward;
function foosub1(x:integer):^integer;forward;
function foosub2(x:integer):^integer;forward;
function foosupdrop(x:integer):^integer;forward;
function foosubdrop(x:integer):^integer;forward;
function foodelim1(x:integer):^integer;forward;
function foodelim2(x:integer):^integer;forward;
function fooaxisheight(x:integer):^integer;forward;
function foonodesize(x:integer):^integer;forward;
function foollink(x:integer):^integer;forward;
function foorlink(x:integer):^integer;forward;
function footype(x:integer):^integer;forward;
function foosubtype(x:integer):^integer;forward;
function foofont(x:integer):^integer;forward;
function foocharacter(x:integer):^integer;forward;
function foowidth(x:integer):^integer;forward;
function foodepth(x:integer):^integer;forward;
function fooheight(x:integer):^integer;forward;
function fooshiftamount(x:integer):^integer;forward;
function foolistptr(x:integer):^integer;forward;
function fooglueorder(x:integer):^integer;forward;
function foogluesign(x:integer):^integer;forward;
function fooglueset(x:integer):^integer;forward;
function foofloatcost(x:integer):^integer;forward;
function fooinsptr(x:integer):^integer;forward;
function foosplittopptr(x:integer):^integer;forward;
function foomarkptr(x:integer):^integer;forward;
function fooadjustptr(x:integer):^integer;forward;
function fooligptr(x:integer):^integer;forward;
function fooreplacecount(x:integer):^integer;forward;
function fooprebreak(x:integer):^integer;forward;
function foopostbreak(x:integer):^integer;forward;
function fooglueptr(x:integer):^integer;forward;
function fooleaderptr(x:integer):^integer;forward;
function foogluerefcount(x:integer):^integer;forward;
function foostretch(x:integer):^integer;forward;
function fooshrink(x:integer):^integer;forward;
function foostretchorder(x:integer):^integer;forward;
function fooshrinkorder(x:integer):^integer;forward;
function foopenalty(x:integer):^integer;forward;
function foogluestretch(x:integer):^integer;forward;
function fooglueshrink(x:integer):^integer;forward;
function foospancount(x:integer):^integer;forward;
function footokenrefcount(x:integer):^integer;forward;
function fooeqlevelfield(x:integer):^integer;forward;
function fooeqtypefield(x:integer):^integer;forward;
function fooequivfield(x:integer):^integer;forward;
function fooeqlevel(x:integer):^integer;forward;
function fooeqtype(x:integer):^integer;forward;
function fooequiv(x:integer):^integer;forward;
function fooskip(x:integer):^integer;forward;
function foomuskip(x:integer):^integer;forward;
function foogluepar(x:integer):^integer;forward;
function footoks(x:integer):^integer;forward;
function foobox(x:integer):^integer;forward;
function foofamfnt(x:integer):^integer;forward;
function foocatcode(x:integer):^integer;forward;
function foolccode(x:integer):^integer;forward;
function foouccode(x:integer):^integer;forward;
function foosfcode(x:integer):^integer;forward;
function foomathcode(x:integer):^integer;forward;
function foodelcode(x:integer):^integer;forward;
function foocount(x:integer):^integer;forward;
function foointpar(x:integer):^integer;forward;
function foodimen(x:integer):^integer;forward;
function foodimenpar(x:integer):^integer;forward;
function foonext(x:integer):^integer;forward;
function footext(x:integer):^integer;forward;
function foofontidtext(x:integer):^integer;forward;
function foosavetype(x:integer):^integer;forward;
function foosavelevel(x:integer):^integer;forward;
function foosaveindex(x:integer):^integer;forward;
function foolargechar(x:integer):^integer;forward;
function foolocation(x:integer):^integer;forward;
function fooheightdepth(x:integer):^integer;forward;
function foosaved(x:integer):^integer;forward;
function fooskipbyte(x:integer):^integer;forward;
function foonextchar(x:integer):^integer;forward;
function fooopbyte(x:integer):^integer;forward;
function foorembyte(x:integer):^integer;forward;
function fooexttop(x:integer):^integer;forward;
function fooextmid(x:integer):^integer;forward;
function fooextbot(x:integer):^integer;forward;
function fooextrep(x:integer):^integer;forward;
function foovpack(x:integer):^integer;forward;
function foonucleus(x:integer):^integer;forward;
function foosupscr(x:integer):^integer;forward;
function foosubscr(x:integer):^integer;forward;
function foomathtype(x:integer):^integer;forward;
function foofam(x:integer):^integer;forward;
function fooleftdelimiter(x:integer):^integer;forward;
function foorightdelimiter(x:integer):^integer;forward;
function foosmallfam(x:integer):^integer;forward;
function foosmallchar(x:integer):^integer;forward;
function foolargefam(x:integer):^integer;forward;
function foothickness(x:integer):^integer;forward;
function foonumerator(x:integer):^integer;forward;
function foodenominator(x:integer):^integer;forward;
function fooaccentchr(x:integer):^integer;forward;
function foodelimiter(x:integer):^integer;forward;
function foodisplaymlist(x:integer):^integer;forward;
function footextmlist(x:integer):^integer;forward;
function fooscriptmlist(x:integer):^integer;forward;
function fooscriptscriptmlist(x:integer):^integer;forward;
function foocrampedstyle(x:integer):^integer;forward;
function foosubstyle(x:integer):^integer;forward;
function foosupstyle(x:integer):^integer;forward;
function foonumstyle(x:integer):^integer;forward;
function foodenomstyle(x:integer):^integer;forward;
function fooupart(x:integer):^integer;forward;
function foovpart(x:integer):^integer;forward;
function fooextrainfo(x:integer):^integer;forward;
function foofitness(x:integer):^integer;forward;
function foobreaknode(x:integer):^integer;forward;
function foolinenumber(x:integer):^integer;forward;
function foototaldemerits(x:integer):^integer;forward;
function foocurbreak(x:integer):^integer;forward;
function fooprevbreak(x:integer):^integer;forward;
function fooserial(x:integer):^integer;forward;
function foonextbreak(x:integer):^integer;forward;
function footrielink(x:integer):^integer;forward;
function footriechar(x:integer):^integer;forward;
function footrieop(x:integer):^integer;forward;
function foobrokenptr(x:integer):^integer;forward;
function footrieback(x:integer):^integer;forward;
function foobrokenins(x:integer):^integer;forward;
function foolastinsptr(x:integer):^integer;forward;
function foobestinsptr(x:integer):^integer;forward;
function foomathex(x:integer):^integer;forward;
function foonewhlist(x:integer):^integer;forward;
function fooiflinefield(x:integer):^integer;forward;
function foowhatlang(x:integer):^integer;forward;
function foowhatlhm(x:integer):^integer;forward;
function foowhatrhm(x:integer):^integer;forward;
function foowritetokens(x:integer):^integer;forward;
function foowritestream(x:integer):^integer;forward;
function fooopenname(x:integer):^integer;forward;
function fooopenarea(x:integer):^integer;forward;
function fooopenext(x:integer):^integer;forward;{Koniec pseudofunkcji}
procedure initialize;var{19:}i:integer;{:19}{163:}k:integer;{:163}{927:}
z:hyphpointer;{:927}begin{8:}{23:}for i:=0 to 255 do xchr[i]:=char(i);
{:23}{24:}
for i:=firsttextchar to lasttextchar do xord[chr(i)]:=invalidcode;
for i:=128 to 255 do xord[xchr[i]]:=i;
for i:=0 to 126 do xord[xchr[i]]:=i;{:24}{74:}
interaction:=errorstopmode;{:74}{77:}deletionsallowed:=true;
setboxallowed:=true;errorcount:=0;{:77}{80:}helpptr:=0;
useerrhelp:=false;{:80}{97:}interrupt:=0;OKtointerrupt:=true;{:97}{166:}
{_DEBUG}wasmemend:=memmin;waslomax:=memmin;washimin:=memmax;
panicking:=false;{_ENDDEBUG}{:166}{215:}nestptr:=0;maxneststack:=0;
mode:=vmode;head:=contribhead;tail:=contribhead;prevdepth:=ignoredepth;
modeline:=0;prevgraf:=0;shownmode:=0;{991:}pagecontents:=empty;
pagetail:=pagehead;foolink(pagehead)^:=0;lastglue:=maxhalfword;
lastpenalty:=0;lastkern:=0;pagedepth:=0;pagemaxdepth:=0{:991};{:215}
{254:}for k:=intbase to eqtbsize do xeqlevel[k]:=levelone;{:254}{257:}
nonewcontrolsequence:=true;foonext(hashbase)^:=0;footext(hashbase)^:=0;
for k:=hashbase+1 to undefinedcontrolsequence-1 do hash[k]:=hash[
hashbase];{:257}{272:}saveptr:=0;curlevel:=levelone;
curgroup:=bottomlevel;curboundary:=0;maxsavestack:=0;{:272}{287:}
magset:=0;{:287}{383:}topmark:=0;firstmark:=0;botmark:=0;
splitfirstmark:=0;splitbotmark:=0;{:383}{439:}curval:=0;
curvallevel:=intval;radix:=0;curorder:=0;{:439}{481:}
for k:=0 to 16 do readopen[k]:=closed;{:481}{490:}condptr:=0;
iflimit:=normal;curif:=0;ifline:=0;{:490}{521:}
TEXformatdefault:='TeXformats:plain.fmt';{:521}{551:}
for k:=fontbase to fontmax do fontused[k]:=false;{:551}{556:}
nullcharacter.b0:=minquarterword;nullcharacter.b1:=minquarterword;
nullcharacter.b2:=minquarterword;nullcharacter.b3:=minquarterword;{:556}
{593:}totalpages:=0;maxv:=0;maxh:=0;maxpush:=0;lastbop:=-1;
doingleaders:=false;deadcycles:=0;curs:=-1;{:593}{596:}
halfbuf:=dvibufsize div 2;dvilimit:=dvibufsize;dviptr:=0;dvioffset:=0;
dvigone:=0;{:596}{606:}downptr:=0;rightptr:=0;{:606}{648:}adjusttail:=0;
lastbadness:=0;{:648}{662:}packbeginline:=0;{:662}{685:}
emptyfield.rh:=empty;emptyfield.lh:=0;nulldelimiter.b0:=0;
nulldelimiter.b1:=minquarterword;nulldelimiter.b2:=0;
nulldelimiter.b3:=minquarterword;{:685}{771:}alignptr:=0;curalign:=0;
curspan:=0;curloop:=0;curhead:=0;curtail:=0;{:771}{928:}
for z:=0 to hyphsize do begin hyphword[z]:=0;hyphlist[z]:=0;end;
hyphcount:=0;{:928}{990:}outputactive:=false;insertpenalties:=0;{:990}
{1033:}ligaturepresent:=false;cancelboundary:=false;lfthit:=false;
rthit:=false;insdisc:=false;{:1033}{1267:}aftertoken:=0;{:1267}{1282:}
longhelpseen:=false;{:1282}{1300:}formatident:=0;{:1300}{1343:}
for k:=0 to 17 do writeopen[k]:=false;{:1343}{164:}
for k:=membot+1 to lomemstatmax do mem[k].sc:=0;k:=membot;
while k<=lomemstatmax do begin foogluerefcount(k)^:=1;
foostretchorder(k)^:=normal;fooshrinkorder(k)^:=normal;
k:=k+gluespecsize;end;foostretch(filglue)^:=unity;
foostretchorder(filglue)^:=fil;foostretch(fillglue)^:=unity;
foostretchorder(fillglue)^:=fill;foostretch(ssglue)^:=unity;
foostretchorder(ssglue)^:=fil;fooshrink(ssglue)^:=unity;
fooshrinkorder(ssglue)^:=fil;foostretch(filnegglue)^:=-unity;
foostretchorder(filnegglue)^:=fil;rover:=lomemstatmax+1;
foolink(rover)^:=emptyflag;foonodesize(rover)^:=1000;
foollink(rover)^:=rover;foorlink(rover)^:=rover;lomemmax:=rover+1000;
foolink(lomemmax)^:=0;fooinfo(lomemmax)^:=0;
for k:=himemstatmin to memtop do mem[k]:=mem[lomemmax];{790:}
fooinfo(omittemplate)^:=endtemplatetoken;{:790}{797:}
foolink(endspan)^:=maxquarterword+1;fooinfo(endspan)^:=0;{:797}{820:}
footype(lastactive)^:=hyphenated;
foolinenumber(lastactive)^:=maxhalfword;foosubtype(lastactive)^:=0;
{:820}{981:}foosubtype(pageinshead)^:=255+minquarterword;
footype(pageinshead)^:=splitup;foolink(pageinshead)^:=pageinshead;{:981}
{988:}footype(pagehead)^:=gluenode;foosubtype(pagehead)^:=normal;{:988};
avail:=0;memend:=memtop;himemmin:=himemstatmin;
varused:=lomemstatmax+1-membot;dynused:=himemstatusage;{:164}{222:}
fooeqtype(undefinedcontrolsequence)^:=undefinedcs;
fooequiv(undefinedcontrolsequence)^:=0;
fooeqlevel(undefinedcontrolsequence)^:=levelzero;
for k:=activebase to undefinedcontrolsequence-1 do eqtb[k]:=eqtb[
undefinedcontrolsequence];{:222}{228:}fooequiv(gluebase)^:=zeroglue;
fooeqlevel(gluebase)^:=levelone;fooeqtype(gluebase)^:=glueref;
for k:=gluebase+1 to localbase-1 do eqtb[k]:=eqtb[gluebase];
foogluerefcount(zeroglue)^:=foogluerefcount(zeroglue)^+localbase-
gluebase;{:228}{232:}parshapeptr:=0;fooeqtype(parshapeloc)^:=shaperef;
fooeqlevel(parshapeloc)^:=levelone;
for k:=outputroutineloc to toksbase+255 do eqtb[k]:=eqtb[
undefinedcontrolsequence];foobox(0)^:=0;fooeqtype(boxbase)^:=boxref;
fooeqlevel(boxbase)^:=levelone;
for k:=boxbase+1 to boxbase+255 do eqtb[k]:=eqtb[boxbase];
curfont:=nullfont;fooeqtype(curfontloc)^:=data;
fooeqlevel(curfontloc)^:=levelone;
for k:=mathfontbase to mathfontbase+47 do eqtb[k]:=eqtb[curfontloc];
fooequiv(catcodebase)^:=0;fooeqtype(catcodebase)^:=data;
fooeqlevel(catcodebase)^:=levelone;
for k:=catcodebase+1 to intbase-1 do eqtb[k]:=eqtb[catcodebase];
for k:=0 to 255 do begin foocatcode(k)^:=otherchar;foomathcode(k)^:=k+0;
foosfcode(k)^:=1000;end;foocatcode(carriagereturn)^:=carret;
foocatcode(tobar(' '))^:=spacer;foocatcode(tobar('\'))^:=escape;
foocatcode(tobar('%'))^:=comment;foocatcode(invalidcode)^:=invalidchar;
foocatcode(nullcode)^:=ignore;
for k:=tobar('0')to tobar('9')do foomathcode(k)^:=k+varcode+0;
for k:=tobar('A')to tobar('Z')do begin foocatcode(k)^:=letter;
foocatcode(k+tobar('a')-tobar('A'))^:=letter;
foomathcode(k)^:=k+varcode+256;
foomathcode(k+tobar('a')-tobar('A'))^:=k+tobar('a')-tobar('A')+varcode
+256;foolccode(k)^:=k+tobar('a')-tobar('A');
foolccode(k+tobar('a')-tobar('A'))^:=k+tobar('a')-tobar('A');
foouccode(k)^:=k;foouccode(k+tobar('a')-tobar('A'))^:=k;
foosfcode(k)^:=999;end;{:232}{240:}
for k:=intbase to delcodebase-1 do eqtb[k].int:=0;mag:=1000;
tolerance:=10000;hangafter:=1;maxdeadcycles:=25;escapechar:=tobar('\');
endlinechar:=carriagereturn;for k:=0 to 255 do foodelcode(k)^:=-1;
foodelcode(tobar('.'))^:=0;{:240}{250:}
for k:=dimenbase to eqtbsize do eqtb[k].sc:=0;{:250}{258:}
hashused:=frozencontrolsequence;cscount:=0;
fooeqtype(frozendontexpand)^:=dontexpand;
footext(frozendontexpand)^:=strprotector(513);{:258}{552:}
fontptr:=nullfont;fmemptr:=7;fontname[nullfont]:=strprotector(803);
fontarea[nullfont]:=strprotector(266);hyphenchar[nullfont]:=tobar('-');
skewchar[nullfont]:=-1;bcharlabel[nullfont]:=nonaddress;
fontbchar[nullfont]:=nonchar;fontfalsebchar[nullfont]:=nonchar;
fontbc[nullfont]:=1;fontec[nullfont]:=0;fontsize[nullfont]:=0;
fontdsize[nullfont]:=0;charbase[nullfont]:=0;widthbase[nullfont]:=0;
heightbase[nullfont]:=0;depthbase[nullfont]:=0;italicbase[nullfont]:=0;
ligkernbase[nullfont]:=0;kernbase[nullfont]:=0;extenbase[nullfont]:=0;
fontglue[nullfont]:=0;fontparams[nullfont]:=7;parambase[nullfont]:=-1;
for k:=0 to 6 do fontinfo[k].sc:=0;{:552}{946:}
for k:=-trieopsize to trieopsize do trieophash[k]:=0;
for k:=0 to 255 do trieused[k]:=minquarterword;trieopptr:=0;{:946}{951:}
trienotready:=true;trieroot:=0;triec[0]:=0;trieptr:=0;{:951}{1216:}
footext(frozenprotection)^:=strprotector(1189);{:1216}{1301:}
formatident:=strprotector(1256);{:1301}{1369:}
footext(endwrite)^:=strprotector(1295);fooeqlevel(endwrite)^:=levelone;
fooeqtype(endwrite)^:=outercall;fooequiv(endwrite)^:=0;{:1369}{:8}end;
{57:}procedure println;
begin case selector of termandlog:begin writeln(termout);
writeln(logfile);termoffset:=0;fileoffset:=0;end;
logonly:begin writeln(logfile);fileoffset:=0;end;
termonly:begin writeln(termout);termoffset:=0;end;
noprint,pseudo,newstring:;otherwise writeln(writefile[selector])end;end;
{:57}{58:}procedure printchar(s:ASCIIcode);label exit;begin if{244:}
s=newlinechar{:244}then if selector<pseudo then begin println;goto exit;
end;case selector of termandlog:begin write(termout,xchr[s]);
write(logfile,xchr[s]);termoffset:=termoffset+1;
fileoffset:=fileoffset+1;
if termoffset=maxprintline then begin writeln(termout);termoffset:=0;
end;if fileoffset=maxprintline then begin writeln(logfile);
fileoffset:=0;end;end;logonly:begin write(logfile,xchr[s]);
fileoffset:=fileoffset+1;if fileoffset=maxprintline then println;end;
termonly:begin write(termout,xchr[s]);termoffset:=termoffset+1;
if termoffset=maxprintline then println;end;noprint:;
pseudo:if tally<trickcount then trickbuf[tally mod errorline]:=s;
newstring:begin if poolptr<poolsize then appendchar(s);end;
otherwise write(writefile[selector],xchr[s])end;tally:=tally+1;exit:end;
{:58}{59:}procedure print(s:integer);label exit;var j:poolpointer;
nl:integer;
begin if s>=strptr then s:=strprotector(274)else if s<256 then if s<0
then s:=strprotector(274)else begin if selector>pseudo then begin
printchar(s);goto exit;end;if({244:}s=newlinechar{:244}
)then if selector<pseudo then begin println;goto exit;end;
nl:=newlinechar;newlinechar:=-1;j:=strstart[s];
while j<strstart[s+1]do begin printchar(strpool[j]);j:=j+1;end;
newlinechar:=nl;goto exit;end;j:=strstart[s];
while j<strstart[s+1]do begin printchar(strpool[j]);j:=j+1;end;exit:end;
{:59}{60:}procedure slowprint(s:integer);var j:poolpointer;
begin if(s>=strptr)or(s<256)then print(s)else begin j:=strstart[s];
while j<strstart[s+1]do begin print(strpool[j]);j:=j+1;end;end;end;{:60}
{62:}procedure printnl(s:strnumber);
begin if((termoffset>0)and(odd(selector)))or((fileoffset>0)and(selector
>=logonly))then println;print(s);end;{:62}{63:}
procedure printesc(s:strnumber);var c:integer;begin{243:}
c:=escapechar{:243};if c>=0 then if c<256 then print(c);slowprint(s);
end;{:63}{64:}procedure printthedigs(k:eightbits);
begin while k>0 do begin k:=k-1;
if dig[k]<10 then printchar(tobar('0')+dig[k])else printchar(tobar('A')
-10+dig[k]);end;end;{:64}{65:}procedure printint(n:integer);var k:0..23;
m:integer;begin k:=0;if n<0 then begin printchar(tobar('-'));
if n>-100000000 then n:=-n else begin m:=-1-n;n:=m div 10;
m:=(m mod 10)+1;k:=1;if m<10 then dig[0]:=m else begin dig[0]:=0;n:=n+1;
end;end;end;repeat dig[k]:=n mod 10;n:=n div 10;k:=k+1;until n=0;
printthedigs(k);end;{:65}{262:}procedure printcs(p:integer);
begin if p<hashbase then if p>=singlebase then if p=nullcs then begin
printesc(strprotector(515));printesc(strprotector(516));
end else begin printesc(p-singlebase);
if foocatcode(p-singlebase)^=letter then printchar(tobar(' '));
end else if p<activebase then printesc(strprotector(517))else print(p-
activebase)else if p>=undefinedcontrolsequence then printesc(
strprotector(517))else if(footext(p)^<0)or(footext(p)^>=strptr)then
printesc(strprotector(518))else begin printesc(footext(p)^);
printchar(tobar(' '));end;end;{:262}{263:}procedure sprintcs(p:pointer);
begin if p<hashbase then if p<singlebase then print(p-activebase)else if
p<nullcs then printesc(p-singlebase)else begin printesc(strprotector(515
));printesc(strprotector(516));end else printesc(footext(p)^);end;{:263}
{518:}procedure printfilename(n,a,e:integer);begin slowprint(a);
slowprint(n);slowprint(e);end;{:518}{699:}
procedure printsize(s:integer);
begin if s=0 then printesc(strprotector(423))else if s=scriptsize then
printesc(strprotector(424))else printesc(strprotector(425));end;{:699}
{1355:}procedure printwritewhatsit(s:strnumber;p:pointer);
begin printesc(s);
if foowritestream(p)^<16 then printint(foowritestream(p)^)else if
foowritestream(p)^=16 then printchar(tobar('*'))else printchar(tobar('-'
));end;{:1355}{78:}procedure normalizeselector;forward;
procedure gettoken;forward;procedure terminput;forward;
procedure showcontext;forward;procedure beginfilereading;forward;
procedure openlogfile;forward;procedure closefilesandterminate;forward;
procedure clearforerrorprompt;forward;procedure giveerrhelp;forward;
{_DEBUG}procedure debughelp;forward;{_ENDDEBUG}{:78}{81:}
procedure jumpout;begin goto endofTEX;end;{:81}{82:}procedure error;
label continue,exit;var c:ASCIIcode;s1,s2,s3,s4:integer;
begin if history<errormessageissued then history:=errormessageissued;
printchar(tobar('.'));showcontext;if interaction=errorstopmode then{83:}
while true do begin continue:clearforerrorprompt;begin;
print(strprotector(278));terminput;end;if last=first then goto exit;
c:=buffer[first];if c>=tobar('a')then c:=c+tobar('A')-tobar('a');{84:}
case c of tobar('0'),tobar('1'),tobar('2'),tobar('3'),tobar('4'),tobar(
'5'),tobar('6'),tobar('7'),tobar('8'),tobar('9'):if deletionsallowed
then{88:}begin s1:=curtok;s2:=curcmd;s3:=curchr;s4:=alignstate;
alignstate:=1000000;OKtointerrupt:=false;
if(last>first+1)and(buffer[first+1]>=tobar('0'))and(buffer[first+1]<=
tobar('9'))then c:=c*10+buffer[first+1]-tobar('0')*11 else c:=c-tobar(
'0');while c>0 do begin gettoken;c:=c-1;end;curtok:=s1;curcmd:=s2;
curchr:=s3;alignstate:=s4;OKtointerrupt:=true;begin helpptr:=2;
helpline[1]:=strprotector(293);helpline[0]:=strprotector(294);end;
showcontext;goto continue;end{:88};{_DEBUG}tobar('D'):begin debughelp;
goto continue;end;{_ENDDEBUG}
tobar('E'):if baseptr>0 then begin printnl(strprotector(279));
slowprint(inputstack[baseptr].namefield);print(strprotector(280));
printint(line);interaction:=scrollmode;jumpout;end;tobar('H'):{89:}
begin if useerrhelp then begin giveerrhelp;useerrhelp:=false;
end else begin if helpptr=0 then begin helpptr:=2;
helpline[1]:=strprotector(295);helpline[0]:=strprotector(296);end;
repeat helpptr:=helpptr-1;print(helpline[helpptr]);println;
until helpptr=0;end;begin helpptr:=4;helpline[3]:=strprotector(297);
helpline[2]:=strprotector(296);helpline[1]:=strprotector(298);
helpline[0]:=strprotector(299);end;goto continue;end{:89};
tobar('I'):{87:}begin beginfilereading;
if last>first+1 then begin loc:=first+1;buffer[first]:=tobar(' ');
end else begin begin;print(strprotector(292));terminput;end;loc:=first;
end;first:=last;curinput.limitfield:=last-1;goto exit;end{:87};
tobar('Q'),tobar('R'),tobar('S'):{86:}begin errorcount:=0;
interaction:=batchmode+c-tobar('Q');print(strprotector(287));
case c of tobar('Q'):begin printesc(strprotector(288));
selector:=selector-1;end;tobar('R'):printesc(strprotector(289));
tobar('S'):printesc(strprotector(290));end;print(strprotector(291));
println;fflush(termout);goto exit;end{:86};
tobar('X'):begin interaction:=scrollmode;jumpout;end;otherwise end;{85:}
begin print(strprotector(281));printnl(strprotector(282));
printnl(strprotector(283));if baseptr>0 then print(strprotector(284));
if deletionsallowed then printnl(strprotector(285));
printnl(strprotector(286));end{:85}{:84};end{:83};
errorcount:=errorcount+1;
if errorcount=100 then begin printnl(strprotector(277));
history:=fatalerrorstop;jumpout;end;{90:}
if interaction>batchmode then selector:=selector-1;
if useerrhelp then begin println;giveerrhelp;
end else while helpptr>0 do begin helpptr:=helpptr-1;
printnl(helpline[helpptr]);end;println;
if interaction>batchmode then selector:=selector+1;println{:90};
exit:end;{:82}{93:}procedure fatalerror(s:strnumber);
begin normalizeselector;begin if interaction=errorstopmode then;
printnl(258);print(strprotector(301));end;begin helpptr:=1;
helpline[0]:=s;end;
begin if interaction=errorstopmode then interaction:=scrollmode;
if logopened then error;{_DEBUG}if interaction>batchmode then debughelp;
{_ENDDEBUG}history:=fatalerrorstop;jumpout;end;end;{:93}{94:}
procedure overflow(s:strnumber;n:integer);begin normalizeselector;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(302));end;print(s);printchar(tobar('='));printint(n);
printchar(tobar(']'));begin helpptr:=2;helpline[1]:=strprotector(303);
helpline[0]:=strprotector(304);end;
begin if interaction=errorstopmode then interaction:=scrollmode;
if logopened then error;{_DEBUG}if interaction>batchmode then debughelp;
{_ENDDEBUG}history:=fatalerrorstop;jumpout;end;end;{:94}{95:}
procedure confusion(s:strnumber);begin normalizeselector;
if history<errormessageissued then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(305));end;print(s);
printchar(tobar(')'));begin helpptr:=1;helpline[0]:=strprotector(306);
end;end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(307));end;begin helpptr:=2;
helpline[1]:=strprotector(308);helpline[0]:=strprotector(309);end;end;
begin if interaction=errorstopmode then interaction:=scrollmode;
if logopened then error;{_DEBUG}if interaction>batchmode then debughelp;
{_ENDDEBUG}history:=fatalerrorstop;jumpout;end;end;{:95}{:4}{27:}
function aopenin(var f:alphafile):boolean;forward;
function aopenout(var f:alphafile):boolean;forward;
function bopenin(var f:bytefile):boolean;forward;
function bopenout(var f:bytefile):boolean;forward;
function wopenin(var f:wordfile):boolean;forward;
function wopenout(var f:wordfile):boolean;forward;{:27}{28:}
procedure aclose(var f:alphafile);begin close(f);end;
procedure bclose(var f:bytefile);begin close(f);end;
procedure wclose(var f:wordfile);begin close(f);end;{:28}{31:}
function inputln(var f:alphafile;bypasseoln:boolean):boolean;
var lastnonblank:0..bufsize;
begin if bypasseoln then if not eof(f)then get(f);last:=first;
if eof(f)then inputln:=false else begin lastnonblank:=first;
while not eoln(f)do begin if last>=maxbufstack then begin maxbufstack:=
last+1;if maxbufstack=bufsize then{35:}
if formatident=0 then begin writeln(termout,'Buffer size exceeded!');
goto finalend;end else begin curinput.locfield:=first;
curinput.limitfield:=last-1;overflow(strprotector(272),bufsize);end{:35}
;end;buffer[last]:=xord[f^];get(f);last:=last+1;
if buffer[last-1]<>tobar(' ')then lastnonblank:=last;end;
last:=lastnonblank;inputln:=true;end;end;{:31}{37:}
function initterminal:boolean;label exit;begin topenin;
if initinc(1)then begin loc:=first;initterminal:=true;goto exit;end;
while true do begin;write(termout,'**');fflush(termout);
if not inputln(termin,true)then begin writeln(termout);
write(termout,'! End of file on the terminal... why?');
initterminal:=false;goto exit;end;loc:=first;
while(loc<last)and(buffer[loc]=tobar(' '))do loc:=loc+1;
if loc<last then begin initterminal:=true;goto exit;end;
writeln(termout,'Please type the name of your input file.');end;
exit:end;{:37}{43:}function makestring:strnumber;
begin if strptr=maxstrings then overflow(strprotector(273),maxstrings-
initstrptr);strptr:=strptr+1;strstart[strptr]:=poolptr;
makestring:=strptr-1;end;{:43}{45:}function streqbuf(s:strnumber;
k:integer):boolean;label notfound;var j:poolpointer;result:boolean;
begin j:=strstart[s];
while j<strstart[s+1]do begin if strpool[j]<>buffer[k]then begin result
:=false;goto notfound;end;j:=j+1;k:=k+1;end;result:=true;
notfound:streqbuf:=result;end;{:45}{46:}
function streqstr(s,t:strnumber):boolean;label notfound;
var j,k:poolpointer;result:boolean;begin result:=false;
if flength(s)<>flength(t)then goto notfound;j:=strstart[s];
k:=strstart[t];
while j<strstart[s+1]do begin if strpool[j]<>strpool[k]then goto
notfound;j:=j+1;k:=k+1;end;result:=true;notfound:streqstr:=result;end;
{:46}{47:}{function foogetstringsstarted:boolean;label done,exit;
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
getstringsstarted:=false;goto exit;end[:51];exit:end;}{:47}{66:}
procedure printtwo(n:integer);begin n:=abs(n)mod 100;
printchar(tobar('0')+(n div 10));printchar(tobar('0')+(n mod 10));end;
{:66}{67:}procedure printhex(n:integer);var k:0..22;begin k:=0;
printchar(tobar('"'));repeat dig[k]:=n mod 16;n:=n div 16;k:=k+1;
until n=0;printthedigs(k);end;{:67}{69:}
procedure printromanint(n:integer);label exit;var j,k:poolpointer;
u,v:nonnegativeinteger;begin j:=strstart[strprotector(275)];v:=1000;
while true do begin while n>=v do begin printchar(strpool[j]);n:=n-v;
end;if n<=0 then goto exit;k:=j+2;u:=v div(strpool[k-1]-tobar('0'));
if strpool[k-1]=tobar('2')then begin k:=k+2;
u:=u div(strpool[k-1]-tobar('0'));end;
if n+u>=v then begin printchar(strpool[k]);n:=n+u;end else begin j:=j+2;
v:=v div(strpool[j-1]-tobar('0'));end;end;exit:end;{:69}{70:}
procedure printcurrentstring;var j:poolpointer;
begin j:=strstart[strptr];
while j<poolptr do begin printchar(strpool[j]);j:=j+1;end;end;{:70}{71:}
procedure terminput;var k:0..bufsize;begin fflush(termout);
if not inputln(termin,true)then fatalerror(strprotector(276));
termoffset:=0;selector:=selector-1;
if last<>first then for k:=first to last-1 do print(buffer[k]);println;
selector:=selector+1;end;{:71}{91:}procedure interror(n:integer);
begin print(strprotector(300));printint(n);printchar(tobar(')'));error;
end;{:91}{92:}procedure normalizeselector;
begin if logopened then selector:=termandlog else selector:=termonly;
if jobname=0 then openlogfile;
if interaction=batchmode then selector:=selector-1;end;{:92}{98:}
procedure pauseforinstructions;
begin if OKtointerrupt then begin interaction:=errorstopmode;
if(selector=logonly)or(selector=noprint)then selector:=selector+1;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(310));end;begin helpptr:=3;
helpline[2]:=strprotector(311);helpline[1]:=strprotector(312);
helpline[0]:=strprotector(313);end;deletionsallowed:=false;error;
deletionsallowed:=true;interrupt:=0;end;end;{:98}{100:}
function half(x:integer):integer;
begin if odd(x)then half:=(x+1)div 2 else half:=x div 2;end;{:100}{102:}
function rounddecimals(k:smallnumber):scaled;var a:integer;begin a:=0;
while k>0 do begin k:=k-1;a:=(a+dig[k]*two)div 10;end;
rounddecimals:=(a+1)div 2;end;{:102}{103:}
procedure printscaled(s:scaled);var delta:scaled;
begin if s<0 then begin printchar(tobar('-'));s:=-s;end;
printint(s div unity);printchar(tobar('.'));s:=10*(s mod unity)+5;
delta:=10;repeat if delta>unity then s:=s-17232;
printchar(tobar('0')+(s div unity));s:=10*(s mod unity);delta:=delta*10;
until s<=delta;end;{:103}{105:}function multandadd(n:integer;
x,y,maxanswer:scaled):scaled;begin if n<0 then begin x:=-x;n:=-n;end;
if n=0 then multandadd:=y else if((x<=(maxanswer-y)div n)and(-x<=(
maxanswer+y)div n))then multandadd:=n*x+y else begin aritherror:=true;
multandadd:=0;end;end;{:105}{106:}function xovern(x:scaled;
n:integer):scaled;var negative:boolean;begin negative:=false;
if n=0 then begin aritherror:=true;xovern:=0;texremainder:=x;
end else begin if n<0 then begin x:=-x;n:=-n;negative:=true;end;
if x>=0 then begin xovern:=x div n;texremainder:=x mod n;
end else begin xovern:=-((-x)div n);texremainder:=-((-x)mod n);end;end;
if negative then texremainder:=-texremainder;end;{:106}{107:}
function xnoverd(x:scaled;n,d:integer):scaled;var positive:boolean;
t,u,v:nonnegativeinteger;
begin if x>=0 then positive:=true else begin x:=-x;positive:=false;end;
t:=(x mod 32768)*n;u:=(x div 32768)*n+(t div 32768);
v:=(u mod d)*32768+(t mod 32768);
if u div d>=32768 then aritherror:=true else u:=32768*(u div d)+(v div d
);if positive then begin xnoverd:=u;texremainder:=v mod d;
end else begin xnoverd:=-u;texremainder:=-(v mod d);end;end;{:107}{108:}
function badness(t,s:scaled):halfword;var r:integer;
begin if t=0 then badness:=0 else if s<=0 then badness:=infbad else
begin if t<=7230584 then r:=(t*297)div s else if s>=1663497 then r:=t
div(s div 297)else r:=t;
if r>1290 then badness:=infbad else badness:=(r*r*r+131072)div 262144;
end;end;{:108}{114:}{_DEBUG}procedure printword(w:memoryword);
begin printint(w.int);printchar(tobar(' '));printscaled(w.sc);
printchar(tobar(' '));printscaled(round(unity*w.gr));println;
printint(w.hh.lh);printchar(tobar('='));printint(w.hh.b0);
printchar(tobar(':'));printint(w.hh.b1);printchar(tobar(';'));
printint(w.hh.rh);printchar(tobar(' '));printint(w.qqqq.b0);
printchar(tobar(':'));printint(w.qqqq.b1);printchar(tobar(':'));
printint(w.qqqq.b2);printchar(tobar(':'));printint(w.qqqq.b3);end;
{_ENDDEBUG}{:114}{119:}{292:}procedure showtokenlist(p,q:integer;
l:integer);label exit;var m,c:integer;matchchr:ASCIIcode;n:ASCIIcode;
begin matchchr:=tobar('#');n:=tobar('0');tally:=0;
while(p<>0)and(tally<l)do begin if p=q then{320:}settrickcount{:320};
{293:}if(p<himemmin)or(p>memend)then begin printesc(strprotector(323));
goto exit;end;
if fooinfo(p)^>=cstokenflag then printcs(fooinfo(p)^-cstokenflag)else
begin m:=fooinfo(p)^div 256;c:=fooinfo(p)^mod 256;
if fooinfo(p)^<0 then printesc(strprotector(565))else{294:}
case m of leftbrace,rightbrace,mathshift,tabmark,supmark,submark,spacer,
letter,otherchar:print(c);macparam:begin print(c);print(c);end;
outparam:begin print(matchchr);
if c<=9 then printchar(c+tobar('0'))else begin printchar(tobar('!'));
goto exit;end;end;match:begin matchchr:=c;print(c);n:=n+1;printchar(n);
if n>tobar('9')then goto exit;end;endmatch:print(strprotector(566));
otherwise printesc(strprotector(565))end{:294};end{:293};p:=foolink(p)^;
end;if p<>0 then printesc(strprotector(564));exit:end;{:292}{306:}
procedure runaway;var p:pointer;
begin if scannerstatus>skipping then begin printnl(strprotector(579));
case scannerstatus of defining:begin print(strprotector(580));p:=defref;
end;matching:begin print(strprotector(581));p:=temphead;end;
aligning:begin print(strprotector(582));p:=holdhead;end;
absorbing:begin print(strprotector(583));p:=defref;end;end;
printchar(tobar('?'));println;showtokenlist(foolink(p)^,0,errorline-10);
end;end;{:306}{:119}{120:}function getavail:pointer;var p:pointer;
begin p:=avail;
if p<>0 then avail:=foolink(avail)^else if memend<memmax then begin
memend:=memend+1;p:=memend;end else begin himemmin:=himemmin-1;
p:=himemmin;if himemmin<=lomemmax then begin runaway;
overflow(strprotector(314),memmax+1-memmin);end;end;foolink(p)^:=0;
{_STAT}dynused:=dynused+1;{_ENDSTAT}getavail:=p;end;{:120}{123:}
procedure flushlist(p:pointer);var q,r:pointer;
begin if p<>0 then begin r:=p;repeat q:=r;r:=foolink(r)^;{_STAT}
dynused:=dynused-1;{_ENDSTAT}until r=0;foolink(q)^:=avail;avail:=p;end;
end;{:123}{125:}function getnode(s:integer):pointer;
label found,exit,restart;var p:pointer;q:pointer;r:integer;t:integer;
begin restart:p:=rover;repeat{127:}q:=p+foonodesize(p)^;
while isempty(q)do begin t:=foorlink(q)^;if q=rover then rover:=t;
foollink(t)^:=foollink(q)^;foorlink(foollink(q)^)^:=t;
q:=q+foonodesize(q)^;end;r:=q-s;if r>p+1 then{128:}
begin foonodesize(p)^:=r-p;rover:=p;goto found;end{:128};
if r=p then if foorlink(p)^<>p then{129:}begin rover:=foorlink(p)^;
t:=foollink(p)^;foollink(rover)^:=t;foorlink(t)^:=rover;goto found;
end{:129};foonodesize(p)^:=q-p{:127};p:=foorlink(p)^;until p=rover;
if s=1073741824 then begin getnode:=maxhalfword;goto exit;end;
if lomemmax+2<himemmin then if lomemmax+2<=membot+maxhalfword then{126:}
begin if himemmin-lomemmax>=1998 then t:=lomemmax+1000 else t:=lomemmax
+1+(himemmin-lomemmax)div 2;p:=foollink(rover)^;q:=lomemmax;
foorlink(p)^:=q;foollink(rover)^:=q;
if t>membot+maxhalfword then t:=membot+maxhalfword;foorlink(q)^:=rover;
foollink(q)^:=p;foolink(q)^:=emptyflag;foonodesize(q)^:=t-lomemmax;
lomemmax:=t;foolink(lomemmax)^:=0;fooinfo(lomemmax)^:=0;rover:=q;
goto restart;end{:126};overflow(strprotector(314),memmax+1-memmin);
found:foolink(r)^:=0;{_STAT}varused:=varused+s;{_ENDSTAT}getnode:=r;
exit:end;{:125}{130:}procedure freenode(p:pointer;s:halfword);
var q:pointer;begin foonodesize(p)^:=s;foolink(p)^:=emptyflag;
q:=foollink(rover)^;foollink(p)^:=q;foorlink(p)^:=rover;
foollink(rover)^:=p;foorlink(q)^:=p;{_STAT}varused:=varused-s;{_ENDSTAT}
end;{:130}{131:}procedure sortavail;var p,q,r:pointer;oldrover:pointer;
begin p:=getnode(1073741824);p:=foorlink(rover)^;
foorlink(rover)^:=maxhalfword;oldrover:=rover;while p<>oldrover do{132:}
if p<rover then begin q:=p;p:=foorlink(q)^;foorlink(q)^:=rover;rover:=q;
end else begin q:=rover;while foorlink(q)^<p do q:=foorlink(q)^;
r:=foorlink(p)^;foorlink(p)^:=foorlink(q)^;foorlink(q)^:=p;p:=r;
end{:132};p:=rover;
while foorlink(p)^<>maxhalfword do begin foollink(foorlink(p)^)^:=p;
p:=foorlink(p)^;end;foorlink(p)^:=rover;foollink(rover)^:=p;end;{:131}
{136:}function newnullbox:pointer;var p:pointer;
begin p:=getnode(boxnodesize);footype(p)^:=hlistnode;
foosubtype(p)^:=minquarterword;foowidth(p)^:=0;foodepth(p)^:=0;
fooheight(p)^:=0;fooshiftamount(p)^:=0;foolistptr(p)^:=0;
foogluesign(p)^:=normal;fooglueorder(p)^:=normal;fooglueset(p)^:=0.0;
newnullbox:=p;end;{:136}{139:}function newrule:pointer;var p:pointer;
begin p:=getnode(rulenodesize);footype(p)^:=rulenode;foosubtype(p)^:=0;
foowidth(p)^:=nullflag;foodepth(p)^:=nullflag;fooheight(p)^:=nullflag;
newrule:=p;end;{:139}{144:}function newligature(f,c:quarterword;
q:pointer):pointer;var p:pointer;begin p:=getnode(smallnodesize);
footype(p)^:=ligaturenode;foofont(ligchar(p))^:=f;
foocharacter(ligchar(p))^:=c;fooligptr(p)^:=q;foosubtype(p)^:=0;
newligature:=p;end;function newligitem(c:quarterword):pointer;
var p:pointer;begin p:=getnode(smallnodesize);foocharacter(p)^:=c;
fooligptr(p)^:=0;newligitem:=p;end;{:144}{145:}function newdisc:pointer;
var p:pointer;begin p:=getnode(smallnodesize);footype(p)^:=discnode;
fooreplacecount(p)^:=0;fooprebreak(p)^:=0;foopostbreak(p)^:=0;
newdisc:=p;end;{:145}{147:}function newmath(w:scaled;
s:smallnumber):pointer;var p:pointer;begin p:=getnode(smallnodesize);
footype(p)^:=mathnode;foosubtype(p)^:=s;foowidth(p)^:=w;newmath:=p;end;
{:147}{151:}function newspec(p:pointer):pointer;var q:pointer;
begin q:=getnode(gluespecsize);mem[q]:=mem[p];foogluerefcount(q)^:=0;
foowidth(q)^:=foowidth(p)^;foostretch(q)^:=foostretch(p)^;
fooshrink(q)^:=fooshrink(p)^;newspec:=q;end;{:151}{152:}
function newparamglue(n:smallnumber):pointer;var p:pointer;q:pointer;
begin p:=getnode(smallnodesize);footype(p)^:=gluenode;
foosubtype(p)^:=n+1;fooleaderptr(p)^:=0;q:={224:}foogluepar(n)^{:224};
fooglueptr(p)^:=q;foogluerefcount(q)^:=foogluerefcount(q)^+1;
newparamglue:=p;end;{:152}{153:}function newglue(q:pointer):pointer;
var p:pointer;begin p:=getnode(smallnodesize);footype(p)^:=gluenode;
foosubtype(p)^:=normal;fooleaderptr(p)^:=0;fooglueptr(p)^:=q;
foogluerefcount(q)^:=foogluerefcount(q)^+1;newglue:=p;end;{:153}{154:}
function newskipparam(n:smallnumber):pointer;var p:pointer;
begin tempptr:=newspec({224:}foogluepar(n)^{:224});p:=newglue(tempptr);
foogluerefcount(tempptr)^:=0;foosubtype(p)^:=n+1;newskipparam:=p;end;
{:154}{156:}function newkern(w:scaled):pointer;var p:pointer;
begin p:=getnode(smallnodesize);footype(p)^:=kernnode;
foosubtype(p)^:=normal;foowidth(p)^:=w;newkern:=p;end;{:156}{158:}
function newpenalty(m:integer):pointer;var p:pointer;
begin p:=getnode(smallnodesize);footype(p)^:=penaltynode;
foosubtype(p)^:=0;foopenalty(p)^:=m;newpenalty:=p;end;{:158}{167:}
{_DEBUG}procedure checkmem(printlocs:boolean);label done1,done2;
var p,q:pointer;clobbered:boolean;
begin for p:=memmin to lomemmax do free[p]:=false;
for p:=himemmin to memend do free[p]:=false;{168:}p:=avail;q:=0;
clobbered:=false;
while p<>0 do begin if(p>memend)or(p<himemmin)then clobbered:=true else
if free[p]then clobbered:=true;
if clobbered then begin printnl(strprotector(315));printint(q);
goto done1;end;free[p]:=true;q:=p;p:=foolink(q)^;end;done1:{:168};{169:}
p:=rover;q:=0;clobbered:=false;
repeat if(p>=lomemmax)or(p<memmin)then clobbered:=true else if(foorlink(
p)^>=lomemmax)or(foorlink(p)^<memmin)then clobbered:=true else if not(
isempty(p))or(foonodesize(p)^<2)or(p+foonodesize(p)^>lomemmax)or(
foollink(foorlink(p)^)^<>p)then clobbered:=true;
if clobbered then begin printnl(strprotector(316));printint(q);
goto done2;end;
for q:=p to p+foonodesize(p)^-1 do begin if free[q]then begin printnl(
strprotector(317));printint(q);goto done2;end;free[q]:=true;end;q:=p;
p:=foorlink(p)^;until p=rover;done2:{:169};{170:}p:=memmin;
while p<=lomemmax do begin if isempty(p)then begin printnl(strprotector(
318));printint(p);end;while(p<=lomemmax)and not free[p]do p:=p+1;
while(p<=lomemmax)and free[p]do p:=p+1;end{:170};if printlocs then{171:}
begin printnl(strprotector(319));
for p:=memmin to lomemmax do if not free[p]and((p>waslomax)or wasfree[p]
)then begin printchar(tobar(' '));printint(p);end;
for p:=himemmin to memend do if not free[p]and((p<washimin)or(p>
wasmemend)or wasfree[p])then begin printchar(tobar(' '));printint(p);
end;end{:171};for p:=memmin to lomemmax do wasfree[p]:=free[p];
for p:=himemmin to memend do wasfree[p]:=free[p];wasmemend:=memend;
waslomax:=lomemmax;washimin:=himemmin;end;{_ENDDEBUG}{:167}{172:}
{_DEBUG}procedure searchmem(p:pointer);var q:integer;
begin for q:=memmin to lomemmax do begin if foolink(q)^=p then begin
printnl(strprotector(320));printint(q);printchar(tobar(')'));end;
if fooinfo(q)^=p then begin printnl(strprotector(321));printint(q);
printchar(tobar(')'));end;end;
for q:=himemmin to memend do begin if foolink(q)^=p then begin printnl(
strprotector(320));printint(q);printchar(tobar(')'));end;
if fooinfo(q)^=p then begin printnl(strprotector(321));printint(q);
printchar(tobar(')'));end;end;{255:}
for q:=activebase to boxbase+255 do begin if fooequiv(q)^=p then begin
printnl(strprotector(512));printint(q);printchar(tobar(')'));end;
end{:255};{285:}
if saveptr>0 then for q:=0 to saveptr-1 do begin if fooequivfield(
savestack[q])^=p then begin printnl(strprotector(556));printint(q);
printchar(tobar(')'));end;end{:285};{933:}
for q:=0 to hyphsize do begin if hyphlist[q]=p then begin printnl(
strprotector(939));printint(q);printchar(tobar(')'));end;end{:933};end;
{_ENDDEBUG}{:172}{174:}procedure shortdisplay(p:integer);var n:integer;
begin while p>memmin do begin if ischarnode(p)then begin if p<=memend
then begin if foofont(p)^<>fontinshortdisplay then begin if(foofont(p)^<
fontbase)or(foofont(p)^>fontmax)then printchar(tobar('*'))else{267:}
printesc(foofontidtext(foofont(p)^)^){:267};printchar(tobar(' '));
fontinshortdisplay:=foofont(p)^;end;
print(foocharacter(p)^-minquarterword);end;end else{175:}
case footype(p)^of hlistnode,vlistnode,insnode,whatsitnode,marknode,
adjustnode,unsetnode:print(strprotector(322));
rulenode:printchar(tobar('|'));
gluenode:if fooglueptr(p)^<>zeroglue then printchar(tobar(' '));
mathnode:printchar(tobar('$'));ligaturenode:shortdisplay(fooligptr(p)^);
discnode:begin shortdisplay(fooprebreak(p)^);
shortdisplay(foopostbreak(p)^);n:=fooreplacecount(p)^;
while n>0 do begin if foolink(p)^<>0 then p:=foolink(p)^;n:=n-1;end;end;
otherwise end{:175};p:=foolink(p)^;end;end;{:174}{176:}
procedure printfontandchar(p:integer);
begin if p>memend then printesc(strprotector(323))else begin if(foofont(
p)^<fontbase)or(foofont(p)^>fontmax)then printchar(tobar('*'))else{267:}
printesc(foofontidtext(foofont(p)^)^){:267};printchar(tobar(' '));
print(foocharacter(p)^-minquarterword);end;end;
procedure printmark(p:integer);begin printchar(tobar('{'));
if(p<himemmin)or(p>memend)then printesc(strprotector(323))else
showtokenlist(foolink(p)^,0,maxprintline-10);printchar(tobar('}'));end;
procedure printruledimen(d:scaled);
begin if isrunning(d)then printchar(tobar('*'))else printscaled(d);end;
{:176}{177:}procedure printglue(d:scaled;order:integer;s:strnumber);
begin printscaled(d);
if(order<normal)or(order>filll)then print(strprotector(324))else if
order>normal then begin print(strprotector(325));
while order>fil do begin printchar(tobar('l'));order:=order-1;end;
end else if s<>0 then print(s);end;{:177}{178:}
procedure printspec(p:integer;s:strnumber);
begin if(p<memmin)or(p>=lomemmax)then printchar(tobar('*'))else begin
printscaled(foowidth(p)^);if s<>0 then print(s);
if foostretch(p)^<>0 then begin print(strprotector(270));
printglue(foostretch(p)^,foostretchorder(p)^,s);end;
if fooshrink(p)^<>0 then begin print(strprotector(326));
printglue(fooshrink(p)^,fooshrinkorder(p)^,s);end;end;end;{:178}{179:}
{691:}procedure printfamandchar(p:pointer);
begin printesc(strprotector(475));printint(foofam(p)^);
printchar(tobar(' '));print(foocharacter(p)^-minquarterword);end;
procedure printdelimiter(p:pointer);var a:integer;
begin a:=foosmallfam(p)^*256+foosmallchar(p)^-minquarterword;
a:=a*4096+foolargefam(p)^*256+foolargechar(p)^-minquarterword;
if a<0 then printint(a)else printhex(a);end;{:691}{692:}
procedure showinfo;forward;procedure printsubsidiarydata(p:pointer;
c:ASCIIcode);
begin if curlength>=depththreshold then begin if foomathtype(p)^<>empty
then print(strprotector(327));end else begin appendchar(c);tempptr:=p;
case foomathtype(p)^of mathchar:begin println;printcurrentstring;
printfamandchar(p);end;subbox:showinfo;
submlist:if fooinfo(p)^=0 then begin println;printcurrentstring;
print(strprotector(860));end else showinfo;otherwise end;flushchar;end;
end;{:692}{694:}procedure printstyle(c:integer);
begin case c div 2 of 0:printesc(strprotector(861));
1:printesc(strprotector(862));2:printesc(strprotector(863));
3:printesc(strprotector(864));otherwise print(strprotector(865))end;end;
{:694}{225:}procedure printskipparam(n:integer);
begin case n of lineskipcode:printesc(strprotector(388));
baselineskipcode:printesc(strprotector(389));
parskipcode:printesc(strprotector(390));
abovedisplayskipcode:printesc(strprotector(391));
belowdisplayskipcode:printesc(strprotector(392));
abovedisplayshortskipcode:printesc(strprotector(393));
belowdisplayshortskipcode:printesc(strprotector(394));
leftskipcode:printesc(strprotector(395));
rightskipcode:printesc(strprotector(396));
topskipcode:printesc(strprotector(397));
splittopskipcode:printesc(strprotector(398));
tabskipcode:printesc(strprotector(399));
spaceskipcode:printesc(strprotector(400));
xspaceskipcode:printesc(strprotector(401));
parfillskipcode:printesc(strprotector(402));
thinmuskipcode:printesc(strprotector(403));
medmuskipcode:printesc(strprotector(404));
thickmuskipcode:printesc(strprotector(405));
otherwise print(strprotector(406))end;end;{:225}{:179}{182:}
procedure shownodelist(p:integer);label exit;var n:integer;g:real;
begin if curlength>depththreshold then begin if p>0 then print(
strprotector(327));goto exit;end;n:=0;while p>memmin do begin println;
printcurrentstring;if p>memend then begin print(strprotector(328));
goto exit;end;n:=n+1;
if n>breadthmax then begin print(strprotector(329));goto exit;end;{183:}
if ischarnode(p)then printfontandchar(p)else case footype(p)^of
hlistnode,vlistnode,unsetnode:{184:}
begin if footype(p)^=hlistnode then printesc(tobar('h'))else if footype(
p)^=vlistnode then printesc(tobar('v'))else printesc(strprotector(331));
print(strprotector(332));printscaled(fooheight(p)^);
printchar(tobar('+'));printscaled(foodepth(p)^);
print(strprotector(333));printscaled(foowidth(p)^);
if footype(p)^=unsetnode then{185:}
begin if foospancount(p)^<>minquarterword then begin print(strprotector(
300));printint(foospancount(p)^-minquarterword+1);
print(strprotector(335));end;
if foogluestretch(p)^<>0 then begin print(strprotector(336));
printglue(foogluestretch(p)^,fooglueorder(p)^,0);end;
if fooglueshrink(p)^<>0 then begin print(strprotector(337));
printglue(fooglueshrink(p)^,foogluesign(p)^,0);end;end{:185}
else begin{186:}g:=fooglueset(p)^;
if(g<>0.0)and(foogluesign(p)^<>normal)then begin print(strprotector(338)
);if foogluesign(p)^=shrinking then print(strprotector(339));
if abs(mem[p+glueoffset].int)<1048576 then print(strprotector(340))else
if abs(g)>20000.0 then begin if g>0.0 then printchar(tobar('>'))else
print(strprotector(341));printglue(20000*unity,fooglueorder(p)^,0);
end else printglue(round(unity*g),fooglueorder(p)^,0);end{:186};
if fooshiftamount(p)^<>0 then begin print(strprotector(334));
printscaled(fooshiftamount(p)^);end;end;nodelistdisplay(foolistptr(p)^);
end{:184};rulenode:{187:}begin printesc(strprotector(342));
printruledimen(fooheight(p)^);printchar(tobar('+'));
printruledimen(foodepth(p)^);print(strprotector(333));
printruledimen(foowidth(p)^);end{:187};insnode:{188:}
begin printesc(strprotector(343));
printint(foosubtype(p)^-minquarterword);print(strprotector(344));
printscaled(fooheight(p)^);print(strprotector(345));
printspec(foosplittopptr(p)^,0);printchar(tobar(','));
printscaled(foodepth(p)^);print(strprotector(346));
printint(foofloatcost(p)^);nodelistdisplay(fooinsptr(p)^);end{:188};
whatsitnode:{1356:}
case foosubtype(p)^of opennode:begin printwritewhatsit(strprotector(1284
),p);printchar(tobar('='));
printfilename(fooopenname(p)^,fooopenarea(p)^,fooopenext(p)^);end;
writenode:begin printwritewhatsit(strprotector(603),p);
printmark(foowritetokens(p)^);end;
closenode:printwritewhatsit(strprotector(1285),p);
specialnode:begin printesc(strprotector(1286));
printmark(foowritetokens(p)^);end;
languagenode:begin printesc(strprotector(1288));
printint(foowhatlang(p)^);print(strprotector(1291));
printint(foowhatlhm(p)^);printchar(tobar(','));printint(foowhatrhm(p)^);
printchar(tobar(')'));end;otherwise print(strprotector(1292))end{:1356};
gluenode:{189:}if foosubtype(p)^>=aleaders then{190:}
begin printesc(strprotector(266));
if foosubtype(p)^=cleaders then printchar(tobar('c'))else if foosubtype(
p)^=xleaders then printchar(tobar('x'));print(strprotector(351));
printspec(fooglueptr(p)^,0);nodelistdisplay(fooleaderptr(p)^);end{:190}
else begin printesc(strprotector(347));
if foosubtype(p)^<>normal then begin printchar(tobar('('));
if foosubtype(p)^<condmathglue then printskipparam(foosubtype(p)^-1)else
if foosubtype(p)^=condmathglue then printesc(strprotector(348))else
printesc(strprotector(349));printchar(tobar(')'));end;
if foosubtype(p)^<>condmathglue then begin printchar(tobar(' '));
if foosubtype(p)^<condmathglue then printspec(fooglueptr(p)^,0)else
printspec(fooglueptr(p)^,strprotector(350));end;end{:189};
kernnode:{191:}
if foosubtype(p)^<>muglue then begin printesc(strprotector(352));
if foosubtype(p)^<>normal then printchar(tobar(' '));
printscaled(foowidth(p)^);
if foosubtype(p)^=acckern then print(strprotector(353));
end else begin printesc(strprotector(354));printscaled(foowidth(p)^);
print(strprotector(350));end{:191};mathnode:{192:}
begin printesc(strprotector(355));
if foosubtype(p)^=before then print(strprotector(356))else print(
strprotector(357));
if foowidth(p)^<>0 then begin print(strprotector(358));
printscaled(foowidth(p)^);end;end{:192};ligaturenode:{193:}
begin printfontandchar(ligchar(p));print(strprotector(359));
if foosubtype(p)^>1 then printchar(tobar('|'));
fontinshortdisplay:=foofont(ligchar(p))^;shortdisplay(fooligptr(p)^);
if odd(foosubtype(p)^)then printchar(tobar('|'));printchar(tobar(')'));
end{:193};penaltynode:{194:}begin printesc(strprotector(360));
printint(foopenalty(p)^);end{:194};discnode:{195:}
begin printesc(strprotector(361));
if fooreplacecount(p)^>0 then begin print(strprotector(362));
printint(fooreplacecount(p)^);end;nodelistdisplay(fooprebreak(p)^);
appendchar(tobar('|'));shownodelist(foopostbreak(p)^);flushchar;
end{:195};marknode:{196:}begin printesc(strprotector(363));
printmark(foomarkptr(p)^);end{:196};adjustnode:{197:}
begin printesc(strprotector(364));nodelistdisplay(fooadjustptr(p)^);
end{:197};{690:}stylenode:printstyle(foosubtype(p)^);choicenode:{695:}
begin printesc(strprotector(536));appendchar(tobar('D'));
shownodelist(foodisplaymlist(p)^);flushchar;appendchar(tobar('T'));
shownodelist(footextmlist(p)^);flushchar;appendchar(tobar('S'));
shownodelist(fooscriptmlist(p)^);flushchar;appendchar(tobar('s'));
shownodelist(fooscriptscriptmlist(p)^);flushchar;end{:695};
ordnoad,opnoad,binnoad,relnoad,opennoad,closenoad,punctnoad,innernoad,
radicalnoad,overnoad,undernoad,vcenternoad,accentnoad,leftnoad,rightnoad
:{696:}begin case footype(p)^of ordnoad:printesc(strprotector(866));
opnoad:printesc(strprotector(867));binnoad:printesc(strprotector(868));
relnoad:printesc(strprotector(869));
opennoad:printesc(strprotector(870));
closenoad:printesc(strprotector(871));
punctnoad:printesc(strprotector(872));
innernoad:printesc(strprotector(873));
overnoad:printesc(strprotector(874));
undernoad:printesc(strprotector(875));
vcenternoad:printesc(strprotector(550));
radicalnoad:begin printesc(strprotector(544));
printdelimiter(fooleftdelimiter(p)^);end;
accentnoad:begin printesc(strprotector(519));
printfamandchar(fooaccentchr(p)^);end;
leftnoad:begin printesc(strprotector(876));
printdelimiter(foonucleus(p)^);end;
rightnoad:begin printesc(strprotector(877));
printdelimiter(foonucleus(p)^);end;end;
if foosubtype(p)^<>normal then if foosubtype(p)^=limits then printesc(
strprotector(878))else printesc(strprotector(879));
if footype(p)^<leftnoad then printsubsidiarydata(foonucleus(p)^,tobar(
'.'));printsubsidiarydata(foosupscr(p)^,tobar('^'));
printsubsidiarydata(foosubscr(p)^,tobar('_'));end{:696};
fractionnoad:{697:}begin printesc(strprotector(880));
if foothickness(p)^=defaultcode then print(strprotector(881))else
printscaled(foothickness(p)^);
if(foosmallfam(fooleftdelimiter(p)^)^<>0)or(foosmallchar(
fooleftdelimiter(p)^)^<>minquarterword)or(foolargefam(fooleftdelimiter(p
)^)^<>0)or(foolargechar(fooleftdelimiter(p)^)^<>minquarterword)then
begin print(strprotector(882));printdelimiter(fooleftdelimiter(p)^);end;
if(foosmallfam(foorightdelimiter(p)^)^<>0)or(foosmallchar(
foorightdelimiter(p)^)^<>minquarterword)or(foolargefam(foorightdelimiter
(p)^)^<>0)or(foolargechar(foorightdelimiter(p)^)^<>minquarterword)then
begin print(strprotector(883));printdelimiter(foorightdelimiter(p)^);
end;printsubsidiarydata(foonumerator(p)^,tobar('\'));
printsubsidiarydata(foodenominator(p)^,tobar('/'));end{:697};{:690}
otherwise print(strprotector(330))end{:183};p:=foolink(p)^;end;exit:end;
{:182}{198:}procedure showbox(p:pointer);begin{236:}
depththreshold:=showboxdepth;breadthmax:=showboxbreadth{:236};
if breadthmax<=0 then breadthmax:=5;
if poolptr+depththreshold>=poolsize then depththreshold:=poolsize-
poolptr-1;shownodelist(p);println;end;{:198}{200:}
procedure deletetokenref(p:pointer);
begin if footokenrefcount(p)^=0 then flushlist(p)else footokenrefcount(p
)^:=footokenrefcount(p)^-1;end;{:200}{201:}
procedure deleteglueref(p:pointer);begin karmafastdeleteglueref(p)end;
{:201}{202:}procedure flushnodelist(p:pointer);label done;var q:pointer;
begin while p<>0 do begin q:=foolink(p)^;
if ischarnode(p)then freeavail(p)else begin case footype(p)^of hlistnode
,vlistnode,unsetnode:begin flushnodelist(foolistptr(p)^);
freenode(p,boxnodesize);goto done;end;
rulenode:begin freenode(p,rulenodesize);goto done;end;
insnode:begin flushnodelist(fooinsptr(p)^);
deleteglueref(foosplittopptr(p)^);freenode(p,insnodesize);goto done;end;
whatsitnode:{1358:}
begin case foosubtype(p)^of opennode:freenode(p,opennodesize);
writenode,specialnode:begin deletetokenref(foowritetokens(p)^);
freenode(p,writenodesize);goto done;end;
closenode,languagenode:freenode(p,smallnodesize);
otherwise confusion(strprotector(1294))end;goto done;end{:1358};
gluenode:begin begin karmafastdeleteglueref(fooglueptr(p)^)end;
if fooleaderptr(p)^<>0 then flushnodelist(fooleaderptr(p)^);end;
kernnode,mathnode,penaltynode:;
ligaturenode:flushnodelist(fooligptr(p)^);
marknode:deletetokenref(foomarkptr(p)^);
discnode:begin flushnodelist(fooprebreak(p)^);
flushnodelist(foopostbreak(p)^);end;
adjustnode:flushnodelist(fooadjustptr(p)^);{698:}
stylenode:begin freenode(p,stylenodesize);goto done;end;
choicenode:begin flushnodelist(foodisplaymlist(p)^);
flushnodelist(footextmlist(p)^);flushnodelist(fooscriptmlist(p)^);
flushnodelist(fooscriptscriptmlist(p)^);freenode(p,stylenodesize);
goto done;end;
ordnoad,opnoad,binnoad,relnoad,opennoad,closenoad,punctnoad,innernoad,
radicalnoad,overnoad,undernoad,vcenternoad,accentnoad:begin if
foomathtype(foonucleus(p)^)^>=subbox then flushnodelist(fooinfo(
foonucleus(p)^)^);
if foomathtype(foosupscr(p)^)^>=subbox then flushnodelist(fooinfo(
foosupscr(p)^)^);
if foomathtype(foosubscr(p)^)^>=subbox then flushnodelist(fooinfo(
foosubscr(p)^)^);
if footype(p)^=radicalnoad then freenode(p,radicalnoadsize)else if
footype(p)^=accentnoad then freenode(p,accentnoadsize)else freenode(p,
noadsize);goto done;end;leftnoad,rightnoad:begin freenode(p,noadsize);
goto done;end;
fractionnoad:begin flushnodelist(fooinfo(foonumerator(p)^)^);
flushnodelist(fooinfo(foodenominator(p)^)^);
freenode(p,fractionnoadsize);goto done;end;{:698}
otherwise confusion(strprotector(365))end;freenode(p,smallnodesize);
done:end;p:=q;end;end;{:202}{204:}
function copynodelist(p:pointer):pointer;var h:pointer;q:pointer;
r:pointer;words:0..5;begin h:=getavail;q:=h;while p<>0 do begin{205:}
words:=1;if ischarnode(p)then r:=getavail else{206:}
case footype(p)^of hlistnode,vlistnode,unsetnode:begin r:=getnode(
boxnodesize);mem[r+6]:=mem[p+6];mem[r+5]:=mem[p+5];
foolistptr(r)^:=copynodelist(foolistptr(p)^);words:=5;end;
rulenode:begin r:=getnode(rulenodesize);words:=rulenodesize;end;
insnode:begin r:=getnode(insnodesize);mem[r+4]:=mem[p+4];
addglueref(foosplittopptr(p)^);
fooinsptr(r)^:=copynodelist(fooinsptr(p)^);words:=insnodesize-1;end;
whatsitnode:{1357:}
case foosubtype(p)^of opennode:begin r:=getnode(opennodesize);
words:=opennodesize;end;
writenode,specialnode:begin r:=getnode(writenodesize);
addtokenref(foowritetokens(p)^);words:=writenodesize;end;
closenode,languagenode:begin r:=getnode(smallnodesize);
words:=smallnodesize;end;
otherwise confusion(strprotector(1293))end{:1357};
gluenode:begin r:=getnode(smallnodesize);addglueref(fooglueptr(p)^);
fooglueptr(r)^:=fooglueptr(p)^;
fooleaderptr(r)^:=copynodelist(fooleaderptr(p)^);end;
kernnode,mathnode,penaltynode:begin r:=getnode(smallnodesize);
words:=smallnodesize;end;ligaturenode:begin r:=getnode(smallnodesize);
mem[ligchar(r)]:=mem[ligchar(p)];
fooligptr(r)^:=copynodelist(fooligptr(p)^);end;
discnode:begin r:=getnode(smallnodesize);
fooprebreak(r)^:=copynodelist(fooprebreak(p)^);
foopostbreak(r)^:=copynodelist(foopostbreak(p)^);end;
marknode:begin r:=getnode(smallnodesize);addtokenref(foomarkptr(p)^);
words:=smallnodesize;end;adjustnode:begin r:=getnode(smallnodesize);
fooadjustptr(r)^:=copynodelist(fooadjustptr(p)^);end;
otherwise confusion(strprotector(366))end{:206};
while words>0 do begin words:=words-1;mem[r+words]:=mem[p+words];
end{:205};foolink(q)^:=r;q:=r;p:=foolink(p)^;end;foolink(q)^:=0;
q:=foolink(h)^;freeavail(h);copynodelist:=q;end;{:204}{211:}
procedure printmode(m:integer);
begin if m>0 then case m div(maxcommand+1)of 0:print(strprotector(367));
1:print(strprotector(368));2:print(strprotector(369));
end else if m=0 then print(strprotector(370))else case(-m)div(maxcommand
+1)of 0:print(strprotector(371));1:print(strprotector(372));
2:print(strprotector(355));end;print(strprotector(373));end;{:211}{216:}
procedure pushnest;
begin if nestptr>maxneststack then begin maxneststack:=nestptr;
if nestptr=nestsize then overflow(strprotector(374),nestsize);end;
nest[nestptr]:=curlist;nestptr:=nestptr+1;head:=getavail;tail:=head;
prevgraf:=0;modeline:=line;end;{:216}{217:}procedure popnest;
begin freeavail(head);nestptr:=nestptr-1;curlist:=nest[nestptr];end;
{:217}{218:}procedure printtotals;forward;procedure showactivities;
var p:0..nestsize;m:-mmode..mmode;a:memoryword;q,r:pointer;t:integer;
begin nest[nestptr]:=curlist;printnl(strprotector(266));println;
for p:=nestptr downto 0 do begin m:=nest[p].modefield;
a:=nest[p].auxfield;printnl(strprotector(375));printmode(m);
print(strprotector(376));printint(abs(nest[p].mlfield));
if m=hmode then if nest[p].pgfield<>8585216 then begin print(
strprotector(377));printint(nest[p].pgfield mod 65536);
print(strprotector(378));printint(nest[p].pgfield div 4194304);
printchar(tobar(','));printint((nest[p].pgfield div 65536)mod 64);
printchar(tobar(')'));end;
if nest[p].mlfield<0 then print(strprotector(379));
if p=0 then begin{986:}
if pagehead<>pagetail then begin printnl(strprotector(979));
if outputactive then print(strprotector(980));
showbox(foolink(pagehead)^);
if pagecontents>empty then begin printnl(strprotector(981));printtotals;
printnl(strprotector(982));printscaled(pagegoal);
r:=foolink(pageinshead)^;while r<>pageinshead do begin println;
printesc(strprotector(343));t:=foosubtype(r)^-minquarterword;
printint(t);print(strprotector(983));
t:=xovern(fooheight(r)^,1000)*foocount(t)^;printscaled(t);
if footype(r)^=splitup then begin q:=pagehead;t:=0;
repeat q:=foolink(q)^;
if(footype(q)^=insnode)and(foosubtype(q)^=foosubtype(r)^)then t:=t+1;
until q=foobrokenins(r)^;print(strprotector(984));printint(t);
print(strprotector(985));end;r:=foolink(r)^;end;end;end{:986};
if foolink(contribhead)^<>0 then printnl(strprotector(380));end;
showbox(foolink(nest[p].headfield)^);{219:}
case abs(m)div(maxcommand+1)of 0:begin printnl(strprotector(381));
if a.sc<=ignoredepth then print(strprotector(382))else printscaled(a.sc)
;if nest[p].pgfield<>0 then begin print(strprotector(383));
printint(nest[p].pgfield);print(strprotector(384));
if nest[p].pgfield<>1 then printchar(tobar('s'));end;end;
1:begin printnl(strprotector(385));printint(a.hh.lh);
if m>0 then if a.hh.rh>0 then begin print(strprotector(386));
printint(a.hh.rh);end;end;
2:if a.int<>0 then begin print(strprotector(387));showbox(a.int);end;
end{:219};end;end;{:218}{237:}procedure printparam(n:integer);
begin case n of pretolerancecode:printesc(strprotector(431));
tolerancecode:printesc(strprotector(432));
linepenaltycode:printesc(strprotector(433));
hyphenpenaltycode:printesc(strprotector(434));
exhyphenpenaltycode:printesc(strprotector(435));
clubpenaltycode:printesc(strprotector(436));
widowpenaltycode:printesc(strprotector(437));
displaywidowpenaltycode:printesc(strprotector(438));
brokenpenaltycode:printesc(strprotector(439));
binoppenaltycode:printesc(strprotector(440));
relpenaltycode:printesc(strprotector(441));
predisplaypenaltycode:printesc(strprotector(442));
postdisplaypenaltycode:printesc(strprotector(443));
interlinepenaltycode:printesc(strprotector(444));
doublehyphendemeritscode:printesc(strprotector(445));
finalhyphendemeritscode:printesc(strprotector(446));
adjdemeritscode:printesc(strprotector(447));
magcode:printesc(strprotector(448));
delimiterfactorcode:printesc(strprotector(449));
loosenesscode:printesc(strprotector(450));
timecode:printesc(strprotector(451));
daycode:printesc(strprotector(452));
monthcode:printesc(strprotector(453));
yearcode:printesc(strprotector(454));
showboxbreadthcode:printesc(strprotector(455));
showboxdepthcode:printesc(strprotector(456));
hbadnesscode:printesc(strprotector(457));
vbadnesscode:printesc(strprotector(458));
pausingcode:printesc(strprotector(459));
tracingonlinecode:printesc(strprotector(460));
tracingmacroscode:printesc(strprotector(461));
tracingstatscode:printesc(strprotector(462));
tracingparagraphscode:printesc(strprotector(463));
tracingpagescode:printesc(strprotector(464));
tracingoutputcode:printesc(strprotector(465));
tracinglostcharscode:printesc(strprotector(466));
tracingcommandscode:printesc(strprotector(467));
tracingrestorescode:printesc(strprotector(468));
uchyphcode:printesc(strprotector(469));
outputpenaltycode:printesc(strprotector(470));
maxdeadcyclescode:printesc(strprotector(471));
hangaftercode:printesc(strprotector(472));
floatingpenaltycode:printesc(strprotector(473));
globaldefscode:printesc(strprotector(474));
curfamcode:printesc(strprotector(475));
escapecharcode:printesc(strprotector(476));
defaulthyphencharcode:printesc(strprotector(477));
defaultskewcharcode:printesc(strprotector(478));
endlinecharcode:printesc(strprotector(479));
newlinecharcode:printesc(strprotector(480));
languagecode:printesc(strprotector(481));
lefthyphenmincode:printesc(strprotector(482));
righthyphenmincode:printesc(strprotector(483));
holdinginsertscode:printesc(strprotector(484));
errorcontextlinescode:printesc(strprotector(485));
otherwise print(strprotector(486))end;end;{:237}{241:}
procedure fixdateandtime;begin time:=12*60;day:=4;month:=7;year:=1776;
end;{:241}{245:}procedure begindiagnostic;begin oldsetting:=selector;
if(tracingonline<=0)and(selector=termandlog)then begin selector:=
selector-1;if history=spotless then history:=warningissued;end;end;
procedure enddiagnostic(blankline:boolean);
begin printnl(strprotector(266));if blankline then println;
selector:=oldsetting;end;{:245}{247:}
procedure printlengthparam(n:integer);
begin case n of parindentcode:printesc(strprotector(489));
mathsurroundcode:printesc(strprotector(490));
lineskiplimitcode:printesc(strprotector(491));
hsizecode:printesc(strprotector(492));
vsizecode:printesc(strprotector(493));
maxdepthcode:printesc(strprotector(494));
splitmaxdepthcode:printesc(strprotector(495));
boxmaxdepthcode:printesc(strprotector(496));
hfuzzcode:printesc(strprotector(497));
vfuzzcode:printesc(strprotector(498));
delimitershortfallcode:printesc(strprotector(499));
nulldelimiterspacecode:printesc(strprotector(500));
scriptspacecode:printesc(strprotector(501));
predisplaysizecode:printesc(strprotector(502));
displaywidthcode:printesc(strprotector(503));
displayindentcode:printesc(strprotector(504));
overfullrulecode:printesc(strprotector(505));
hangindentcode:printesc(strprotector(506));
hoffsetcode:printesc(strprotector(507));
voffsetcode:printesc(strprotector(508));
emergencystretchcode:printesc(strprotector(509));
otherwise print(strprotector(510))end;end;{:247}{252:}{298:}
procedure printcmdchr(cmd:quarterword;chrcode:halfword);
begin case cmd of leftbrace:chrcmd(strprotector(567));
rightbrace:chrcmd(strprotector(568));
mathshift:chrcmd(strprotector(569));macparam:chrcmd(strprotector(570));
supmark:chrcmd(strprotector(571));submark:chrcmd(strprotector(572));
endv:print(strprotector(573));spacer:chrcmd(strprotector(574));
letter:chrcmd(strprotector(575));otherchar:chrcmd(strprotector(576));
{227:}
assignglue,assignmuglue:if chrcode<skipbase then printskipparam(chrcode-
gluebase)else if chrcode<muskipbase then begin printesc(strprotector(407
));printint(chrcode-skipbase);
end else begin printesc(strprotector(408));printint(chrcode-muskipbase);
end;{:227}{231:}
assigntoks:if chrcode>=toksbase then begin printesc(strprotector(418));
printint(chrcode-toksbase);
end else case chrcode of outputroutineloc:printesc(strprotector(409));
everyparloc:printesc(strprotector(410));
everymathloc:printesc(strprotector(411));
everydisplayloc:printesc(strprotector(412));
everyhboxloc:printesc(strprotector(413));
everyvboxloc:printesc(strprotector(414));
everyjobloc:printesc(strprotector(415));
everycrloc:printesc(strprotector(416));
otherwise printesc(strprotector(417))end;{:231}{239:}
assignint:if chrcode<countbase then printparam(chrcode-intbase)else
begin printesc(strprotector(487));printint(chrcode-countbase);end;{:239}
{249:}assigndimen:if chrcode<scaledbase then printlengthparam(chrcode-
dimenbase)else begin printesc(strprotector(511));
printint(chrcode-scaledbase);end;{:249}{266:}
accent:printesc(strprotector(519));advance:printesc(strprotector(520));
afterassignment:printesc(strprotector(521));
aftergroup:printesc(strprotector(522));
assignfontdimen:printesc(strprotector(530));
begingroup:printesc(strprotector(523));
breakpenalty:printesc(strprotector(542));
charnum:printesc(strprotector(524));csname:printesc(strprotector(515));
deffont:printesc(strprotector(529));
delimnum:printesc(strprotector(525));divide:printesc(strprotector(526));
endcsname:printesc(strprotector(516));
endgroup:printesc(strprotector(527));exspace:printesc(tobar(' '));
expandafter:printesc(strprotector(528));
halign:printesc(strprotector(531));hrule:printesc(strprotector(532));
ignorespaces:printesc(strprotector(533));
insert:printesc(strprotector(343));italcorr:printesc(tobar('/'));
mark:printesc(strprotector(363));mathaccent:printesc(strprotector(534));
mathcharnum:printesc(strprotector(535));
mathchoice:printesc(strprotector(536));
multiply:printesc(strprotector(537));
noalign:printesc(strprotector(538));
noboundary:printesc(strprotector(539));
noexpand:printesc(strprotector(540));
nonscript:printesc(strprotector(348));omit:printesc(strprotector(541));
radical:printesc(strprotector(544));
readtocs:printesc(strprotector(545));relax:printesc(strprotector(546));
setbox:printesc(strprotector(547));
setprevgraf:printesc(strprotector(543));
setshape:printesc(strprotector(419));the:printesc(strprotector(548));
toksregister:printesc(strprotector(418));
vadjust:printesc(strprotector(364));valign:printesc(strprotector(549));
vcenter:printesc(strprotector(550));vrule:printesc(strprotector(551));
{:266}{335:}parend:printesc(strprotector(606));{:335}{377:}
input:if chrcode=0 then printesc(strprotector(638))else printesc(
strprotector(639));{:377}{385:}
topbotmark:case chrcode of firstmarkcode:printesc(strprotector(641));
botmarkcode:printesc(strprotector(642));
splitfirstmarkcode:printesc(strprotector(643));
splitbotmarkcode:printesc(strprotector(644));
otherwise printesc(strprotector(640))end;{:385}{412:}
register:if chrcode=intval then printesc(strprotector(487))else if
chrcode=dimenval then printesc(strprotector(511))else if chrcode=glueval
then printesc(strprotector(407))else printesc(strprotector(408));{:412}
{417:}
setaux:if chrcode=vmode then printesc(strprotector(678))else printesc(
strprotector(677));
setpageint:if chrcode=0 then printesc(strprotector(679))else printesc(
strprotector(680));
setboxdimen:if chrcode=widthoffset then printesc(strprotector(681))else
if chrcode=heightoffset then printesc(strprotector(682))else printesc(
strprotector(683));
lastitem:case chrcode of intval:printesc(strprotector(684));
dimenval:printesc(strprotector(685));
glueval:printesc(strprotector(686));
inputlinenocode:printesc(strprotector(687));
otherwise printesc(strprotector(688))end;{:417}{469:}
convert:case chrcode of numbercode:printesc(strprotector(744));
romannumeralcode:printesc(strprotector(745));
stringcode:printesc(strprotector(746));
meaningcode:printesc(strprotector(747));
fontnamecode:printesc(strprotector(748));
otherwise printesc(strprotector(749))end;{:469}{488:}
iftest:case chrcode of ifcatcode:printesc(strprotector(765));
ifintcode:printesc(strprotector(766));
ifdimcode:printesc(strprotector(767));
ifoddcode:printesc(strprotector(768));
ifvmodecode:printesc(strprotector(769));
ifhmodecode:printesc(strprotector(770));
ifmmodecode:printesc(strprotector(771));
ifinnercode:printesc(strprotector(772));
ifvoidcode:printesc(strprotector(773));
ifhboxcode:printesc(strprotector(774));
ifvboxcode:printesc(strprotector(775));
ifxcode:printesc(strprotector(776));
ifeofcode:printesc(strprotector(777));
iftruecode:printesc(strprotector(778));
iffalsecode:printesc(strprotector(779));
ifcasecode:printesc(strprotector(780));
otherwise printesc(strprotector(764))end;{:488}{492:}
fiorelse:if chrcode=ficode then printesc(strprotector(781))else if
chrcode=orcode then printesc(strprotector(782))else printesc(
strprotector(783));{:492}{781:}
tabmark:if chrcode=spancode then printesc(strprotector(897))else chrcmd(
strprotector(901));
carret:if chrcode=crcode then printesc(strprotector(898))else printesc(
strprotector(899));{:781}{984:}
setpagedimen:case chrcode of 0:printesc(strprotector(969));
1:printesc(strprotector(970));2:printesc(strprotector(971));
3:printesc(strprotector(972));4:printesc(strprotector(973));
5:printesc(strprotector(974));6:printesc(strprotector(975));
otherwise printesc(strprotector(976))end;{:984}{1053:}
stop:if chrcode=1 then printesc(strprotector(1025))else printesc(
strprotector(1024));{:1053}{1059:}
hskip:case chrcode of skipcode:printesc(strprotector(1026));
filcode:printesc(strprotector(1027));
fillcode:printesc(strprotector(1028));
sscode:printesc(strprotector(1029));
otherwise printesc(strprotector(1030))end;
vskip:case chrcode of skipcode:printesc(strprotector(1031));
filcode:printesc(strprotector(1032));
fillcode:printesc(strprotector(1033));
sscode:printesc(strprotector(1034));
otherwise printesc(strprotector(1035))end;
mskip:printesc(strprotector(349));kern:printesc(strprotector(352));
mkern:printesc(strprotector(354));{:1059}{1072:}
hmove:if chrcode=1 then printesc(strprotector(1053))else printesc(
strprotector(1054));
vmove:if chrcode=1 then printesc(strprotector(1055))else printesc(
strprotector(1056));
makebox:case chrcode of boxcode:printesc(strprotector(420));
copycode:printesc(strprotector(1057));
lastboxcode:printesc(strprotector(1058));
vsplitcode:printesc(strprotector(964));
vtopcode:printesc(strprotector(1059));
vtopcode+vmode:printesc(strprotector(966));
otherwise printesc(strprotector(1060))end;
leadership:if chrcode=aleaders then printesc(strprotector(1062))else if
chrcode=cleaders then printesc(strprotector(1063))else if chrcode=
xleaders then printesc(strprotector(1064))else printesc(strprotector(
1061));{:1072}{1089:}
startpar:if chrcode=0 then printesc(strprotector(1080))else printesc(
strprotector(1079));{:1089}{1108:}
removeitem:if chrcode=gluenode then printesc(strprotector(1091))else if
chrcode=kernnode then printesc(strprotector(1090))else printesc(
strprotector(1089));
unhbox:if chrcode=copycode then printesc(strprotector(1093))else
printesc(strprotector(1092));
unvbox:if chrcode=copycode then printesc(strprotector(1095))else
printesc(strprotector(1094));{:1108}{1115:}
discretionary:if chrcode=1 then printesc(tobar('-'))else printesc(
strprotector(361));{:1115}{1143:}
eqno:if chrcode=1 then printesc(strprotector(1127))else printesc(
strprotector(1126));{:1143}{1157:}
mathcomp:case chrcode of ordnoad:printesc(strprotector(866));
opnoad:printesc(strprotector(867));binnoad:printesc(strprotector(868));
relnoad:printesc(strprotector(869));
opennoad:printesc(strprotector(870));
closenoad:printesc(strprotector(871));
punctnoad:printesc(strprotector(872));
innernoad:printesc(strprotector(873));
undernoad:printesc(strprotector(875));
otherwise printesc(strprotector(874))end;
limitswitch:if chrcode=limits then printesc(strprotector(878))else if
chrcode=nolimits then printesc(strprotector(879))else printesc(
strprotector(1128));{:1157}{1170:}mathstyle:printstyle(chrcode);{:1170}
{1179:}above:case chrcode of overcode:printesc(strprotector(1147));
atopcode:printesc(strprotector(1148));
delimitedcode+abovecode:printesc(strprotector(1149));
delimitedcode+overcode:printesc(strprotector(1150));
delimitedcode+atopcode:printesc(strprotector(1151));
otherwise printesc(strprotector(1146))end;{:1179}{1189:}
leftright:if chrcode=leftnoad then printesc(strprotector(876))else
printesc(strprotector(877));{:1189}{1209:}
prefix:if chrcode=1 then printesc(strprotector(1170))else if chrcode=2
then printesc(strprotector(1171))else printesc(strprotector(1172));
def:if chrcode=0 then printesc(strprotector(1173))else if chrcode=1 then
printesc(strprotector(1174))else if chrcode=2 then printesc(strprotector
(1175))else printesc(strprotector(1176));{:1209}{1220:}
let:if chrcode<>normal then printesc(strprotector(1191))else printesc(
strprotector(1190));{:1220}{1223:}
shorthanddef:case chrcode of chardefcode:printesc(strprotector(1192));
mathchardefcode:printesc(strprotector(1193));
countdefcode:printesc(strprotector(1194));
dimendefcode:printesc(strprotector(1195));
skipdefcode:printesc(strprotector(1196));
muskipdefcode:printesc(strprotector(1197));
otherwise printesc(strprotector(1198))end;
chargiven:begin printesc(strprotector(524));printhex(chrcode);end;
mathgiven:begin printesc(strprotector(535));printhex(chrcode);end;
{:1223}{1231:}
defcode:if chrcode=catcodebase then printesc(strprotector(426))else if
chrcode=mathcodebase then printesc(strprotector(430))else if chrcode=
lccodebase then printesc(strprotector(427))else if chrcode=uccodebase
then printesc(strprotector(428))else if chrcode=sfcodebase then printesc
(strprotector(429))else printesc(strprotector(488));
deffamily:printsize(chrcode-mathfontbase);{:1231}{1251:}
hyphdata:if chrcode=1 then printesc(strprotector(952))else printesc(
strprotector(940));{:1251}{1255:}
assignfontint:if chrcode=0 then printesc(strprotector(1216))else
printesc(strprotector(1217));{:1255}{1261:}
setfont:begin print(strprotector(1225));slowprint(fontname[chrcode]);
if fontsize[chrcode]<>fontdsize[chrcode]then begin print(strprotector(
267));printscaled(fontsize[chrcode]);print(strprotector(268));end;end;
{:1261}{1263:}
setinteraction:case chrcode of batchmode:printesc(strprotector(288));
nonstopmode:printesc(strprotector(289));
scrollmode:printesc(strprotector(290));
otherwise printesc(strprotector(1226))end;{:1263}{1273:}
instream:if chrcode=0 then printesc(strprotector(1228))else printesc(
strprotector(1227));{:1273}{1278:}
message:if chrcode=0 then printesc(strprotector(1229))else printesc(
strprotector(1230));{:1278}{1287:}
caseshift:if chrcode=lccodebase then printesc(strprotector(1236))else
printesc(strprotector(1237));{:1287}{1292:}
xray:case chrcode of showboxcode:printesc(strprotector(1239));
showthecode:printesc(strprotector(1240));
showlists:printesc(strprotector(1241));
otherwise printesc(strprotector(1238))end;{:1292}{1295:}
undefinedcs:print(strprotector(1248));call:print(strprotector(1249));
longcall:printesc(strprotector(1250));
outercall:printesc(strprotector(1251));
longoutercall:begin printesc(strprotector(1170));
printesc(strprotector(1251));end;
endtemplate:printesc(strprotector(1252));{:1295}{1346:}
extension:case chrcode of opennode:printesc(strprotector(1284));
writenode:printesc(strprotector(603));
closenode:printesc(strprotector(1285));
specialnode:printesc(strprotector(1286));
immediatecode:printesc(strprotector(1287));
setlanguagecode:printesc(strprotector(1288));
otherwise print(strprotector(1289))end;{:1346}
otherwise print(strprotector(577))end;end;{:298}{_STAT}
procedure showeqtb(n:pointer);
begin if n<activebase then printchar(tobar('?'))else if n<gluebase then{
223:}begin sprintcs(n);printchar(tobar('='));
printcmdchr(fooeqtype(n)^,fooequiv(n)^);
if fooeqtype(n)^>=call then begin printchar(tobar(':'));
showtokenlist(foolink(fooequiv(n)^)^,0,32);end;end{:223}
else if n<localbase then{229:}
if n<skipbase then begin printskipparam(n-gluebase);
printchar(tobar('='));
if n<gluebase+thinmuskipcode then printspec(fooequiv(n)^,strprotector(
268))else printspec(fooequiv(n)^,strprotector(350));
end else if n<muskipbase then begin printesc(strprotector(407));
printint(n-skipbase);printchar(tobar('='));
printspec(fooequiv(n)^,strprotector(268));
end else begin printesc(strprotector(408));printint(n-muskipbase);
printchar(tobar('='));printspec(fooequiv(n)^,strprotector(350));
end{:229}else if n<intbase then{233:}
if n=parshapeloc then begin printesc(strprotector(419));
printchar(tobar('='));
if parshapeptr=0 then printchar(tobar('0'))else printint(fooinfo(
parshapeptr)^);
end else if n<toksbase then begin printcmdchr(assigntoks,n);
printchar(tobar('='));
if fooequiv(n)^<>0 then showtokenlist(foolink(fooequiv(n)^)^,0,32);
end else if n<boxbase then begin printesc(strprotector(418));
printint(n-toksbase);printchar(tobar('='));
if fooequiv(n)^<>0 then showtokenlist(foolink(fooequiv(n)^)^,0,32);
end else if n<curfontloc then begin printesc(strprotector(420));
printint(n-boxbase);printchar(tobar('='));
if fooequiv(n)^=0 then print(strprotector(421))else begin depththreshold
:=0;breadthmax:=1;shownodelist(fooequiv(n)^);end;
end else if n<catcodebase then{234:}
begin if n=curfontloc then print(strprotector(422))else if n<
mathfontbase+16 then begin printesc(strprotector(423));
printint(n-mathfontbase);
end else if n<mathfontbase+32 then begin printesc(strprotector(424));
printint(n-mathfontbase-16);end else begin printesc(strprotector(425));
printint(n-mathfontbase-32);end;printchar(tobar('='));
printesc(hash[fontidbase+fooequiv(n)^].rh);end{:234}else{235:}
if n<mathcodebase then begin if n<lccodebase then begin printesc(
strprotector(426));printint(n-catcodebase);
end else if n<uccodebase then begin printesc(strprotector(427));
printint(n-lccodebase);
end else if n<sfcodebase then begin printesc(strprotector(428));
printint(n-uccodebase);end else begin printesc(strprotector(429));
printint(n-sfcodebase);end;printchar(tobar('='));printint(fooequiv(n)^);
end else begin printesc(strprotector(430));printint(n-mathcodebase);
printchar(tobar('='));printint(fooequiv(n)^-0);end{:235}{:233}
else if n<dimenbase then{242:}
begin if n<countbase then printparam(n-intbase)else if n<delcodebase
then begin printesc(strprotector(487));printint(n-countbase);
end else begin printesc(strprotector(488));printint(n-delcodebase);end;
printchar(tobar('='));printint(eqtb[n].int);end{:242}
else if n<=eqtbsize then{251:}
begin if n<scaledbase then printlengthparam(n-dimenbase)else begin
printesc(strprotector(511));printint(n-scaledbase);end;
printchar(tobar('='));printscaled(eqtb[n].sc);print(strprotector(268));
end{:251}else printchar(tobar('?'));end;{_ENDSTAT}{:252}{259:}
function idlookup(j,l:integer):pointer;label found;var h:integer;
d:integer;p:pointer;k:pointer;begin{261:}h:=buffer[j];
for k:=j+1 to j+l-1 do begin h:=h+h+buffer[k];
while h>=hashprime do h:=h-hashprime;end{:261};p:=h+hashbase;
while true do begin if footext(p)^>0 then if flength(footext(p)^)=l then
if streqbuf(footext(p)^,j)then goto found;
if foonext(p)^=0 then begin if nonewcontrolsequence then p:=
undefinedcontrolsequence else{260:}
begin if footext(p)^>0 then begin repeat if hashisfull then overflow(
strprotector(514),hashsize);hashused:=hashused-1;
until footext(hashused)^=0;foonext(p)^:=hashused;p:=hashused;end;
begin if poolptr+l>poolsize then overflow(257,poolsize-initpoolptr);end;
d:=curlength;while poolptr>strstart[strptr]do begin poolptr:=poolptr-1;
strpool[poolptr+l]:=strpool[poolptr];end;
for k:=j to j+l-1 do appendchar(buffer[k]);footext(p)^:=makestring;
poolptr:=poolptr+d;{_STAT}cscount:=cscount+1;{_ENDSTAT}end{:260};
goto found;end;p:=foonext(p)^;end;found:idlookup:=p;end;{:259}{264:}
procedure primitive(s:strnumber;c:quarterword;o:halfword);
var k:poolpointer;j:smallnumber;l:smallnumber;
begin if s<256 then curval:=s+singlebase else begin k:=strstart[s];
l:=strstart[s+1]-k;for j:=0 to l-1 do buffer[j]:=strpool[k+j];
curval:=idlookup(0,l);flushstring;footext(curval)^:=s;end;
fooeqlevel(curval)^:=levelone;fooeqtype(curval)^:=c;
fooequiv(curval)^:=o;end;{:264}{274:}
procedure newsavelevel(c:groupcode);
begin if saveptr>maxsavestack then begin maxsavestack:=saveptr;
if maxsavestack>savesize-6 then overflow(259,savesize);end;
foosavetype(saveptr)^:=levelboundary;foosavelevel(saveptr)^:=curgroup;
foosaveindex(saveptr)^:=curboundary;
if curlevel=maxquarterword then overflow(strprotector(552),
maxquarterword-minquarterword);curboundary:=saveptr;
curlevel:=curlevel+1;saveptr:=saveptr+1;curgroup:=c;end;{:274}{275:}
procedure eqdestroy(w:memoryword);var q:pointer;
begin case fooeqtypefield(w)^of call,longcall,outercall,longoutercall:
deletetokenref(fooequivfield(w)^);
glueref:deleteglueref(fooequivfield(w)^);
shaperef:begin q:=fooequivfield(w)^;
if q<>0 then freenode(q,fooinfo(q)^+fooinfo(q)^+1);end;
boxref:flushnodelist(fooequivfield(w)^);otherwise end;end;{:275}{276:}
procedure eqsave(p:pointer;l:quarterword);
begin if saveptr>maxsavestack then begin maxsavestack:=saveptr;
if maxsavestack>savesize-6 then overflow(259,savesize);end;
if l=levelzero then foosavetype(saveptr)^:=restorezero else begin
savestack[saveptr]:=eqtb[p];saveptr:=saveptr+1;
foosavetype(saveptr)^:=restoreoldvalue;end;foosavelevel(saveptr)^:=l;
foosaveindex(saveptr)^:=p;saveptr:=saveptr+1;end;{:276}{277:}
procedure eqdefine(p:pointer;t:quarterword;e:halfword);
begin if fooeqlevel(p)^=curlevel then eqdestroy(eqtb[p])else if curlevel
>levelone then eqsave(p,fooeqlevel(p)^);fooeqlevel(p)^:=curlevel;
fooeqtype(p)^:=t;fooequiv(p)^:=e;end;{:277}{278:}
procedure eqworddefine(p:pointer;w:integer);
begin if xeqlevel[p]<>curlevel then begin eqsave(p,xeqlevel[p]);
xeqlevel[p]:=curlevel;end;eqtb[p].int:=w;end;{:278}{279:}
procedure geqdefine(p:pointer;t:quarterword;e:halfword);
begin eqdestroy(eqtb[p]);fooeqlevel(p)^:=levelone;fooeqtype(p)^:=t;
fooequiv(p)^:=e;end;procedure geqworddefine(p:pointer;w:integer);
begin eqtb[p].int:=w;xeqlevel[p]:=levelone;end;{:279}{280:}
procedure saveforafter(t:halfword);
begin if curlevel>levelone then begin if saveptr>maxsavestack then begin
maxsavestack:=saveptr;
if maxsavestack>savesize-6 then overflow(259,savesize);end;
foosavetype(saveptr)^:=inserttoken;foosavelevel(saveptr)^:=levelzero;
foosaveindex(saveptr)^:=t;saveptr:=saveptr+1;end;end;{:280}{281:}{284:}
{_STAT}procedure restoretrace(p:pointer;s:strnumber);
begin begindiagnostic;printchar(tobar('{'));print(s);
printchar(tobar(' '));showeqtb(p);printchar(tobar('}'));
enddiagnostic(false);end;{_ENDSTAT}{:284}procedure backinput;forward;
procedure unsave;label done;var p:pointer;l:quarterword;t:halfword;
begin if curlevel>levelone then begin curlevel:=curlevel-1;{282:}
while true do begin saveptr:=saveptr-1;
if foosavetype(saveptr)^=levelboundary then goto done;
p:=foosaveindex(saveptr)^;
if foosavetype(saveptr)^=inserttoken then{326:}begin t:=curtok;
curtok:=p;backinput;curtok:=t;end{:326}
else begin if foosavetype(saveptr)^=restoreoldvalue then begin l:=
foosavelevel(saveptr)^;saveptr:=saveptr-1;
end else savestack[saveptr]:=eqtb[undefinedcontrolsequence];{283:}
if p<intbase then if fooeqlevel(p)^=levelone then begin eqdestroy(
savestack[saveptr]);{_STAT}
if tracingrestores>0 then restoretrace(p,strprotector(554));{_ENDSTAT}
end else begin eqdestroy(eqtb[p]);eqtb[p]:=savestack[saveptr];{_STAT}
if tracingrestores>0 then restoretrace(p,strprotector(555));{_ENDSTAT}
end else if xeqlevel[p]<>levelone then begin eqtb[p]:=savestack[saveptr]
;xeqlevel[p]:=l;{_STAT}
if tracingrestores>0 then restoretrace(p,strprotector(555));{_ENDSTAT}
end else begin{_STAT}
if tracingrestores>0 then restoretrace(p,strprotector(554));{_ENDSTAT}
end{:283};end;end;done:curgroup:=foosavelevel(saveptr)^;
curboundary:=foosaveindex(saveptr)^{:282};
end else confusion(strprotector(553));end;{:281}{288:}
procedure preparemag;
begin if(magset>0)and(mag<>magset)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(557));end;
printint(mag);print(strprotector(558));printnl(strprotector(559));
begin helpptr:=2;helpline[1]:=strprotector(560);
helpline[0]:=strprotector(561);end;interror(magset);
geqworddefine(intbase+magcode,magset);end;
if(mag<=0)or(mag>32768)then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(562));end;begin helpptr:=1;
helpline[0]:=strprotector(563);end;interror(mag);
geqworddefine(intbase+magcode,1000);end;magset:=mag;end;{:288}{295:}
procedure tokenshow(p:pointer);
begin if p<>0 then showtokenlist(foolink(p)^,0,10000000);end;{:295}
{296:}procedure printmeaning;begin printcmdchr(curcmd,curchr);
if curcmd>=call then begin printchar(tobar(':'));println;
tokenshow(curchr);
end else if curcmd=topbotmark then begin printchar(tobar(':'));println;
tokenshow(curmark[curchr]);end;end;{:296}{299:}procedure showcurcmdchr;
begin begindiagnostic;printnl(tobar('{'));
if mode<>shownmode then begin printmode(mode);print(strprotector(578));
shownmode:=mode;end;printcmdchr(curcmd,curchr);printchar(tobar('}'));
enddiagnostic(false);end;{:299}{311:}procedure showcontext;label done;
var oldsetting:0..maxselector;nn:integer;bottomline:boolean;{315:}
i:0..bufsize;j:0..bufsize;l:0..halferrorline;m:integer;n:0..errorline;
p:integer;q:integer;{:315}begin baseptr:=inputptr;
inputstack[baseptr]:=curinput;nn:=-1;bottomline:=false;
while true do begin curinput:=inputstack[baseptr];
if(state<>tokenlist)then if(name>17)or(baseptr=0)then bottomline:=true;
if(baseptr=inputptr)or bottomline or(nn<errorcontextlines)then{312:}
begin if(baseptr=inputptr)or(state<>tokenlist)or(tokentype<>backedup)or(
loc<>0)then begin tally:=0;oldsetting:=selector;
if state<>tokenlist then begin{313:}
if name<=17 then if terminalinput then if baseptr=0 then printnl(
strprotector(584))else printnl(strprotector(585))else begin printnl(
strprotector(586));
if name=17 then printchar(tobar('*'))else printint(name-1);
printchar(tobar('>'));end else begin printnl(strprotector(587));
printint(line);end;printchar(tobar(' ')){:313};{318:}beginpseudoprint;
if buffer[limit]=endlinechar then j:=limit else j:=limit+1;
if j>0 then for i:=start to j-1 do begin if i=loc then settrickcount;
print(buffer[i]);end{:318};end else begin{314:}
case tokentype of parameter:printnl(strprotector(588));
utemplate,vtemplate:printnl(strprotector(589));
backedup:if loc=0 then printnl(strprotector(590))else printnl(
strprotector(591));inserted:printnl(strprotector(592));
macro:begin println;printcs(name);end;
outputtext:printnl(strprotector(593));
everypartext:printnl(strprotector(594));
everymathtext:printnl(strprotector(595));
everydisplaytext:printnl(strprotector(596));
everyhboxtext:printnl(strprotector(597));
everyvboxtext:printnl(strprotector(598));
everyjobtext:printnl(strprotector(599));
everycrtext:printnl(strprotector(600));
marktext:printnl(strprotector(601));
writetext:printnl(strprotector(602));
otherwise printnl(tobar('?'))end{:314};{319:}beginpseudoprint;
if tokentype<macro then showtokenlist(start,loc,100000)else
showtokenlist(foolink(start)^,loc,100000){:319};end;
selector:=oldsetting;{317:}if trickcount=1000000 then settrickcount;
if tally<trickcount then m:=tally-firstcount else m:=trickcount-
firstcount;if l+firstcount<=halferrorline then begin p:=0;
n:=l+firstcount;end else begin print(strprotector(291));
p:=l+firstcount-halferrorline+3;n:=halferrorline;end;
for q:=p to firstcount-1 do printchar(trickbuf[q mod errorline]);
println;for q:=1 to n do printchar(tobar(' '));
if m+n<=errorline then p:=firstcount+m else p:=firstcount+(errorline-n-3
);for q:=firstcount to p-1 do printchar(trickbuf[q mod errorline]);
if m+n>errorline then print(strprotector(291)){:317};nn:=nn+1;end;
end{:312}
else if nn=errorcontextlines then begin printnl(strprotector(291));
nn:=nn+1;end;if bottomline then goto done;baseptr:=baseptr-1;end;
done:curinput:=inputstack[inputptr];end;{:311}{323:}
procedure begintokenlist(p:pointer;t:quarterword);
begin begin if inputptr>maxinstack then begin maxinstack:=inputptr;
if inputptr=stacksize then overflow(260,stacksize);end;
inputstack[inputptr]:=curinput;inputptr:=inputptr+1;end;
state:=tokenlist;start:=p;tokentype:=t;
if t>=macro then begin addtokenref(p);
if t=macro then paramstart:=paramptr else begin loc:=foolink(p)^;
if tracingmacros>1 then begin begindiagnostic;
printnl(strprotector(266));
case t of marktext:printesc(strprotector(363));
writetext:printesc(strprotector(603));
otherwise printcmdchr(assigntoks,t-outputtext+outputroutineloc)end;
print(strprotector(566));tokenshow(p);enddiagnostic(false);end;end;
end else loc:=p;end;{:323}{324:}procedure endtokenlist;
begin if tokentype>=backedup then begin if tokentype<=inserted then
flushlist(start)else begin deletetokenref(start);
if tokentype=macro then while paramptr>paramstart do begin paramptr:=
paramptr-1;flushlist(paramstack[paramptr]);end;end;
end else if tokentype=utemplate then if alignstate>500000 then
alignstate:=0 else fatalerror(strprotector(604));popinput;
checkinterrupt;end;{:324}{325:}procedure backinput;var p:pointer;
begin while(state=tokenlist)and(loc=0)do endtokenlist;p:=getavail;
fooinfo(p)^:=curtok;
if curtok<rightbracelimit then if curtok<leftbracelimit then alignstate
:=alignstate-1 else alignstate:=alignstate+1;
begin if inputptr>maxinstack then begin maxinstack:=inputptr;
if inputptr=stacksize then overflow(260,stacksize);end;
inputstack[inputptr]:=curinput;inputptr:=inputptr+1;end;
state:=tokenlist;start:=p;tokentype:=backedup;loc:=p;end;{:325}{327:}
procedure backerror;begin OKtointerrupt:=false;backinput;
OKtointerrupt:=true;error;end;procedure inserror;
begin OKtointerrupt:=false;backinput;tokentype:=inserted;
OKtointerrupt:=true;error;end;{:327}{328:}procedure beginfilereading;
begin if inopen=maxinopen then overflow(strprotector(605),maxinopen);
if first=bufsize then overflow(strprotector(272),bufsize);
inopen:=inopen+1;
begin if inputptr>maxinstack then begin maxinstack:=inputptr;
if inputptr=stacksize then overflow(260,stacksize);end;
inputstack[inputptr]:=curinput;inputptr:=inputptr+1;end;iindex:=inopen;
linestack[iindex]:=line;start:=first;state:=midline;name:=0;end;{:328}
{329:}procedure endfilereading;begin first:=start;
line:=linestack[iindex];if name>17 then aclose(curfile);popinput;
inopen:=inopen-1;end;{:329}{330:}procedure clearforerrorprompt;
begin while(state<>tokenlist)and terminalinput and(inputptr>0)and(loc>
limit)do endfilereading;println;;end;{:330}{336:}
procedure checkoutervalidity;var p:pointer;q:pointer;
begin if scannerstatus<>normal then begin deletionsallowed:=false;{337:}
if curcs<>0 then begin if(state=tokenlist)or(name<1)or(name>17)then
begin p:=getavail;fooinfo(p)^:=cstokenflag+curcs;backlist(p);end;
curcmd:=spacer;curchr:=tobar(' ');end{:337};
if scannerstatus>skipping then{338:}begin runaway;
if curcs=0 then begin if interaction=errorstopmode then;printnl(258);
print(strprotector(613));end else begin curcs:=0;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(614));end;end;print(strprotector(615));{339:}
p:=getavail;
case scannerstatus of defining:begin print(strprotector(580));
fooinfo(p)^:=rightbracetoken+tobar('}');end;
matching:begin print(strprotector(621));fooinfo(p)^:=partoken;
longstate:=outercall;end;aligning:begin print(strprotector(582));
fooinfo(p)^:=rightbracetoken+tobar('}');q:=p;p:=getavail;foolink(p)^:=q;
fooinfo(p)^:=cstokenflag+frozencr;alignstate:=-1000000;end;
absorbing:begin print(strprotector(583));
fooinfo(p)^:=rightbracetoken+tobar('}');end;end;inslist(p){:339};
print(strprotector(616));sprintcs(warningindex);begin helpptr:=4;
helpline[3]:=strprotector(617);helpline[2]:=strprotector(618);
helpline[1]:=strprotector(619);helpline[0]:=strprotector(620);end;error;
end{:338}else begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(607));end;printcmdchr(iftest,curif);
print(strprotector(608));printint(skipline);begin helpptr:=3;
helpline[2]:=strprotector(609);helpline[1]:=strprotector(610);
helpline[0]:=strprotector(611);end;
if curcs<>0 then curcs:=0 else helpline[2]:=strprotector(612);
curtok:=cstokenflag+frozenfi;inserror;end;deletionsallowed:=true;end;
end;{:336}{340:}procedure firmuptheline;forward;{:340}{341:}
procedure getnext;label restart,switch,reswitch,startcs,found,exit;
var k:0..bufsize;t:halfword;cat:0..15;c,cc:ASCIIcode;d:2..3;
begin restart:curcs:=0;if state<>tokenlist then{343:}
begin switch:if loc<=limit then begin curchr:=buffer[loc];loc:=loc+1;
reswitch:curcmd:=foocatcode(curchr)^;{344:}case state+curcmd of{345:}
midline+ignore,skipblanks+ignore,newline+ignore,skipblanks+spacer,
newline+spacer{:345}:goto switch;
midline+escape,skipblanks+escape,newline+escape:{354:}
begin if loc>limit then curcs:=nullcs else begin startcs:k:=loc;
curchr:=buffer[k];cat:=foocatcode(curchr)^;k:=k+1;
if cat=letter then state:=skipblanks else if cat=spacer then state:=
skipblanks else state:=midline;if(cat=letter)and(k<=limit)then{356:}
begin repeat curchr:=buffer[k];cat:=foocatcode(curchr)^;k:=k+1;
until(cat<>letter)or(k>limit);{355:}
begin if buffer[k]=curchr then if cat=supmark then if k<limit then begin
c:=buffer[k+1];if c<128 then begin d:=2;
if ishex(c)then if k+2<=limit then begin cc:=buffer[k+2];
if ishex(cc)then d:=d+1;end;if d>2 then begin hextocurchr;
buffer[k-1]:=curchr;
end else if c<64 then buffer[k-1]:=c+64 else buffer[k-1]:=c-64;
limit:=limit-d;first:=first-d;
while k<=limit do begin buffer[k]:=buffer[k+d];k:=k+1;end;goto startcs;
end;end;end{:355};if cat<>letter then k:=k-1;
if k>loc+1 then begin curcs:=idlookup(loc,k-loc);loc:=k;goto found;end;
end{:356}else{355:}
begin if buffer[k]=curchr then if cat=supmark then if k<limit then begin
c:=buffer[k+1];if c<128 then begin d:=2;
if ishex(c)then if k+2<=limit then begin cc:=buffer[k+2];
if ishex(cc)then d:=d+1;end;if d>2 then begin hextocurchr;
buffer[k-1]:=curchr;
end else if c<64 then buffer[k-1]:=c+64 else buffer[k-1]:=c-64;
limit:=limit-d;first:=first-d;
while k<=limit do begin buffer[k]:=buffer[k+d];k:=k+1;end;goto startcs;
end;end;end{:355};curcs:=singlebase+buffer[loc];loc:=loc+1;end;
found:curcmd:=fooeqtype(curcs)^;curchr:=fooequiv(curcs)^;
if curcmd>=outercall then checkoutervalidity;end{:354};
midline+activechar,skipblanks+activechar,newline+activechar:{353:}
begin curcs:=curchr+activebase;curcmd:=fooeqtype(curcs)^;
curchr:=fooequiv(curcs)^;state:=midline;
if curcmd>=outercall then checkoutervalidity;end{:353};
midline+supmark,skipblanks+supmark,newline+supmark:{352:}
begin if curchr=buffer[loc]then if loc<limit then begin c:=buffer[loc+1]
;if c<128 then begin loc:=loc+2;
if ishex(c)then if loc<=limit then begin cc:=buffer[loc];
if ishex(cc)then begin loc:=loc+1;hextocurchr;goto reswitch;end;end;
if c<64 then curchr:=c+64 else curchr:=c-64;goto reswitch;end;end;
state:=midline;end{:352};
midline+invalidchar,skipblanks+invalidchar,newline+invalidchar:{346:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(622));end;begin helpptr:=2;
helpline[1]:=strprotector(623);helpline[0]:=strprotector(624);end;
deletionsallowed:=false;error;deletionsallowed:=true;goto restart;
end{:346};{347:}midline+spacer:{349:}begin state:=skipblanks;
curchr:=tobar(' ');end{:349};midline+carret:{348:}begin loc:=limit+1;
curcmd:=spacer;curchr:=tobar(' ');end{:348};
skipblanks+carret,midline+comment,skipblanks+comment,newline+comment:{
350:}begin loc:=limit+1;goto switch;end{:350};newline+carret:{351:}
begin loc:=limit+1;curcs:=parloc;curcmd:=fooeqtype(curcs)^;
curchr:=fooequiv(curcs)^;if curcmd>=outercall then checkoutervalidity;
end{:351};midline+leftbrace:alignstate:=alignstate+1;
skipblanks+leftbrace,newline+leftbrace:begin state:=midline;
alignstate:=alignstate+1;end;
midline+rightbrace:alignstate:=alignstate-1;
skipblanks+rightbrace,newline+rightbrace:begin state:=midline;
alignstate:=alignstate-1;end;
skipblanks+mathshift,skipblanks+tabmark,skipblanks+macparam,skipblanks+
submark,skipblanks+letter,skipblanks+otherchar,newline+mathshift,newline
+tabmark,newline+macparam,newline+submark,newline+letter,newline+
otherchar:state:=midline;{:347}otherwise end{:344};
end else begin state:=newline;{360:}if name>17 then{362:}
begin line:=line+1;first:=start;
if not forceeof then begin if inputln(curfile,true)then firmuptheline
else forceeof:=true;end;if forceeof then begin printchar(tobar(')'));
openparens:=openparens-1;fflush(termout);forceeof:=false;endfilereading;
checkoutervalidity;goto restart;end;
if endlinecharinactive then limit:=limit-1 else buffer[limit]:=
endlinechar;first:=limit+1;loc:=start;end{:362}
else begin if not terminalinput then begin curcmd:=0;curchr:=0;
goto exit;end;if inputptr>0 then begin endfilereading;goto restart;end;
if selector<logonly then openlogfile;
if interaction>nonstopmode then begin if endlinecharinactive then limit
:=limit+1;if limit=start then printnl(strprotector(625));println;
first:=start;begin;print(tobar('*'));terminput;end;limit:=last;
if endlinecharinactive then limit:=limit-1 else buffer[limit]:=
endlinechar;first:=limit+1;loc:=start;
end else fatalerror(strprotector(626));end{:360};checkinterrupt;
goto switch;end;end{:343}else{357:}
if loc<>0 then begin t:=fooinfo(loc)^;loc:=foolink(loc)^;
if t>=cstokenflag then begin curcs:=t-cstokenflag;
curcmd:=fooeqtype(curcs)^;curchr:=fooequiv(curcs)^;
if curcmd>=outercall then if curcmd=dontexpand then{358:}
begin curcs:=fooinfo(loc)^-cstokenflag;loc:=0;curcmd:=fooeqtype(curcs)^;
curchr:=fooequiv(curcs)^;if curcmd>maxcommand then begin curcmd:=relax;
curchr:=noexpandflag;end;end{:358}else checkoutervalidity;
end else begin curcmd:=t div 256;curchr:=t mod 256;
case curcmd of leftbrace:alignstate:=alignstate+1;
rightbrace:alignstate:=alignstate-1;outparam:{359:}
begin begintokenlist(paramstack[paramstart+curchr-1],parameter);
goto restart;end{:359};otherwise end;end;end else begin endtokenlist;
goto restart;end{:357};{342:}
if curcmd<=carret then if curcmd>=tabmark then if alignstate=0 then{789:
}begin if scannerstatus=aligning then fatalerror(strprotector(604));
curcmd:=fooextrainfo(curalign)^;fooextrainfo(curalign)^:=curchr;
if curcmd=omit then begintokenlist(omittemplate,vtemplate)else
begintokenlist(foovpart(curalign)^,vtemplate);alignstate:=1000000;
goto restart;end{:789}{:342};exit:end;{:341}{363:}
procedure firmuptheline;var k:0..bufsize;begin limit:=last;
if pausing>0 then if interaction>nonstopmode then begin;println;
if start<limit then for k:=start to limit-1 do print(buffer[k]);
first:=limit;begin;print(strprotector(627));terminput;end;
if last>first then begin for k:=first to last-1 do buffer[k+start-first]
:=buffer[k];limit:=start+last-first;end;end;end;{:363}{365:}
procedure gettoken;begin nonewcontrolsequence:=false;getnext;
nonewcontrolsequence:=true;
if curcs=0 then curtok:=(curcmd*256)+curchr else curtok:=cstokenflag+
curcs;end;{:365}{366:}{389:}procedure macrocall;
label exit,continue,done,done1,found;var r:pointer;p:pointer;q:pointer;
s:pointer;t:pointer;u,v:pointer;rbraceptr:pointer;n:smallnumber;
unbalance:halfword;m:halfword;refcount:pointer;
savescannerstatus:smallnumber;savewarningindex:pointer;
matchchr:ASCIIcode;begin savescannerstatus:=scannerstatus;
savewarningindex:=warningindex;warningindex:=curcs;refcount:=curchr;
r:=foolink(refcount)^;n:=0;if tracingmacros>0 then{401:}
begin begindiagnostic;println;printcs(warningindex);tokenshow(refcount);
enddiagnostic(false);end{:401};if fooinfo(r)^<>endmatchtoken then{391:}
begin scannerstatus:=matching;unbalance:=0;longstate:=fooeqtype(curcs)^;
if longstate>=outercall then longstate:=longstate-2;
repeat foolink(temphead)^:=0;
if(fooinfo(r)^>matchtoken+255)or(fooinfo(r)^<matchtoken)then s:=0 else
begin matchchr:=fooinfo(r)^-matchtoken;s:=foolink(r)^;r:=s;p:=temphead;
m:=0;end;{392:}continue:gettoken;if curtok=fooinfo(r)^then{394:}
begin r:=foolink(r)^;
if(fooinfo(r)^>=matchtoken)and(fooinfo(r)^<=endmatchtoken)then begin if
curtok<leftbracelimit then alignstate:=alignstate-1;goto found;
end else goto continue;end{:394};{397:}if s<>r then if s=0 then{398:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(659));end;sprintcs(warningindex);
print(strprotector(660));begin helpptr:=4;
helpline[3]:=strprotector(661);helpline[2]:=strprotector(662);
helpline[1]:=strprotector(663);helpline[0]:=strprotector(664);end;error;
goto exit;end{:398}else begin t:=s;repeat storenewtoken(fooinfo(t)^);
m:=m+1;u:=foolink(t)^;v:=s;
while true do begin if u=r then if curtok<>fooinfo(v)^then goto done
else begin r:=foolink(v)^;goto continue;end;
if fooinfo(u)^<>fooinfo(v)^then goto done;u:=foolink(u)^;v:=foolink(v)^;
end;done:t:=foolink(t)^;until t=r;r:=s;end{:397};
if curtok=partoken then if longstate<>longcall then{396:}
begin if longstate=call then begin runaway;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(654));end;sprintcs(warningindex);
print(strprotector(655));begin helpptr:=3;
helpline[2]:=strprotector(656);helpline[1]:=strprotector(657);
helpline[0]:=strprotector(658);end;backerror;end;
pstack[n]:=foolink(temphead)^;alignstate:=alignstate-unbalance;
for m:=0 to n do flushlist(pstack[m]);goto exit;end{:396};
if curtok<rightbracelimit then if curtok<leftbracelimit then{399:}
begin unbalance:=1;while true do begin faststorenewtoken(curtok);
gettoken;if curtok=partoken then if longstate<>longcall then{396:}
begin if longstate=call then begin runaway;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(654));end;sprintcs(warningindex);
print(strprotector(655));begin helpptr:=3;
helpline[2]:=strprotector(656);helpline[1]:=strprotector(657);
helpline[0]:=strprotector(658);end;backerror;end;
pstack[n]:=foolink(temphead)^;alignstate:=alignstate-unbalance;
for m:=0 to n do flushlist(pstack[m]);goto exit;end{:396};
if curtok<rightbracelimit then if curtok<leftbracelimit then unbalance:=
unbalance+1 else begin unbalance:=unbalance-1;
if unbalance=0 then goto done1;end;end;done1:rbraceptr:=p;
storenewtoken(curtok);end{:399}else{395:}begin backinput;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(646));end;sprintcs(warningindex);
print(strprotector(647));begin helpptr:=6;
helpline[5]:=strprotector(648);helpline[4]:=strprotector(649);
helpline[3]:=strprotector(650);helpline[2]:=strprotector(651);
helpline[1]:=strprotector(652);helpline[0]:=strprotector(653);end;
alignstate:=alignstate+1;longstate:=call;curtok:=partoken;inserror;
end{:395}else{393:}
begin if curtok=spacetoken then if fooinfo(r)^<=endmatchtoken then if
fooinfo(r)^>=matchtoken then goto continue;storenewtoken(curtok);
end{:393};m:=m+1;if fooinfo(r)^>endmatchtoken then goto continue;
if fooinfo(r)^<matchtoken then goto continue;found:if s<>0 then{400:}
begin if(m=1)and(fooinfo(p)^<rightbracelimit)and(p<>temphead)then begin
foolink(rbraceptr)^:=0;freeavail(p);p:=foolink(temphead)^;
pstack[n]:=foolink(p)^;freeavail(p);
end else pstack[n]:=foolink(temphead)^;n:=n+1;
if tracingmacros>0 then begin begindiagnostic;printnl(matchchr);
printint(n);print(strprotector(665));showtokenlist(pstack[n-1],0,1000);
enddiagnostic(false);end;end{:400}{:392};
until fooinfo(r)^=endmatchtoken;end{:391};{390:}
while(state=tokenlist)and(loc=0)do endtokenlist;
begintokenlist(refcount,macro);name:=warningindex;loc:=foolink(r)^;
if n>0 then begin if paramptr+n>maxparamstack then begin maxparamstack:=
paramptr+n;
if maxparamstack>paramsize then overflow(strprotector(645),paramsize);
end;for m:=0 to n-1 do paramstack[paramptr+m]:=pstack[m];
paramptr:=paramptr+n;end{:390};exit:scannerstatus:=savescannerstatus;
warningindex:=savewarningindex;end;{:389}{379:}procedure insertrelax;
begin curtok:=cstokenflag+curcs;backinput;
curtok:=cstokenflag+frozenrelax;backinput;tokentype:=inserted;end;{:379}
procedure passtext;forward;procedure startinput;forward;
procedure conditional;forward;procedure getxtoken;forward;
procedure convtoks;forward;procedure insthetoks;forward;
procedure expand;var t:halfword;p,q,r:pointer;j:0..bufsize;
cvbackup:integer;cvlbackup,radixbackup,cobackup:smallnumber;
backupbackup:pointer;savescannerstatus:smallnumber;
begin cvbackup:=curval;cvlbackup:=curvallevel;radixbackup:=radix;
cobackup:=curorder;backupbackup:=foolink(backuphead)^;
if curcmd<call then{367:}begin if tracingcommands>1 then showcurcmdchr;
case curcmd of topbotmark:{386:}
begin if curmark[curchr]<>0 then begintokenlist(curmark[curchr],marktext
);end{:386};expandafter:{368:}begin gettoken;t:=curtok;gettoken;
if curcmd>maxcommand then expand else backinput;curtok:=t;backinput;
end{:368};noexpand:{369:}begin savescannerstatus:=scannerstatus;
scannerstatus:=normal;gettoken;scannerstatus:=savescannerstatus;
t:=curtok;backinput;if t>=cstokenflag then begin p:=getavail;
fooinfo(p)^:=cstokenflag+frozendontexpand;foolink(p)^:=loc;start:=p;
loc:=p;end;end{:369};csname:{372:}begin r:=getavail;p:=r;
repeat getxtoken;if curcs=0 then storenewtoken(curtok);until curcs<>0;
if curcmd<>endcsname then{373:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(634));end;printesc(strprotector(516));
print(strprotector(635));begin helpptr:=2;
helpline[1]:=strprotector(636);helpline[0]:=strprotector(637);end;
backerror;end{:373};{374:}j:=first;p:=foolink(r)^;
while p<>0 do begin if j>=maxbufstack then begin maxbufstack:=j+1;
if maxbufstack=bufsize then overflow(strprotector(272),bufsize);end;
buffer[j]:=fooinfo(p)^mod 256;j:=j+1;p:=foolink(p)^;end;
if j>first+1 then begin nonewcontrolsequence:=false;
curcs:=idlookup(first,j-first);nonewcontrolsequence:=true;
end else if j=first then curcs:=nullcs else curcs:=singlebase+buffer[
first]{:374};flushlist(r);
if fooeqtype(curcs)^=undefinedcs then begin eqdefine(curcs,relax,256);
end;curtok:=curcs+cstokenflag;backinput;end{:372};convert:convtoks;
the:insthetoks;iftest:conditional;fiorelse:{510:}
if curchr>iflimit then if iflimit=ifcode then insertrelax else begin
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(784));end;printcmdchr(fiorelse,curchr);
begin helpptr:=1;helpline[0]:=strprotector(785);end;error;
end else begin while curchr<>ficode do passtext;{496:}begin p:=condptr;
ifline:=fooiflinefield(p)^;curif:=foosubtype(p)^;iflimit:=footype(p)^;
condptr:=foolink(p)^;freenode(p,ifnodesize);end{:496};end{:510};
input:{378:}
if curchr>0 then forceeof:=true else if nameinprogress then insertrelax
else startinput{:378};otherwise{370:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(628));end;begin helpptr:=5;
helpline[4]:=strprotector(629);helpline[3]:=strprotector(630);
helpline[2]:=strprotector(631);helpline[1]:=strprotector(632);
helpline[0]:=strprotector(633);end;error;end{:370}end;end{:367}
else if curcmd<endtemplate then macrocall else{375:}
begin curtok:=cstokenflag+frozenendv;backinput;end{:375};
curval:=cvbackup;curvallevel:=cvlbackup;radix:=radixbackup;
curorder:=cobackup;foolink(backuphead)^:=backupbackup;end;{:366}{380:}
procedure getxtoken;label restart,done;begin restart:getnext;
if curcmd<=maxcommand then goto done;
if curcmd>=call then if curcmd<endtemplate then macrocall else begin
curcs:=frozenendv;curcmd:=endv;goto done;end else expand;goto restart;
done:if curcs=0 then curtok:=(curcmd*256)+curchr else curtok:=
cstokenflag+curcs;end;{:380}{381:}procedure xtoken;
begin while curcmd>maxcommand do begin expand;getnext;end;
if curcs=0 then curtok:=(curcmd*256)+curchr else curtok:=cstokenflag+
curcs;end;{:381}{403:}procedure scanleftbrace;begin{404:}
repeat getxtoken;until(curcmd<>spacer)and(curcmd<>relax){:404};
if curcmd<>leftbrace then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(666));end;begin helpptr:=4;
helpline[3]:=strprotector(667);helpline[2]:=strprotector(668);
helpline[1]:=strprotector(669);helpline[0]:=strprotector(670);end;
backerror;curtok:=leftbracetoken+tobar('{');curcmd:=leftbrace;
curchr:=tobar('{');alignstate:=alignstate+1;end;end;{:403}{405:}
procedure scanoptionalequals;begin{406:}repeat getxtoken;
until curcmd<>spacer{:406};
if curtok<>othertoken+tobar('=')then backinput;end;{:405}{407:}
function scankeyword(s:strnumber):boolean;label exit;var p:pointer;
q:pointer;k:poolpointer;begin p:=backuphead;foolink(p)^:=0;
k:=strstart[s];while k<strstart[s+1]do begin getxtoken;
if(curcs=0)and((curchr=strpool[k])or(curchr=strpool[k]-tobar('a')+tobar(
'A')))then begin storenewtoken(curtok);k:=k+1;
end else if(curcmd<>spacer)or(p<>backuphead)then begin backinput;
if p<>backuphead then backlist(foolink(backuphead)^);scankeyword:=false;
goto exit;end;end;flushlist(foolink(backuphead)^);scankeyword:=true;
exit:end;{:407}{408:}procedure muerror;
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(671));end;begin helpptr:=1;
helpline[0]:=strprotector(672);end;error;end;{:408}{409:}
procedure scanint;forward;{433:}procedure scaneightbitint;begin scanint;
if(curval<0)or(curval>255)then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(696));end;begin helpptr:=2;
helpline[1]:=strprotector(697);helpline[0]:=strprotector(698);end;
interror(curval);curval:=0;end;end;{:433}{434:}procedure scancharnum;
begin scanint;
if(curval<0)or(curval>255)then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(699));end;begin helpptr:=2;
helpline[1]:=strprotector(700);helpline[0]:=strprotector(698);end;
interror(curval);curval:=0;end;end;{:434}{435:}procedure scanfourbitint;
begin scanint;
if(curval<0)or(curval>15)then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(701));end;begin helpptr:=2;
helpline[1]:=strprotector(702);helpline[0]:=strprotector(698);end;
interror(curval);curval:=0;end;end;{:435}{436:}
procedure scanfifteenbitint;begin scanint;
if(curval<0)or(curval>32767)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(703));end;
begin helpptr:=2;helpline[1]:=strprotector(704);
helpline[0]:=strprotector(698);end;interror(curval);curval:=0;end;end;
{:436}{437:}procedure scantwentysevenbitint;begin scanint;
if(curval<0)or(curval>134217727)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(705));end;
begin helpptr:=2;helpline[1]:=strprotector(706);
helpline[0]:=strprotector(698);end;interror(curval);curval:=0;end;end;
{:437}{577:}procedure scanfontident;var f:internalfontnumber;m:halfword;
begin{406:}repeat getxtoken;until curcmd<>spacer{:406};
if curcmd=deffont then f:=curfont else if curcmd=setfont then f:=curchr
else if curcmd=deffamily then begin m:=curchr;scanfourbitint;
f:=fooequiv(m+curval)^;
end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(817));end;begin helpptr:=2;
helpline[1]:=strprotector(818);helpline[0]:=strprotector(819);end;
backerror;f:=nullfont;end;curval:=f;end;{:577}{578:}
procedure findfontdimen(writing:boolean);var f:internalfontnumber;
n:integer;begin scanint;n:=curval;scanfontident;f:=curval;
if n<=0 then curval:=fmemptr else begin if writing and(n<=
spaceshrinkcode)and(n>=spacecode)and(fontglue[f]<>0)then begin
deleteglueref(fontglue[f]);fontglue[f]:=0;end;
if n>fontparams[f]then if f<fontptr then curval:=fmemptr else{580:}
begin repeat if fmemptr=fontmemsize then overflow(strprotector(824),
fontmemsize);fontinfo[fmemptr].sc:=0;fmemptr:=fmemptr+1;
fontparams[f]:=fontparams[f]+1;until n=fontparams[f];curval:=fmemptr-1;
end{:580}else curval:=n+parambase[f];end;{579:}
if curval=fmemptr then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(265));end;printesc(foofontidtext(f)^);
print(strprotector(820));printint(fontparams[f]);
print(strprotector(821));begin helpptr:=2;
helpline[1]:=strprotector(822);helpline[0]:=strprotector(823);end;error;
end{:579};end;{:578}{:409}{413:}
procedure scansomethinginternal(level:smallnumber;negative:boolean);
var m:halfword;p:0..nestsize;begin m:=curchr;
case curcmd of defcode:{414:}begin scancharnum;
if m=mathcodebase then begin curval:=foomathcode(curval)^-0;
curvallevel:=intval;
end else if m<mathcodebase then begin curval:=fooequiv(m+curval)^;
curvallevel:=intval;end else begin curval:=eqtb[m+curval].int;
curvallevel:=intval;end;end{:414};
toksregister,assigntoks,deffamily,setfont,deffont:{415:}
if level<>tokval then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(673));end;begin helpptr:=3;
helpline[2]:=strprotector(674);helpline[1]:=strprotector(675);
helpline[0]:=strprotector(676);end;backerror;begin curval:=0;
curvallevel:=dimenval;end;
end else if curcmd<=assigntoks then begin if curcmd<assigntoks then
begin scaneightbitint;m:=toksbase+curval;end;begin curval:=fooequiv(m)^;
curvallevel:=tokval;end;end else begin backinput;scanfontident;
begin curval:=fontidbase+curval;curvallevel:=identval;end;end{:415};
assignint:begin curval:=eqtb[m].int;curvallevel:=intval;end;
assigndimen:begin curval:=eqtb[m].sc;curvallevel:=dimenval;end;
assignglue:begin curval:=fooequiv(m)^;curvallevel:=glueval;end;
assignmuglue:begin curval:=fooequiv(m)^;curvallevel:=muval;end;
setaux:{418:}
if abs(mode)<>m then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(689));end;printcmdchr(setaux,m);
begin helpptr:=4;helpline[3]:=strprotector(690);
helpline[2]:=strprotector(691);helpline[1]:=strprotector(692);
helpline[0]:=strprotector(693);end;error;
if level<>tokval then begin curval:=0;curvallevel:=dimenval;
end else begin curval:=0;curvallevel:=intval;end;
end else if m=vmode then begin curval:=prevdepth;curvallevel:=dimenval;
end else begin curval:=spacefactor;curvallevel:=intval;end{:418};
setprevgraf:{422:}if mode=0 then begin curval:=0;curvallevel:=intval;
end else begin nest[nestptr]:=curlist;p:=nestptr;
while abs(nest[p].modefield)<>vmode do p:=p-1;
begin curval:=nest[p].pgfield;curvallevel:=intval;end;end{:422};
setpageint:{419:}
begin if m=0 then curval:=deadcycles else curval:=insertpenalties;
curvallevel:=intval;end{:419};setpagedimen:{421:}
begin if(pagecontents=empty)and(not outputactive)then if m=0 then curval
:=maxdimen else curval:=0 else curval:=pagesofar[m];
curvallevel:=dimenval;end{:421};setshape:{423:}
begin if parshapeptr=0 then curval:=0 else curval:=fooinfo(parshapeptr)^
;curvallevel:=intval;end{:423};setboxdimen:{420:}begin scaneightbitint;
if foobox(curval)^=0 then curval:=0 else curval:=mem[foobox(curval)^+m].
sc;curvallevel:=dimenval;end{:420};
chargiven,mathgiven:begin curval:=curchr;curvallevel:=intval;end;
assignfontdimen:{425:}begin findfontdimen(false);
fontinfo[fmemptr].sc:=0;begin curval:=fontinfo[curval].sc;
curvallevel:=dimenval;end;end{:425};assignfontint:{426:}
begin scanfontident;if m=0 then begin curval:=hyphenchar[curval];
curvallevel:=intval;end else begin curval:=skewchar[curval];
curvallevel:=intval;end;end{:426};register:{427:}begin scaneightbitint;
case m of intval:curval:=foocount(curval)^;
dimenval:curval:=foodimen(curval)^;glueval:curval:=fooskip(curval)^;
muval:curval:=foomuskip(curval)^;end;curvallevel:=m;end{:427};
lastitem:{424:}
if curchr>glueval then begin if curchr=inputlinenocode then curval:=line
else curval:=lastbadness;curvallevel:=intval;
end else begin if curchr=glueval then curval:=zeroglue else curval:=0;
curvallevel:=curchr;
if not ischarnode(tail)and(mode<>0)then case curchr of intval:if footype
(tail)^=penaltynode then curval:=foopenalty(tail)^;
dimenval:if footype(tail)^=kernnode then curval:=foowidth(tail)^;
glueval:if footype(tail)^=gluenode then begin curval:=fooglueptr(tail)^;
if foosubtype(tail)^=muglue then curvallevel:=muval;end;
end else if(mode=vmode)and(tail=head)then case curchr of intval:curval:=
lastpenalty;dimenval:curval:=lastkern;
glueval:if lastglue<>maxhalfword then curval:=lastglue;end;end{:424};
otherwise{428:}begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(694));end;printcmdchr(curcmd,curchr);
print(strprotector(695));printesc(strprotector(548));begin helpptr:=1;
helpline[0]:=strprotector(693);end;error;
if level<>tokval then begin curval:=0;curvallevel:=dimenval;
end else begin curval:=0;curvallevel:=intval;end;end{:428}end;
while curvallevel>level do{429:}
begin if curvallevel=glueval then curval:=foowidth(curval)^else if
curvallevel=muval then muerror;curvallevel:=curvallevel-1;end{:429};
{430:}
if negative then if curvallevel>=glueval then begin curval:=newspec(
curval);{431:}begin foowidth(curval)^:=-foowidth(curval)^;
foostretch(curval)^:=-foostretch(curval)^;
fooshrink(curval)^:=-fooshrink(curval)^;end{:431};
end else curval:=-curval else if(curvallevel>=glueval)and(curvallevel<=
muval)then addglueref(curval){:430};end;{:413}{440:}procedure scanint;
label done;var negative:boolean;m:integer;d:smallnumber;vacuous:boolean;
OKsofar:boolean;begin radix:=0;OKsofar:=true;{441:}negative:=false;
repeat{406:}repeat getxtoken;until curcmd<>spacer{:406};
if curtok=othertoken+tobar('-')then begin negative:=not negative;
curtok:=othertoken+tobar('+');end;
until curtok<>othertoken+tobar('+'){:441};
if curtok=alphatoken then{442:}begin gettoken;
if curtok<cstokenflag then begin curval:=curchr;
if curcmd<=rightbrace then if curcmd=rightbrace then alignstate:=
alignstate+1 else alignstate:=alignstate-1;
end else if curtok<cstokenflag+singlebase then curval:=curtok-
cstokenflag-activebase else curval:=curtok-cstokenflag-singlebase;
if curval>255 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(707));end;begin helpptr:=2;
helpline[1]:=strprotector(708);helpline[0]:=strprotector(709);end;
curval:=tobar('0');backerror;end else{443:}begin getxtoken;
if curcmd<>spacer then backinput;end{:443};end{:442}
else if(curcmd>=mininternal)and(curcmd<=maxinternal)then
scansomethinginternal(intval,false)else{444:}begin radix:=10;
m:=214748364;if curtok=octaltoken then begin radix:=8;m:=268435456;
getxtoken;end else if curtok=hextoken then begin radix:=16;m:=134217728;
getxtoken;end;vacuous:=true;curval:=0;{445:}
while true do begin if(curtok<zerotoken+radix)and(curtok>=zerotoken)and(
curtok<=zerotoken+9)then d:=curtok-zerotoken else if radix=16 then if(
curtok<=Atoken+5)and(curtok>=Atoken)then d:=curtok-Atoken+10 else if(
curtok<=otherAtoken+5)and(curtok>=otherAtoken)then d:=curtok-otherAtoken
+10 else goto done else goto done;vacuous:=false;
if(curval>=m)and((curval>m)or(d>7)or(radix<>10))then begin if OKsofar
then begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(710));end;begin helpptr:=2;
helpline[1]:=strprotector(711);helpline[0]:=strprotector(712);end;error;
curval:=infinity;OKsofar:=false;end;end else curval:=curval*radix+d;
getxtoken;end;done:{:445};if vacuous then{446:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(673));end;begin helpptr:=3;
helpline[2]:=strprotector(674);helpline[1]:=strprotector(675);
helpline[0]:=strprotector(676);end;backerror;end{:446}
else if curcmd<>spacer then backinput;end{:444};
if negative then curval:=-curval;end;{:440}{448:}
procedure scandimen(mu,inf,shortcut:boolean);
label done,done1,done2,found,notfound,attachfraction,attachsign;
var negative:boolean;f:integer;{450:}num,denom:1..65536;
k,kk:smallnumber;p,q:pointer;v:scaled;savecurval:integer;{:450}
begin f:=0;aritherror:=false;curorder:=normal;negative:=false;
if not shortcut then begin{441:}negative:=false;repeat{406:}
repeat getxtoken;until curcmd<>spacer{:406};
if curtok=othertoken+tobar('-')then begin negative:=not negative;
curtok:=othertoken+tobar('+');end;
until curtok<>othertoken+tobar('+'){:441};
if(curcmd>=mininternal)and(curcmd<=maxinternal)then{449:}
if mu then begin scansomethinginternal(muval,false);{451:}
if curvallevel>=glueval then begin v:=foowidth(curval)^;
deleteglueref(curval);curval:=v;end{:451};
if curvallevel=muval then goto attachsign;
if curvallevel<>intval then muerror;
end else begin scansomethinginternal(dimenval,false);
if curvallevel=dimenval then goto attachsign;end{:449}
else begin backinput;
if curtok=continentalpointtoken then curtok:=pointtoken;
if curtok<>pointtoken then scanint else begin radix:=10;curval:=0;end;
if curtok=continentalpointtoken then curtok:=pointtoken;
if(radix=10)and(curtok=pointtoken)then{452:}begin k:=0;p:=0;gettoken;
while true do begin getxtoken;
if(curtok>zerotoken+9)or(curtok<zerotoken)then goto done1;
if k<17 then begin q:=getavail;foolink(q)^:=p;
fooinfo(q)^:=curtok-zerotoken;p:=q;k:=k+1;end;end;
done1:for kk:=k downto 1 do begin dig[kk-1]:=fooinfo(p)^;q:=p;
p:=foolink(p)^;freeavail(q);end;f:=rounddecimals(k);
if curcmd<>spacer then backinput;end{:452};end;end;
if curval<0 then begin negative:=not negative;curval:=-curval;end;{453:}
if inf then{454:}
if scankeyword(strprotector(325))then begin curorder:=fil;
while scankeyword(tobar('l'))do begin if curorder=filll then begin begin
if interaction=errorstopmode then;printnl(258);print(strprotector(714));
end;print(strprotector(715));begin helpptr:=1;
helpline[0]:=strprotector(716);end;error;end else curorder:=curorder+1;
end;goto attachfraction;end{:454};{455:}savecurval:=curval;{406:}
repeat getxtoken;until curcmd<>spacer{:406};
if(curcmd<mininternal)or(curcmd>maxinternal)then backinput else begin if
mu then begin scansomethinginternal(muval,false);{451:}
if curvallevel>=glueval then begin v:=foowidth(curval)^;
deleteglueref(curval);curval:=v;end{:451};
if curvallevel<>muval then muerror;
end else scansomethinginternal(dimenval,false);v:=curval;goto found;end;
if mu then goto notfound;
if scankeyword(strprotector(717))then v:=({558:}fooquad(curfont)^{:558}
)else if scankeyword(strprotector(718))then v:=({559:}
fooxheight(curfont)^{:559})else goto notfound;{443:}begin getxtoken;
if curcmd<>spacer then backinput;end{:443};
found:curval:=multandadd(savecurval,v,xnoverd(v,f,65536),1073741823);
goto attachsign;notfound:{:455};if mu then{456:}
if scankeyword(strprotector(350))then goto attachfraction else begin
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(714));end;print(strprotector(719));begin helpptr:=4;
helpline[3]:=strprotector(720);helpline[2]:=strprotector(721);
helpline[1]:=strprotector(722);helpline[0]:=strprotector(723);end;error;
goto attachfraction;end{:456};
if scankeyword(strprotector(713))then{457:}begin preparemag;
if mag<>1000 then begin curval:=xnoverd(curval,1000,mag);
f:=(1000*f+65536*texremainder)div mag;curval:=curval+(f div 65536);
f:=f mod 65536;end;end{:457};
if scankeyword(strprotector(268))then goto attachfraction;{458:}
if scankeyword(strprotector(724))then begin num:=7227;denom:=100;
end else if scankeyword(strprotector(725))then begin num:=12;denom:=1;
end else if scankeyword(strprotector(726))then begin num:=7227;
denom:=254;
end else if scankeyword(strprotector(727))then begin num:=7227;
denom:=2540;
end else if scankeyword(strprotector(728))then begin num:=7227;
denom:=7200;
end else if scankeyword(strprotector(729))then begin num:=1238;
denom:=1157;
end else if scankeyword(strprotector(730))then begin num:=14856;
denom:=1157;
end else if scankeyword(strprotector(731))then goto done else{459:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(714));end;print(strprotector(732));begin helpptr:=6;
helpline[5]:=strprotector(733);helpline[4]:=strprotector(734);
helpline[3]:=strprotector(735);helpline[2]:=strprotector(721);
helpline[1]:=strprotector(722);helpline[0]:=strprotector(723);end;error;
goto done2;end{:459};curval:=xnoverd(curval,num,denom);
f:=(num*f+65536*texremainder)div denom;curval:=curval+(f div 65536);
f:=f mod 65536;done2:{:458};
attachfraction:if curval>=16384 then aritherror:=true else curval:=
curval*unity+f;done:{:453};{443:}begin getxtoken;
if curcmd<>spacer then backinput;end{:443};
attachsign:if aritherror or(abs(curval)>=1073741824)then{460:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(736));end;begin helpptr:=2;
helpline[1]:=strprotector(737);helpline[0]:=strprotector(738);end;error;
curval:=maxdimen;aritherror:=false;end{:460};
if negative then curval:=-curval;end;{:448}{461:}
procedure scanglue(level:smallnumber);label exit;var negative:boolean;
q:pointer;mu:boolean;begin mu:=(level=muval);{441:}negative:=false;
repeat{406:}repeat getxtoken;until curcmd<>spacer{:406};
if curtok=othertoken+tobar('-')then begin negative:=not negative;
curtok:=othertoken+tobar('+');end;
until curtok<>othertoken+tobar('+'){:441};
if(curcmd>=mininternal)and(curcmd<=maxinternal)then begin
scansomethinginternal(level,negative);
if curvallevel>=glueval then begin if curvallevel<>level then muerror;
goto exit;end;
if curvallevel=intval then scandimen(mu,false,true)else if level=muval
then muerror;end else begin backinput;scandimen(mu,false,false);
if negative then curval:=-curval;end;{462:}q:=newspec(zeroglue);
foowidth(q)^:=curval;
if scankeyword(strprotector(739))then begin scandimen(mu,true,false);
foostretch(q)^:=curval;foostretchorder(q)^:=curorder;end;
if scankeyword(strprotector(740))then begin scandimen(mu,true,false);
fooshrink(q)^:=curval;fooshrinkorder(q)^:=curorder;end;curval:=q{:462};
exit:end;{:461}{463:}function scanrulespec:pointer;label reswitch;
var q:pointer;begin q:=newrule;
if curcmd=vrule then foowidth(q)^:=defaultrule else begin fooheight(q)^
:=defaultrule;foodepth(q)^:=0;end;
reswitch:if scankeyword(strprotector(741))then begin scannormaldimen;
foowidth(q)^:=curval;goto reswitch;end;
if scankeyword(strprotector(742))then begin scannormaldimen;
fooheight(q)^:=curval;goto reswitch;end;
if scankeyword(strprotector(743))then begin scannormaldimen;
foodepth(q)^:=curval;goto reswitch;end;scanrulespec:=q;end;{:463}{464:}
function strtoks(b:poolpointer):pointer;var p:pointer;q:pointer;
t:halfword;k:poolpointer;
begin begin if poolptr+1>poolsize then overflow(257,poolsize-initpoolptr
);end;p:=temphead;foolink(p)^:=0;k:=b;
while k<poolptr do begin t:=strpool[k];
if t=tobar(' ')then t:=spacetoken else t:=othertoken+t;
faststorenewtoken(t);k:=k+1;end;poolptr:=b;strtoks:=p;end;{:464}{465:}
function thetoks:pointer;var oldsetting:0..maxselector;p,q,r:pointer;
b:poolpointer;begin getxtoken;scansomethinginternal(tokval,false);
if curvallevel>=identval then{466:}begin p:=temphead;foolink(p)^:=0;
if curvallevel=identval then storenewtoken(cstokenflag+curval)else if
curval<>0 then begin r:=foolink(curval)^;
while r<>0 do begin faststorenewtoken(fooinfo(r)^);r:=foolink(r)^;end;
end;thetoks:=p;end{:466}else begin oldsetting:=selector;
selector:=newstring;b:=poolptr;
case curvallevel of intval:printint(curval);
dimenval:begin printscaled(curval);print(strprotector(268));end;
glueval:begin printspec(curval,strprotector(268));deleteglueref(curval);
end;muval:begin printspec(curval,strprotector(350));
deleteglueref(curval);end;end;selector:=oldsetting;thetoks:=strtoks(b);
end;end;{:465}{467:}procedure insthetoks;
begin foolink(garbage)^:=thetoks;inslist(foolink(temphead)^);end;{:467}
{470:}procedure convtoks;var oldsetting:0..maxselector;
c:numbercode..jobnamecode;savescannerstatus:smallnumber;b:poolpointer;
begin c:=curchr;{471:}case c of numbercode,romannumeralcode:scanint;
stringcode,meaningcode:begin savescannerstatus:=scannerstatus;
scannerstatus:=normal;gettoken;scannerstatus:=savescannerstatus;end;
fontnamecode:scanfontident;jobnamecode:if jobname=0 then openlogfile;
end{:471};oldsetting:=selector;selector:=newstring;b:=poolptr;{472:}
case c of numbercode:printint(curval);
romannumeralcode:printromanint(curval);
stringcode:if curcs<>0 then sprintcs(curcs)else printchar(curchr);
meaningcode:printmeaning;fontnamecode:begin print(fontname[curval]);
if fontsize[curval]<>fontdsize[curval]then begin print(strprotector(267)
);printscaled(fontsize[curval]);print(strprotector(268));end;end;
jobnamecode:print(jobname);end{:472};selector:=oldsetting;
foolink(garbage)^:=strtoks(b);inslist(foolink(temphead)^);end;{:470}
{473:}function scantoks(macrodef,xpand:boolean):pointer;
label found,done,done1,done2;var t:halfword;s:halfword;p:pointer;
q:pointer;unbalance:halfword;hashbrace:halfword;
begin if macrodef then scannerstatus:=defining else scannerstatus:=
absorbing;warningindex:=curcs;defref:=getavail;
footokenrefcount(defref)^:=0;p:=defref;hashbrace:=0;t:=zerotoken;
if macrodef then{474:}begin while true do begin gettoken;
if curtok<rightbracelimit then goto done1;if curcmd=macparam then{476:}
begin s:=matchtoken+curchr;gettoken;
if curcmd=leftbrace then begin hashbrace:=curtok;storenewtoken(curtok);
storenewtoken(endmatchtoken);goto done;end;
if t=zerotoken+9 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(752));end;begin helpptr:=1;
helpline[0]:=strprotector(753);end;error;end else begin t:=t+1;
if curtok<>t then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(754));end;begin helpptr:=2;
helpline[1]:=strprotector(755);helpline[0]:=strprotector(756);end;
backerror;end;curtok:=s;end;end{:476};storenewtoken(curtok);end;
done1:storenewtoken(endmatchtoken);if curcmd=rightbrace then{475:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(666));end;alignstate:=alignstate+1;begin helpptr:=2;
helpline[1]:=strprotector(750);helpline[0]:=strprotector(751);end;error;
goto found;end{:475};done:end{:474}else scanleftbrace;{477:}
unbalance:=1;while true do begin if xpand then{478:}
begin while true do begin getnext;if curcmd<=maxcommand then goto done2;
if curcmd<>the then expand else begin q:=thetoks;
if foolink(temphead)^<>0 then begin foolink(p)^:=foolink(temphead)^;
p:=q;end;end;end;done2:xtoken end{:478}else gettoken;
if curtok<rightbracelimit then if curcmd<rightbrace then unbalance:=
unbalance+1 else begin unbalance:=unbalance-1;
if unbalance=0 then goto found;
end else if curcmd=macparam then if macrodef then{479:}begin s:=curtok;
if xpand then getxtoken else gettoken;
if curcmd<>macparam then if(curtok<=zerotoken)or(curtok>t)then begin
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(757));end;sprintcs(warningindex);begin helpptr:=3;
helpline[2]:=strprotector(758);helpline[1]:=strprotector(759);
helpline[0]:=strprotector(760);end;backerror;curtok:=s;
end else curtok:=outparamtoken-tobar('0')+curchr;end{:479};
storenewtoken(curtok);end{:477};found:scannerstatus:=normal;
if hashbrace<>0 then storenewtoken(hashbrace);scantoks:=p;end;{:473}
{482:}procedure readtoks(n:integer;r:pointer);label done;var p:pointer;
q:pointer;s:integer;m:smallnumber;begin scannerstatus:=defining;
warningindex:=r;defref:=getavail;footokenrefcount(defref)^:=0;p:=defref;
storenewtoken(endmatchtoken);if(n<0)or(n>15)then m:=16 else m:=n;
s:=alignstate;alignstate:=1000000;repeat{483:}beginfilereading;
name:=m+1;if readopen[m]=closed then{484:}
if interaction>nonstopmode then if n<0 then begin;
print(strprotector(266));terminput;end else begin;println;sprintcs(r);
begin;print(tobar('='));terminput;end;n:=-1;
end else fatalerror(strprotector(761)){:484}
else if readopen[m]=justopen then{485:}
if inputln(readfile[m],false)then readopen[m]:=normal else begin aclose(
readfile[m]);readopen[m]:=closed;end{:485}else{486:}
begin if not inputln(readfile[m],true)then begin aclose(readfile[m]);
readopen[m]:=closed;if alignstate<>1000000 then begin runaway;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(762));end;printesc(strprotector(545));
begin helpptr:=1;helpline[0]:=strprotector(763);end;alignstate:=1000000;
error;end;end;end{:486};limit:=last;
if endlinecharinactive then limit:=limit-1 else buffer[limit]:=
endlinechar;first:=limit+1;loc:=start;state:=newline;
while true do begin gettoken;if curtok=0 then goto done;
if alignstate<1000000 then begin repeat gettoken;until curtok=0;
alignstate:=1000000;goto done;end;storenewtoken(curtok);end;
done:endfilereading{:483};until alignstate=1000000;curval:=defref;
scannerstatus:=normal;alignstate:=s;end;{:482}{494:}procedure passtext;
label done;var l:integer;savescannerstatus:smallnumber;
begin savescannerstatus:=scannerstatus;scannerstatus:=skipping;l:=0;
skipline:=line;while true do begin getnext;
if curcmd=fiorelse then begin if l=0 then goto done;
if curchr=ficode then l:=l-1;end else if curcmd=iftest then l:=l+1;end;
done:scannerstatus:=savescannerstatus;end;{:494}{497:}
procedure changeiflimit(l:smallnumber;p:pointer);label exit;
var q:pointer;begin if p=condptr then iflimit:=l else begin q:=condptr;
while true do begin if q=0 then confusion(strprotector(764));
if foolink(q)^=p then begin footype(q)^:=l;goto exit;end;q:=foolink(q)^;
end;end;exit:end;{:497}{498:}procedure conditional;
label exit,commonending;var b:boolean;r:tobar('<')..tobar('>');
m,n:integer;p,q:pointer;savescannerstatus:smallnumber;
savecondptr:pointer;thisif:smallnumber;begin{495:}
begin p:=getnode(ifnodesize);foolink(p)^:=condptr;footype(p)^:=iflimit;
foosubtype(p)^:=curif;fooiflinefield(p)^:=ifline;condptr:=p;
curif:=curchr;iflimit:=ifcode;ifline:=line;end{:495};
savecondptr:=condptr;thisif:=curchr;{501:}
case thisif of ifcharcode,ifcatcode:{506:}begin getxtokenoractivechar;
if(curcmd>activechar)or(curchr>255)then begin m:=relax;n:=256;
end else begin m:=curcmd;n:=curchr;end;getxtokenoractivechar;
if(curcmd>activechar)or(curchr>255)then begin curcmd:=relax;curchr:=256;
end;if thisif=ifcharcode then b:=(n=curchr)else b:=(m=curcmd);end{:506};
ifintcode,ifdimcode:{503:}
begin if thisif=ifintcode then scanint else scannormaldimen;n:=curval;
{406:}repeat getxtoken;until curcmd<>spacer{:406};
if(curtok>=othertoken+tobar('<'))and(curtok<=othertoken+tobar('>'))then
r:=curtok-othertoken else begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(788));end;printcmdchr(iftest,thisif);
begin helpptr:=1;helpline[0]:=strprotector(789);end;backerror;
r:=tobar('=');end;if thisif=ifintcode then scanint else scannormaldimen;
case r of tobar('<'):b:=(n<curval);tobar('='):b:=(n=curval);
tobar('>'):b:=(n>curval);end;end{:503};ifoddcode:{504:}begin scanint;
b:=odd(curval);end{:504};ifvmodecode:b:=(abs(mode)=vmode);
ifhmodecode:b:=(abs(mode)=hmode);ifmmodecode:b:=(abs(mode)=mmode);
ifinnercode:b:=(mode<0);ifvoidcode,ifhboxcode,ifvboxcode:{505:}
begin scaneightbitint;p:=foobox(curval)^;
if thisif=ifvoidcode then b:=(p=0)else if p=0 then b:=false else if
thisif=ifhboxcode then b:=(footype(p)^=hlistnode)else b:=(footype(p)^=
vlistnode);end{:505};ifxcode:{507:}
begin savescannerstatus:=scannerstatus;scannerstatus:=normal;getnext;
n:=curcs;p:=curcmd;q:=curchr;getnext;
if curcmd<>p then b:=false else if curcmd<call then b:=(curchr=q)else{
508:}begin p:=foolink(curchr)^;q:=foolink(fooequiv(n)^)^;
if p=q then b:=true else begin while(p<>0)and(q<>0)do if fooinfo(p)^<>
fooinfo(q)^then p:=0 else begin p:=foolink(p)^;q:=foolink(q)^;end;
b:=((p=0)and(q=0));end;end{:508};scannerstatus:=savescannerstatus;
end{:507};ifeofcode:begin scanfourbitint;b:=(readopen[curval]=closed);
end;iftruecode:b:=true;iffalsecode:b:=false;ifcasecode:{509:}
begin scanint;n:=curval;if tracingcommands>1 then begin begindiagnostic;
print(strprotector(790));printint(n);printchar(tobar('}'));
enddiagnostic(false);end;while n<>0 do begin passtext;
if condptr=savecondptr then if curchr=orcode then n:=n-1 else goto
commonending else if curchr=ficode then{496:}begin p:=condptr;
ifline:=fooiflinefield(p)^;curif:=foosubtype(p)^;iflimit:=footype(p)^;
condptr:=foolink(p)^;freenode(p,ifnodesize);end{:496};end;
changeiflimit(orcode,savecondptr);goto exit;end{:509};end{:501};
if tracingcommands>1 then{502:}begin begindiagnostic;
if b then print(strprotector(786))else print(strprotector(787));
enddiagnostic(false);end{:502};
if b then begin changeiflimit(elsecode,savecondptr);goto exit;end;{500:}
while true do begin passtext;
if condptr=savecondptr then begin if curchr<>orcode then goto
commonending;begin if interaction=errorstopmode then;printnl(258);
print(strprotector(784));end;printesc(strprotector(782));
begin helpptr:=1;helpline[0]:=strprotector(785);end;error;
end else if curchr=ficode then{496:}begin p:=condptr;
ifline:=fooiflinefield(p)^;curif:=foosubtype(p)^;iflimit:=footype(p)^;
condptr:=foolink(p)^;freenode(p,ifnodesize);end{:496};end{:500};
commonending:if curchr=ficode then{496:}begin p:=condptr;
ifline:=fooiflinefield(p)^;curif:=foosubtype(p)^;iflimit:=footype(p)^;
condptr:=foolink(p)^;freenode(p,ifnodesize);end{:496}
else iflimit:=ficode;exit:end;{:498}{515:}procedure beginname;
begin areadelimiter:=0;extdelimiter:=0;end;{:515}{516:}
function morename(c:ASCIIcode):boolean;
begin if c=tobar(' ')then morename:=false else begin begin if poolptr+1>
poolsize then overflow(257,poolsize-initpoolptr);end;appendchar(c);
if(c=tobar('>'))or(c=tobar(':'))then begin areadelimiter:=curlength;
extdelimiter:=0;
end else if(c=tobar('.'))and(extdelimiter=0)then extdelimiter:=curlength
;morename:=true;end;end;{:516}{517:}procedure endname;
begin if strptr+3>maxstrings then overflow(strprotector(273),maxstrings-
initstrptr);
if areadelimiter=0 then curarea:=strprotector(266)else begin curarea:=
strptr;strstart[strptr+1]:=strstart[strptr]+areadelimiter;
strptr:=strptr+1;end;
if extdelimiter=0 then begin curext:=strprotector(266);
curname:=makestring;end else begin curname:=strptr;
strstart[strptr+1]:=strstart[strptr]+extdelimiter-areadelimiter-1;
strptr:=strptr+1;curext:=makestring;end;end;{:517}{519:}
procedure packfilename(n,a,e:strnumber);var k:integer;c:ASCIIcode;
j:poolpointer;begin k:=0;
for j:=strstart[a]to strstart[a+1]-1 do appendtoname(strpool[j]);
for j:=strstart[n]to strstart[n+1]-1 do appendtoname(strpool[j]);
for j:=strstart[e]to strstart[e+1]-1 do appendtoname(strpool[j]);
if k<=filenamesize then namelength:=k else namelength:=filenamesize;
for k:=namelength+1 to filenamesize do nameoffile[k]:=' ';end;{:519}
{523:}procedure packbufferedname(n:smallnumber;a,b:integer);
var k:integer;c:ASCIIcode;j:integer;
begin if n+b-a+1+formatextlength>filenamesize then b:=a+filenamesize-n
-1-formatextlength;k:=0;
for j:=1 to n do appendtoname(xord[TEXformatdefault[j]]);
for j:=a to b do appendtoname(buffer[j]);
for j:=formatdefaultlength-formatextlength+1 to formatdefaultlength do
appendtoname(xord[TEXformatdefault[j]]);
if k<=filenamesize then namelength:=k else namelength:=filenamesize;
for k:=namelength+1 to filenamesize do nameoffile[k]:=' ';end;{:523}
{525:}function makenamestring:strnumber;var k:1..filenamesize;
begin if(poolptr+namelength>poolsize)or(strptr=maxstrings)or(curlength>0
)then makenamestring:=tobar('?')else begin for k:=1 to namelength do
appendchar(xord[nameoffile[k]]);makenamestring:=makestring;end;end;
function amakenamestring(var f:alphafile):strnumber;
begin amakenamestring:=makenamestring;end;
function bmakenamestring(var f:bytefile):strnumber;
begin bmakenamestring:=makenamestring;end;
function wmakenamestring(var f:wordfile):strnumber;
begin wmakenamestring:=makenamestring;end;{:525}{526:}
procedure scanfilename;label done;begin nameinprogress:=true;beginname;
{406:}repeat getxtoken;until curcmd<>spacer{:406};
while true do begin if(curcmd>otherchar)or(curchr>255)then begin
backinput;goto done;end;if not morename(curchr)then goto done;getxtoken;
end;done:endname;nameinprogress:=false;end;{:526}{529:}
procedure packjobname(s:strnumber);begin curarea:=strprotector(266);
curext:=s;curname:=jobname;packcurname;end;{:529}{530:}
procedure promptfilename(s,e:strnumber);label done;var k:0..bufsize;
begin if interaction=scrollmode then;
if s=strprotector(791)then begin if interaction=errorstopmode then;
printnl(258);print(strprotector(792));
end else begin if interaction=errorstopmode then;printnl(258);
print(strprotector(793));end;printfilename(curname,curarea,curext);
print(strprotector(794));if e=strprotector(795)then showcontext;
printnl(strprotector(796));print(s);
if interaction<scrollmode then fatalerror(strprotector(797));;begin;
print(strprotector(578));terminput;end;{531:}begin beginname;k:=first;
while(buffer[k]=tobar(' '))and(k<last)do k:=k+1;
while true do begin if k=last then goto done;
if not morename(buffer[k])then goto done;k:=k+1;end;done:endname;
end{:531};if curext=strprotector(266)then curext:=e;packcurname;end;
{:530}{534:}procedure openlogfile;var oldsetting:0..maxselector;
k:0..bufsize;l:0..bufsize;months:packed array[1..36]of char;
begin oldsetting:=selector;if jobname=0 then jobname:=strprotector(798);
packjobname(strprotector(799));while not aopenout(logfile)do{535:}
begin selector:=termonly;
promptfilename(strprotector(801),strprotector(799));end{:535};
logname:=amakenamestring(logfile);selector:=logonly;logopened:=true;
{536:}begin write(logfile,banner);slowprint(formatident);
print(strprotector(802));printint(day);printchar(tobar(' '));
months:='JANFEBMARAPRMAYJUNJULAUGSEPOCTNOVDEC';
for k:=3*month-2 to 3*month do write(logfile,months[k]);
printchar(tobar(' '));printint(year);printchar(tobar(' '));
printtwo(time div 60);printchar(tobar(':'));printtwo(time mod 60);
end{:536};inputstack[inputptr]:=curinput;printnl(strprotector(800));
l:=inputstack[0].limitfield;if buffer[l]=endlinechar then l:=l-1;
for k:=1 to l do print(buffer[k]);println;selector:=oldsetting+2;end;
{:534}{537:}procedure startinput;label done;begin scanfilename;
if curext=strprotector(266)then curext:=strprotector(795);packcurname;
while true do begin beginfilereading;if aopenin(curfile)then goto done;
if curarea=strprotector(266)then begin packfilename(curname,261,curext);
if aopenin(curfile)then goto done;end;endfilereading;
promptfilename(strprotector(791),strprotector(795));end;
done:name:=amakenamestring(curfile);
if jobname=0 then begin jobname:=curname;openlogfile;end;
if termoffset+flength(name)>maxprintline-2 then println else if(
termoffset>0)or(fileoffset>0)then printchar(tobar(' '));
printchar(tobar('('));openparens:=openparens+1;slowprint(name);
fflush(termout);state:=newline;if name=strptr-1 then begin flushstring;
name:=curname;end;{538:}begin line:=1;if inputln(curfile,false)then;
firmuptheline;
if endlinecharinactive then limit:=limit-1 else buffer[limit]:=
endlinechar;first:=limit+1;loc:=start;end{:538};end;{:537}{560:}
function readfontinfo(u:pointer;nom,aire:strnumber;
s:scaled):internalfontnumber;label done,badtfm,notfound;var k:fontindex;
fileopened:boolean;lf,lh,bc,ec,nw,nh,nd,ni,nl,nk,ne,np:halfword;
f:internalfontnumber;g:internalfontnumber;a,b,c,d:eightbits;
qw:fourquarters;sw:scaled;bchlabel:integer;bchar:0..256;z:scaled;
alpha:integer;beta:1..16;begin g:=nullfont;{562:}{563:}
fileopened:=false;
if aire=strprotector(266)then packfilename(nom,262,strprotector(811))
else packfilename(nom,aire,strprotector(811));
if not bopenin(tfmfile)then goto badtfm;fileopened:=true{:563};{565:}
begin begin lf:=getc(tfmfile);if lf>127 then goto badtfm;;
lf:=lf*256+getc(tfmfile);end;;begin lh:=getc(tfmfile);
if lh>127 then goto badtfm;;lh:=lh*256+getc(tfmfile);end;;
begin bc:=getc(tfmfile);if bc>127 then goto badtfm;;
bc:=bc*256+getc(tfmfile);end;;begin ec:=getc(tfmfile);
if ec>127 then goto badtfm;;ec:=ec*256+getc(tfmfile);end;
if(bc>ec+1)or(ec>255)then goto badtfm;if bc>255 then begin bc:=1;ec:=0;
end;;begin nw:=getc(tfmfile);if nw>127 then goto badtfm;;
nw:=nw*256+getc(tfmfile);end;;begin nh:=getc(tfmfile);
if nh>127 then goto badtfm;;nh:=nh*256+getc(tfmfile);end;;
begin nd:=getc(tfmfile);if nd>127 then goto badtfm;;
nd:=nd*256+getc(tfmfile);end;;begin ni:=getc(tfmfile);
if ni>127 then goto badtfm;;ni:=ni*256+getc(tfmfile);end;;
begin nl:=getc(tfmfile);if nl>127 then goto badtfm;;
nl:=nl*256+getc(tfmfile);end;;begin nk:=getc(tfmfile);
if nk>127 then goto badtfm;;nk:=nk*256+getc(tfmfile);end;;
begin ne:=getc(tfmfile);if ne>127 then goto badtfm;;
ne:=ne*256+getc(tfmfile);end;;begin np:=getc(tfmfile);
if np>127 then goto badtfm;;np:=np*256+getc(tfmfile);end;
if lf<>6+lh+(ec-bc+1)+nw+nh+nd+ni+nl+nk+ne+np then goto badtfm;end{:565}
;{566:}lf:=lf-6-lh;if np<7 then lf:=lf+7-np;
if(fontptr=fontmax)or(fmemptr+lf>fontmemsize)then{567:}
begin begin if interaction=errorstopmode then;printnl(258);print(265);
end;sprintcs(u);printchar(61);printfilename(nom,aire,266);
if s>=0 then begin print(267);printscaled(s);print(268);
end else if s<>-1000 then begin print(269);printint(-s);end;
print(strprotector(812));begin helpptr:=4;
helpline[3]:=strprotector(813);helpline[2]:=strprotector(814);
helpline[1]:=strprotector(815);helpline[0]:=strprotector(816);end;error;
goto done;end{:567};f:=fontptr+1;charbase[f]:=fmemptr-bc;
widthbase[f]:=charbase[f]+ec+1;heightbase[f]:=widthbase[f]+nw;
depthbase[f]:=heightbase[f]+nh;italicbase[f]:=depthbase[f]+nd;
ligkernbase[f]:=italicbase[f]+ni;
kernbase[f]:=ligkernbase[f]+nl-kernbaseoffset;
extenbase[f]:=kernbase[f]+kernbaseoffset+nk;
parambase[f]:=extenbase[f]+ne{:566};{568:}
begin if lh<2 then goto badtfm;begin;a:=getc(tfmfile);
qw.b0:=a+minquarterword;;b:=getc(tfmfile);qw.b1:=b+minquarterword;;
c:=getc(tfmfile);qw.b2:=c+minquarterword;;d:=getc(tfmfile);
qw.b3:=d+minquarterword;fontcheck[f]:=qw;end;;begin z:=getc(tfmfile);
if z>127 then goto badtfm;;z:=z*256+getc(tfmfile);end;;
z:=z*256+getc(tfmfile);;z:=(z*16)+(getc(tfmfile)div 16);
if z<unity then goto badtfm;while lh>2 do begin a=getc(tfmfile);
a=getc(tfmfile);a=getc(tfmfile);a=getc(tfmfile);lh:=lh-1;end;
fontdsize[f]:=z;
if s<>-1000 then if s>=0 then z:=s else z:=xnoverd(z,-s,1000);
fontsize[f]:=z;end{:568};{569:}
for k:=fmemptr to widthbase[f]-1 do begin begin;a:=getc(tfmfile);
qw.b0:=a+minquarterword;;b:=getc(tfmfile);qw.b1:=b+minquarterword;;
c:=getc(tfmfile);qw.b2:=c+minquarterword;;d:=getc(tfmfile);
qw.b3:=d+minquarterword;fontinfo[k].qqqq:=qw;end;
if(a>=nw)or(b div 16>=nh)or(b mod 16>=nd)or(c div 4>=ni)then goto badtfm
;case c mod 4 of ligtag:if d>=nl then goto badtfm;
exttag:if d>=ne then goto badtfm;listtag:{570:}
begin begin if(d<bc)or(d>ec)then goto badtfm end;
while d<k+bc-fmemptr do begin qw:=foocharinfo lparenprotector f,d
rparenprotector^;if chartag(qw)<>listtag then goto notfound;
d:=foorembyte(qw)^-minquarterword;end;
if d=k+bc-fmemptr then goto badtfm;notfound:end{:570};otherwise end;
end{:569};{571:}begin{572:}begin alpha:=16;
while z>=8388608 do begin z:=z div 2;alpha:=alpha+alpha;end;
beta:=256 div alpha;alpha:=alpha*z;end{:572};
for k:=widthbase[f]to ligkernbase[f]-1 do begin;a:=getc(tfmfile);;
b:=getc(tfmfile);;c:=getc(tfmfile);;d:=getc(tfmfile);
sw:=(((((d*z)div 256)+(c*z))div 256)+(b*z))div beta;
if a=0 then fontinfo[k].sc:=sw else if a=255 then fontinfo[k].sc:=sw-
alpha else goto badtfm;end;
if fontinfo[widthbase[f]].sc<>0 then goto badtfm;
if fontinfo[heightbase[f]].sc<>0 then goto badtfm;
if fontinfo[depthbase[f]].sc<>0 then goto badtfm;
if fontinfo[italicbase[f]].sc<>0 then goto badtfm;end{:571};{573:}
bchlabel:=32767;bchar:=256;
if nl>0 then begin for k:=ligkernbase[f]to kernbase[f]+kernbaseoffset-1
do begin begin;a:=getc(tfmfile);qw.b0:=a+minquarterword;;
b:=getc(tfmfile);qw.b1:=b+minquarterword;;c:=getc(tfmfile);
qw.b2:=c+minquarterword;;d:=getc(tfmfile);qw.b3:=d+minquarterword;
fontinfo[k].qqqq:=qw;end;
if a>128 then begin if 256*c+d>=nl then goto badtfm;
if a=255 then if k=ligkernbase[f]then bchar:=b;
end else begin if b<>bchar then begin begin if(b<bc)or(b>ec)then goto
badtfm end;qw:=foocharinfo lparenprotector f,b rparenprotector^;
if not charexists(qw)then goto badtfm;end;
if c<128 then begin begin if(d<bc)or(d>ec)then goto badtfm end;
qw:=foocharinfo lparenprotector f,d rparenprotector^;
if not charexists(qw)then goto badtfm;
end else if 256*(c-128)+d>=nk then goto badtfm;
if a<128 then if k-ligkernbase[f]+a+1>=nl then goto badtfm;end;end;
if a=255 then bchlabel:=256*c+d;end;
for k:=kernbase[f]+kernbaseoffset to extenbase[f]-1 do begin;
a:=getc(tfmfile);;b:=getc(tfmfile);;c:=getc(tfmfile);;d:=getc(tfmfile);
sw:=(((((d*z)div 256)+(c*z))div 256)+(b*z))div beta;
if a=0 then fontinfo[k].sc:=sw else if a=255 then fontinfo[k].sc:=sw-
alpha else goto badtfm;end;{:573};{574:}
for k:=extenbase[f]to parambase[f]-1 do begin begin;a:=getc(tfmfile);
qw.b0:=a+minquarterword;;b:=getc(tfmfile);qw.b1:=b+minquarterword;;
c:=getc(tfmfile);qw.b2:=c+minquarterword;;d:=getc(tfmfile);
qw.b3:=d+minquarterword;fontinfo[k].qqqq:=qw;end;
if a<>0 then begin begin if(a<bc)or(a>ec)then goto badtfm end;
qw:=foocharinfo lparenprotector f,a rparenprotector^;
if not charexists(qw)then goto badtfm;end;
if b<>0 then begin begin if(b<bc)or(b>ec)then goto badtfm end;
qw:=foocharinfo lparenprotector f,b rparenprotector^;
if not charexists(qw)then goto badtfm;end;
if c<>0 then begin begin if(c<bc)or(c>ec)then goto badtfm end;
qw:=foocharinfo lparenprotector f,c rparenprotector^;
if not charexists(qw)then goto badtfm;end;
begin begin if(d<bc)or(d>ec)then goto badtfm end;
qw:=foocharinfo lparenprotector f,d rparenprotector^;
if not charexists(qw)then goto badtfm;end;end{:574};{575:}
begin for k:=1 to np do if k=1 then begin;sw:=getc(tfmfile);
if sw>127 then sw:=sw-256;;sw:=sw*256+getc(tfmfile);;
sw:=sw*256+getc(tfmfile);;
fontinfo[parambase[f]].sc:=(sw*16)+(getc(tfmfile)div 16);end else begin;
a:=getc(tfmfile);;b:=getc(tfmfile);;c:=getc(tfmfile);;d:=getc(tfmfile);
sw:=(((((d*z)div 256)+(c*z))div 256)+(b*z))div beta;
if a=0 then fontinfo[parambase[f]+k-1].sc:=sw else if a=255 then
fontinfo[parambase[f]+k-1].sc:=sw-alpha else goto badtfm;end;
if eof(tfmfile)then goto badtfm;
for k:=np+1 to 7 do fontinfo[parambase[f]+k-1].sc:=0;end{:575};{576:}
if np>=7 then fontparams[f]:=np else fontparams[f]:=7;
hyphenchar[f]:=defaulthyphenchar;skewchar[f]:=defaultskewchar;
if bchlabel<nl then bcharlabel[f]:=bchlabel+ligkernbase[f]else
bcharlabel[f]:=nonaddress;fontbchar[f]:=bchar+minquarterword;
fontfalsebchar[f]:=bchar+minquarterword;
if bchar<=ec then if bchar>=bc then begin qw:=foocharinfo
lparenprotector f,bchar rparenprotector^;
if charexists(qw)then fontfalsebchar[f]:=nonchar;end;fontname[f]:=nom;
fontarea[f]:=aire;fontbc[f]:=bc;fontec[f]:=ec;fontglue[f]:=0;
charbase[f]:=charbase[f]-minquarterword;
widthbase[f]:=widthbase[f]-minquarterword;
ligkernbase[f]:=ligkernbase[f]-minquarterword;
kernbase[f]:=kernbase[f]-minquarterword;
extenbase[f]:=extenbase[f]-minquarterword;parambase[f]:=parambase[f]-1;
fmemptr:=fmemptr+lf;fontptr:=f;g:=f;goto done{:576}{:562};badtfm:{561:}
begin if interaction=errorstopmode then;printnl(258);print(265);end;
sprintcs(u);printchar(61);printfilename(nom,aire,266);
if s>=0 then begin print(267);printscaled(s);print(268);
end else if s<>-1000 then begin print(269);printint(-s);end;
if fileopened then print(strprotector(804))else print(strprotector(805))
;begin helpptr:=5;helpline[4]:=strprotector(806);
helpline[3]:=strprotector(807);helpline[2]:=strprotector(808);
helpline[1]:=strprotector(809);helpline[0]:=strprotector(810);end;
error{:561};done:if fileopened then bclose(tfmfile);readfontinfo:=g;end;
{:560}{581:}procedure charwarning(f:internalfontnumber;c:eightbits);
begin if tracinglostchars>0 then begin begindiagnostic;
printnl(strprotector(825));print(c);print(strprotector(826));
slowprint(fontname[f]);printchar(tobar('!'));enddiagnostic(false);end;
end;{:581}{582:}function newcharacter(f:internalfontnumber;
c:eightbits):pointer;label exit;var p:pointer;
begin if fontbc[f]<=c then if fontec[f]>=c then if charexists(
foocharinfo lparenprotector f,c+minquarterword rparenprotector^)then
begin p:=getavail;foofont(p)^:=f;foocharacter(p)^:=c+minquarterword;
newcharacter:=p;goto exit;end;charwarning(f,c);newcharacter:=0;exit:end;
{:582}{597:}procedure writedvi(a,b:dviindex);var k:dviindex;
begin for k:=a to b do write(dvifile,dvibuf[k]);end;{:597}{598:}
procedure dviswap;
begin if dvilimit=dvibufsize then begin writedvi(0,halfbuf-1);
dvilimit:=halfbuf;dvioffset:=dvioffset+dvibufsize;dviptr:=0;
end else begin writedvi(halfbuf,dvibufsize-1);dvilimit:=dvibufsize;end;
dvigone:=dvigone+halfbuf;end;{:598}{600:}procedure dvifour(x:integer);
begin if x>=0 then dviout(x div 16777216)else begin x:=x+1073741824;
x:=x+1073741824;dviout((x div 16777216)+128);end;x:=x mod 16777216;
dviout(x div 65536);x:=x mod 65536;dviout(x div 256);dviout(x mod 256);
end;{:600}{601:}procedure dvipop(l:integer);
begin if(l=dvioffset+dviptr)and(dviptr>0)then dviptr:=dviptr-1 else
dviout(pop);end;{:601}{602:}procedure dvifontdef(f:internalfontnumber);
var k:poolpointer;begin dviout(fntdef1);dviout(f-fontbase-1);
dviout(fontcheck[f].b0-minquarterword);
dviout(fontcheck[f].b1-minquarterword);
dviout(fontcheck[f].b2-minquarterword);
dviout(fontcheck[f].b3-minquarterword);dvifour(fontsize[f]);
dvifour(fontdsize[f]);dviout(flength(fontarea[f]));
dviout(flength(fontname[f]));{603:}
for k:=strstart[fontarea[f]]to strstart[fontarea[f]+1]-1 do dviout(
strpool[k]);
for k:=strstart[fontname[f]]to strstart[fontname[f]+1]-1 do dviout(
strpool[k]){:603};end;{:602}{607:}procedure movement(w:scaled;
o:eightbits);label exit,found,notfound,2,1;var mstate:smallnumber;
p,q:pointer;k:integer;begin q:=getnode(movementnodesize);
foowidth(q)^:=w;foolocation(q)^:=dvioffset+dviptr;
if o=down1 then begin foolink(q)^:=downptr;downptr:=q;
end else begin foolink(q)^:=rightptr;rightptr:=q;end;{611:}
p:=foolink(q)^;mstate:=noneseen;
while p<>0 do begin if foowidth(p)^=w then{612:}
case mstate+fooinfo(p)^of noneseen+yzOK,noneseen+yOK,zseen+yzOK,zseen+
yOK:if foolocation(p)^<dvigone then goto notfound else{613:}
begin k:=foolocation(p)^-dvioffset;if k<0 then k:=k+dvibufsize;
dvibuf[k]:=dvibuf[k]+y1-down1;fooinfo(p)^:=yhere;goto found;end{:613};
noneseen+zOK,yseen+yzOK,yseen+zOK:if foolocation(p)^<dvigone then goto
notfound else{614:}begin k:=foolocation(p)^-dvioffset;
if k<0 then k:=k+dvibufsize;dvibuf[k]:=dvibuf[k]+z1-down1;
fooinfo(p)^:=zhere;goto found;end{:614};
noneseen+yhere,noneseen+zhere,yseen+zhere,zseen+yhere:goto found;
otherwise end{:612}
else case mstate+fooinfo(p)^of noneseen+yhere:mstate:=yseen;
noneseen+zhere:mstate:=zseen;yseen+zhere,zseen+yhere:goto notfound;
otherwise end;p:=foolink(p)^;end;notfound:{:611};{610:}
fooinfo(q)^:=yzOK;if abs(w)>=8388608 then begin dviout(o+3);dvifour(w);
goto exit;end;if abs(w)>=32768 then begin dviout(o+2);
if w<0 then w:=w+16777216;dviout(w div 65536);w:=w mod 65536;goto 2;end;
if abs(w)>=128 then begin dviout(o+1);if w<0 then w:=w+65536;goto 2;end;
dviout(o);if w<0 then w:=w+256;goto 1;2:dviout(w div 256);
1:dviout(w mod 256);goto exit{:610};found:{609:}
fooinfo(q)^:=fooinfo(p)^;
if fooinfo(q)^=yhere then begin dviout(o+y0-down1);
while foolink(q)^<>p do begin q:=foolink(q)^;
case fooinfo(q)^of yzOK:fooinfo(q)^:=zOK;yOK:fooinfo(q)^:=dfixed;
otherwise end;end;end else begin dviout(o+z0-down1);
while foolink(q)^<>p do begin q:=foolink(q)^;
case fooinfo(q)^of yzOK:fooinfo(q)^:=yOK;zOK:fooinfo(q)^:=dfixed;
otherwise end;end;end{:609};exit:end;{:607}{615:}
procedure prunemovements(l:integer);label done,exit;var p:pointer;
begin while downptr<>0 do begin if foolocation(downptr)^<l then goto
done;p:=downptr;downptr:=foolink(p)^;freenode(p,movementnodesize);end;
done:while rightptr<>0 do begin if foolocation(rightptr)^<l then goto
exit;p:=rightptr;rightptr:=foolink(p)^;freenode(p,movementnodesize);end;
exit:end;{:615}{618:}procedure vlistout;forward;{:618}{619:}{1368:}
procedure specialout(p:pointer);var oldsetting:0..maxselector;
k:poolpointer;begin synchh;synchv;oldsetting:=selector;
selector:=newstring;
showtokenlist(foolink(foowritetokens(p)^)^,0,poolsize-poolptr);
selector:=oldsetting;
begin if poolptr+1>poolsize then overflow(257,poolsize-initpoolptr);end;
if curlength<256 then begin dviout(xxx1);dviout(curlength);
end else begin dviout(xxx4);dvifour(curlength);end;
for k:=strstart[strptr]to poolptr-1 do dviout(strpool[k]);
poolptr:=strstart[strptr];end;{:1368}{1370:}
procedure writeout(p:pointer);var oldsetting:0..maxselector;
oldmode:integer;j:smallnumber;q,r:pointer;begin{1371:}q:=getavail;
fooinfo(q)^:=rightbracetoken+tobar('}');r:=getavail;foolink(q)^:=r;
fooinfo(r)^:=endwritetoken;inslist(q);
begintokenlist(foowritetokens(p)^,writetext);q:=getavail;
fooinfo(q)^:=leftbracetoken+tobar('{');inslist(q);oldmode:=mode;mode:=0;
curcs:=writeloc;q:=scantoks(false,true);gettoken;
if curtok<>endwritetoken then{1372:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1296));end;begin helpptr:=2;
helpline[1]:=strprotector(1297);helpline[0]:=strprotector(1011);end;
error;repeat gettoken;until curtok=endwritetoken;end{:1372};
mode:=oldmode;endtokenlist{:1371};oldsetting:=selector;
j:=foowritestream(p)^;
if writeopen[j]then selector:=j else begin if(j=17)and(selector=
termandlog)then selector:=logonly;printnl(strprotector(266));end;
tokenshow(defref);println;flushlist(defref);selector:=oldsetting;end;
{:1370}{1373:}procedure outwhat(p:pointer);var j:smallnumber;
begin case foosubtype(p)^of opennode,writenode,closenode:{1374:}
if not doingleaders then begin j:=foowritestream(p)^;
if foosubtype(p)^=writenode then writeout(p)else begin if writeopen[j]
then aclose(writefile[j]);
if foosubtype(p)^=closenode then writeopen[j]:=false else if j<16 then
begin curname:=fooopenname(p)^;curarea:=fooopenarea(p)^;
curext:=fooopenext(p)^;
if curext=strprotector(266)then curext:=strprotector(795);packcurname;
while not aopenout(writefile[j])do promptfilename(strprotector(1299),
strprotector(795));writeopen[j]:=true;end;end;end{:1374};
specialnode:specialout(p);languagenode:;
otherwise confusion(strprotector(1298))end;end;{:1373}
procedure hlistout;label reswitch,movepast,finrule,nextp;
var baseline:scaled;leftedge:scaled;saveh,savev:scaled;thisbox:pointer;
gorder:glueord;gsign:normal..shrinking;p:pointer;saveloc:integer;
leaderbox:pointer;leaderwd:scaled;lx:scaled;outerdoingleaders:boolean;
edge:scaled;gluetemp:real;begin thisbox:=tempptr;
gorder:=fooglueorder(thisbox)^;gsign:=foogluesign(thisbox)^;
p:=foolistptr(thisbox)^;curs:=curs+1;if curs>0 then dviout(push);
if curs>maxpush then maxpush:=curs;saveloc:=dvioffset+dviptr;
baseline:=curv;leftedge:=curh;while p<>0 do{620:}
reswitch:if ischarnode(p)then begin synchh;synchv;repeat f:=foofont(p)^;
c:=foocharacter(p)^;if f<>dvif then{621:}
begin if not fontused[f]then begin dvifontdef(f);fontused[f]:=true;end;
if f<=64+fontbase then dviout(f-fontbase-1+fntnum0)else begin dviout(
fnt1);dviout(f-fontbase-1);end;dvif:=f;end{:621};
if c>=128+minquarterword then dviout(set1);dviout(c-minquarterword);
curh:=curh+foocharwidth lparenprotector f,foocharinfo lparenprotector f,
c rparenprotector^rparenprotector^;p:=foolink(p)^;
until not ischarnode(p);dvih:=curh;end else{622:}
begin case footype(p)^of hlistnode,vlistnode:{623:}
if foolistptr(p)^=0 then curh:=curh+foowidth(p)^else begin saveh:=dvih;
savev:=dviv;curv:=baseline+fooshiftamount(p)^;tempptr:=p;edge:=curh;
if footype(p)^=vlistnode then vlistout else hlistout;dvih:=saveh;
dviv:=savev;curh:=edge+foowidth(p)^;curv:=baseline;end{:623};
rulenode:begin ruleht:=fooheight(p)^;ruledp:=foodepth(p)^;
rulewd:=foowidth(p)^;goto finrule;end;whatsitnode:{1367:}
outwhat(p){:1367};gluenode:{625:}begin g:=fooglueptr(p)^;
rulewd:=foowidth(g)^;
if gsign<>normal then begin if gsign=stretching then begin if
foostretchorder(g)^=gorder then begin vetglue(fooglueset(thisbox)^*
foostretch(g)^);rulewd:=rulewd+round(gluetemp);end;
end else if fooshrinkorder(g)^=gorder then begin vetglue(fooglueset(
thisbox)^*fooshrink(g)^);rulewd:=rulewd-round(gluetemp);end;end;
if foosubtype(p)^>=aleaders then{626:}begin leaderbox:=fooleaderptr(p)^;
if footype(leaderbox)^=rulenode then begin ruleht:=fooheight(leaderbox)^
;ruledp:=foodepth(leaderbox)^;goto finrule;end;
leaderwd:=foowidth(leaderbox)^;
if(leaderwd>0)and(rulewd>0)then begin rulewd:=rulewd+10;
edge:=curh+rulewd;lx:=0;{627:}
if foosubtype(p)^=aleaders then begin saveh:=curh;
curh:=leftedge+leaderwd*((curh-leftedge)div leaderwd);
if curh<saveh then curh:=curh+leaderwd;
end else begin lq:=rulewd div leaderwd;lr:=rulewd mod leaderwd;
if foosubtype(p)^=cleaders then curh:=curh+(lr div 2)else begin lx:=(2*
lr+lq+1)div(2*lq+2);curh:=curh+((lr-(lq-1)*lx)div 2);end;end{:627};
while curh+leaderwd<=edge do{628:}
begin curv:=baseline+fooshiftamount(leaderbox)^;synchv;savev:=dviv;
synchh;saveh:=dvih;tempptr:=leaderbox;outerdoingleaders:=doingleaders;
doingleaders:=true;
if footype(leaderbox)^=vlistnode then vlistout else hlistout;
doingleaders:=outerdoingleaders;dviv:=savev;dvih:=saveh;curv:=baseline;
curh:=saveh+leaderwd+lx;end{:628};curh:=edge-10;goto nextp;end;end{:626}
;goto movepast;end{:625};kernnode,mathnode:curh:=curh+foowidth(p)^;
ligaturenode:{652:}begin mem[ligtrick]:=mem[ligchar(p)];
foolink(ligtrick)^:=foolink(p)^;p:=ligtrick;goto reswitch;end{:652};
otherwise end;goto nextp;finrule:{624:}
if isrunning(ruleht)then ruleht:=fooheight(thisbox)^;
if isrunning(ruledp)then ruledp:=foodepth(thisbox)^;
ruleht:=ruleht+ruledp;if(ruleht>0)and(rulewd>0)then begin synchh;
curv:=baseline+ruledp;synchv;dviout(setrule);dvifour(ruleht);
dvifour(rulewd);curv:=baseline;dvih:=dvih+rulewd;end{:624};
movepast:curh:=curh+rulewd;nextp:p:=foolink(p)^;end{:622}{:620};
prunemovements(saveloc);if curs>0 then dvipop(saveloc);curs:=curs-1;end;
{:619}{629:}procedure vlistout;label movepast,finrule,nextp;
var leftedge:scaled;topedge:scaled;saveh,savev:scaled;thisbox:pointer;
gorder:glueord;gsign:normal..shrinking;p:pointer;saveloc:integer;
leaderbox:pointer;leaderht:scaled;lx:scaled;outerdoingleaders:boolean;
edge:scaled;gluetemp:real;begin thisbox:=tempptr;
gorder:=fooglueorder(thisbox)^;gsign:=foogluesign(thisbox)^;
p:=foolistptr(thisbox)^;curs:=curs+1;if curs>0 then dviout(push);
if curs>maxpush then maxpush:=curs;saveloc:=dvioffset+dviptr;
leftedge:=curh;curv:=curv-fooheight(thisbox)^;topedge:=curv;
while p<>0 do{630:}
begin if ischarnode(p)then confusion(strprotector(828))else{631:}
begin case footype(p)^of hlistnode,vlistnode:{632:}
if foolistptr(p)^=0 then curv:=curv+fooheight(p)^+foodepth(p)^else begin
curv:=curv+fooheight(p)^;synchv;saveh:=dvih;savev:=dviv;
curh:=leftedge+fooshiftamount(p)^;tempptr:=p;
if footype(p)^=vlistnode then vlistout else hlistout;dvih:=saveh;
dviv:=savev;curv:=savev+foodepth(p)^;curh:=leftedge;end{:632};
rulenode:begin ruleht:=fooheight(p)^;ruledp:=foodepth(p)^;
rulewd:=foowidth(p)^;goto finrule;end;whatsitnode:{1366:}
outwhat(p){:1366};gluenode:{634:}begin g:=fooglueptr(p)^;
ruleht:=foowidth(g)^;
if gsign<>normal then begin if gsign=stretching then begin if
foostretchorder(g)^=gorder then begin vetglue(fooglueset(thisbox)^*
foostretch(g)^);ruleht:=ruleht+round(gluetemp);end;
end else if fooshrinkorder(g)^=gorder then begin vetglue(fooglueset(
thisbox)^*fooshrink(g)^);ruleht:=ruleht-round(gluetemp);end;end;
if foosubtype(p)^>=aleaders then{635:}begin leaderbox:=fooleaderptr(p)^;
if footype(leaderbox)^=rulenode then begin rulewd:=foowidth(leaderbox)^;
ruledp:=0;goto finrule;end;
leaderht:=fooheight(leaderbox)^+foodepth(leaderbox)^;
if(leaderht>0)and(ruleht>0)then begin ruleht:=ruleht+10;
edge:=curv+ruleht;lx:=0;{636:}
if foosubtype(p)^=aleaders then begin savev:=curv;
curv:=topedge+leaderht*((curv-topedge)div leaderht);
if curv<savev then curv:=curv+leaderht;
end else begin lq:=ruleht div leaderht;lr:=ruleht mod leaderht;
if foosubtype(p)^=cleaders then curv:=curv+(lr div 2)else begin lx:=(2*
lr+lq+1)div(2*lq+2);curv:=curv+((lr-(lq-1)*lx)div 2);end;end{:636};
while curv+leaderht<=edge do{637:}
begin curh:=leftedge+fooshiftamount(leaderbox)^;synchh;saveh:=dvih;
curv:=curv+fooheight(leaderbox)^;synchv;savev:=dviv;tempptr:=leaderbox;
outerdoingleaders:=doingleaders;doingleaders:=true;
if footype(leaderbox)^=vlistnode then vlistout else hlistout;
doingleaders:=outerdoingleaders;dviv:=savev;dvih:=saveh;curh:=leftedge;
curv:=savev-fooheight(leaderbox)^+leaderht+lx;end{:637};curv:=edge-10;
goto nextp;end;end{:635};goto movepast;end{:634};
kernnode:curv:=curv+foowidth(p)^;otherwise end;goto nextp;finrule:{633:}
if isrunning(rulewd)then rulewd:=foowidth(thisbox)^;
ruleht:=ruleht+ruledp;curv:=curv+ruleht;
if(ruleht>0)and(rulewd>0)then begin synchh;synchv;dviout(putrule);
dvifour(ruleht);dvifour(rulewd);end;goto nextp{:633};
movepast:curv:=curv+ruleht;end{:631};nextp:p:=foolink(p)^;end{:630};
prunemovements(saveloc);if curs>0 then dvipop(saveloc);curs:=curs-1;end;
{:629}{638:}procedure shipout(p:pointer);label done;var pageloc:integer;
j,k:0..9;s:poolpointer;oldsetting:0..maxselector;
begin if tracingoutput>0 then begin printnl(strprotector(266));println;
print(strprotector(829));end;
if termoffset>maxprintline-9 then println else if(termoffset>0)or(
fileoffset>0)then printchar(tobar(' '));printchar(tobar('['));j:=9;
while(foocount(j)^=0)and(j>0)do j:=j-1;
for k:=0 to j do begin printint(foocount(k)^);
if k<j then printchar(tobar('.'));end;fflush(termout);
if tracingoutput>0 then begin printchar(tobar(']'));begindiagnostic;
showbox(p);enddiagnostic(true);end;{640:}{641:}
if(fooheight(p)^>maxdimen)or(foodepth(p)^>maxdimen)or(fooheight(p)^+
foodepth(p)^+voffset>maxdimen)or(foowidth(p)^+hoffset>maxdimen)then
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(833));end;begin helpptr:=2;
helpline[1]:=strprotector(834);helpline[0]:=strprotector(835);end;error;
if tracingoutput<=0 then begin begindiagnostic;
printnl(strprotector(836));showbox(p);enddiagnostic(true);end;goto done;
end;if fooheight(p)^+foodepth(p)^+voffset>maxv then maxv:=fooheight(p)^+
foodepth(p)^+voffset;
if foowidth(p)^+hoffset>maxh then maxh:=foowidth(p)^+hoffset{:641};
{617:}dvih:=0;dviv:=0;curh:=hoffset;dvif:=nullfont;
if outputfilename=0 then begin if jobname=0 then openlogfile;
packjobname(263);while not bopenout(dvifile)do promptfilename(264,263);
outputfilename:=bmakenamestring(dvifile);end;
if totalpages=0 then begin dviout(pre);dviout(idbyte);dvifour(25400000);
dvifour(473628672);preparemag;dvifour(mag);oldsetting:=selector;
selector:=newstring;print(strprotector(827));printint(year);
printchar(tobar('.'));printtwo(month);printchar(tobar('.'));
printtwo(day);printchar(tobar(':'));printtwo(time div 60);
printtwo(time mod 60);selector:=oldsetting;dviout(curlength);
for s:=strstart[strptr]to poolptr-1 do dviout(strpool[s]);
poolptr:=strstart[strptr];end{:617};pageloc:=dvioffset+dviptr;
dviout(bop);for k:=0 to 9 do dvifour(foocount(k)^);dvifour(lastbop);
lastbop:=pageloc;curv:=fooheight(p)^+voffset;tempptr:=p;
if footype(p)^=vlistnode then vlistout else hlistout;dviout(eop);
totalpages:=totalpages+1;curs:=-1;done:{:640};
if tracingoutput<=0 then printchar(tobar(']'));deadcycles:=0;
fflush(termout);{639:}{_STAT}
if tracingstats>1 then begin printnl(strprotector(830));
printint(varused);printchar(tobar('&'));printint(dynused);
printchar(tobar(';'));end;{_ENDSTAT}flushnodelist(p);{_STAT}
if tracingstats>1 then begin print(strprotector(831));printint(varused);
printchar(tobar('&'));printint(dynused);print(strprotector(832));
printint(himemmin-lomemmax-1);println;end;{_ENDSTAT}{:639};end;{:638}
{645:}procedure scanspec(c:groupcode;threecodes:boolean);label found;
var s:integer;speccode:exactly..additional;
begin if threecodes then s:=foosaved(0)^;
if scankeyword(strprotector(842))then speccode:=exactly else if
scankeyword(strprotector(843))then speccode:=additional else begin
speccode:=additional;curval:=0;goto found;end;scannormaldimen;
found:if threecodes then begin foosaved(0)^:=s;saveptr:=saveptr+1;end;
foosaved(0)^:=speccode;foosaved(1)^:=curval;saveptr:=saveptr+2;
newsavelevel(c);scanleftbrace;end;{:645}{649:}function hpack(p:pointer;
w:scaled;m:smallnumber):pointer;label reswitch,commonending,exit;
var r:pointer;q:pointer;h,d,x:scaled;s:scaled;g:pointer;o:glueord;
f:internalfontnumber;i:fourquarters;hd:eightbits;begin lastbadness:=0;
r:=getnode(boxnodesize);footype(r)^:=hlistnode;
foosubtype(r)^:=minquarterword;fooshiftamount(r)^:=0;q:=r+listoffset;
foolink(q)^:=p;h:=0;{650:}d:=0;x:=0;totalstretch[normal]:=0;
totalshrink[normal]:=0;totalstretch[fil]:=0;totalshrink[fil]:=0;
totalstretch[fill]:=0;totalshrink[fill]:=0;totalstretch[filll]:=0;
totalshrink[filll]:=0{:650};while p<>0 do{651:}
begin reswitch:while ischarnode(p)do{654:}begin f:=foofont(p)^;
i:=foocharinfo lparenprotector f,foocharacter(p)^rparenprotector^;
hd:=fooheightdepth(i)^;
x:=x+foocharwidth lparenprotector f,i rparenprotector^;
s:=foocharheight lparenprotector f,hd rparenprotector^;if s>h then h:=s;
s:=foochardepth lparenprotector f,hd rparenprotector^;if s>d then d:=s;
p:=foolink(p)^;end{:654};
if p<>0 then begin case footype(p)^of hlistnode,vlistnode,rulenode,
unsetnode:{653:}begin x:=x+foowidth(p)^;
if footype(p)^>=rulenode then s:=0 else s:=fooshiftamount(p)^;
if fooheight(p)^-s>h then h:=fooheight(p)^-s;
if foodepth(p)^+s>d then d:=foodepth(p)^+s;end{:653};
insnode,marknode,adjustnode:if adjusttail<>0 then{655:}
begin while foolink(q)^<>p do q:=foolink(q)^;
if footype(p)^=adjustnode then begin foolink(adjusttail)^:=fooadjustptr(
p)^;while foolink(adjusttail)^<>0 do adjusttail:=foolink(adjusttail)^;
p:=foolink(p)^;freenode(foolink(q)^,smallnodesize);
end else begin foolink(adjusttail)^:=p;adjusttail:=p;p:=foolink(p)^;end;
foolink(q)^:=p;p:=q;end{:655};whatsitnode:{1360:}{:1360};gluenode:{656:}
begin g:=fooglueptr(p)^;x:=x+foowidth(g)^;o:=foostretchorder(g)^;
totalstretch[o]:=totalstretch[o]+foostretch(g)^;o:=fooshrinkorder(g)^;
totalshrink[o]:=totalshrink[o]+fooshrink(g)^;
if foosubtype(p)^>=aleaders then begin g:=fooleaderptr(p)^;
if fooheight(g)^>h then h:=fooheight(g)^;
if foodepth(g)^>d then d:=foodepth(g)^;end;end{:656};
kernnode,mathnode:x:=x+foowidth(p)^;ligaturenode:{652:}
begin mem[ligtrick]:=mem[ligchar(p)];foolink(ligtrick)^:=foolink(p)^;
p:=ligtrick;goto reswitch;end{:652};otherwise end;p:=foolink(p)^;end;
end{:651};if adjusttail<>0 then foolink(adjusttail)^:=0;
fooheight(r)^:=h;foodepth(r)^:=d;{657:}if m=additional then w:=x+w;
foowidth(r)^:=w;x:=w-x;if x=0 then begin foogluesign(r)^:=normal;
fooglueorder(r)^:=normal;fooglueset(r)^:=0.0;goto exit;
end else if x>0 then{658:}begin{659:}
if totalstretch[filll]<>0 then o:=filll else if totalstretch[fill]<>0
then o:=fill else if totalstretch[fil]<>0 then o:=fil else o:=normal{:
659};fooglueorder(r)^:=o;foogluesign(r)^:=stretching;
if totalstretch[o]<>0 then fooglueset(r)^:=x/totalstretch[o]else begin
foogluesign(r)^:=normal;fooglueset(r)^:=0.0;end;
if o=normal then if foolistptr(r)^<>0 then{660:}
begin lastbadness:=badness(x,totalstretch[normal]);
if lastbadness>hbadness then begin println;
if lastbadness>100 then printnl(strprotector(844))else printnl(
strprotector(845));print(strprotector(846));printint(lastbadness);
goto commonending;end;end{:660};goto exit;end{:658}else{664:}begin{665:}
if totalshrink[filll]<>0 then o:=filll else if totalshrink[fill]<>0 then
o:=fill else if totalshrink[fil]<>0 then o:=fil else o:=normal{:665};
fooglueorder(r)^:=o;foogluesign(r)^:=shrinking;
if totalshrink[o]<>0 then fooglueset(r)^:=(-x)/totalshrink[o]else begin
foogluesign(r)^:=normal;fooglueset(r)^:=0.0;end;
if(totalshrink[o]<-x)and(o=normal)and(foolistptr(r)^<>0)then begin
lastbadness:=1000000;fooglueset(r)^:=1.0;{666:}
if(-x-totalshrink[normal]>hfuzz)or(hbadness<100)then begin if(
overfullrule>0)and(-x-totalshrink[normal]>hfuzz)then begin while foolink
(q)^<>0 do q:=foolink(q)^;foolink(q)^:=newrule;
foowidth(foolink(q)^)^:=overfullrule;end;println;
printnl(strprotector(852));printscaled(-x-totalshrink[normal]);
print(strprotector(853));goto commonending;end{:666};
end else if o=normal then if foolistptr(r)^<>0 then{667:}
begin lastbadness:=badness(-x,totalshrink[normal]);
if lastbadness>hbadness then begin println;printnl(strprotector(854));
printint(lastbadness);goto commonending;end;end{:667};goto exit;
end{:664}{:657};commonending:{663:}
if outputactive then print(strprotector(847))else begin if packbeginline
<>0 then begin if packbeginline>0 then print(strprotector(848))else
print(strprotector(849));printint(abs(packbeginline));
print(strprotector(850));end else print(strprotector(851));
printint(line);end;println;fontinshortdisplay:=nullfont;
shortdisplay(foolistptr(r)^);println;begindiagnostic;showbox(r);
enddiagnostic(true){:663};exit:hpack:=r;end;{:649}{668:}
function vpackage(p:pointer;h:scaled;m:smallnumber;l:scaled):pointer;
label commonending,exit;var r:pointer;w,d,x:scaled;s:scaled;g:pointer;
o:glueord;begin lastbadness:=0;r:=getnode(boxnodesize);
footype(r)^:=vlistnode;foosubtype(r)^:=minquarterword;
fooshiftamount(r)^:=0;foolistptr(r)^:=p;w:=0;{650:}d:=0;x:=0;
totalstretch[normal]:=0;totalshrink[normal]:=0;totalstretch[fil]:=0;
totalshrink[fil]:=0;totalstretch[fill]:=0;totalshrink[fill]:=0;
totalstretch[filll]:=0;totalshrink[filll]:=0{:650};while p<>0 do{669:}
begin if ischarnode(p)then confusion(strprotector(855))else case footype
(p)^of hlistnode,vlistnode,rulenode,unsetnode:{670:}
begin x:=x+d+fooheight(p)^;d:=foodepth(p)^;
if footype(p)^>=rulenode then s:=0 else s:=fooshiftamount(p)^;
if foowidth(p)^+s>w then w:=foowidth(p)^+s;end{:670};whatsitnode:{1359:}
{:1359};gluenode:{671:}begin x:=x+d;d:=0;g:=fooglueptr(p)^;
x:=x+foowidth(g)^;o:=foostretchorder(g)^;
totalstretch[o]:=totalstretch[o]+foostretch(g)^;o:=fooshrinkorder(g)^;
totalshrink[o]:=totalshrink[o]+fooshrink(g)^;
if foosubtype(p)^>=aleaders then begin g:=fooleaderptr(p)^;
if foowidth(g)^>w then w:=foowidth(g)^;end;end{:671};
kernnode:begin x:=x+d+foowidth(p)^;d:=0;end;otherwise end;
p:=foolink(p)^;end{:669};foowidth(r)^:=w;if d>l then begin x:=x+d-l;
foodepth(r)^:=l;end else foodepth(r)^:=d;{672:}
if m=additional then h:=x+h;fooheight(r)^:=h;x:=h-x;
if x=0 then begin foogluesign(r)^:=normal;fooglueorder(r)^:=normal;
fooglueset(r)^:=0.0;goto exit;end else if x>0 then{673:}begin{659:}
if totalstretch[filll]<>0 then o:=filll else if totalstretch[fill]<>0
then o:=fill else if totalstretch[fil]<>0 then o:=fil else o:=normal{:
659};fooglueorder(r)^:=o;foogluesign(r)^:=stretching;
if totalstretch[o]<>0 then fooglueset(r)^:=x/totalstretch[o]else begin
foogluesign(r)^:=normal;fooglueset(r)^:=0.0;end;
if o=normal then if foolistptr(r)^<>0 then{674:}
begin lastbadness:=badness(x,totalstretch[normal]);
if lastbadness>vbadness then begin println;
if lastbadness>100 then printnl(strprotector(844))else printnl(
strprotector(845));print(strprotector(856));printint(lastbadness);
goto commonending;end;end{:674};goto exit;end{:673}else{676:}begin{665:}
if totalshrink[filll]<>0 then o:=filll else if totalshrink[fill]<>0 then
o:=fill else if totalshrink[fil]<>0 then o:=fil else o:=normal{:665};
fooglueorder(r)^:=o;foogluesign(r)^:=shrinking;
if totalshrink[o]<>0 then fooglueset(r)^:=(-x)/totalshrink[o]else begin
foogluesign(r)^:=normal;fooglueset(r)^:=0.0;end;
if(totalshrink[o]<-x)and(o=normal)and(foolistptr(r)^<>0)then begin
lastbadness:=1000000;fooglueset(r)^:=1.0;{677:}
if(-x-totalshrink[normal]>vfuzz)or(vbadness<100)then begin println;
printnl(strprotector(857));printscaled(-x-totalshrink[normal]);
print(strprotector(858));goto commonending;end{:677};
end else if o=normal then if foolistptr(r)^<>0 then{678:}
begin lastbadness:=badness(-x,totalshrink[normal]);
if lastbadness>vbadness then begin println;printnl(strprotector(859));
printint(lastbadness);goto commonending;end;end{:678};goto exit;
end{:676}{:672};commonending:{675:}
if outputactive then print(strprotector(847))else begin if packbeginline
<>0 then begin print(strprotector(849));printint(abs(packbeginline));
print(strprotector(850));end else print(strprotector(851));
printint(line);println;end;begindiagnostic;showbox(r);
enddiagnostic(true){:675};exit:vpackage:=r;end;{:668}{679:}
procedure appendtovlist(b:pointer);var d:scaled;p:pointer;
begin if prevdepth>ignoredepth then begin d:=foowidth(baselineskip)^-
prevdepth-fooheight(b)^;
if d<lineskiplimit then p:=newparamglue(lineskipcode)else begin p:=
newskipparam(baselineskipcode);foowidth(tempptr)^:=d;end;
foolink(tail)^:=p;tail:=p;end;foolink(tail)^:=b;tail:=b;
prevdepth:=foodepth(b)^;end;{:679}{686:}function newnoad:pointer;
var p:pointer;begin p:=getnode(noadsize);footype(p)^:=ordnoad;
foosubtype(p)^:=normal;mem[foonucleus(p)^].hh:=emptyfield;
mem[foosubscr(p)^].hh:=emptyfield;mem[foosupscr(p)^].hh:=emptyfield;
newnoad:=p;end;{:686}{688:}function newstyle(s:smallnumber):pointer;
var p:pointer;begin p:=getnode(stylenodesize);footype(p)^:=stylenode;
foosubtype(p)^:=s;foowidth(p)^:=0;foodepth(p)^:=0;newstyle:=p;end;{:688}
{689:}function newchoice:pointer;var p:pointer;
begin p:=getnode(stylenodesize);footype(p)^:=choicenode;
foosubtype(p)^:=0;foodisplaymlist(p)^:=0;footextmlist(p)^:=0;
fooscriptmlist(p)^:=0;fooscriptscriptmlist(p)^:=0;newchoice:=p;end;
{:689}{693:}procedure showinfo;begin shownodelist(fooinfo(tempptr)^);
end;{:693}{704:}function fractionrule(t:scaled):pointer;var p:pointer;
begin p:=newrule;fooheight(p)^:=t;foodepth(p)^:=0;fractionrule:=p;end;
{:704}{705:}function overbar(b:pointer;k,t:scaled):pointer;
var p,q:pointer;begin p:=newkern(k);foolink(p)^:=b;q:=fractionrule(t);
foolink(q)^:=p;p:=newkern(t);foolink(p)^:=q;
overbar:=foovpack(p,0,additional)^;end;{:705}{706:}{709:}
function charbox(f:internalfontnumber;c:quarterword):pointer;
var q:fourquarters;hd:eightbits;b,p:pointer;
begin q:=foocharinfo lparenprotector f,c rparenprotector^;
hd:=fooheightdepth(q)^;b:=newnullbox;
foowidth(b)^:=foocharwidth lparenprotector f,q rparenprotector^+
foocharitalic lparenprotector f,q rparenprotector^;
fooheight(b)^:=foocharheight lparenprotector f,hd rparenprotector^;
foodepth(b)^:=foochardepth lparenprotector f,hd rparenprotector^;
p:=getavail;foocharacter(p)^:=c;foofont(p)^:=f;foolistptr(b)^:=p;
charbox:=b;end;{:709}{711:}procedure stackintobox(b:pointer;
f:internalfontnumber;c:quarterword);var p:pointer;begin p:=charbox(f,c);
foolink(p)^:=foolistptr(b)^;foolistptr(b)^:=p;
fooheight(b)^:=fooheight(p)^;end;{:711}{712:}
function heightplusdepth(f:internalfontnumber;c:quarterword):scaled;
var q:fourquarters;hd:eightbits;
begin q:=foocharinfo lparenprotector f,c rparenprotector^;
hd:=fooheightdepth(q)^;
heightplusdepth:=foocharheight lparenprotector f,hd rparenprotector^+
foochardepth lparenprotector f,hd rparenprotector^;end;{:712}
function vardelimiter(d:pointer;s:smallnumber;v:scaled):pointer;
label found,continue;var b:pointer;f,g:internalfontnumber;
c,x,y:quarterword;m,n:integer;u:scaled;w:scaled;q:fourquarters;
hd:eightbits;r:fourquarters;z:smallnumber;largeattempt:boolean;
begin f:=nullfont;w:=0;largeattempt:=false;z:=foosmallfam(d)^;
x:=foosmallchar(d)^;while true do begin{707:}
if(z<>0)or(x<>minquarterword)then begin z:=z+s+16;repeat z:=z-16;
g:=foofamfnt(z)^;if g<>nullfont then{708:}begin y:=x;
if(y-minquarterword>=fontbc[g])and(y-minquarterword<=fontec[g])then
begin continue:q:=foocharinfo lparenprotector g,y rparenprotector^;
if charexists(q)then begin if chartag(q)=exttag then begin f:=g;c:=y;
goto found;end;hd:=fooheightdepth(q)^;
u:=foocharheight lparenprotector g,hd rparenprotector^+foochardepth
lparenprotector g,hd rparenprotector^;if u>w then begin f:=g;c:=y;w:=u;
if u>=v then goto found;end;
if chartag(q)=listtag then begin y:=foorembyte(q)^;goto continue;end;
end;end;end{:708};until z<16;end{:707};if largeattempt then goto found;
largeattempt:=true;z:=foolargefam(d)^;x:=foolargechar(d)^;end;
found:if f<>nullfont then{710:}if chartag(q)=exttag then{713:}
begin b:=newnullbox;footype(b)^:=vlistnode;
r:=fontinfo[extenbase[f]+foorembyte(q)^].qqqq;{714:}c:=fooextrep(r)^;
u:=heightplusdepth(f,c);w:=0;
q:=foocharinfo lparenprotector f,c rparenprotector^;
foowidth(b)^:=foocharwidth lparenprotector f,q rparenprotector^+
foocharitalic lparenprotector f,q rparenprotector^;c:=fooextbot(r)^;
if c<>minquarterword then w:=w+heightplusdepth(f,c);c:=fooextmid(r)^;
if c<>minquarterword then w:=w+heightplusdepth(f,c);c:=fooexttop(r)^;
if c<>minquarterword then w:=w+heightplusdepth(f,c);n:=0;
if u>0 then while w<v do begin w:=w+u;n:=n+1;
if fooextmid(r)^<>minquarterword then w:=w+u;end{:714};c:=fooextbot(r)^;
if c<>minquarterword then stackintobox(b,f,c);c:=fooextrep(r)^;
for m:=1 to n do stackintobox(b,f,c);c:=fooextmid(r)^;
if c<>minquarterword then begin stackintobox(b,f,c);c:=fooextrep(r)^;
for m:=1 to n do stackintobox(b,f,c);end;c:=fooexttop(r)^;
if c<>minquarterword then stackintobox(b,f,c);
foodepth(b)^:=w-fooheight(b)^;end{:713}else b:=charbox(f,c){:710}
else begin b:=newnullbox;foowidth(b)^:=nulldelimiterspace;end;
fooshiftamount(b)^:=half(fooheight(b)^-foodepth(b)^)-fooaxisheight(s)^;
vardelimiter:=b;end;{:706}{715:}function rebox(b:pointer;
w:scaled):pointer;var p:pointer;f:internalfontnumber;v:scaled;
begin if(foowidth(b)^<>w)and(foolistptr(b)^<>0)then begin if footype(b)^
=vlistnode then b:=hpack(b,0,additional);p:=foolistptr(b)^;
if(ischarnode(p))and(foolink(p)^=0)then begin f:=foofont(p)^;
v:=foocharwidth lparenprotector f,foocharinfo lparenprotector f,
foocharacter(p)^rparenprotector^rparenprotector^;
if v<>foowidth(b)^then foolink(p)^:=newkern(foowidth(b)^-v);end;
freenode(b,boxnodesize);b:=newglue(ssglue);foolink(b)^:=p;
while foolink(p)^<>0 do p:=foolink(p)^;foolink(p)^:=newglue(ssglue);
rebox:=hpack(b,w,exactly);end else begin foowidth(b)^:=w;rebox:=b;end;
end;{:715}{716:}function mathglue(g:pointer;m:scaled):pointer;
var p:pointer;n:integer;f:scaled;begin n:=xovern(m,65536);
f:=texremainder;if f<0 then begin n:=n-1;f:=f+65536;end;
p:=getnode(gluespecsize);
foowidth(p)^:=multandadd(n,foowidth(g)^,xnoverd(foowidth(g)^,f,65536),
1073741823);foostretchorder(p)^:=foostretchorder(g)^;
if foostretchorder(p)^=normal then foostretch(p)^:=multandadd(n,
foostretch(g)^,xnoverd(foostretch(g)^,f,65536),1073741823)else
foostretch(p)^:=foostretch(g)^;fooshrinkorder(p)^:=fooshrinkorder(g)^;
if fooshrinkorder(p)^=normal then fooshrink(p)^:=multandadd(n,fooshrink(
g)^,xnoverd(fooshrink(g)^,f,65536),1073741823)else fooshrink(p)^:=
fooshrink(g)^;mathglue:=p;end;{:716}{717:}procedure mathkern(p:pointer;
m:scaled);var n:integer;f:scaled;
begin if foosubtype(p)^=muglue then begin n:=xovern(m,65536);
f:=texremainder;if f<0 then begin n:=n-1;f:=f+65536;end;
foowidth(p)^:=multandadd(n,foowidth(p)^,xnoverd(foowidth(p)^,f,65536),
1073741823);foosubtype(p)^:=explicit;end;end;{:717}{718:}
procedure flushmath;begin flushnodelist(foolink(head)^);
flushnodelist(incompleatnoad);foolink(head)^:=0;tail:=head;
incompleatnoad:=0;end;{:718}{720:}procedure mlisttohlist;forward;
function cleanbox(p:pointer;s:smallnumber):pointer;label found;
var q:pointer;savestyle:smallnumber;x:pointer;r:pointer;
begin case foomathtype(p)^of mathchar:begin curmlist:=newnoad;
mem[foonucleus(curmlist)^]:=mem[p];end;subbox:begin q:=fooinfo(p)^;
goto found;end;submlist:curmlist:=fooinfo(p)^;
otherwise begin q:=newnullbox;goto found;end end;savestyle:=curstyle;
curstyle:=s;mlistpenalties:=false;mlisttohlist;q:=foolink(temphead)^;
curstyle:=savestyle;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};
found:if ischarnode(q)or(q=0)then x:=hpack(q,0,additional)else if(
foolink(q)^=0)and(footype(q)^<=vlistnode)and(fooshiftamount(q)^=0)then x
:=q else x:=hpack(q,0,additional);{721:}q:=foolistptr(x)^;
if ischarnode(q)then begin r:=foolink(q)^;
if r<>0 then if foolink(r)^=0 then if not ischarnode(r)then if footype(r
)^=kernnode then begin freenode(r,smallnodesize);foolink(q)^:=0;end;
end{:721};cleanbox:=x;end;{:720}{722:}procedure fetch(a:pointer);
begin curc:=foocharacter(a)^;curf:=foofamfnt(foofam(a)^+cursize)^;
if curf=nullfont then{723:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(266));end;printsize(cursize);printchar(tobar(' '));
printint(foofam(a)^);print(strprotector(884));
print(curc-minquarterword);printchar(tobar(')'));begin helpptr:=4;
helpline[3]:=strprotector(885);helpline[2]:=strprotector(886);
helpline[1]:=strprotector(887);helpline[0]:=strprotector(888);end;error;
curi:=nullcharacter;foomathtype(a)^:=empty;end{:723}
else begin if(curc-minquarterword>=fontbc[curf])and(curc-minquarterword
<=fontec[curf])then curi:=foocharinfo lparenprotector curf,curc
rparenprotector^else curi:=nullcharacter;
if not(charexists(curi))then begin charwarning(curf,curc-minquarterword)
;foomathtype(a)^:=empty;end;end;end;{:722}{726:}{734:}
procedure makeover(q:pointer);
begin fooinfo(foonucleus(q)^)^:=overbar(cleanbox(foonucleus(q)^,
foocrampedstyle(curstyle)^),3*defaultrulethickness,defaultrulethickness)
;foomathtype(foonucleus(q)^)^:=subbox;end;{:734}{735:}
procedure makeunder(q:pointer);var p,x,y:pointer;delta:scaled;
begin x:=cleanbox(foonucleus(q)^,curstyle);
p:=newkern(3*defaultrulethickness);foolink(x)^:=p;
foolink(p)^:=fractionrule(defaultrulethickness);
y:=foovpack(x,0,additional)^;
delta:=fooheight(y)^+foodepth(y)^+defaultrulethickness;
fooheight(y)^:=fooheight(x)^;foodepth(y)^:=delta-fooheight(y)^;
fooinfo(foonucleus(q)^)^:=y;foomathtype(foonucleus(q)^)^:=subbox;end;
{:735}{736:}procedure makevcenter(q:pointer);var v:pointer;delta:scaled;
begin v:=fooinfo(foonucleus(q)^)^;
if footype(v)^<>vlistnode then confusion(strprotector(550));
delta:=fooheight(v)^+foodepth(v)^;
fooheight(v)^:=fooaxisheight(cursize)^+half(delta);
foodepth(v)^:=delta-fooheight(v)^;end;{:736}{737:}
procedure makeradical(q:pointer);var x,y:pointer;delta,clr:scaled;
begin x:=cleanbox(foonucleus(q)^,foocrampedstyle(curstyle)^);
if curstyle<textstyle then clr:=defaultrulethickness+(abs(foomathxheight
(cursize)^)div 4)else begin clr:=defaultrulethickness;
clr:=clr+(abs(clr)div 4);end;
y:=vardelimiter(fooleftdelimiter(q)^,cursize,fooheight(x)^+foodepth(x)^+
clr+defaultrulethickness);
delta:=foodepth(y)^-(fooheight(x)^+foodepth(x)^+clr);
if delta>0 then clr:=clr+half(delta);
fooshiftamount(y)^:=-(fooheight(x)^+clr);
foolink(y)^:=overbar(x,clr,fooheight(y)^);
fooinfo(foonucleus(q)^)^:=hpack(y,0,additional);
foomathtype(foonucleus(q)^)^:=subbox;end;{:737}{738:}
procedure makemathaccent(q:pointer);label done,done1;var p,x,y:pointer;
a:integer;c:quarterword;f:internalfontnumber;i:fourquarters;s:scaled;
h:scaled;delta:scaled;w:scaled;begin fetch(fooaccentchr(q)^);
if charexists(curi)then begin i:=curi;c:=curc;f:=curf;{741:}s:=0;
if foomathtype(foonucleus(q)^)^=mathchar then begin fetch(foonucleus(q)^
);
if chartag(curi)=ligtag then begin a:=ligkernbase[curf]+foorembyte(curi)
^;curi:=fontinfo[a].qqqq;
if fooskipbyte(curi)^>stopflag then begin a:=ligkernbase[curf]+256*
fooopbyte(curi)^+foorembyte(curi)^+32768-kernbaseoffset;
curi:=fontinfo[a].qqqq;end;
while true do begin if foonextchar(curi)^-minquarterword=skewchar[curf]
then begin if fooopbyte(curi)^>=kernflag then if fooskipbyte(curi)^<=
stopflag then s:=foocharkern lparenprotector curf,curi rparenprotector^;
goto done1;end;if fooskipbyte(curi)^>=stopflag then goto done1;
a:=a+fooskipbyte(curi)^-minquarterword+1;curi:=fontinfo[a].qqqq;end;end;
end;done1:{:741};x:=cleanbox(foonucleus(q)^,foocrampedstyle(curstyle)^);
w:=foowidth(x)^;h:=fooheight(x)^;{740:}
while true do begin if chartag(i)<>listtag then goto done;
y:=foorembyte(i)^;i:=foocharinfo lparenprotector f,y rparenprotector^;
if not charexists(i)then goto done;
if foocharwidth lparenprotector f,i rparenprotector^>w then goto done;
c:=y;end;done:{:740};
if h<fooxheight(f)^then delta:=h else delta:=fooxheight(f)^;
if(foomathtype(foosupscr(q)^)^<>empty)or(foomathtype(foosubscr(q)^)^<>
empty)then if foomathtype(foonucleus(q)^)^=mathchar then{742:}
begin flushnodelist(x);x:=newnoad;
mem[foonucleus(x)^]:=mem[foonucleus(q)^];
mem[foosupscr(x)^]:=mem[foosupscr(q)^];
mem[foosubscr(x)^]:=mem[foosubscr(q)^];
mem[foosupscr(q)^].hh:=emptyfield;mem[foosubscr(q)^].hh:=emptyfield;
foomathtype(foonucleus(q)^)^:=submlist;fooinfo(foonucleus(q)^)^:=x;
x:=cleanbox(foonucleus(q)^,curstyle);delta:=delta+fooheight(x)^-h;
h:=fooheight(x)^;end{:742};y:=charbox(f,c);
fooshiftamount(y)^:=s+half(w-foowidth(y)^);foowidth(y)^:=0;
p:=newkern(-delta);foolink(p)^:=x;foolink(y)^:=p;
y:=foovpack(y,0,additional)^;foowidth(y)^:=foowidth(x)^;
if fooheight(y)^<h then{739:}begin p:=newkern(h-fooheight(y)^);
foolink(p)^:=foolistptr(y)^;foolistptr(y)^:=p;fooheight(y)^:=h;end{:739}
;fooinfo(foonucleus(q)^)^:=y;foomathtype(foonucleus(q)^)^:=subbox;end;
end;{:738}{743:}procedure makefraction(q:pointer);var p,v,x,y,z:pointer;
delta,delta1,delta2,shiftup,shiftdown,clr:scaled;
begin if foothickness(q)^=defaultcode then foothickness(q)^:=
defaultrulethickness;{744:}
x:=cleanbox(foonumerator(q)^,foonumstyle(curstyle)^);
z:=cleanbox(foodenominator(q)^,foodenomstyle(curstyle)^);
if foowidth(x)^<foowidth(z)^then x:=rebox(x,foowidth(z)^)else z:=rebox(z
,foowidth(x)^);
if curstyle<textstyle then begin shiftup:=foonum1(cursize)^;
shiftdown:=foodenom1(cursize)^;
end else begin shiftdown:=foodenom2(cursize)^;
if foothickness(q)^<>0 then shiftup:=foonum2(cursize)^else shiftup:=
foonum3(cursize)^;end{:744};if foothickness(q)^=0 then{745:}
begin if curstyle<textstyle then clr:=7*defaultrulethickness else clr:=3
*defaultrulethickness;
delta:=half(clr-((shiftup-foodepth(x)^)-(fooheight(z)^-shiftdown)));
if delta>0 then begin shiftup:=shiftup+delta;shiftdown:=shiftdown+delta;
end;end{:745}else{746:}
begin if curstyle<textstyle then clr:=3*foothickness(q)^else clr:=
foothickness(q)^;delta:=half(foothickness(q)^);
delta1:=clr-((shiftup-foodepth(x)^)-(fooaxisheight(cursize)^+delta));
delta2:=clr-((fooaxisheight(cursize)^-delta)-(fooheight(z)^-shiftdown));
if delta1>0 then shiftup:=shiftup+delta1;
if delta2>0 then shiftdown:=shiftdown+delta2;end{:746};{747:}
v:=newnullbox;footype(v)^:=vlistnode;
fooheight(v)^:=shiftup+fooheight(x)^;
foodepth(v)^:=foodepth(z)^+shiftdown;foowidth(v)^:=foowidth(x)^;
if foothickness(q)^=0 then begin p:=newkern((shiftup-foodepth(x)^)-(
fooheight(z)^-shiftdown));foolink(p)^:=z;
end else begin y:=fractionrule(foothickness(q)^);
p:=newkern((fooaxisheight(cursize)^-delta)-(fooheight(z)^-shiftdown));
foolink(y)^:=p;foolink(p)^:=z;
p:=newkern((shiftup-foodepth(x)^)-(fooaxisheight(cursize)^+delta));
foolink(p)^:=y;end;foolink(x)^:=p;foolistptr(v)^:=x{:747};{748:}
if curstyle<textstyle then delta:=foodelim1(cursize)^else delta:=
foodelim2(cursize)^;x:=vardelimiter(fooleftdelimiter(q)^,cursize,delta);
foolink(x)^:=v;z:=vardelimiter(foorightdelimiter(q)^,cursize,delta);
foolink(v)^:=z;foonewhlist(q)^:=hpack(x,0,additional){:748};end;{:743}
{749:}function makeop(q:pointer):scaled;var delta:scaled;
p,v,x,y,z:pointer;c:quarterword;i:fourquarters;shiftup,shiftdown:scaled;
begin if(foosubtype(q)^=normal)and(curstyle<textstyle)then foosubtype(q)
^:=limits;
if foomathtype(foonucleus(q)^)^=mathchar then begin fetch(foonucleus(q)^
);
if(curstyle<textstyle)and(chartag(curi)=listtag)then begin c:=foorembyte
(curi)^;i:=foocharinfo lparenprotector curf,c rparenprotector^;
if charexists(i)then begin curc:=c;curi:=i;
foocharacter(foonucleus(q)^)^:=c;end;end;
delta:=foocharitalic lparenprotector curf,curi rparenprotector^;
x:=cleanbox(foonucleus(q)^,curstyle);
if(foomathtype(foosubscr(q)^)^<>empty)and(foosubtype(q)^<>limits)then
foowidth(x)^:=foowidth(x)^-delta;
fooshiftamount(x)^:=half(fooheight(x)^-foodepth(x)^)-fooaxisheight(
cursize)^;foomathtype(foonucleus(q)^)^:=subbox;
fooinfo(foonucleus(q)^)^:=x;end else delta:=0;
if foosubtype(q)^=limits then{750:}
begin x:=cleanbox(foosupscr(q)^,foosupstyle(curstyle)^);
y:=cleanbox(foonucleus(q)^,curstyle);
z:=cleanbox(foosubscr(q)^,foosubstyle(curstyle)^);v:=newnullbox;
footype(v)^:=vlistnode;foowidth(v)^:=foowidth(y)^;
if foowidth(x)^>foowidth(v)^then foowidth(v)^:=foowidth(x)^;
if foowidth(z)^>foowidth(v)^then foowidth(v)^:=foowidth(z)^;
x:=rebox(x,foowidth(v)^);y:=rebox(y,foowidth(v)^);
z:=rebox(z,foowidth(v)^);fooshiftamount(x)^:=half(delta);
fooshiftamount(z)^:=-fooshiftamount(x)^;fooheight(v)^:=fooheight(y)^;
foodepth(v)^:=foodepth(y)^;{751:}
if foomathtype(foosupscr(q)^)^=empty then begin freenode(x,boxnodesize);
foolistptr(v)^:=y;end else begin shiftup:=bigopspacing3-foodepth(x)^;
if shiftup<bigopspacing1 then shiftup:=bigopspacing1;
p:=newkern(shiftup);foolink(p)^:=y;foolink(x)^:=p;
p:=newkern(bigopspacing5);foolink(p)^:=x;foolistptr(v)^:=p;
fooheight(v)^:=fooheight(v)^+bigopspacing5+fooheight(x)^+foodepth(x)^+
shiftup;end;
if foomathtype(foosubscr(q)^)^=empty then freenode(z,boxnodesize)else
begin shiftdown:=bigopspacing4-fooheight(z)^;
if shiftdown<bigopspacing2 then shiftdown:=bigopspacing2;
p:=newkern(shiftdown);foolink(y)^:=p;foolink(p)^:=z;
p:=newkern(bigopspacing5);foolink(z)^:=p;
foodepth(v)^:=foodepth(v)^+bigopspacing5+fooheight(z)^+foodepth(z)^+
shiftdown;end{:751};foonewhlist(q)^:=v;end{:750};makeop:=delta;end;
{:749}{752:}procedure makeord(q:pointer);label restart,exit;
var a:integer;p,r:pointer;
begin restart:if foomathtype(foosubscr(q)^)^=empty then if foomathtype(
foosupscr(q)^)^=empty then if foomathtype(foonucleus(q)^)^=mathchar then
begin p:=foolink(q)^;
if p<>0 then if(footype(p)^>=ordnoad)and(footype(p)^<=punctnoad)then if
foomathtype(foonucleus(p)^)^=mathchar then if foofam(foonucleus(p)^)^=
foofam(foonucleus(q)^)^then begin foomathtype(foonucleus(q)^)^:=
mathtextchar;fetch(foonucleus(q)^);
if chartag(curi)=ligtag then begin a:=ligkernbase[curf]+foorembyte(curi)
^;curc:=foocharacter(foonucleus(p)^)^;curi:=fontinfo[a].qqqq;
if fooskipbyte(curi)^>stopflag then begin a:=ligkernbase[curf]+256*
fooopbyte(curi)^+foorembyte(curi)^+32768-kernbaseoffset;
curi:=fontinfo[a].qqqq;end;while true do begin{753:}
if foonextchar(curi)^=curc then if fooskipbyte(curi)^<=stopflag then if
fooopbyte(curi)^>=kernflag then begin p:=newkern(foocharkern
lparenprotector curf,curi rparenprotector^);foolink(p)^:=foolink(q)^;
foolink(q)^:=p;goto exit;end else begin checkinterrupt;
case fooopbyte(curi)^of 1+minquarterword,5+minquarterword:foocharacter(
foonucleus(q)^)^:=foorembyte(curi)^;
2+minquarterword,6+minquarterword:foocharacter(foonucleus(p)^)^:=
foorembyte(curi)^;
3+minquarterword,7+minquarterword,11+minquarterword:begin r:=newnoad;
foocharacter(foonucleus(r)^)^:=foorembyte(curi)^;
foofam(foonucleus(r)^)^:=foofam(foonucleus(q)^)^;foolink(q)^:=r;
foolink(r)^:=p;
if fooopbyte(curi)^<11+minquarterword then foomathtype(foonucleus(r)^)^
:=mathchar else foomathtype(foonucleus(r)^)^:=mathtextchar;end;
otherwise begin foolink(q)^:=foolink(p)^;
foocharacter(foonucleus(q)^)^:=foorembyte(curi)^;
mem[foosubscr(q)^]:=mem[foosubscr(p)^];
mem[foosupscr(q)^]:=mem[foosupscr(p)^];freenode(p,noadsize);end end;
if fooopbyte(curi)^>3+minquarterword then goto exit;
foomathtype(foonucleus(q)^)^:=mathchar;goto restart;end{:753};
if fooskipbyte(curi)^>=stopflag then goto exit;
a:=a+fooskipbyte(curi)^-minquarterword+1;curi:=fontinfo[a].qqqq;end;end;
end;end;exit:end;{:752}{756:}procedure makescripts(q:pointer;
delta:scaled);var p,x,y,z:pointer;shiftup,shiftdown,clr:scaled;
t:smallnumber;begin p:=foonewhlist(q)^;
if ischarnode(p)then begin shiftup:=0;shiftdown:=0;
end else begin z:=hpack(p,0,additional);
if curstyle<scriptstyle then t:=scriptsize else t:=scriptscriptsize;
shiftup:=fooheight(z)^-foosupdrop(t)^;
shiftdown:=foodepth(z)^+foosubdrop(t)^;freenode(z,boxnodesize);end;
if foomathtype(foosupscr(q)^)^=empty then{757:}
begin x:=cleanbox(foosubscr(q)^,foosubstyle(curstyle)^);
foowidth(x)^:=foowidth(x)^+scriptspace;
if shiftdown<foosub1(cursize)^then shiftdown:=foosub1(cursize)^;
clr:=fooheight(x)^-(abs(foomathxheight(cursize)^*4)div 5);
if shiftdown<clr then shiftdown:=clr;fooshiftamount(x)^:=shiftdown;
end{:757}else begin{758:}
begin x:=cleanbox(foosupscr(q)^,foosupstyle(curstyle)^);
foowidth(x)^:=foowidth(x)^+scriptspace;
if odd(curstyle)then clr:=foosup3(cursize)^else if curstyle<textstyle
then clr:=foosup1(cursize)^else clr:=foosup2(cursize)^;
if shiftup<clr then shiftup:=clr;
clr:=foodepth(x)^+(abs(foomathxheight(cursize)^)div 4);
if shiftup<clr then shiftup:=clr;end{:758};
if foomathtype(foosubscr(q)^)^=empty then fooshiftamount(x)^:=-shiftup
else{759:}begin y:=cleanbox(foosubscr(q)^,foosubstyle(curstyle)^);
foowidth(y)^:=foowidth(y)^+scriptspace;
if shiftdown<foosub2(cursize)^then shiftdown:=foosub2(cursize)^;
clr:=4*defaultrulethickness-((shiftup-foodepth(x)^)-(fooheight(y)^-
shiftdown));if clr>0 then begin shiftdown:=shiftdown+clr;
clr:=(abs(foomathxheight(cursize)^*4)div 5)-(shiftup-foodepth(x)^);
if clr>0 then begin shiftup:=shiftup+clr;shiftdown:=shiftdown-clr;end;
end;fooshiftamount(x)^:=delta;
p:=newkern((shiftup-foodepth(x)^)-(fooheight(y)^-shiftdown));
foolink(x)^:=p;foolink(p)^:=y;x:=foovpack(x,0,additional)^;
fooshiftamount(x)^:=shiftdown;end{:759};end;
if foonewhlist(q)^=0 then foonewhlist(q)^:=x else begin p:=foonewhlist(q
)^;while foolink(p)^<>0 do p:=foolink(p)^;foolink(p)^:=x;end;end;{:756}
{762:}function makeleftright(q:pointer;style:smallnumber;
maxd,maxh:scaled):smallnumber;var delta,delta1,delta2:scaled;
begin if style<scriptstyle then cursize:=textsize else cursize:=16*((
style-textstyle)div 2);delta2:=maxd+fooaxisheight(cursize)^;
delta1:=maxh+maxd-delta2;if delta2>delta1 then delta1:=delta2;
delta:=(delta1 div 500)*delimiterfactor;
delta2:=delta1+delta1-delimitershortfall;
if delta<delta2 then delta:=delta2;
foonewhlist(q)^:=vardelimiter(foodelimiter(q)^,cursize,delta);
makeleftright:=footype(q)^-(leftnoad-opennoad);end;{:762}
procedure mlisttohlist;
label reswitch,checkdimensions,donewithnoad,donewithnode,deleteq,done;
var mlist:pointer;penalties:boolean;style:smallnumber;
savestyle:smallnumber;q:pointer;r:pointer;rtype:smallnumber;
t:smallnumber;p,x,y,z:pointer;pen:integer;s:smallnumber;
maxh,maxd:scaled;delta:scaled;begin mlist:=curmlist;
penalties:=mlistpenalties;style:=curstyle;q:=mlist;r:=0;rtype:=opnoad;
maxh:=0;maxd:=0;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};while q<>0 do{727:}begin{728:}reswitch:delta:=0;
case footype(q)^of binnoad:case rtype of binnoad,opnoad,relnoad,opennoad
,punctnoad,leftnoad:begin footype(q)^:=ordnoad;goto reswitch;end;
otherwise end;relnoad,closenoad,punctnoad,rightnoad:begin{729:}
if rtype=binnoad then footype(r)^:=ordnoad{:729};
if footype(q)^=rightnoad then goto donewithnoad;end;{733:}
leftnoad:goto donewithnoad;fractionnoad:begin makefraction(q);
goto checkdimensions;end;opnoad:begin delta:=makeop(q);
if foosubtype(q)^=limits then goto checkdimensions;end;
ordnoad:makeord(q);opennoad,innernoad:;radicalnoad:makeradical(q);
overnoad:makeover(q);undernoad:makeunder(q);
accentnoad:makemathaccent(q);vcenternoad:makevcenter(q);{:733}{730:}
stylenode:begin curstyle:=foosubtype(q)^;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};goto donewithnode;end;choicenode:{731:}
begin case curstyle div 2 of 0:begin p:=foodisplaymlist(q)^;
foodisplaymlist(q)^:=0;end;1:begin p:=footextmlist(q)^;
footextmlist(q)^:=0;end;2:begin p:=fooscriptmlist(q)^;
fooscriptmlist(q)^:=0;end;3:begin p:=fooscriptscriptmlist(q)^;
fooscriptscriptmlist(q)^:=0;end;end;flushnodelist(foodisplaymlist(q)^);
flushnodelist(footextmlist(q)^);flushnodelist(fooscriptmlist(q)^);
flushnodelist(fooscriptscriptmlist(q)^);footype(q)^:=stylenode;
foosubtype(q)^:=curstyle;foowidth(q)^:=0;foodepth(q)^:=0;
if p<>0 then begin z:=foolink(q)^;foolink(q)^:=p;
while foolink(p)^<>0 do p:=foolink(p)^;foolink(p)^:=z;end;
goto donewithnode;end{:731};
insnode,marknode,adjustnode,whatsitnode,penaltynode,discnode:goto
donewithnode;
rulenode:begin if fooheight(q)^>maxh then maxh:=fooheight(q)^;
if foodepth(q)^>maxd then maxd:=foodepth(q)^;goto donewithnode;end;
gluenode:begin{732:}
if foosubtype(q)^=muglue then begin x:=fooglueptr(q)^;
y:=mathglue(x,curmu);deleteglueref(x);fooglueptr(q)^:=y;
foosubtype(q)^:=normal;
end else if(cursize<>textsize)and(foosubtype(q)^=condmathglue)then begin
p:=foolink(q)^;
if p<>0 then if(footype(p)^=gluenode)or(footype(p)^=kernnode)then begin
foolink(q)^:=foolink(p)^;foolink(p)^:=0;flushnodelist(p);end;end{:732};
goto donewithnode;end;kernnode:begin mathkern(q,curmu);
goto donewithnode;end;{:730}otherwise confusion(strprotector(889))end;
{754:}case foomathtype(foonucleus(q)^)^of mathchar,mathtextchar:{755:}
begin fetch(foonucleus(q)^);
if charexists(curi)then begin delta:=foocharitalic lparenprotector curf,
curi rparenprotector^;p:=newcharacter(curf,curc-minquarterword);
if(foomathtype(foonucleus(q)^)^=mathtextchar)and(foospace(curf)^<>0)then
delta:=0;
if(foomathtype(foosubscr(q)^)^=empty)and(delta<>0)then begin foolink(p)^
:=newkern(delta);delta:=0;end;end else p:=0;end{:755};empty:p:=0;
subbox:p:=fooinfo(foonucleus(q)^)^;
submlist:begin curmlist:=fooinfo(foonucleus(q)^)^;savestyle:=curstyle;
mlistpenalties:=false;mlisttohlist;curstyle:=savestyle;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};p:=hpack(foolink(temphead)^,0,additional);end;
otherwise confusion(strprotector(890))end;foonewhlist(q)^:=p;
if(foomathtype(foosubscr(q)^)^=empty)and(foomathtype(foosupscr(q)^)^=
empty)then goto checkdimensions;makescripts(q,delta){:754}{:728};
checkdimensions:z:=hpack(foonewhlist(q)^,0,additional);
if fooheight(z)^>maxh then maxh:=fooheight(z)^;
if foodepth(z)^>maxd then maxd:=foodepth(z)^;freenode(z,boxnodesize);
donewithnoad:r:=q;rtype:=footype(r)^;donewithnode:q:=foolink(q)^;
end{:727};{729:}if rtype=binnoad then footype(r)^:=ordnoad{:729};{760:}
p:=temphead;foolink(p)^:=0;q:=mlist;rtype:=0;curstyle:=style;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};while q<>0 do begin{761:}t:=ordnoad;s:=noadsize;
pen:=infpenalty;
case footype(q)^of opnoad,opennoad,closenoad,punctnoad,innernoad:t:=
footype(q)^;binnoad:begin t:=binnoad;pen:=binoppenalty;end;
relnoad:begin t:=relnoad;pen:=relpenalty;end;
ordnoad,vcenternoad,overnoad,undernoad:;radicalnoad:s:=radicalnoadsize;
accentnoad:s:=accentnoadsize;fractionnoad:begin t:=innernoad;
s:=fractionnoadsize;end;
leftnoad,rightnoad:t:=makeleftright(q,style,maxd,maxh);stylenode:{763:}
begin curstyle:=foosubtype(q)^;s:=stylenodesize;{703:}
begin if curstyle<scriptstyle then cursize:=textsize else cursize:=16*((
curstyle-textstyle)div 2);curmu:=xovern(foomathquad(cursize)^,18);
end{:703};goto deleteq;end{:763};
whatsitnode,penaltynode,rulenode,discnode,adjustnode,insnode,marknode,
gluenode,kernnode:begin foolink(p)^:=q;p:=q;q:=foolink(q)^;
foolink(p)^:=0;goto done;end;
otherwise confusion(strprotector(891))end{:761};{766:}
if rtype>0 then begin case strpool[rtype*8+t+magicoffset]of tobar('0'):x
:=0;tobar('1'):if curstyle<scriptstyle then x:=thinmuskipcode else x:=0;
tobar('2'):x:=thinmuskipcode;
tobar('3'):if curstyle<scriptstyle then x:=medmuskipcode else x:=0;
tobar('4'):if curstyle<scriptstyle then x:=thickmuskipcode else x:=0;
otherwise confusion(strprotector(892))end;
if x<>0 then begin y:=mathglue(foogluepar(x)^,curmu);z:=newglue(y);
foogluerefcount(y)^:=0;foolink(p)^:=z;p:=z;foosubtype(z)^:=x+1;end;
end{:766};{767:}
if foonewhlist(q)^<>0 then begin foolink(p)^:=foonewhlist(q)^;
repeat p:=foolink(p)^;until foolink(p)^=0;end;
if penalties then if foolink(q)^<>0 then if pen<infpenalty then begin
rtype:=footype(foolink(q)^)^;
if rtype<>penaltynode then if rtype<>relnoad then begin z:=newpenalty(
pen);foolink(p)^:=z;p:=z;end;end{:767};rtype:=t;deleteq:r:=q;
q:=foolink(q)^;freenode(r,s);done:end{:760};end;{:726}{772:}
procedure pushalignment;var p:pointer;
begin p:=getnode(alignstacknodesize);foolink(p)^:=alignptr;
fooinfo(p)^:=curalign;foollink(p)^:=preamble;foorlink(p)^:=curspan;
mem[p+2].int:=curloop;mem[p+3].int:=alignstate;fooinfo(p+4)^:=curhead;
foolink(p+4)^:=curtail;alignptr:=p;curhead:=getavail;end;
procedure popalignment;var p:pointer;begin freeavail(curhead);
p:=alignptr;curtail:=foolink(p+4)^;curhead:=fooinfo(p+4)^;
alignstate:=mem[p+3].int;curloop:=mem[p+2].int;curspan:=foorlink(p)^;
preamble:=foollink(p)^;curalign:=fooinfo(p)^;alignptr:=foolink(p)^;
freenode(p,alignstacknodesize);end;{:772}{774:}{782:}
procedure getpreambletoken;label restart;begin restart:gettoken;
while(curchr=spancode)and(curcmd=tabmark)do begin gettoken;
if curcmd>maxcommand then begin expand;gettoken;end;end;
if curcmd=endv then fatalerror(strprotector(604));
if(curcmd=assignglue)and(curchr=gluebase+tabskipcode)then begin
scanoptionalequals;scanglue(glueval);
if globaldefs>0 then geqdefine(gluebase+tabskipcode,glueref,curval)else
eqdefine(gluebase+tabskipcode,glueref,curval);goto restart;end;end;
{:782}procedure alignpeek;forward;procedure normalparagraph;forward;
procedure initalign;label done,done1,done2,continue;
var savecsptr:pointer;p:pointer;begin savecsptr:=curcs;pushalignment;
alignstate:=-1000000;{776:}
if(mode=mmode)and((tail<>head)or(incompleatnoad<>0))then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(689));
end;printesc(strprotector(531));print(strprotector(893));
begin helpptr:=3;helpline[2]:=strprotector(894);
helpline[1]:=strprotector(895);helpline[0]:=strprotector(896);end;error;
flushmath;end{:776};pushnest;{775:}
if mode=mmode then begin mode:=-vmode;
prevdepth:=nest[nestptr-2].auxfield.sc;
end else if mode>0 then mode:=-mode{:775};scanspec(aligngroup,false);
{777:}preamble:=0;curalign:=alignhead;curloop:=0;
scannerstatus:=aligning;warningindex:=savecsptr;alignstate:=-1000000;
while true do begin{778:}foolink(curalign)^:=newparamglue(tabskipcode);
curalign:=foolink(curalign)^{:778};if curcmd=carret then goto done;
{779:}{783:}p:=holdhead;foolink(p)^:=0;
while true do begin getpreambletoken;if curcmd=macparam then goto done1;
if(curcmd<=carret)and(curcmd>=tabmark)and(alignstate=-1000000)then if(p=
holdhead)and(curloop=0)and(curcmd=tabmark)then curloop:=curalign else
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(902));end;begin helpptr:=3;
helpline[2]:=strprotector(903);helpline[1]:=strprotector(904);
helpline[0]:=strprotector(905);end;backerror;goto done1;
end else if(curcmd<>spacer)or(p<>holdhead)then begin foolink(p)^:=
getavail;p:=foolink(p)^;fooinfo(p)^:=curtok;end;end;done1:{:783};
foolink(curalign)^:=newnullbox;curalign:=foolink(curalign)^;
fooinfo(curalign)^:=endspan;foowidth(curalign)^:=nullflag;
fooupart(curalign)^:=foolink(holdhead)^;{784:}p:=holdhead;
foolink(p)^:=0;while true do begin continue:getpreambletoken;
if(curcmd<=carret)and(curcmd>=tabmark)and(alignstate=-1000000)then goto
done2;
if curcmd=macparam then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(906));end;begin helpptr:=3;
helpline[2]:=strprotector(903);helpline[1]:=strprotector(904);
helpline[0]:=strprotector(907);end;error;goto continue;end;
foolink(p)^:=getavail;p:=foolink(p)^;fooinfo(p)^:=curtok;end;
done2:foolink(p)^:=getavail;p:=foolink(p)^;
fooinfo(p)^:=endtemplatetoken{:784};
foovpart(curalign)^:=foolink(holdhead)^{:779};end;
done:scannerstatus:=normal{:777};newsavelevel(aligngroup);
if everycr<>0 then begintokenlist(everycr,everycrtext);alignpeek;end;
{:774}{786:}{787:}procedure initspan(p:pointer);begin pushnest;
if mode=-hmode then spacefactor:=1000 else begin prevdepth:=ignoredepth;
normalparagraph;end;curspan:=p;end;{:787}procedure initrow;
begin pushnest;mode:=(-hmode-vmode)-mode;
if mode=-hmode then spacefactor:=0 else prevdepth:=0;
tailappend(newglue(fooglueptr(preamble)^));
foosubtype(tail)^:=tabskipcode+1;curalign:=foolink(preamble)^;
curtail:=curhead;initspan(curalign);end;{:786}{788:}procedure initcol;
begin fooextrainfo(curalign)^:=curcmd;
if curcmd=omit then alignstate:=0 else begin backinput;
begintokenlist(fooupart(curalign)^,utemplate);end;end;{:788}{791:}
function fincol:boolean;label exit;var p:pointer;q,r:pointer;s:pointer;
u:pointer;w:scaled;o:glueord;n:halfword;
begin if curalign=0 then confusion(strprotector(908));
q:=foolink(curalign)^;if q=0 then confusion(strprotector(908));
if alignstate<500000 then fatalerror(strprotector(604));p:=foolink(q)^;
{792:}
if(p=0)and(fooextrainfo(curalign)^<crcode)then if curloop<>0 then{793:}
begin foolink(q)^:=newnullbox;p:=foolink(q)^;fooinfo(p)^:=endspan;
foowidth(p)^:=nullflag;curloop:=foolink(curloop)^;{794:}q:=holdhead;
r:=fooupart(curloop)^;while r<>0 do begin foolink(q)^:=getavail;
q:=foolink(q)^;fooinfo(q)^:=fooinfo(r)^;r:=foolink(r)^;end;
foolink(q)^:=0;fooupart(p)^:=foolink(holdhead)^;q:=holdhead;
r:=foovpart(curloop)^;while r<>0 do begin foolink(q)^:=getavail;
q:=foolink(q)^;fooinfo(q)^:=fooinfo(r)^;r:=foolink(r)^;end;
foolink(q)^:=0;foovpart(p)^:=foolink(holdhead)^{:794};
curloop:=foolink(curloop)^;foolink(p)^:=newglue(fooglueptr(curloop)^);
end{:793}else begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(909));end;printesc(strprotector(898));
begin helpptr:=3;helpline[2]:=strprotector(910);
helpline[1]:=strprotector(911);helpline[0]:=strprotector(912);end;
fooextrainfo(curalign)^:=crcode;error;end{:792};
if fooextrainfo(curalign)^<>spancode then begin unsave;
newsavelevel(aligngroup);{796:}
begin if mode=-hmode then begin adjusttail:=curtail;
u:=hpack(foolink(head)^,0,additional);w:=foowidth(u)^;
curtail:=adjusttail;adjusttail:=0;
end else begin u:=vpackage(foolink(head)^,0,additional,0);
w:=fooheight(u)^;end;n:=minquarterword;if curspan<>curalign then{798:}
begin q:=curspan;repeat n:=n+1;q:=foolink(foolink(q)^)^;
until q=curalign;if n>maxquarterword then confusion(strprotector(913));
q:=curspan;while foolink(fooinfo(q)^)^<n do q:=fooinfo(q)^;
if foolink(fooinfo(q)^)^>n then begin s:=getnode(spannodesize);
fooinfo(s)^:=fooinfo(q)^;foolink(s)^:=n;fooinfo(q)^:=s;foowidth(s)^:=w;
end else if foowidth(fooinfo(q)^)^<w then foowidth(fooinfo(q)^)^:=w;
end{:798}else if w>foowidth(curalign)^then foowidth(curalign)^:=w;
footype(u)^:=unsetnode;foospancount(u)^:=n;{659:}
if totalstretch[filll]<>0 then o:=filll else if totalstretch[fill]<>0
then o:=fill else if totalstretch[fil]<>0 then o:=fil else o:=normal{:
659};fooglueorder(u)^:=o;foogluestretch(u)^:=totalstretch[o];{665:}
if totalshrink[filll]<>0 then o:=filll else if totalshrink[fill]<>0 then
o:=fill else if totalshrink[fil]<>0 then o:=fil else o:=normal{:665};
foogluesign(u)^:=o;fooglueshrink(u)^:=totalshrink[o];popnest;
foolink(tail)^:=u;tail:=u;end{:796};{795:}
tailappend(newglue(fooglueptr(foolink(curalign)^)^));
foosubtype(tail)^:=tabskipcode+1{:795};
if fooextrainfo(curalign)^>=crcode then begin fincol:=true;goto exit;
end;initspan(p);end;alignstate:=1000000;{406:}repeat getxtoken;
until curcmd<>spacer{:406};curalign:=p;initcol;fincol:=false;exit:end;
{:791}{799:}procedure finrow;var p:pointer;
begin if mode=-hmode then begin p:=hpack(foolink(head)^,0,additional);
popnest;appendtovlist(p);
if curhead<>curtail then begin foolink(tail)^:=foolink(curhead)^;
tail:=curtail;end;
end else begin p:=foovpack(foolink(head)^,0,additional)^;popnest;
foolink(tail)^:=p;tail:=p;spacefactor:=1000;end;footype(p)^:=unsetnode;
foogluestretch(p)^:=0;
if everycr<>0 then begintokenlist(everycr,everycrtext);alignpeek;end;
{:799}{800:}procedure doassignments;forward;
procedure resumeafterdisplay;forward;procedure buildpage;forward;
procedure finalign;var p,q,r,s,u,v:pointer;t,w:scaled;o:scaled;
n:halfword;rulesave:scaled;auxsave:memoryword;
begin if curgroup<>aligngroup then confusion(strprotector(914));unsave;
if curgroup<>aligngroup then confusion(strprotector(915));unsave;
if nest[nestptr-1].modefield=mmode then o:=displayindent else o:=0;
{801:}q:=foolink(preamble)^;repeat flushlist(fooupart(q)^);
flushlist(foovpart(q)^);p:=foolink(foolink(q)^)^;
if foowidth(q)^=nullflag then{802:}begin foowidth(q)^:=0;r:=foolink(q)^;
s:=fooglueptr(r)^;if s<>zeroglue then begin addglueref(zeroglue);
deleteglueref(s);fooglueptr(r)^:=zeroglue;end;end{:802};
if fooinfo(q)^<>endspan then{803:}
begin t:=foowidth(q)^+foowidth(fooglueptr(foolink(q)^)^)^;
r:=fooinfo(q)^;s:=endspan;fooinfo(s)^:=p;n:=minquarterword+1;
repeat foowidth(r)^:=foowidth(r)^-t;u:=fooinfo(r)^;
while foolink(r)^>n do begin s:=fooinfo(s)^;n:=foolink(fooinfo(s)^)^+1;
end;if foolink(r)^<n then begin fooinfo(r)^:=fooinfo(s)^;fooinfo(s)^:=r;
foolink(r)^:=foolink(r)^-1;s:=r;
end else begin if foowidth(r)^>foowidth(fooinfo(s)^)^then foowidth(
fooinfo(s)^)^:=foowidth(r)^;freenode(r,spannodesize);end;r:=u;
until r=endspan;end{:803};footype(q)^:=unsetnode;
foospancount(q)^:=minquarterword;fooheight(q)^:=0;foodepth(q)^:=0;
fooglueorder(q)^:=normal;foogluesign(q)^:=normal;foogluestretch(q)^:=0;
fooglueshrink(q)^:=0;q:=p;until q=0{:801};{804:}saveptr:=saveptr-2;
packbeginline:=-modeline;
if mode=-vmode then begin rulesave:=overfullrule;overfullrule:=0;
p:=hpack(preamble,foosaved(1)^,foosaved(0)^);overfullrule:=rulesave;
end else begin q:=foolink(preamble)^;repeat fooheight(q)^:=foowidth(q)^;
foowidth(q)^:=0;q:=foolink(foolink(q)^)^;until q=0;
p:=foovpack(preamble,foosaved(1)^,foosaved(0)^)^;q:=foolink(preamble)^;
repeat foowidth(q)^:=fooheight(q)^;fooheight(q)^:=0;
q:=foolink(foolink(q)^)^;until q=0;end;packbeginline:=0{:804};{805:}
q:=foolink(head)^;s:=head;
while q<>0 do begin if not ischarnode(q)then if footype(q)^=unsetnode
then{807:}begin if mode=-vmode then begin footype(q)^:=hlistnode;
foowidth(q)^:=foowidth(p)^;end else begin footype(q)^:=vlistnode;
fooheight(q)^:=fooheight(p)^;end;fooglueorder(q)^:=fooglueorder(p)^;
foogluesign(q)^:=foogluesign(p)^;fooglueset(q)^:=fooglueset(p)^;
fooshiftamount(q)^:=o;r:=foolink(foolistptr(q)^)^;
s:=foolink(foolistptr(p)^)^;repeat{808:}n:=foospancount(r)^;
t:=foowidth(s)^;w:=t;u:=holdhead;while n>minquarterword do begin n:=n-1;
{809:}s:=foolink(s)^;v:=fooglueptr(s)^;foolink(u)^:=newglue(v);
u:=foolink(u)^;foosubtype(u)^:=tabskipcode+1;t:=t+foowidth(v)^;
if foogluesign(p)^=stretching then begin if foostretchorder(v)^=
fooglueorder(p)^then t:=t+round(fooglueset(p)^*foostretch(v)^);
end else if foogluesign(p)^=shrinking then begin if fooshrinkorder(v)^=
fooglueorder(p)^then t:=t-round(fooglueset(p)^*fooshrink(v)^);end;
s:=foolink(s)^;foolink(u)^:=newnullbox;u:=foolink(u)^;t:=t+foowidth(s)^;
if mode=-vmode then foowidth(u)^:=foowidth(s)^else begin footype(u)^:=
vlistnode;fooheight(u)^:=foowidth(s)^;end{:809};end;
if mode=-vmode then{810:}begin fooheight(r)^:=fooheight(q)^;
foodepth(r)^:=foodepth(q)^;
if t=foowidth(r)^then begin foogluesign(r)^:=normal;
fooglueorder(r)^:=normal;fooglueset(r)^:=0.0;
end else if t>foowidth(r)^then begin foogluesign(r)^:=stretching;
if foogluestretch(r)^=0 then fooglueset(r)^:=0.0 else fooglueset(r)^:=(t
-foowidth(r)^)/foogluestretch(r)^;
end else begin fooglueorder(r)^:=foogluesign(r)^;
foogluesign(r)^:=shrinking;
if fooglueshrink(r)^=0 then fooglueset(r)^:=0.0 else if(fooglueorder(r)^
=normal)and(foowidth(r)^-t>fooglueshrink(r)^)then fooglueset(r)^:=1.0
else fooglueset(r)^:=(foowidth(r)^-t)/fooglueshrink(r)^;end;
foowidth(r)^:=w;footype(r)^:=hlistnode;end{:810}else{811:}
begin foowidth(r)^:=foowidth(q)^;
if t=fooheight(r)^then begin foogluesign(r)^:=normal;
fooglueorder(r)^:=normal;fooglueset(r)^:=0.0;
end else if t>fooheight(r)^then begin foogluesign(r)^:=stretching;
if foogluestretch(r)^=0 then fooglueset(r)^:=0.0 else fooglueset(r)^:=(t
-fooheight(r)^)/foogluestretch(r)^;
end else begin fooglueorder(r)^:=foogluesign(r)^;
foogluesign(r)^:=shrinking;
if fooglueshrink(r)^=0 then fooglueset(r)^:=0.0 else if(fooglueorder(r)^
=normal)and(fooheight(r)^-t>fooglueshrink(r)^)then fooglueset(r)^:=1.0
else fooglueset(r)^:=(fooheight(r)^-t)/fooglueshrink(r)^;end;
fooheight(r)^:=w;footype(r)^:=vlistnode;end{:811};fooshiftamount(r)^:=0;
if u<>holdhead then begin foolink(u)^:=foolink(r)^;
foolink(r)^:=foolink(holdhead)^;r:=u;end{:808};r:=foolink(foolink(r)^)^;
s:=foolink(foolink(s)^)^;until r=0;end{:807}
else if footype(q)^=rulenode then{806:}
begin if isrunning(foowidth(q)^)then foowidth(q)^:=foowidth(p)^;
if isrunning(fooheight(q)^)then fooheight(q)^:=fooheight(p)^;
if isrunning(foodepth(q)^)then foodepth(q)^:=foodepth(p)^;
if o<>0 then begin r:=foolink(q)^;foolink(q)^:=0;
q:=hpack(q,0,additional);fooshiftamount(q)^:=o;foolink(q)^:=r;
foolink(s)^:=q;end;end{:806};s:=q;q:=foolink(q)^;end{:805};
flushnodelist(p);popalignment;{812:}auxsave:=aux;p:=foolink(head)^;
q:=tail;popnest;if mode=mmode then{1206:}begin doassignments;
if curcmd<>mathshift then{1207:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1169));end;begin helpptr:=2;
helpline[1]:=strprotector(894);helpline[0]:=strprotector(895);end;
backerror;end{:1207}else{1197:}begin getxtoken;
if curcmd<>mathshift then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1165));end;begin helpptr:=2;
helpline[1]:=strprotector(1166);helpline[0]:=strprotector(1167);end;
backerror;end;end{:1197};popnest;
tailappend(newpenalty(predisplaypenalty));
tailappend(newparamglue(abovedisplayskipcode));foolink(tail)^:=p;
if p<>0 then tail:=q;tailappend(newpenalty(postdisplaypenalty));
tailappend(newparamglue(belowdisplayskipcode));prevdepth:=auxsave.sc;
resumeafterdisplay;end{:1206}else begin aux:=auxsave;foolink(tail)^:=p;
if p<>0 then tail:=q;if mode=vmode then buildpage;end{:812};end;{785:}
procedure alignpeek;label restart;begin restart:alignstate:=1000000;
{406:}repeat getxtoken;until curcmd<>spacer{:406};
if curcmd=noalign then begin scanleftbrace;newsavelevel(noaligngroup);
if mode=-vmode then normalparagraph;
end else if curcmd=rightbrace then finalign else if(curcmd=carret)and(
curchr=crcrcode)then goto restart else begin initrow;initcol;end;end;
{:785}{:800}{815:}{826:}function finiteshrink(p:pointer):pointer;
var q:pointer;
begin if noshrinkerroryet then begin noshrinkerroryet:=false;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(916));end;begin helpptr:=5;
helpline[4]:=strprotector(917);helpline[3]:=strprotector(918);
helpline[2]:=strprotector(919);helpline[1]:=strprotector(920);
helpline[0]:=strprotector(921);end;error;end;q:=newspec(p);
fooshrinkorder(q)^:=normal;deleteglueref(p);finiteshrink:=q;end;{:826}
{829:}procedure trybreak(pi:integer;breaktype:smallnumber);
label exit,done,done1,continue,deactivate;var r:pointer;prevr:pointer;
oldl:halfword;nobreakyet:boolean;{830:}prevprevr:pointer;s:pointer;
q:pointer;v:pointer;t:integer;f:internalfontnumber;l:halfword;
noderstaysactive:boolean;linewidth:scaled;
fitclass:veryloosefit..tightfit;b:halfword;d:integer;
artificialdemerits:boolean;savelink:pointer;shortfall:scaled;{:830}
begin{831:}
if abs(pi)>=infpenalty then if pi>0 then goto exit else pi:=ejectpenalty
{:831};nobreakyet:=true;prevr:=active;oldl:=0;copytocuractive(1);
copytocuractive(2);copytocuractive(3);copytocuractive(4);
copytocuractive(5);copytocuractive(6);
while true do begin continue:r:=foolink(prevr)^;{832:}
if footype(r)^=deltanode then begin updatewidth(1);updatewidth(2);
updatewidth(3);updatewidth(4);updatewidth(5);updatewidth(6);
prevprevr:=prevr;prevr:=r;goto continue;end{:832};{835:}
begin l:=foolinenumber(r)^;
if l>oldl then begin if(minimumdemerits<awfulbad)and((oldl<>easyline)or(
r=lastactive))then{836:}begin if nobreakyet then{837:}
begin nobreakyet:=false;setbreakwidthtobackground(1);
setbreakwidthtobackground(2);setbreakwidthtobackground(3);
setbreakwidthtobackground(4);setbreakwidthtobackground(5);
setbreakwidthtobackground(6);s:=curp;
if breaktype>unhyphenated then if curp<>0 then{840:}
begin t:=fooreplacecount(curp)^;v:=curp;s:=foopostbreak(curp)^;
while t>0 do begin t:=t-1;v:=foolink(v)^;{841:}
if ischarnode(v)then begin f:=foofont(v)^;
breakwidth[1]:=breakwidth[1]-foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(v)^rparenprotector^rparenprotector^;
end else case footype(v)^of ligaturenode:begin f:=foofont(ligchar(v))^;
breakwidth[1]:=breakwidth[1]-foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(ligchar(v))^rparenprotector^
rparenprotector^;end;
hlistnode,vlistnode,rulenode,kernnode:breakwidth[1]:=breakwidth[1]-
foowidth(v)^;otherwise confusion(strprotector(922))end{:841};end;
while s<>0 do begin{842:}if ischarnode(s)then begin f:=foofont(s)^;
breakwidth[1]:=breakwidth[1]+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(s)^rparenprotector^rparenprotector^;
end else case footype(s)^of ligaturenode:begin f:=foofont(ligchar(s))^;
breakwidth[1]:=breakwidth[1]+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(ligchar(s))^rparenprotector^
rparenprotector^;end;
hlistnode,vlistnode,rulenode,kernnode:breakwidth[1]:=breakwidth[1]+
foowidth(s)^;otherwise confusion(strprotector(923))end{:842};
s:=foolink(s)^;end;breakwidth[1]:=breakwidth[1]+discwidth;
if foopostbreak(curp)^=0 then s:=foolink(v)^;end{:840};
while s<>0 do begin if ischarnode(s)then goto done;
case footype(s)^of gluenode:{838:}begin v:=fooglueptr(s)^;
breakwidth[1]:=breakwidth[1]-foowidth(v)^;
breakwidth[2+foostretchorder(v)^]:=breakwidth[2+foostretchorder(v)^]-
foostretch(v)^;breakwidth[6]:=breakwidth[6]-fooshrink(v)^;end{:838};
penaltynode:;mathnode:breakwidth[1]:=breakwidth[1]-foowidth(s)^;
kernnode:if foosubtype(s)^<>explicit then goto done else breakwidth[1]:=
breakwidth[1]-foowidth(s)^;otherwise goto done end;s:=foolink(s)^;end;
done:end{:837};{843:}
if footype(prevr)^=deltanode then begin converttobreakwidth(1);
converttobreakwidth(2);converttobreakwidth(3);converttobreakwidth(4);
converttobreakwidth(5);converttobreakwidth(6);
end else if prevr=active then begin storebreakwidth(1);
storebreakwidth(2);storebreakwidth(3);storebreakwidth(4);
storebreakwidth(5);storebreakwidth(6);
end else begin q:=getnode(deltanodesize);foolink(q)^:=r;
footype(q)^:=deltanode;foosubtype(q)^:=0;newdeltatobreakwidth(1);
newdeltatobreakwidth(2);newdeltatobreakwidth(3);newdeltatobreakwidth(4);
newdeltatobreakwidth(5);newdeltatobreakwidth(6);foolink(prevr)^:=q;
prevprevr:=prevr;prevr:=q;end{:843};
if abs(adjdemerits)>=awfulbad-minimumdemerits then minimumdemerits:=
awfulbad-1 else minimumdemerits:=minimumdemerits+abs(adjdemerits);
for fitclass:=veryloosefit to tightfit do begin if minimaldemerits[
fitclass]<=minimumdemerits then{845:}begin q:=getnode(passivenodesize);
foolink(q)^:=passive;passive:=q;foocurbreak(q)^:=curp;{_STAT}
passnumber:=passnumber+1;fooserial(q)^:=passnumber;{_ENDSTAT}
fooprevbreak(q)^:=bestplace[fitclass];q:=getnode(activenodesize);
foobreaknode(q)^:=passive;foolinenumber(q)^:=bestplline[fitclass]+1;
foofitness(q)^:=fitclass;footype(q)^:=breaktype;
foototaldemerits(q)^:=minimaldemerits[fitclass];foolink(q)^:=r;
foolink(prevr)^:=q;prevr:=q;{_STAT}if tracingparagraphs>0 then{846:}
begin printnl(strprotector(924));printint(fooserial(passive)^);
print(strprotector(925));printint(foolinenumber(q)^-1);
printchar(tobar('.'));printint(fitclass);
if breaktype=hyphenated then printchar(tobar('-'));
print(strprotector(926));printint(foototaldemerits(q)^);
print(strprotector(927));
if fooprevbreak(passive)^=0 then printchar(tobar('0'))else printint(
fooserial(fooprevbreak(passive)^)^);end{:846};{_ENDSTAT}end{:845};
minimaldemerits[fitclass]:=awfulbad;end;minimumdemerits:=awfulbad;{844:}
if r<>lastactive then begin q:=getnode(deltanodesize);foolink(q)^:=r;
footype(q)^:=deltanode;foosubtype(q)^:=0;newdeltafrombreakwidth(1);
newdeltafrombreakwidth(2);newdeltafrombreakwidth(3);
newdeltafrombreakwidth(4);newdeltafrombreakwidth(5);
newdeltafrombreakwidth(6);foolink(prevr)^:=q;prevprevr:=prevr;prevr:=q;
end{:844};end{:836};if r=lastactive then goto exit;{850:}
if l>easyline then begin linewidth:=secondwidth;oldl:=maxhalfword-1;
end else begin oldl:=l;
if l>lastspecialline then linewidth:=secondwidth else if parshapeptr=0
then linewidth:=firstwidth else linewidth:=mem[parshapeptr+2*l].sc;
end{:850};end;end{:835};{851:}begin artificialdemerits:=false;
shortfall:=linewidth-curactivewidth[1];if shortfall>0 then{852:}
if(curactivewidth[3]<>0)or(curactivewidth[4]<>0)or(curactivewidth[5]<>0)
then begin b:=0;fitclass:=decentfit;
end else begin if shortfall>7230584 then if curactivewidth[2]<1663497
then begin b:=infbad;fitclass:=veryloosefit;goto done1;end;
b:=badness(shortfall,curactivewidth[2]);
if b>12 then if b>99 then fitclass:=veryloosefit else fitclass:=loosefit
else fitclass:=decentfit;done1:end{:852}else{853:}
begin if-shortfall>curactivewidth[6]then b:=infbad+1 else b:=badness(-
shortfall,curactivewidth[6]);
if b>12 then fitclass:=tightfit else fitclass:=decentfit;end{:853};
if(b>infbad)or(pi=ejectpenalty)then{854:}
begin if finalpass and(minimumdemerits=awfulbad)and(foolink(r)^=
lastactive)and(prevr=active)then artificialdemerits:=true else if b>
threshold then goto deactivate;noderstaysactive:=false;end{:854}
else begin prevr:=r;if b>threshold then goto continue;
noderstaysactive:=true;end;{855:}
if artificialdemerits then d:=0 else{859:}begin d:=linepenalty+b;
if abs(d)>=10000 then d:=100000000 else d:=d*d;
if pi<>0 then if pi>0 then d:=d+pi*pi else if pi>ejectpenalty then d:=d-
pi*pi;
if(breaktype=hyphenated)and(footype(r)^=hyphenated)then if curp<>0 then
d:=d+doublehyphendemerits else d:=d+finalhyphendemerits;
if abs(fitclass-foofitness(r)^)>1 then d:=d+adjdemerits;end{:859};
{_STAT}if tracingparagraphs>0 then{856:}
begin if printednode<>curp then{857:}begin printnl(strprotector(266));
if curp=0 then shortdisplay(foolink(printednode)^)else begin savelink:=
foolink(curp)^;foolink(curp)^:=0;printnl(strprotector(266));
shortdisplay(foolink(printednode)^);foolink(curp)^:=savelink;end;
printednode:=curp;end{:857};printnl(strprotector(64));
if curp=0 then printesc(strprotector(606))else if footype(curp)^<>
gluenode then begin if footype(curp)^=penaltynode then printesc(
strprotector(542))else if footype(curp)^=discnode then printesc(
strprotector(361))else if footype(curp)^=kernnode then printesc(
strprotector(352))else printesc(strprotector(355));end;
print(strprotector(928));
if foobreaknode(r)^=0 then printchar(tobar('0'))else printint(fooserial(
foobreaknode(r)^)^);print(strprotector(929));
if b>infbad then printchar(tobar('*'))else printint(b);
print(strprotector(930));printint(pi);print(strprotector(931));
if artificialdemerits then printchar(tobar('*'))else printint(d);
end{:856};{_ENDSTAT}d:=d+foototaldemerits(r)^;
if d<=minimaldemerits[fitclass]then begin minimaldemerits[fitclass]:=d;
bestplace[fitclass]:=foobreaknode(r)^;bestplline[fitclass]:=l;
if d<minimumdemerits then minimumdemerits:=d;end{:855};
if noderstaysactive then goto continue;deactivate:{860:}
foolink(prevr)^:=foolink(r)^;freenode(r,activenodesize);
if prevr=active then{861:}begin r:=foolink(active)^;
if footype(r)^=deltanode then begin updateactive(1);updateactive(2);
updateactive(3);updateactive(4);updateactive(5);updateactive(6);
copytocuractive(1);copytocuractive(2);copytocuractive(3);
copytocuractive(4);copytocuractive(5);copytocuractive(6);
foolink(active)^:=foolink(r)^;freenode(r,deltanodesize);end;end{:861}
else if footype(prevr)^=deltanode then begin r:=foolink(prevr)^;
if r=lastactive then begin downdatewidth(1);downdatewidth(2);
downdatewidth(3);downdatewidth(4);downdatewidth(5);downdatewidth(6);
foolink(prevprevr)^:=lastactive;freenode(prevr,deltanodesize);
prevr:=prevprevr;
end else if footype(r)^=deltanode then begin updatewidth(1);
updatewidth(2);updatewidth(3);updatewidth(4);updatewidth(5);
updatewidth(6);combinetwodeltas(1);combinetwodeltas(2);
combinetwodeltas(3);combinetwodeltas(4);combinetwodeltas(5);
combinetwodeltas(6);foolink(prevr)^:=foolink(r)^;
freenode(r,deltanodesize);end;end{:860};end{:851};end;exit:{_STAT}{858:}
if curp=printednode then if curp<>0 then if footype(curp)^=discnode then
begin t:=fooreplacecount(curp)^;while t>0 do begin t:=t-1;
printednode:=foolink(printednode)^;end;end{:858}{_ENDSTAT}end;{:829}
{877:}procedure postlinebreak(finalwidowpenalty:integer);
label done,done1;var q,r,s:pointer;discbreak:boolean;
postdiscbreak:boolean;curwidth:scaled;curindent:scaled;t:quarterword;
pen:integer;curline:halfword;begin{878:}q:=foobreaknode(bestbet)^;
curp:=0;repeat r:=q;q:=fooprevbreak(q)^;foonextbreak(r)^:=curp;curp:=r;
until q=0{:878};curline:=prevgraf+1;repeat{880:}{881:}
q:=foocurbreak(curp)^;discbreak:=false;postdiscbreak:=false;
if q<>0 then if footype(q)^=gluenode then begin deleteglueref(fooglueptr
(q)^);fooglueptr(q)^:=rightskip;foosubtype(q)^:=rightskipcode+1;
addglueref(rightskip);goto done;
end else begin if footype(q)^=discnode then{882:}
begin t:=fooreplacecount(q)^;{883:}
if t=0 then r:=foolink(q)^else begin r:=q;
while t>1 do begin r:=foolink(r)^;t:=t-1;end;s:=foolink(r)^;
r:=foolink(s)^;foolink(s)^:=0;flushnodelist(foolink(q)^);
fooreplacecount(q)^:=0;end{:883};if foopostbreak(q)^<>0 then{884:}
begin s:=foopostbreak(q)^;while foolink(s)^<>0 do s:=foolink(s)^;
foolink(s)^:=r;r:=foopostbreak(q)^;foopostbreak(q)^:=0;
postdiscbreak:=true;end{:884};if fooprebreak(q)^<>0 then{885:}
begin s:=fooprebreak(q)^;foolink(q)^:=s;
while foolink(s)^<>0 do s:=foolink(s)^;fooprebreak(q)^:=0;q:=s;end{:885}
;foolink(q)^:=r;discbreak:=true;end{:882}
else if(footype(q)^=mathnode)or(footype(q)^=kernnode)then foowidth(q)^:=
0;end else begin q:=temphead;while foolink(q)^<>0 do q:=foolink(q)^;end;
{886:}r:=newparamglue(rightskipcode);foolink(r)^:=foolink(q)^;
foolink(q)^:=r;q:=r{:886};done:{:881};{887:}r:=foolink(q)^;
foolink(q)^:=0;q:=foolink(temphead)^;foolink(temphead)^:=r;
if leftskip<>zeroglue then begin r:=newparamglue(leftskipcode);
foolink(r)^:=q;q:=r;end{:887};{889:}
if curline>lastspecialline then begin curwidth:=secondwidth;
curindent:=secondindent;
end else if parshapeptr=0 then begin curwidth:=firstwidth;
curindent:=firstindent;
end else begin curwidth:=mem[parshapeptr+2*curline].sc;
curindent:=mem[parshapeptr+2*curline-1].sc;end;adjusttail:=adjusthead;
justbox:=hpack(q,curwidth,exactly);
fooshiftamount(justbox)^:=curindent{:889};{888:}appendtovlist(justbox);
if adjusthead<>adjusttail then begin foolink(tail)^:=foolink(adjusthead)
^;tail:=adjusttail;end;adjusttail:=0{:888};{890:}
if curline+1<>bestline then begin pen:=interlinepenalty;
if curline=prevgraf+1 then pen:=pen+clubpenalty;
if curline+2=bestline then pen:=pen+finalwidowpenalty;
if discbreak then pen:=pen+brokenpenalty;
if pen<>0 then begin r:=newpenalty(pen);foolink(tail)^:=r;tail:=r;end;
end{:890}{:880};curline:=curline+1;curp:=foonextbreak(curp)^;
if curp<>0 then if not postdiscbreak then{879:}begin r:=temphead;
while true do begin q:=foolink(r)^;
if q=foocurbreak(curp)^then goto done1;if ischarnode(q)then goto done1;
if nondiscardable(q)then goto done1;
if footype(q)^=kernnode then if foosubtype(q)^<>explicit then goto done1
;r:=q;end;done1:if r<>temphead then begin foolink(r)^:=0;
flushnodelist(foolink(temphead)^);foolink(temphead)^:=q;end;end{:879};
until curp=0;
if(curline<>bestline)or(foolink(temphead)^<>0)then confusion(
strprotector(938));prevgraf:=bestline-1;end;{:877}{895:}{906:}
function reconstitute(j,n:smallnumber;bchar,hchar:halfword):smallnumber;
label continue,done;var p:pointer;t:pointer;q:fourquarters;
currh:halfword;testchar:halfword;w:scaled;k:fontindex;
begin hyphenpassed:=0;t:=holdhead;w:=0;foolink(holdhead)^:=0;{908:}
curl:=hu[j]+minquarterword;curq:=t;
if j=0 then begin ligaturepresent:=initlig;p:=initlist;
if ligaturepresent then lfthit:=initlft;
while p>0 do begin appendcharnodetot(foocharacter(p)^);p:=foolink(p)^;
end;end else if curl<nonchar then appendcharnodetot(curl);ligstack:=0;
setcurr{:908};continue:{909:}
if curl=nonchar then begin k:=bcharlabel[hf];
if k=nonaddress then goto done else q:=fontinfo[k].qqqq;
end else begin q:=foocharinfo lparenprotector hf,curl rparenprotector^;
if chartag(q)<>ligtag then goto done;k:=ligkernbase[hf]+foorembyte(q)^;
q:=fontinfo[k].qqqq;
if fooskipbyte(q)^>stopflag then begin k:=ligkernbase[hf]+256*fooopbyte(
q)^+foorembyte(q)^+32768-kernbaseoffset;q:=fontinfo[k].qqqq;end;end;
if currh<nonchar then testchar:=currh else testchar:=curr;
while true do begin if foonextchar(q)^=testchar then if fooskipbyte(q)^
<=stopflag then if currh<nonchar then begin hyphenpassed:=j;
hchar:=nonchar;currh:=nonchar;goto continue;
end else begin if hchar<nonchar then if odd(hyf[j])then begin
hyphenpassed:=j;hchar:=nonchar;end;if fooopbyte(q)^<kernflag then{911:}
begin if curl=nonchar then lfthit:=true;
if j=n then if ligstack=0 then rthit:=true;checkinterrupt;
case fooopbyte(q)^of 1+minquarterword,5+minquarterword:begin curl:=
foorembyte(q)^;ligaturepresent:=true;end;
2+minquarterword,6+minquarterword:begin curr:=foorembyte(q)^;
if ligstack>0 then foocharacter(ligstack)^:=curr else begin ligstack:=
newligitem(curr);if j=n then bchar:=nonchar else begin p:=getavail;
fooligptr(ligstack)^:=p;foocharacter(p)^:=hu[j+1]+minquarterword;
foofont(p)^:=hf;end;end;end;3+minquarterword:begin curr:=foorembyte(q)^;
p:=ligstack;ligstack:=newligitem(curr);foolink(ligstack)^:=p;end;
7+minquarterword,11+minquarterword:begin wraplig(false);curq:=t;
curl:=foorembyte(q)^;ligaturepresent:=true;end;
otherwise begin curl:=foorembyte(q)^;ligaturepresent:=true;
if ligstack>0 then popligstack else if j=n then goto done else begin
appendcharnodetot(curr);j:=j+1;setcurr;end;end end;
if fooopbyte(q)^>4+minquarterword then if fooopbyte(q)^<>7+
minquarterword then goto done;goto continue;end{:911};
w:=foocharkern lparenprotector hf,q rparenprotector^;goto done;end;
if fooskipbyte(q)^>=stopflag then if currh=nonchar then goto done else
begin currh:=nonchar;goto continue;end;
k:=k+fooskipbyte(q)^-minquarterword+1;q:=fontinfo[k].qqqq;end;
done:{:909};{910:}wraplig(rthit);
if w<>0 then begin foolink(t)^:=newkern(w);t:=foolink(t)^;w:=0;end;
if ligstack>0 then begin curq:=t;curl:=foocharacter(ligstack)^;
ligaturepresent:=true;popligstack;goto continue;end{:910};
reconstitute:=j;end;{:906}procedure hyphenate;
label commonending,done,found,found1,found2,notfound,exit;var{901:}
i,j,l:0..65;q,r,s:pointer;bchar:halfword;{:901}{912:}
majortail,minortail:pointer;c:ASCIIcode;cloc:0..63;rcount:integer;
hyfnode:pointer;{:912}{922:}z:triepointer;v:integer;{:922}{929:}
h:hyphpointer;k:strnumber;u:poolpointer;{:929}begin{923:}
for j:=0 to hn do hyf[j]:=0;{930:}h:=hc[1];hn:=hn+1;hc[hn]:=curlang;
for j:=2 to hn do h:=(h+h+hc[j])mod hyphsize;while true do begin{931:}
k:=hyphword[h];if k=0 then goto notfound;
if flength(k)<hn then goto notfound;if flength(k)=hn then begin j:=1;
u:=strstart[k];repeat if strpool[u]<hc[j]then goto notfound;
if strpool[u]>hc[j]then goto done;j:=j+1;u:=u+1;until j>hn;{932:}
s:=hyphlist[h];while s<>0 do begin hyf[fooinfo(s)^]:=1;s:=foolink(s)^;
end{:932};hn:=hn-1;goto found;end;done:{:931};
if h>0 then h:=h-1 else h:=hyphsize;end;notfound:hn:=hn-1{:930};
if footriechar(curlang+1)^<>curlang+minquarterword then goto exit;
hc[0]:=0;hc[hn+1]:=0;hc[hn+2]:=256;
for j:=0 to hn-rhyf+1 do begin z:=footrielink(curlang+1)^+hc[j];l:=j;
while hc[l]=footriechar(z)^-minquarterword do begin if footrieop(z)^<>
minquarterword then{924:}begin v:=footrieop(z)^;
repeat v:=v+opstart[curlang];i:=l-hyfdistance[v];
if hyfnum[v]>hyf[i]then hyf[i]:=hyfnum[v];v:=hyfnext[v];
until v=minquarterword;end{:924};l:=l+1;z:=footrielink(z)^+hc[l];end;
end;found:for j:=0 to lhyf-1 do hyf[j]:=0;
for j:=0 to rhyf-1 do hyf[hn-j]:=0{:923};{902:}
for j:=lhyf to hn-rhyf do if odd(hyf[j])then goto found1;goto exit;
found1:{:902};{903:}q:=foolink(hb)^;foolink(hb)^:=0;r:=foolink(ha)^;
foolink(ha)^:=0;bchar:=hyfbchar;
if ischarnode(ha)then if foofont(ha)^<>hf then goto found2 else begin
initlist:=ha;initlig:=false;hu[0]:=foocharacter(ha)^-minquarterword;
end else if footype(ha)^=ligaturenode then if foofont(ligchar(ha))^<>hf
then goto found2 else begin initlist:=fooligptr(ha)^;initlig:=true;
initlft:=(foosubtype(ha)^>1);
hu[0]:=foocharacter(ligchar(ha))^-minquarterword;
if initlist=0 then if initlft then begin hu[0]:=256;initlig:=false;end;
freenode(ha,smallnodesize);
end else begin if not ischarnode(r)then if footype(r)^=ligaturenode then
if foosubtype(r)^>1 then goto found2;j:=1;s:=ha;initlist:=0;
goto commonending;end;s:=curp;while foolink(s)^<>ha do s:=foolink(s)^;
j:=0;goto commonending;found2:s:=ha;j:=0;hu[0]:=256;initlig:=false;
initlist:=0;commonending:flushnodelist(r);{913:}repeat l:=j;
j:=reconstitute(j,hn,bchar,hyfchar+minquarterword)+1;
if hyphenpassed=0 then begin foolink(s)^:=foolink(holdhead)^;
while foolink(s)^>0 do s:=foolink(s)^;if odd(hyf[j-1])then begin l:=j;
hyphenpassed:=j-1;foolink(holdhead)^:=0;end;end;
if hyphenpassed>0 then{914:}repeat r:=getnode(smallnodesize);
foolink(r)^:=foolink(holdhead)^;footype(r)^:=discnode;majortail:=r;
rcount:=0;while foolink(majortail)^>0 do advancemajortail;
i:=hyphenpassed;hyf[i]:=0;{915:}minortail:=0;fooprebreak(r)^:=0;
hyfnode:=newcharacter(hf,hyfchar);if hyfnode<>0 then begin i:=i+1;
c:=hu[i];hu[i]:=hyfchar;freeavail(hyfnode);end;
while l<=i do begin l:=reconstitute(l,i,fontbchar[hf],nonchar)+1;
if foolink(holdhead)^>0 then begin if minortail=0 then fooprebreak(r)^:=
foolink(holdhead)^else foolink(minortail)^:=foolink(holdhead)^;
minortail:=foolink(holdhead)^;
while foolink(minortail)^>0 do minortail:=foolink(minortail)^;end;end;
if hyfnode<>0 then begin hu[i]:=c;l:=i;i:=i-1;end{:915};{916:}
minortail:=0;foopostbreak(r)^:=0;cloc:=0;
if bcharlabel[hf]<>nonaddress then begin l:=l-1;c:=hu[l];cloc:=l;
hu[l]:=256;end;
while l<j do begin repeat l:=reconstitute(l,hn,bchar,nonchar)+1;
if cloc>0 then begin hu[cloc]:=c;cloc:=0;end;
if foolink(holdhead)^>0 then begin if minortail=0 then foopostbreak(r)^
:=foolink(holdhead)^else foolink(minortail)^:=foolink(holdhead)^;
minortail:=foolink(holdhead)^;
while foolink(minortail)^>0 do minortail:=foolink(minortail)^;end;
until l>=j;while l>j do{917:}
begin j:=reconstitute(j,hn,bchar,nonchar)+1;
foolink(majortail)^:=foolink(holdhead)^;
while foolink(majortail)^>0 do advancemajortail;end{:917};end{:916};
{918:}if rcount>127 then begin foolink(s)^:=foolink(r)^;foolink(r)^:=0;
flushnodelist(r);end else begin foolink(s)^:=r;
fooreplacecount(r)^:=rcount;end;s:=majortail{:918};hyphenpassed:=j-1;
foolink(holdhead)^:=0;until not odd(hyf[j-1]){:914};until j>hn;
foolink(s)^:=q{:913};flushlist(initlist){:903};exit:end;{:895}{942:}
{944:}function newtrieop(d,n:smallnumber;v:quarterword):quarterword;
label exit;var h:-trieopsize..trieopsize;u:quarterword;l:0..trieopsize;
begin h:=abs(n+313*d+361*v+1009*curlang)mod(trieopsize+trieopsize)-
trieopsize;while true do begin l:=trieophash[h];
if l=0 then begin if trieopptr=trieopsize then overflow(strprotector(948
),trieopsize);u:=trieused[curlang];
if u=maxquarterword then overflow(strprotector(949),maxquarterword-
minquarterword);trieopptr:=trieopptr+1;u:=u+1;trieused[curlang]:=u;
hyfdistance[trieopptr]:=d;hyfnum[trieopptr]:=n;hyfnext[trieopptr]:=v;
trieoplang[trieopptr]:=curlang;trieophash[h]:=trieopptr;
trieopval[trieopptr]:=u;newtrieop:=u;goto exit;end;
if(hyfdistance[l]=d)and(hyfnum[l]=n)and(hyfnext[l]=v)and(trieoplang[l]=
curlang)then begin newtrieop:=trieopval[l];goto exit;end;
if h>-trieopsize then h:=h-1 else h:=trieopsize;end;exit:end;{:944}
{948:}function trienode(p:triepointer):triepointer;label exit;
var h:triepointer;q:triepointer;
begin h:=abs(triec[p]+1009*trieo[p]+2718*triel[p]+3142*trier[p])mod
triesize;while true do begin q:=triehash[h];
if q=0 then begin triehash[h]:=p;trienode:=p;goto exit;end;
if(triec[q]=triec[p])and(trieo[q]=trieo[p])and(triel[q]=triel[p])and(
trier[q]=trier[p])then begin trienode:=q;goto exit;end;
if h>0 then h:=h-1 else h:=triesize;end;exit:end;{:948}{949:}
function compresstrie(p:triepointer):triepointer;
begin if p=0 then compresstrie:=0 else begin triel[p]:=compresstrie(
triel[p]);trier[p]:=compresstrie(trier[p]);compresstrie:=trienode(p);
end;end;{:949}{953:}procedure firstfit(p:triepointer);
label notfound,found;var h:triepointer;z:triepointer;q:triepointer;
c:ASCIIcode;l,r:triepointer;ll:1..256;begin c:=triec[p];z:=triemin[c];
while true do begin h:=z-c;{954:}
if triemax<h+256 then begin if triesize<=h+256 then overflow(
strprotector(950),triesize);repeat triemax:=triemax+1;
trietaken[triemax]:=false;footrielink(triemax)^:=triemax+1;
footrieback(triemax)^:=triemax-1;until triemax=h+256;end{:954};
if trietaken[h]then goto notfound;{955:}q:=trier[p];
while q>0 do begin if footrielink(h+triec[q])^=0 then goto notfound;
q:=trier[q];end;goto found{:955};notfound:z:=footrielink(z)^;end;
found:{956:}trietaken[h]:=true;triehash[p]:=h;q:=p;repeat z:=h+triec[q];
l:=footrieback(z)^;r:=footrielink(z)^;footrieback(r)^:=l;
footrielink(l)^:=r;footrielink(z)^:=0;
if l<256 then begin if z<256 then ll:=z else ll:=256;
repeat triemin[l]:=r;l:=l+1;until l=ll;end;q:=trier[q];until q=0{:956};
end;{:953}{957:}procedure triepack(p:triepointer);var q:triepointer;
begin repeat q:=triel[p];
if(q>0)and(triehash[q]=0)then begin firstfit(q);triepack(q);end;
p:=trier[p];until p=0;end;{:957}{959:}procedure triefix(p:triepointer);
var q:triepointer;c:ASCIIcode;z:triepointer;begin z:=triehash[p];
repeat q:=triel[p];c:=triec[p];footrielink(z+c)^:=triehash[q];
footriechar(z+c)^:=c+minquarterword;footrieop(z+c)^:=trieo[p];
if q>0 then triefix(q);p:=trier[p];until p=0;end;{:959}{960:}
procedure newpatterns;label done,done1;var k,l:0..64;
digitsensed:boolean;v:quarterword;p,q:triepointer;firstchild:boolean;
c:ASCIIcode;begin if trienotready then begin setcurlang;scanleftbrace;
{961:}k:=0;hyf[0]:=0;digitsensed:=false;while true do begin getxtoken;
case curcmd of letter,otherchar:{962:}
if digitsensed or(curchr<tobar('0'))or(curchr>tobar('9'))then begin if
curchr=tobar('.')then curchr:=0 else begin curchr:=foolccode(curchr)^;
if curchr=0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(956));end;begin helpptr:=1;
helpline[0]:=strprotector(955);end;error;end;end;
if k<63 then begin k:=k+1;hc[k]:=curchr;hyf[k]:=0;digitsensed:=false;
end;end else if k<63 then begin hyf[k]:=curchr-tobar('0');
digitsensed:=true;end{:962};spacer,rightbrace:begin if k>0 then{963:}
begin{965:}if hc[1]=0 then hyf[0]:=0;if hc[k]=0 then hyf[k]:=0;l:=k;
v:=minquarterword;
while true do begin if hyf[l]<>0 then v:=newtrieop(k-l,hyf[l],v);
if l>0 then l:=l-1 else goto done1;end;done1:{:965};q:=0;hc[0]:=curlang;
while l<=k do begin c:=hc[l];l:=l+1;p:=triel[q];firstchild:=true;
while(p>0)and(c>triec[p])do begin q:=p;p:=trier[q];firstchild:=false;
end;if(p=0)or(c<triec[p])then{964:}
begin if trieptr=triesize then overflow(strprotector(950),triesize);
trieptr:=trieptr+1;trier[trieptr]:=p;p:=trieptr;triel[p]:=0;
if firstchild then triel[q]:=p else trier[q]:=p;triec[p]:=c;
trieo[p]:=minquarterword;end{:964};q:=p;end;
if trieo[q]<>minquarterword then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(957));end;
begin helpptr:=1;helpline[0]:=strprotector(955);end;error;end;
trieo[q]:=v;end{:963};if curcmd=rightbrace then goto done;k:=0;
hyf[0]:=0;digitsensed:=false;end;
otherwise begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(954));end;printesc(strprotector(952));
begin helpptr:=1;helpline[0]:=strprotector(955);end;error;end end;end;
done:{:961};end else begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(951));end;printesc(strprotector(952));
begin helpptr:=1;helpline[0]:=strprotector(953);end;error;
foolink(garbage)^:=scantoks(false,false);flushlist(defref);end;end;
{:960}{966:}procedure inittrie;var p:triepointer;j,k,t:integer;
r,s:triepointer;h:twohalves;begin{952:}{945:}
opstart[0]:=-minquarterword;
for j:=1 to 255 do opstart[j]:=opstart[j-1]+trieused[j-1]-minquarterword
;
for j:=1 to trieopptr do trieophash[j]:=opstart[trieoplang[j]]+trieopval
[j];
for j:=1 to trieopptr do while trieophash[j]>j do begin k:=trieophash[j]
;t:=hyfdistance[k];hyfdistance[k]:=hyfdistance[j];hyfdistance[j]:=t;
t:=hyfnum[k];hyfnum[k]:=hyfnum[j];hyfnum[j]:=t;t:=hyfnext[k];
hyfnext[k]:=hyfnext[j];hyfnext[j]:=t;trieophash[j]:=trieophash[k];
trieophash[k]:=k;end{:945};for p:=0 to triesize do triehash[p]:=0;
trieroot:=compresstrie(trieroot);for p:=0 to trieptr do triehash[p]:=0;
for p:=0 to 255 do triemin[p]:=p+1;footrielink(0)^:=1;triemax:=0{:952};
if trieroot<>0 then begin firstfit(trieroot);triepack(trieroot);end;
{958:}h.rh:=0;h.b0:=minquarterword;h.b1:=minquarterword;
if trieroot=0 then begin for r:=0 to 256 do trie[r]:=h;triemax:=256;
end else begin triefix(trieroot);r:=0;repeat s:=footrielink(r)^;
trie[r]:=h;r:=s;until r>triemax;end;
footriechar(0)^:=tobar('?')+minquarterword;{:958};trienotready:=false;
end;{:966}{:942}procedure linebreak(finalwidowpenalty:integer);
label done,done1,done2,done3,done4,done5,continue;var{862:}
autobreaking:boolean;prevp:pointer;q,r,s,prevs:pointer;
f:internalfontnumber;{:862}{893:}j:smallnumber;c:0..255;{:893}
begin packbeginline:=modeline;{816:}foolink(temphead)^:=foolink(head)^;
if ischarnode(tail)then tailappend(newpenalty(infpenalty))else if
footype(tail)^<>gluenode then tailappend(newpenalty(infpenalty))else
begin footype(tail)^:=penaltynode;deleteglueref(fooglueptr(tail)^);
flushnodelist(fooleaderptr(tail)^);foopenalty(tail)^:=infpenalty;end;
foolink(tail)^:=newparamglue(parfillskipcode);
initcurlang:=prevgraf mod 65536;initlhyf:=prevgraf div 4194304;
initrhyf:=(prevgraf div 65536)mod 64;popnest;{:816}{827:}
noshrinkerroryet:=true;checkshrinkage(leftskip);
checkshrinkage(rightskip);q:=leftskip;r:=rightskip;
background[1]:=foowidth(q)^+foowidth(r)^;background[2]:=0;
background[3]:=0;background[4]:=0;background[5]:=0;
background[2+foostretchorder(q)^]:=foostretch(q)^;
background[2+foostretchorder(r)^]:=background[2+foostretchorder(r)^]+
foostretch(r)^;background[6]:=fooshrink(q)^+fooshrink(r)^;{:827}{834:}
minimumdemerits:=awfulbad;minimaldemerits[tightfit]:=awfulbad;
minimaldemerits[decentfit]:=awfulbad;
minimaldemerits[loosefit]:=awfulbad;
minimaldemerits[veryloosefit]:=awfulbad;{:834}{848:}
if parshapeptr=0 then if hangindent=0 then begin lastspecialline:=0;
secondwidth:=hsize;secondindent:=0;end else{849:}
begin lastspecialline:=abs(hangafter);
if hangafter<0 then begin firstwidth:=hsize-abs(hangindent);
if hangindent>=0 then firstindent:=hangindent else firstindent:=0;
secondwidth:=hsize;secondindent:=0;end else begin firstwidth:=hsize;
firstindent:=0;secondwidth:=hsize-abs(hangindent);
if hangindent>=0 then secondindent:=hangindent else secondindent:=0;end;
end{:849}else begin lastspecialline:=fooinfo(parshapeptr)^-1;
secondwidth:=mem[parshapeptr+2*(lastspecialline+1)].sc;
secondindent:=mem[parshapeptr+2*lastspecialline+1].sc;end;
if looseness=0 then easyline:=lastspecialline else easyline:=maxhalfword
{:848};{863:}threshold:=pretolerance;if threshold>=0 then begin{_STAT}
if tracingparagraphs>0 then begin begindiagnostic;
printnl(strprotector(932));end;{_ENDSTAT}secondpass:=false;
finalpass:=false;end else begin threshold:=tolerance;secondpass:=true;
finalpass:=(emergencystretch<=0);{_STAT}
if tracingparagraphs>0 then begindiagnostic;{_ENDSTAT}end;
while true do begin if threshold>infbad then threshold:=infbad;
if secondpass then{891:}begin if trienotready then inittrie;
curlang:=initcurlang;lhyf:=initlhyf;rhyf:=initrhyf;end{:891};{864:}
q:=getnode(activenodesize);footype(q)^:=unhyphenated;
foofitness(q)^:=decentfit;foolink(q)^:=lastactive;foobreaknode(q)^:=0;
foolinenumber(q)^:=prevgraf+1;foototaldemerits(q)^:=0;
foolink(active)^:=q;storebackground(1);storebackground(2);
storebackground(3);storebackground(4);storebackground(5);
storebackground(6);passive:=0;printednode:=temphead;passnumber:=0;
fontinshortdisplay:=nullfont{:864};curp:=foolink(temphead)^;
autobreaking:=true;prevp:=curp;
while(curp<>0)and(foolink(active)^<>lastactive)do{866:}
begin if ischarnode(curp)then{867:}begin prevp:=curp;
repeat f:=foofont(curp)^;
actwidth:=actwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(curp)^rparenprotector^rparenprotector^;
curp:=foolink(curp)^;until not ischarnode(curp);end{:867};
case footype(curp)^of hlistnode,vlistnode,rulenode:actwidth:=actwidth+
foowidth(curp)^;whatsitnode:{1362:}advpast(curp){:1362};
gluenode:begin{868:}
if autobreaking then begin if ischarnode(prevp)then trybreak(0,
unhyphenated)else if precedesbreak(prevp)then trybreak(0,unhyphenated)
else if(footype(prevp)^=kernnode)and(foosubtype(prevp)^<>explicit)then
trybreak(0,unhyphenated);end;checkshrinkage(fooglueptr(curp)^);
q:=fooglueptr(curp)^;actwidth:=actwidth+foowidth(q)^;
activewidth[2+foostretchorder(q)^]:=activewidth[2+foostretchorder(q)^]+
foostretch(q)^;activewidth[6]:=activewidth[6]+fooshrink(q)^{:868};
if secondpass and autobreaking then{894:}begin prevs:=curp;
s:=foolink(prevs)^;if s<>0 then begin{896:}
while true do begin if ischarnode(s)then begin c:=foocharacter(s)^-
minquarterword;hf:=foofont(s)^;
end else if footype(s)^=ligaturenode then if fooligptr(s)^=0 then goto
continue else begin q:=fooligptr(s)^;c:=foocharacter(q)^-minquarterword;
hf:=foofont(q)^;
end else if(footype(s)^=kernnode)and(foosubtype(s)^=normal)then goto
continue else if footype(s)^=whatsitnode then begin{1363:}
advpast(s){:1363};goto continue;end else goto done1;
if foolccode(c)^<>0 then if(foolccode(c)^=c)or(uchyph>0)then goto done2
else goto done1;continue:prevs:=s;s:=foolink(prevs)^;end;
done2:hyfchar:=hyphenchar[hf];if hyfchar<0 then goto done1;
if hyfchar>255 then goto done1;ha:=prevs{:896};
if lhyf+rhyf>63 then goto done1;{897:}hn:=0;
while true do begin if ischarnode(s)then begin if foofont(s)^<>hf then
goto done3;hyfbchar:=foocharacter(s)^;c:=hyfbchar-minquarterword;
if foolccode(c)^=0 then goto done3;if hn=63 then goto done3;hb:=s;
hn:=hn+1;hu[hn]:=c;hc[hn]:=foolccode(c)^;hyfbchar:=nonchar;
end else if footype(s)^=ligaturenode then{898:}
begin if foofont(ligchar(s))^<>hf then goto done3;j:=hn;
q:=fooligptr(s)^;if q>0 then hyfbchar:=foocharacter(q)^;
while q>0 do begin c:=foocharacter(q)^-minquarterword;
if foolccode(c)^=0 then goto done3;if j=63 then goto done3;j:=j+1;
hu[j]:=c;hc[j]:=foolccode(c)^;q:=foolink(q)^;end;hb:=s;hn:=j;
if odd(foosubtype(s)^)then hyfbchar:=fontbchar[hf]else hyfbchar:=nonchar
;end{:898}
else if(footype(s)^=kernnode)and(foosubtype(s)^=normal)then begin hb:=s;
hyfbchar:=fontbchar[hf];end else goto done3;s:=foolink(s)^;end;
done3:{:897};{899:}if hn<lhyf+rhyf then goto done1;
while true do begin if not(ischarnode(s))then case footype(s)^of
ligaturenode:;kernnode:if foosubtype(s)^<>normal then goto done4;
whatsitnode,gluenode,penaltynode,insnode,adjustnode,marknode:goto done4;
otherwise goto done1 end;s:=foolink(s)^;end;done4:{:899};hyphenate;end;
done1:end{:894};end;
kernnode:if foosubtype(curp)^=explicit then kernbreak else actwidth:=
actwidth+foowidth(curp)^;ligaturenode:begin f:=foofont(ligchar(curp))^;
actwidth:=actwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(ligchar(curp))^rparenprotector^
rparenprotector^;end;discnode:{869:}begin s:=fooprebreak(curp)^;
discwidth:=0;
if s=0 then trybreak(exhyphenpenalty,hyphenated)else begin repeat{870:}
if ischarnode(s)then begin f:=foofont(s)^;
discwidth:=discwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(s)^rparenprotector^rparenprotector^;
end else case footype(s)^of ligaturenode:begin f:=foofont(ligchar(s))^;
discwidth:=discwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(ligchar(s))^rparenprotector^
rparenprotector^;end;
hlistnode,vlistnode,rulenode,kernnode:discwidth:=discwidth+foowidth(s)^;
otherwise confusion(strprotector(936))end{:870};s:=foolink(s)^;
until s=0;actwidth:=actwidth+discwidth;
trybreak(hyphenpenalty,hyphenated);actwidth:=actwidth-discwidth;end;
r:=fooreplacecount(curp)^;s:=foolink(curp)^;while r>0 do begin{871:}
if ischarnode(s)then begin f:=foofont(s)^;
actwidth:=actwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(s)^rparenprotector^rparenprotector^;
end else case footype(s)^of ligaturenode:begin f:=foofont(ligchar(s))^;
actwidth:=actwidth+foocharwidth lparenprotector f,foocharinfo
lparenprotector f,foocharacter(ligchar(s))^rparenprotector^
rparenprotector^;end;
hlistnode,vlistnode,rulenode,kernnode:actwidth:=actwidth+foowidth(s)^;
otherwise confusion(strprotector(937))end{:871};r:=r-1;s:=foolink(s)^;
end;prevp:=curp;curp:=s;goto done5;end{:869};
mathnode:begin autobreaking:=(foosubtype(curp)^=after);kernbreak;end;
penaltynode:trybreak(foopenalty(curp)^,unhyphenated);
marknode,insnode,adjustnode:;otherwise confusion(strprotector(935))end;
prevp:=curp;curp:=foolink(curp)^;done5:end{:866};if curp=0 then{873:}
begin trybreak(ejectpenalty,hyphenated);
if foolink(active)^<>lastactive then begin{874:}r:=foolink(active)^;
fewestdemerits:=awfulbad;
repeat if footype(r)^<>deltanode then if foototaldemerits(r)^<
fewestdemerits then begin fewestdemerits:=foototaldemerits(r)^;
bestbet:=r;end;r:=foolink(r)^;until r=lastactive;
bestline:=foolinenumber(bestbet)^{:874};if looseness=0 then goto done;
{875:}begin r:=foolink(active)^;actuallooseness:=0;
repeat if footype(r)^<>deltanode then begin linediff:=foolinenumber(r)^-
bestline;
if((linediff<actuallooseness)and(looseness<=linediff))or((linediff>
actuallooseness)and(looseness>=linediff))then begin bestbet:=r;
actuallooseness:=linediff;fewestdemerits:=foototaldemerits(r)^;
end else if(linediff=actuallooseness)and(foototaldemerits(r)^<
fewestdemerits)then begin bestbet:=r;
fewestdemerits:=foototaldemerits(r)^;end;end;r:=foolink(r)^;
until r=lastactive;bestline:=foolinenumber(bestbet)^;end{:875};
if(actuallooseness=looseness)or finalpass then goto done;end;end{:873};
{865:}q:=foolink(active)^;
while q<>lastactive do begin curp:=foolink(q)^;
if footype(q)^=deltanode then freenode(q,deltanodesize)else freenode(q,
activenodesize);q:=curp;end;q:=passive;
while q<>0 do begin curp:=foolink(q)^;freenode(q,passivenodesize);
q:=curp;end{:865};if not secondpass then begin{_STAT}
if tracingparagraphs>0 then printnl(strprotector(933));{_ENDSTAT}
threshold:=tolerance;secondpass:=true;finalpass:=(emergencystretch<=0);
end else begin{_STAT}
if tracingparagraphs>0 then printnl(strprotector(934));{_ENDSTAT}
background[2]:=background[2]+emergencystretch;finalpass:=true;end;end;
done:{_STAT}if tracingparagraphs>0 then begin enddiagnostic(true);
normalizeselector;end;{_ENDSTAT}{:863};{876:}
postlinebreak(finalwidowpenalty){:876};{865:}q:=foolink(active)^;
while q<>lastactive do begin curp:=foolink(q)^;
if footype(q)^=deltanode then freenode(q,deltanodesize)else freenode(q,
activenodesize);q:=curp;end;q:=passive;
while q<>0 do begin curp:=foolink(q)^;freenode(q,passivenodesize);
q:=curp;end{:865};packbeginline:=0;end;{:815}{934:}
procedure newhyphexceptions;label reswitch,exit,found,notfound;
var n:0..64;j:0..64;h:hyphpointer;k:strnumber;p:pointer;q:pointer;
s,t:strnumber;u,v:poolpointer;begin scanleftbrace;setcurlang;{935:}n:=0;
p:=0;while true do begin getxtoken;
reswitch:case curcmd of letter,otherchar,chargiven:{937:}
if curchr=tobar('-')then{938:}begin if n<63 then begin q:=getavail;
foolink(q)^:=p;fooinfo(q)^:=n;p:=q;end;end{:938}
else begin if foolccode(curchr)^=0 then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(944));end;
begin helpptr:=2;helpline[1]:=strprotector(945);
helpline[0]:=strprotector(946);end;error;
end else if n<63 then begin n:=n+1;hc[n]:=foolccode(curchr)^;end;
end{:937};charnum:begin scancharnum;curchr:=curval;curcmd:=chargiven;
goto reswitch;end;spacer,rightbrace:begin if n>1 then{939:}begin n:=n+1;
hc[n]:=curlang;
begin if poolptr+n>poolsize then overflow(257,poolsize-initpoolptr);end;
h:=0;for j:=1 to n do begin h:=(h+h+hc[j])mod hyphsize;
appendchar(hc[j]);end;s:=makestring;{940:}
if hyphcount=hyphsize then overflow(strprotector(947),hyphsize);
hyphcount:=hyphcount+1;while hyphword[h]<>0 do begin{941:}
k:=hyphword[h];if flength(k)<flength(s)then goto found;
if flength(k)>flength(s)then goto notfound;u:=strstart[k];
v:=strstart[s];repeat if strpool[u]<strpool[v]then goto found;
if strpool[u]>strpool[v]then goto notfound;u:=u+1;v:=v+1;
until u=strstart[k+1];found:q:=hyphlist[h];hyphlist[h]:=p;p:=q;
t:=hyphword[h];hyphword[h]:=s;s:=t;notfound:{:941};
if h>0 then h:=h-1 else h:=hyphsize;end;hyphword[h]:=s;
hyphlist[h]:=p{:940};end{:939};if curcmd=rightbrace then goto exit;n:=0;
p:=0;end;otherwise{936:}begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(689));end;printesc(strprotector(940));
print(strprotector(941));begin helpptr:=2;
helpline[1]:=strprotector(942);helpline[0]:=strprotector(943);end;error;
end{:936}end;end{:935};exit:end;{:934}{968:}
function prunepagetop(p:pointer):pointer;var prevp:pointer;q:pointer;
begin prevp:=temphead;foolink(temphead)^:=p;
while p<>0 do case footype(p)^of hlistnode,vlistnode,rulenode:{969:}
begin q:=newskipparam(splittopskipcode);foolink(prevp)^:=q;
foolink(q)^:=p;
if foowidth(tempptr)^>fooheight(p)^then foowidth(tempptr)^:=foowidth(
tempptr)^-fooheight(p)^else foowidth(tempptr)^:=0;p:=0;end{:969};
whatsitnode,marknode,insnode:begin prevp:=p;p:=foolink(prevp)^;end;
gluenode,kernnode,penaltynode:begin q:=p;p:=foolink(q)^;foolink(q)^:=0;
foolink(prevp)^:=p;flushnodelist(q);end;
otherwise confusion(strprotector(958))end;
prunepagetop:=foolink(temphead)^;end;{:968}{970:}
function vertbreak(p:pointer;h,d:scaled):pointer;
label done,notfound,updateheights;var prevp:pointer;q,r:pointer;
pi:integer;b:integer;leastcost:integer;bestplace:pointer;prevdp:scaled;
t:smallnumber;begin prevp:=p;leastcost:=awfulbad;setheightzero(1);
setheightzero(2);setheightzero(3);setheightzero(4);setheightzero(5);
setheightzero(6);prevdp:=0;while true do begin{972:}
if p=0 then pi:=ejectpenalty else{973:}
case footype(p)^of hlistnode,vlistnode,rulenode:begin curheight:=
curheight+prevdp+fooheight(p)^;prevdp:=foodepth(p)^;goto notfound;end;
whatsitnode:{1365:}goto notfound{:1365};
gluenode:if precedesbreak(prevp)then pi:=0 else goto updateheights;
kernnode:begin if foolink(p)^=0 then t:=penaltynode else t:=footype(
foolink(p)^)^;if t=gluenode then pi:=0 else goto updateheights;end;
penaltynode:pi:=foopenalty(p)^;marknode,insnode:goto notfound;
otherwise confusion(strprotector(959))end{:973};{974:}
if pi<infpenalty then begin{975:}
if curheight<h then if(activeheight[3]<>0)or(activeheight[4]<>0)or(
activeheight[5]<>0)then b:=0 else b:=badness(h-curheight,activeheight[2]
)else if curheight-h>activeheight[6]then b:=awfulbad else b:=badness(
curheight-h,activeheight[6]){:975};
if b<awfulbad then if pi<=ejectpenalty then b:=pi else if b<infbad then
b:=b+pi else b:=deplorable;if b<=leastcost then begin bestplace:=p;
leastcost:=b;bestheightplusdepth:=curheight+prevdp;end;
if(b=awfulbad)or(pi<=ejectpenalty)then goto done;end{:974};
if(footype(p)^<gluenode)or(footype(p)^>kernnode)then goto notfound;
updateheights:{976:}
if footype(p)^=kernnode then q:=p else begin q:=fooglueptr(p)^;
activeheight[2+foostretchorder(q)^]:=activeheight[2+foostretchorder(q)^]
+foostretch(q)^;activeheight[6]:=activeheight[6]+fooshrink(q)^;
if(fooshrinkorder(q)^<>normal)and(fooshrink(q)^<>0)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(960));
end;begin helpptr:=4;helpline[3]:=strprotector(961);
helpline[2]:=strprotector(962);helpline[1]:=strprotector(963);
helpline[0]:=strprotector(921);end;error;r:=newspec(q);
fooshrinkorder(r)^:=normal;deleteglueref(q);fooglueptr(p)^:=r;q:=r;end;
end;curheight:=curheight+prevdp+foowidth(q)^;prevdp:=0{:976};
notfound:if prevdp>d then begin curheight:=curheight+prevdp-d;prevdp:=d;
end;{:972};prevp:=p;p:=foolink(prevp)^;end;done:vertbreak:=bestplace;
end;{:970}{977:}function vsplit(n:eightbits;h:scaled):pointer;
label exit,done;var v:pointer;p:pointer;q:pointer;begin v:=foobox(n)^;
if splitfirstmark<>0 then begin deletetokenref(splitfirstmark);
splitfirstmark:=0;deletetokenref(splitbotmark);splitbotmark:=0;end;
{978:}if v=0 then begin vsplit:=0;goto exit;end;
if footype(v)^<>vlistnode then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(266));end;
printesc(strprotector(964));print(strprotector(965));
printesc(strprotector(966));begin helpptr:=2;
helpline[1]:=strprotector(967);helpline[0]:=strprotector(968);end;error;
vsplit:=0;goto exit;end{:978};
q:=vertbreak(foolistptr(v)^,h,splitmaxdepth);{979:}p:=foolistptr(v)^;
if p=q then foolistptr(v)^:=0 else while true do begin if footype(p)^=
marknode then if splitfirstmark=0 then begin splitfirstmark:=foomarkptr(
p)^;splitbotmark:=splitfirstmark;
footokenrefcount(splitfirstmark)^:=footokenrefcount(splitfirstmark)^+2;
end else begin deletetokenref(splitbotmark);
splitbotmark:=foomarkptr(p)^;addtokenref(splitbotmark);end;
if foolink(p)^=q then begin foolink(p)^:=0;goto done;end;p:=foolink(p)^;
end;done:{:979};q:=prunepagetop(q);p:=foolistptr(v)^;
freenode(v,boxnodesize);
if q=0 then foobox(n)^:=0 else foobox(n)^:=foovpack(q,0,additional)^;
vsplit:=vpackage(p,h,exactly,splitmaxdepth);exit:end;{:977}{985:}
procedure printtotals;begin printscaled(pagetotal);
if pagesofar[2]<>0 then begin print(270);printscaled(pagesofar[2]);
print(strprotector(266));end;if pagesofar[3]<>0 then begin print(270);
printscaled(pagesofar[3]);print(strprotector(325));end;
if pagesofar[4]<>0 then begin print(270);printscaled(pagesofar[4]);
print(strprotector(977));end;if pagesofar[5]<>0 then begin print(270);
printscaled(pagesofar[5]);print(strprotector(978));end;
if pageshrink<>0 then begin print(strprotector(326));
printscaled(pageshrink);end;end;{:985}{987:}
procedure freezepagespecs(s:smallnumber);begin pagecontents:=s;
pagegoal:=vsize;pagemaxdepth:=maxdepth;pagedepth:=0;setpagesofarzero(1);
setpagesofarzero(2);setpagesofarzero(3);setpagesofarzero(4);
setpagesofarzero(5);setpagesofarzero(6);leastpagecost:=awfulbad;{_STAT}
if tracingpages>0 then begin begindiagnostic;printnl(strprotector(986));
printscaled(pagegoal);print(strprotector(987));
printscaled(pagemaxdepth);enddiagnostic(false);end;{_ENDSTAT}end;{:987}
{992:}procedure boxerror(n:eightbits);begin error;begindiagnostic;
printnl(strprotector(836));showbox(foobox(n)^);enddiagnostic(true);
flushnodelist(foobox(n)^);foobox(n)^:=0;end;{:992}{993:}
procedure ensurevbox(n:eightbits);var p:pointer;begin p:=foobox(n)^;
if p<>0 then if footype(p)^=hlistnode then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(988));end;
begin helpptr:=3;helpline[2]:=strprotector(989);
helpline[1]:=strprotector(990);helpline[0]:=strprotector(991);end;
boxerror(n);end;end;{:993}{994:}{1012:}procedure fireup(c:pointer);
label exit;var p,q,r,s:pointer;prevp:pointer;n:minquarterword..255;
wait:boolean;savevbadness:integer;savevfuzz:scaled;
savesplittopskip:pointer;begin{1013:}
if footype(bestpagebreak)^=penaltynode then begin geqworddefine(intbase+
outputpenaltycode,foopenalty(bestpagebreak)^);
foopenalty(bestpagebreak)^:=infpenalty;
end else geqworddefine(intbase+outputpenaltycode,infpenalty){:1013};
if botmark<>0 then begin if topmark<>0 then deletetokenref(topmark);
topmark:=botmark;addtokenref(topmark);deletetokenref(firstmark);
firstmark:=0;end;{1014:}if c=bestpagebreak then bestpagebreak:=0;{1015:}
if foobox(255)^<>0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(266));end;printesc(strprotector(420));
print(strprotector(1002));begin helpptr:=2;
helpline[1]:=strprotector(1003);helpline[0]:=strprotector(991);end;
boxerror(255);end{:1015};insertpenalties:=0;
savesplittopskip:=splittopskip;if holdinginserts<=0 then{1018:}
begin r:=foolink(pageinshead)^;
while r<>pageinshead do begin if foobestinsptr(r)^<>0 then begin n:=
foosubtype(r)^-minquarterword;ensurevbox(n);
if foobox(n)^=0 then foobox(n)^:=newnullbox;p:=foobox(n)^+listoffset;
while foolink(p)^<>0 do p:=foolink(p)^;foolastinsptr(r)^:=p;end;
r:=foolink(r)^;end;end{:1018};q:=holdhead;foolink(q)^:=0;
prevp:=pagehead;p:=foolink(prevp)^;
while p<>bestpagebreak do begin if footype(p)^=insnode then begin if
holdinginserts<=0 then{1020:}begin r:=foolink(pageinshead)^;
while foosubtype(r)^<>foosubtype(p)^do r:=foolink(r)^;
if foobestinsptr(r)^=0 then wait:=true else begin wait:=false;
s:=foolastinsptr(r)^;foolink(s)^:=fooinsptr(p)^;
if foobestinsptr(r)^=p then{1021:}
begin if footype(r)^=splitup then if(foobrokenins(r)^=p)and(foobrokenptr
(r)^<>0)then begin while foolink(s)^<>foobrokenptr(r)^do s:=foolink(s)^;
foolink(s)^:=0;splittopskip:=foosplittopptr(p)^;
fooinsptr(p)^:=prunepagetop(foobrokenptr(r)^);
if fooinsptr(p)^<>0 then begin tempptr:=foovpack(fooinsptr(p)^,0,
additional)^;fooheight(p)^:=fooheight(tempptr)^+foodepth(tempptr)^;
freenode(tempptr,boxnodesize);wait:=true;end;end;foobestinsptr(r)^:=0;
n:=foosubtype(r)^-minquarterword;tempptr:=foolistptr(foobox(n)^)^;
freenode(foobox(n)^,boxnodesize);
foobox(n)^:=foovpack(tempptr,0,additional)^;end{:1021}
else begin while foolink(s)^<>0 do s:=foolink(s)^;foolastinsptr(r)^:=s;
end;end;{1022:}foolink(prevp)^:=foolink(p)^;foolink(p)^:=0;
if wait then begin foolink(q)^:=p;q:=p;
insertpenalties:=insertpenalties+1;
end else begin deleteglueref(foosplittopptr(p)^);
freenode(p,insnodesize);end;p:=prevp{:1022};end{:1020};
end else if footype(p)^=marknode then{1016:}
begin if firstmark=0 then begin firstmark:=foomarkptr(p)^;
addtokenref(firstmark);end;if botmark<>0 then deletetokenref(botmark);
botmark:=foomarkptr(p)^;addtokenref(botmark);end{:1016};prevp:=p;
p:=foolink(prevp)^;end;splittopskip:=savesplittopskip;{1017:}
if p<>0 then begin if foolink(contribhead)^=0 then if nestptr=0 then
tail:=pagetail else contribtail:=pagetail;
foolink(pagetail)^:=foolink(contribhead)^;foolink(contribhead)^:=p;
foolink(prevp)^:=0;end;savevbadness:=vbadness;vbadness:=infbad;
savevfuzz:=vfuzz;vfuzz:=maxdimen;
foobox(255)^:=vpackage(foolink(pagehead)^,bestsize,exactly,pagemaxdepth)
;vbadness:=savevbadness;vfuzz:=savevfuzz;
if lastglue<>maxhalfword then deleteglueref(lastglue);{991:}
pagecontents:=empty;pagetail:=pagehead;foolink(pagehead)^:=0;
lastglue:=maxhalfword;lastpenalty:=0;lastkern:=0;pagedepth:=0;
pagemaxdepth:=0{:991};
if q<>holdhead then begin foolink(pagehead)^:=foolink(holdhead)^;
pagetail:=q;end{:1017};{1019:}r:=foolink(pageinshead)^;
while r<>pageinshead do begin q:=foolink(r)^;
freenode(r,pageinsnodesize);r:=q;end;
foolink(pageinshead)^:=pageinshead{:1019}{:1014};
if(topmark<>0)and(firstmark=0)then begin firstmark:=topmark;
addtokenref(topmark);end;
if outputroutine<>0 then if deadcycles>=maxdeadcycles then{1024:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1004));end;printint(deadcycles);
print(strprotector(1005));begin helpptr:=3;
helpline[2]:=strprotector(1006);helpline[1]:=strprotector(1007);
helpline[0]:=strprotector(1008);end;error;end{:1024}else{1025:}
begin outputactive:=true;deadcycles:=deadcycles+1;pushnest;mode:=-vmode;
prevdepth:=ignoredepth;modeline:=-line;
begintokenlist(outputroutine,outputtext);newsavelevel(outputgroup);
normalparagraph;scanleftbrace;goto exit;end{:1025};{1023:}
begin if foolink(pagehead)^<>0 then begin if foolink(contribhead)^=0
then if nestptr=0 then tail:=pagetail else contribtail:=pagetail else
foolink(pagetail)^:=foolink(contribhead)^;
foolink(contribhead)^:=foolink(pagehead)^;foolink(pagehead)^:=0;
pagetail:=pagehead;end;shipout(foobox(255)^);foobox(255)^:=0;end{:1023};
exit:end;{:1012}procedure buildpage;
label exit,done,done1,continue,contribute,updateheights;var p:pointer;
q,r:pointer;b,c:integer;pi:integer;n:minquarterword..255;
delta,h,w:scaled;
begin if(foolink(contribhead)^=0)or outputactive then goto exit;
repeat continue:p:=foolink(contribhead)^;{996:}
if lastglue<>maxhalfword then deleteglueref(lastglue);lastpenalty:=0;
lastkern:=0;if footype(p)^=gluenode then begin lastglue:=fooglueptr(p)^;
addglueref(lastglue);end else begin lastglue:=maxhalfword;
if footype(p)^=penaltynode then lastpenalty:=foopenalty(p)^else if
footype(p)^=kernnode then lastkern:=foowidth(p)^;end{:996};{997:}{1000:}
case footype(p)^of hlistnode,vlistnode,rulenode:if pagecontents<boxthere
then{1001:}
begin if pagecontents=empty then freezepagespecs(boxthere)else
pagecontents:=boxthere;q:=newskipparam(topskipcode);
if foowidth(tempptr)^>fooheight(p)^then foowidth(tempptr)^:=foowidth(
tempptr)^-fooheight(p)^else foowidth(tempptr)^:=0;foolink(q)^:=p;
foolink(contribhead)^:=q;goto continue;end{:1001}else{1002:}
begin pagetotal:=pagetotal+pagedepth+fooheight(p)^;
pagedepth:=foodepth(p)^;goto contribute;end{:1002};whatsitnode:{1364:}
goto contribute{:1364};
gluenode:if pagecontents<boxthere then goto done1 else if precedesbreak(
pagetail)then pi:=0 else goto updateheights;
kernnode:if pagecontents<boxthere then goto done1 else if foolink(p)^=0
then goto exit else if footype(foolink(p)^)^=gluenode then pi:=0 else
goto updateheights;
penaltynode:if pagecontents<boxthere then goto done1 else pi:=foopenalty
(p)^;marknode:goto contribute;insnode:{1008:}
begin if pagecontents=empty then freezepagespecs(insertsonly);
n:=foosubtype(p)^;r:=pageinshead;
while n>=foosubtype(foolink(r)^)^do r:=foolink(r)^;n:=n-minquarterword;
if foosubtype(r)^<>n+minquarterword then{1009:}
begin q:=getnode(pageinsnodesize);foolink(q)^:=foolink(r)^;
foolink(r)^:=q;r:=q;foosubtype(r)^:=n+minquarterword;
footype(r)^:=inserting;ensurevbox(n);
if foobox(n)^=0 then fooheight(r)^:=0 else fooheight(r)^:=fooheight(
foobox(n)^)^+foodepth(foobox(n)^)^;foobestinsptr(r)^:=0;q:=fooskip(n)^;
if foocount(n)^=1000 then h:=fooheight(r)^else h:=xovern(fooheight(r)^,
1000)*foocount(n)^;pagegoal:=pagegoal-h-foowidth(q)^;
pagesofar[2+foostretchorder(q)^]:=pagesofar[2+foostretchorder(q)^]+
foostretch(q)^;pageshrink:=pageshrink+fooshrink(q)^;
if(fooshrinkorder(q)^<>normal)and(fooshrink(q)^<>0)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(997));
end;printesc(strprotector(407));printint(n);begin helpptr:=3;
helpline[2]:=strprotector(998);helpline[1]:=strprotector(999);
helpline[0]:=strprotector(921);end;error;end;end{:1009};
if footype(r)^=splitup then insertpenalties:=insertpenalties+
foofloatcost(p)^else begin foolastinsptr(r)^:=p;
delta:=pagegoal-pagetotal-pagedepth+pageshrink;
if foocount(n)^=1000 then h:=fooheight(p)^else h:=xovern(fooheight(p)^,
1000)*foocount(n)^;
if((h<=0)or(h<=delta))and(fooheight(p)^+fooheight(r)^<=foodimen(n)^)then
begin pagegoal:=pagegoal-h;fooheight(r)^:=fooheight(r)^+fooheight(p)^;
end else{1010:}
begin if foocount(n)^<=0 then w:=maxdimen else begin w:=pagegoal-
pagetotal-pagedepth;
if foocount(n)^<>1000 then w:=xovern(w,foocount(n)^)*1000;end;
if w>foodimen(n)^-fooheight(r)^then w:=foodimen(n)^-fooheight(r)^;
q:=vertbreak(fooinsptr(p)^,w,foodepth(p)^);
fooheight(r)^:=fooheight(r)^+bestheightplusdepth;{_STAT}
if tracingpages>0 then{1011:}begin begindiagnostic;
printnl(strprotector(1000));printint(n);print(strprotector(1001));
printscaled(w);printchar(tobar(','));printscaled(bestheightplusdepth);
print(strprotector(930));
if q=0 then printint(ejectpenalty)else if footype(q)^=penaltynode then
printint(foopenalty(q)^)else printchar(tobar('0'));enddiagnostic(false);
end{:1011};{_ENDSTAT}
if foocount(n)^<>1000 then bestheightplusdepth:=xovern(
bestheightplusdepth,1000)*foocount(n)^;
pagegoal:=pagegoal-bestheightplusdepth;footype(r)^:=splitup;
foobrokenptr(r)^:=q;foobrokenins(r)^:=p;
if q=0 then insertpenalties:=insertpenalties+ejectpenalty else if
footype(q)^=penaltynode then insertpenalties:=insertpenalties+foopenalty
(q)^;end{:1010};end;goto contribute;end{:1008};
otherwise confusion(strprotector(992))end{:1000};{1005:}
if pi<infpenalty then begin{1007:}
if pagetotal<pagegoal then if(pagesofar[3]<>0)or(pagesofar[4]<>0)or(
pagesofar[5]<>0)then b:=0 else b:=badness(pagegoal-pagetotal,pagesofar[2
])else if pagetotal-pagegoal>pageshrink then b:=awfulbad else b:=badness
(pagetotal-pagegoal,pageshrink){:1007};
if b<awfulbad then if pi<=ejectpenalty then c:=pi else if b<infbad then
c:=b+pi+insertpenalties else c:=deplorable else c:=b;
if insertpenalties>=10000 then c:=awfulbad;{_STAT}
if tracingpages>0 then{1006:}begin begindiagnostic;printnl(tobar('%'));
print(strprotector(926));printtotals;print(strprotector(995));
printscaled(pagegoal);print(strprotector(929));
if b=awfulbad then printchar(tobar('*'))else printint(b);
print(strprotector(930));printint(pi);print(strprotector(996));
if c=awfulbad then printchar(tobar('*'))else printint(c);
if c<=leastpagecost then printchar(tobar('#'));enddiagnostic(false);
end{:1006};{_ENDSTAT}if c<=leastpagecost then begin bestpagebreak:=p;
bestsize:=pagegoal;leastpagecost:=c;r:=foolink(pageinshead)^;
while r<>pageinshead do begin foobestinsptr(r)^:=foolastinsptr(r)^;
r:=foolink(r)^;end;end;
if(c=awfulbad)or(pi<=ejectpenalty)then begin fireup(p);
if outputactive then goto exit;goto done;end;end{:1005};
if(footype(p)^<gluenode)or(footype(p)^>kernnode)then goto contribute;
updateheights:{1004:}
if footype(p)^=kernnode then q:=p else begin q:=fooglueptr(p)^;
pagesofar[2+foostretchorder(q)^]:=pagesofar[2+foostretchorder(q)^]+
foostretch(q)^;pageshrink:=pageshrink+fooshrink(q)^;
if(fooshrinkorder(q)^<>normal)and(fooshrink(q)^<>0)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(993));
end;begin helpptr:=4;helpline[3]:=strprotector(994);
helpline[2]:=strprotector(962);helpline[1]:=strprotector(963);
helpline[0]:=strprotector(921);end;error;r:=newspec(q);
fooshrinkorder(r)^:=normal;deleteglueref(q);fooglueptr(p)^:=r;q:=r;end;
end;pagetotal:=pagetotal+pagedepth+foowidth(q)^;pagedepth:=0{:1004};
contribute:{1003:}
if pagedepth>pagemaxdepth then begin pagetotal:=pagetotal+pagedepth-
pagemaxdepth;pagedepth:=pagemaxdepth;end;{:1003};{998:}
foolink(pagetail)^:=p;pagetail:=p;foolink(contribhead)^:=foolink(p)^;
foolink(p)^:=0;goto done{:998};done1:{999:}
foolink(contribhead)^:=foolink(p)^;foolink(p)^:=0;flushnodelist(p){:999}
;done:{:997};until foolink(contribhead)^=0;{995:}
if nestptr=0 then tail:=contribhead else contribtail:=contribhead{:995};
exit:end;{:994}{1030:}{1043:}procedure appspace;var q:pointer;
begin if(spacefactor>=2000)and(xspaceskip<>zeroglue)then q:=newparamglue
(xspaceskipcode)else begin if spaceskip<>zeroglue then mainp:=spaceskip
else{1042:}begin mainp:=fontglue[curfont];
if mainp=0 then begin mainp:=newspec(zeroglue);
maink:=parambase[curfont]+spacecode;
foowidth(mainp)^:=fontinfo[maink].sc;
foostretch(mainp)^:=fontinfo[maink+1].sc;
fooshrink(mainp)^:=fontinfo[maink+2].sc;fontglue[curfont]:=mainp;end;
end{:1042};mainp:=newspec(mainp);{1044:}
if spacefactor>=2000 then foowidth(mainp)^:=foowidth(mainp)^+
fooextraspace(curfont)^;
foostretch(mainp)^:=xnoverd(foostretch(mainp)^,spacefactor,1000);
fooshrink(mainp)^:=xnoverd(fooshrink(mainp)^,1000,spacefactor){:1044};
q:=newglue(mainp);foogluerefcount(mainp)^:=0;end;foolink(tail)^:=q;
tail:=q;end;{:1043}{1047:}procedure insertdollarsign;begin backinput;
curtok:=mathshifttoken+tobar('$');
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1016));end;begin helpptr:=2;
helpline[1]:=strprotector(1017);helpline[0]:=strprotector(1018);end;
inserror;end;{:1047}{1049:}procedure youcant;
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(694));end;printcmdchr(curcmd,curchr);
print(strprotector(1019));printmode(mode);end;{:1049}{1050:}
procedure reportillegalcase;begin youcant;begin helpptr:=4;
helpline[3]:=strprotector(1020);helpline[2]:=strprotector(1021);
helpline[1]:=strprotector(1022);helpline[0]:=strprotector(1023);end;
error;end;{:1050}{1051:}function privileged:boolean;
begin if mode>0 then privileged:=true else begin reportillegalcase;
privileged:=false;end;end;{:1051}{1054:}function itsallover:boolean;
label exit;
begin if privileged then begin if(pagehead=pagetail)and(head=tail)and(
deadcycles=0)then begin itsallover:=true;goto exit;end;backinput;
tailappend(newnullbox);foowidth(tail)^:=hsize;
tailappend(newglue(fillglue));tailappend(newpenalty(-1073741824));
buildpage;end;itsallover:=false;exit:end;{:1054}{1060:}
procedure appendglue;var s:smallnumber;begin s:=curchr;
case s of filcode:curval:=filglue;fillcode:curval:=fillglue;
sscode:curval:=ssglue;filnegcode:curval:=filnegglue;
skipcode:scanglue(glueval);mskipcode:scanglue(muval);end;
tailappend(newglue(curval));
if s>=skipcode then begin foogluerefcount(curval)^:=foogluerefcount(
curval)^-1;if s>skipcode then foosubtype(tail)^:=muglue;end;end;{:1060}
{1061:}procedure appendkern;var s:quarterword;begin s:=curchr;
scandimen(s=muglue,false,false);tailappend(newkern(curval));
foosubtype(tail)^:=s;end;{:1061}{1064:}procedure offsave;var p:pointer;
begin if curgroup=bottomlevel then{1066:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(784));end;printcmdchr(curcmd,curchr);
begin helpptr:=1;helpline[0]:=strprotector(1042);end;error;end{:1066}
else begin backinput;p:=getavail;foolink(temphead)^:=p;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(634));end;{1065:}
case curgroup of semisimplegroup:begin fooinfo(p)^:=cstokenflag+
frozenendgroup;printesc(strprotector(527));end;
mathshiftgroup:begin fooinfo(p)^:=mathshifttoken+tobar('$');
printchar(tobar('$'));end;
mathleftgroup:begin fooinfo(p)^:=cstokenflag+frozenright;
foolink(p)^:=getavail;p:=foolink(p)^;fooinfo(p)^:=othertoken+tobar('.');
printesc(strprotector(1041));end;
otherwise begin fooinfo(p)^:=rightbracetoken+tobar('}');
printchar(tobar('}'));end end{:1065};print(strprotector(635));
inslist(foolink(temphead)^);begin helpptr:=5;
helpline[4]:=strprotector(1036);helpline[3]:=strprotector(1037);
helpline[2]:=strprotector(1038);helpline[1]:=strprotector(1039);
helpline[0]:=strprotector(1040);end;error;end;end;{:1064}{1069:}
procedure extrarightbrace;begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1047));end;
case curgroup of semisimplegroup:printesc(strprotector(527));
mathshiftgroup:printchar(tobar('$'));
mathleftgroup:printesc(strprotector(877));end;begin helpptr:=5;
helpline[4]:=strprotector(1048);helpline[3]:=strprotector(1049);
helpline[2]:=strprotector(1050);helpline[1]:=strprotector(1051);
helpline[0]:=strprotector(1052);end;error;alignstate:=alignstate+1;end;
{:1069}{1070:}procedure normalparagraph;
begin if looseness<>0 then eqworddefine(intbase+loosenesscode,0);
if hangindent<>0 then eqworddefine(dimenbase+hangindentcode,0);
if hangafter<>1 then eqworddefine(intbase+hangaftercode,1);
if parshapeptr<>0 then eqdefine(parshapeloc,shaperef,0);end;{:1070}
{1075:}procedure boxend(boxcontext:integer);var p:pointer;
begin if boxcontext<boxflag then{1076:}
begin if curbox<>0 then begin fooshiftamount(curbox)^:=boxcontext;
if abs(mode)=vmode then begin appendtovlist(curbox);
if adjusttail<>0 then begin if adjusthead<>adjusttail then begin foolink
(tail)^:=foolink(adjusthead)^;tail:=adjusttail;end;adjusttail:=0;end;
if mode>0 then buildpage;
end else begin if abs(mode)=hmode then spacefactor:=1000 else begin p:=
newnoad;foomathtype(foonucleus(p)^)^:=subbox;
fooinfo(foonucleus(p)^)^:=curbox;curbox:=p;end;foolink(tail)^:=curbox;
tail:=curbox;end;end;end{:1076}
else if boxcontext<shipoutflag then{1077:}
if boxcontext<boxflag+256 then eqdefine(boxbase-boxflag+boxcontext,
boxref,curbox)else geqdefine(boxbase-boxflag-256+boxcontext,boxref,
curbox){:1077}
else if curbox<>0 then if boxcontext>shipoutflag then{1078:}begin{404:}
repeat getxtoken;until(curcmd<>spacer)and(curcmd<>relax){:404};
if((curcmd=hskip)and(abs(mode)<>vmode))or((curcmd=vskip)and(abs(mode)=
vmode))or((curcmd=mskip)and(abs(mode)=mmode))then begin appendglue;
foosubtype(tail)^:=boxcontext-(leaderflag-aleaders);
fooleaderptr(tail)^:=curbox;
end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1065));end;begin helpptr:=3;
helpline[2]:=strprotector(1066);helpline[1]:=strprotector(1067);
helpline[0]:=strprotector(1068);end;backerror;flushnodelist(curbox);end;
end{:1078}else shipout(curbox);end;{:1075}{1079:}
procedure beginbox(boxcontext:integer);label exit,done;var p,q:pointer;
m:quarterword;k:halfword;n:eightbits;
begin case curchr of boxcode:begin scaneightbitint;
curbox:=foobox(curval)^;foobox(curval)^:=0;end;
copycode:begin scaneightbitint;curbox:=copynodelist(foobox(curval)^);
end;lastboxcode:{1080:}begin curbox:=0;
if abs(mode)=mmode then begin youcant;begin helpptr:=1;
helpline[0]:=strprotector(1069);end;error;
end else if(mode=vmode)and(head=tail)then begin youcant;
begin helpptr:=2;helpline[1]:=strprotector(1070);
helpline[0]:=strprotector(1071);end;error;
end else begin if not ischarnode(tail)then if(footype(tail)^=hlistnode)
or(footype(tail)^=vlistnode)then{1081:}begin q:=head;repeat p:=q;
if not ischarnode(q)then if footype(q)^=discnode then begin for m:=1 to
fooreplacecount(q)^do p:=foolink(p)^;if p=tail then goto done;end;
q:=foolink(p)^;until q=tail;curbox:=tail;fooshiftamount(curbox)^:=0;
tail:=p;foolink(p)^:=0;done:end{:1081};end;end{:1080};vsplitcode:{1082:}
begin scaneightbitint;n:=curval;
if not scankeyword(strprotector(842))then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1072));end;
begin helpptr:=2;helpline[1]:=strprotector(1073);
helpline[0]:=strprotector(1074);end;error;end;scannormaldimen;
curbox:=vsplit(n,curval);end{:1082};otherwise{1083:}
begin k:=curchr-vtopcode;foosaved(0)^:=boxcontext;
if k=hmode then if(boxcontext<boxflag)and(abs(mode)=vmode)then scanspec(
adjustedhboxgroup,true)else scanspec(hboxgroup,true)else begin if k=
vmode then scanspec(vboxgroup,true)else begin scanspec(vtopgroup,true);
k:=vmode;end;normalparagraph;end;pushnest;mode:=-k;
if k=vmode then begin prevdepth:=ignoredepth;
if everyvbox<>0 then begintokenlist(everyvbox,everyvboxtext);
end else begin spacefactor:=1000;
if everyhbox<>0 then begintokenlist(everyhbox,everyhboxtext);end;
goto exit;end{:1083}end;boxend(boxcontext);exit:end;{:1079}{1084:}
procedure scanbox(boxcontext:integer);begin{404:}repeat getxtoken;
until(curcmd<>spacer)and(curcmd<>relax){:404};
if curcmd=makebox then beginbox(boxcontext)else if(boxcontext>=
leaderflag)and((curcmd=hrule)or(curcmd=vrule))then begin curbox:=
scanrulespec;boxend(boxcontext);
end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1075));end;begin helpptr:=3;
helpline[2]:=strprotector(1076);helpline[1]:=strprotector(1077);
helpline[0]:=strprotector(1078);end;backerror;end;end;{:1084}{1086:}
procedure package(c:smallnumber);var h:scaled;p:pointer;d:scaled;
begin d:=boxmaxdepth;unsave;saveptr:=saveptr-3;
if mode=-hmode then curbox:=hpack(foolink(head)^,foosaved(2)^,foosaved(1
)^)else begin curbox:=vpackage(foolink(head)^,foosaved(2)^,foosaved(1)^,
d);if c=vtopcode then{1087:}begin h:=0;p:=foolistptr(curbox)^;
if p<>0 then if footype(p)^<=rulenode then h:=fooheight(p)^;
foodepth(curbox)^:=foodepth(curbox)^-h+fooheight(curbox)^;
fooheight(curbox)^:=h;end{:1087};end;popnest;boxend(foosaved(0)^);end;
{:1086}{1091:}function normmin(h:integer):smallnumber;
begin if h<=0 then normmin:=1 else if h>=63 then normmin:=63 else
normmin:=h;end;procedure newgraf(indented:boolean);begin prevgraf:=0;
if(mode=vmode)or(head<>tail)then tailappend(newparamglue(parskipcode));
pushnest;mode:=hmode;spacefactor:=1000;setcurlang;clang:=curlang;
prevgraf:=(normmin(lefthyphenmin)*64+normmin(righthyphenmin))*65536+
curlang;if indented then begin tail:=newnullbox;foolink(head)^:=tail;
foowidth(tail)^:=parindent;end;
if everypar<>0 then begintokenlist(everypar,everypartext);
if nestptr=1 then buildpage;end;{:1091}{1093:}procedure indentinhmode;
var p,q:pointer;begin if curchr>0 then begin p:=newnullbox;
foowidth(p)^:=parindent;
if abs(mode)=hmode then spacefactor:=1000 else begin q:=newnoad;
foomathtype(foonucleus(q)^)^:=subbox;fooinfo(foonucleus(q)^)^:=p;p:=q;
end;tailappend(p);end;end;{:1093}{1095:}procedure headforvmode;
begin if mode<0 then if curcmd<>hrule then offsave else begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(694));
end;printesc(strprotector(532));print(strprotector(1081));
begin helpptr:=2;helpline[1]:=strprotector(1082);
helpline[0]:=strprotector(1083);end;error;end else begin backinput;
curtok:=partoken;backinput;tokentype:=inserted;end;end;{:1095}{1096:}
procedure endgraf;
begin if mode=hmode then begin if head=tail then popnest else linebreak(
widowpenalty);normalparagraph;errorcount:=0;end;end;{:1096}{1099:}
procedure begininsertoradjust;
begin if curcmd=vadjust then curval:=255 else begin scaneightbitint;
if curval=255 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1084));end;printesc(strprotector(343));
printint(255);begin helpptr:=1;helpline[0]:=strprotector(1085);end;
error;curval:=0;end;end;foosaved(0)^:=curval;saveptr:=saveptr+1;
newsavelevel(insertgroup);scanleftbrace;normalparagraph;pushnest;
mode:=-vmode;prevdepth:=ignoredepth;end;{:1099}{1101:}
procedure makemark;var p:pointer;begin p:=scantoks(false,true);
p:=getnode(smallnodesize);footype(p)^:=marknode;foosubtype(p)^:=0;
foomarkptr(p)^:=defref;foolink(tail)^:=p;tail:=p;end;{:1101}{1103:}
procedure appendpenalty;begin scanint;tailappend(newpenalty(curval));
if mode=vmode then buildpage;end;{:1103}{1105:}procedure deletelast;
label exit;var p,q:pointer;m:quarterword;
begin if(mode=vmode)and(tail=head)then{1106:}
begin if(curchr<>gluenode)or(lastglue<>maxhalfword)then begin youcant;
begin helpptr:=2;helpline[1]:=strprotector(1070);
helpline[0]:=strprotector(1086);end;
if curchr=kernnode then helpline[0]:=(strprotector(1087))else if curchr
<>gluenode then helpline[0]:=(strprotector(1088));error;end;end{:1106}
else begin if not ischarnode(tail)then if footype(tail)^=curchr then
begin q:=head;repeat p:=q;
if not ischarnode(q)then if footype(q)^=discnode then begin for m:=1 to
fooreplacecount(q)^do p:=foolink(p)^;if p=tail then goto exit;end;
q:=foolink(p)^;until q=tail;foolink(p)^:=0;flushnodelist(tail);tail:=p;
end;end;exit:end;{:1105}{1110:}procedure unpackage;label exit;
var p:pointer;c:boxcode..copycode;begin c:=curchr;scaneightbitint;
p:=foobox(curval)^;if p=0 then goto exit;
if(abs(mode)=mmode)or((abs(mode)=vmode)and(footype(p)^<>vlistnode))or((
abs(mode)=hmode)and(footype(p)^<>hlistnode))then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1096));
end;begin helpptr:=3;helpline[2]:=strprotector(1097);
helpline[1]:=strprotector(1098);helpline[0]:=strprotector(1099);end;
error;goto exit;end;
if c=copycode then foolink(tail)^:=copynodelist(foolistptr(p)^)else
begin foolink(tail)^:=foolistptr(p)^;foobox(curval)^:=0;
freenode(p,boxnodesize);end;
while foolink(tail)^<>0 do tail:=foolink(tail)^;exit:end;{:1110}{1113:}
procedure appenditaliccorrection;label exit;var p:pointer;
f:internalfontnumber;
begin if tail<>head then begin if ischarnode(tail)then p:=tail else if
footype(tail)^=ligaturenode then p:=ligchar(tail)else goto exit;
f:=foofont(p)^;
tailappend(newkern(foocharitalic lparenprotector f,foocharinfo
lparenprotector f,foocharacter(p)^rparenprotector^rparenprotector^));
foosubtype(tail)^:=explicit;end;exit:end;{:1113}{1117:}
procedure appenddiscretionary;var c:integer;begin tailappend(newdisc);
if curchr=1 then begin c:=hyphenchar[curfont];
if c>=0 then if c<256 then fooprebreak(tail)^:=newcharacter(curfont,c);
end else begin saveptr:=saveptr+1;foosaved(-1)^:=0;
newsavelevel(discgroup);scanleftbrace;pushnest;mode:=-hmode;
spacefactor:=1000;end;end;{:1117}{1119:}procedure builddiscretionary;
label done,exit;var p,q:pointer;n:integer;begin unsave;{1121:}q:=head;
p:=foolink(q)^;n:=0;
while p<>0 do begin if not ischarnode(p)then if footype(p)^>rulenode
then if footype(p)^<>kernnode then if footype(p)^<>ligaturenode then
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1106));end;begin helpptr:=1;
helpline[0]:=strprotector(1107);end;error;begindiagnostic;
printnl(strprotector(1108));showbox(p);enddiagnostic(true);
flushnodelist(p);foolink(q)^:=0;goto done;end;q:=p;p:=foolink(q)^;
n:=n+1;end;done:{:1121};p:=foolink(head)^;popnest;
case foosaved(-1)^of 0:fooprebreak(tail)^:=p;1:foopostbreak(tail)^:=p;
2:{1120:}
begin if(n>0)and(abs(mode)=mmode)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1100));end;
printesc(strprotector(361));begin helpptr:=2;
helpline[1]:=strprotector(1101);helpline[0]:=strprotector(1102);end;
flushnodelist(p);n:=0;error;end else foolink(tail)^:=p;
if n<=maxquarterword then fooreplacecount(tail)^:=n else begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1103));
end;begin helpptr:=2;helpline[1]:=strprotector(1104);
helpline[0]:=strprotector(1105);end;error;end;if n>0 then tail:=q;
saveptr:=saveptr-1;goto exit;end{:1120};end;
foosaved(-1)^:=foosaved(-1)^+1;newsavelevel(discgroup);scanleftbrace;
pushnest;mode:=-hmode;spacefactor:=1000;exit:end;{:1119}{1123:}
procedure makeaccent;var s,t:real;p,q,r:pointer;f:internalfontnumber;
a,h,x,w,delta:scaled;i:fourquarters;begin scancharnum;f:=curfont;
p:=newcharacter(f,curval);if p<>0 then begin x:=fooxheight(f)^;
s:=fooslant(f)^/65536.0;
a:=foocharwidth lparenprotector f,foocharinfo lparenprotector f,
foocharacter(p)^rparenprotector^rparenprotector^;doassignments;{1124:}
q:=0;f:=curfont;
if(curcmd=letter)or(curcmd=otherchar)or(curcmd=chargiven)then q:=
newcharacter(f,curchr)else if curcmd=charnum then begin scancharnum;
q:=newcharacter(f,curval);end else backinput{:1124};if q<>0 then{1125:}
begin t:=fooslant(f)^/65536.0;
i:=foocharinfo lparenprotector f,foocharacter(q)^rparenprotector^;
w:=foocharwidth lparenprotector f,i rparenprotector^;
h:=foocharheight lparenprotector f,fooheightdepth(i)^rparenprotector^;
if h<>x then begin p:=hpack(p,0,additional);fooshiftamount(p)^:=x-h;end;
delta:=round((w-a)/2.0+h*t-x*s);r:=newkern(delta);
foosubtype(r)^:=acckern;foolink(tail)^:=r;foolink(r)^:=p;
tail:=newkern(-a-delta);foosubtype(tail)^:=acckern;foolink(p)^:=tail;
p:=q;end{:1125};foolink(tail)^:=p;tail:=p;spacefactor:=1000;end;end;
{:1123}{1127:}procedure alignerror;
begin if abs(alignstate)>2 then{1128:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1113));end;printcmdchr(curcmd,curchr);
if curtok=tabtoken+tobar('&')then begin begin helpptr:=6;
helpline[5]:=strprotector(1114);helpline[4]:=strprotector(1115);
helpline[3]:=strprotector(1116);helpline[2]:=strprotector(1117);
helpline[1]:=strprotector(1118);helpline[0]:=strprotector(1119);end;
end else begin begin helpptr:=5;helpline[4]:=strprotector(1114);
helpline[3]:=strprotector(1120);helpline[2]:=strprotector(1117);
helpline[1]:=strprotector(1118);helpline[0]:=strprotector(1119);end;end;
error;end{:1128}else begin backinput;
if alignstate<0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(666));end;alignstate:=alignstate+1;
curtok:=leftbracetoken+tobar('{');
end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1109));end;alignstate:=alignstate-1;
curtok:=rightbracetoken+tobar('}');end;begin helpptr:=3;
helpline[2]:=strprotector(1110);helpline[1]:=strprotector(1111);
helpline[0]:=strprotector(1112);end;inserror;end;end;{:1127}{1129:}
procedure noalignerror;begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1113));end;printesc(strprotector(538));
begin helpptr:=2;helpline[1]:=strprotector(1121);
helpline[0]:=strprotector(1122);end;error;end;procedure omiterror;
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1113));end;printesc(strprotector(541));
begin helpptr:=2;helpline[1]:=strprotector(1123);
helpline[0]:=strprotector(1122);end;error;end;{:1129}{1131:}
procedure doendv;begin if curgroup=aligngroup then begin endgraf;
if fincol then finrow;end else offsave;end;{:1131}{1135:}
procedure cserror;begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(784));end;printesc(strprotector(516));
begin helpptr:=1;helpline[0]:=strprotector(1125);end;error;end;{:1135}
{1136:}procedure pushmath(c:groupcode);begin pushnest;mode:=-mmode;
incompleatnoad:=0;newsavelevel(c);end;{:1136}{1138:}procedure initmath;
label reswitch,found,notfound,done;var w:scaled;l:scaled;s:scaled;
p:pointer;q:pointer;f:internalfontnumber;n:integer;v:scaled;d:scaled;
begin gettoken;if(curcmd=mathshift)and(mode>0)then{1145:}
begin if head=tail then begin popnest;w:=-maxdimen;
end else begin linebreak(displaywidowpenalty);{1146:}
v:=fooshiftamount(justbox)^+2*fooquad(curfont)^;w:=-maxdimen;
p:=foolistptr(justbox)^;while p<>0 do begin{1147:}
reswitch:if ischarnode(p)then begin f:=foofont(p)^;
d:=foocharwidth lparenprotector f,foocharinfo lparenprotector f,
foocharacter(p)^rparenprotector^rparenprotector^;goto found;end;
case footype(p)^of hlistnode,vlistnode,rulenode:begin d:=foowidth(p)^;
goto found;end;ligaturenode:{652:}begin mem[ligtrick]:=mem[ligchar(p)];
foolink(ligtrick)^:=foolink(p)^;p:=ligtrick;goto reswitch;end{:652};
kernnode,mathnode:d:=foowidth(p)^;gluenode:{1148:}
begin q:=fooglueptr(p)^;d:=foowidth(q)^;
if foogluesign(justbox)^=stretching then begin if(fooglueorder(justbox)^
=foostretchorder(q)^)and(foostretch(q)^<>0)then v:=maxdimen;
end else if foogluesign(justbox)^=shrinking then begin if(fooglueorder(
justbox)^=fooshrinkorder(q)^)and(fooshrink(q)^<>0)then v:=maxdimen;end;
if foosubtype(p)^>=aleaders then goto found;end{:1148};
whatsitnode:{1361:}d:=0{:1361};otherwise d:=0 end{:1147};
if v<maxdimen then v:=v+d;goto notfound;
found:if v<maxdimen then begin v:=v+d;w:=v;end else begin w:=maxdimen;
goto done;end;notfound:p:=foolink(p)^;end;done:{:1146};end;{1149:}
if parshapeptr=0 then if(hangindent<>0)and(((hangafter>=0)and(prevgraf+2
>hangafter))or(prevgraf+1<-hangafter))then begin l:=hsize-abs(hangindent
);if hangindent>0 then s:=hangindent else s:=0;end else begin l:=hsize;
s:=0;end else begin n:=fooinfo(parshapeptr)^;
if prevgraf+2>=n then p:=parshapeptr+2*n else p:=parshapeptr+2*(prevgraf
+2);s:=mem[p-1].sc;l:=mem[p].sc;end{:1149};pushmath(mathshiftgroup);
mode:=mmode;eqworddefine(intbase+curfamcode,-1);
eqworddefine(dimenbase+predisplaysizecode,w);
eqworddefine(dimenbase+displaywidthcode,l);
eqworddefine(dimenbase+displayindentcode,s);
if everydisplay<>0 then begintokenlist(everydisplay,everydisplaytext);
if nestptr=1 then buildpage;end{:1145}else begin backinput;{1139:}
begin pushmath(mathshiftgroup);eqworddefine(intbase+curfamcode,-1);
if everymath<>0 then begintokenlist(everymath,everymathtext);end{:1139};
end;end;{:1138}{1142:}procedure starteqno;begin foosaved(0)^:=curchr;
saveptr:=saveptr+1;{1139:}begin pushmath(mathshiftgroup);
eqworddefine(intbase+curfamcode,-1);
if everymath<>0 then begintokenlist(everymath,everymathtext);end{:1139};
end;{:1142}{1151:}procedure scanmath(p:pointer);
label restart,reswitch,exit;var c:integer;begin restart:{404:}
repeat getxtoken;until(curcmd<>spacer)and(curcmd<>relax){:404};
reswitch:case curcmd of letter,otherchar,chargiven:begin c:=foomathcode(
curchr)^-0;if c=32768 then begin{1152:}begin curcs:=curchr+activebase;
curcmd:=fooeqtype(curcs)^;curchr:=fooequiv(curcs)^;xtoken;backinput;
end{:1152};goto restart;end;end;charnum:begin scancharnum;
curchr:=curval;curcmd:=chargiven;goto reswitch;end;
mathcharnum:begin scanfifteenbitint;c:=curval;end;mathgiven:c:=curchr;
delimnum:begin scantwentysevenbitint;c:=curval div 4096;end;
otherwise{1153:}begin backinput;scanleftbrace;foosaved(0)^:=p;
saveptr:=saveptr+1;pushmath(mathgroup);goto exit;end{:1153}end;
foomathtype(p)^:=mathchar;foocharacter(p)^:=c mod 256+minquarterword;
if(c>=varcode)and faminrange then foofam(p)^:=curfam else foofam(p)^:=(c
div 256)mod 16;exit:end;{:1151}{1155:}procedure setmathchar(c:integer);
var p:pointer;begin if c>=32768 then{1152:}
begin curcs:=curchr+activebase;curcmd:=fooeqtype(curcs)^;
curchr:=fooequiv(curcs)^;xtoken;backinput;end{:1152}
else begin p:=newnoad;foomathtype(foonucleus(p)^)^:=mathchar;
foocharacter(foonucleus(p)^)^:=c mod 256+minquarterword;
foofam(foonucleus(p)^)^:=(c div 256)mod 16;
if c>=varcode then begin if faminrange then foofam(foonucleus(p)^)^:=
curfam;footype(p)^:=ordnoad;end else footype(p)^:=ordnoad+(c div 4096);
foolink(tail)^:=p;tail:=p;end;end;{:1155}{1159:}
procedure mathlimitswitch;label exit;
begin if head<>tail then if footype(tail)^=opnoad then begin foosubtype(
tail)^:=curchr;goto exit;end;begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1129));end;begin helpptr:=1;
helpline[0]:=strprotector(1130);end;error;exit:end;{:1159}{1160:}
procedure scandelimiter(p:pointer;r:boolean);
begin if r then scantwentysevenbitint else begin{404:}repeat getxtoken;
until(curcmd<>spacer)and(curcmd<>relax){:404};
case curcmd of letter,otherchar:curval:=foodelcode(curchr)^;
delimnum:scantwentysevenbitint;otherwise curval:=-1 end;end;
if curval<0 then{1161:}begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1131));end;begin helpptr:=6;
helpline[5]:=strprotector(1132);helpline[4]:=strprotector(1133);
helpline[3]:=strprotector(1134);helpline[2]:=strprotector(1135);
helpline[1]:=strprotector(1136);helpline[0]:=strprotector(1137);end;
backerror;curval:=0;end{:1161};
foosmallfam(p)^:=(curval div 1048576)mod 16;
foosmallchar(p)^:=(curval div 4096)mod 256+minquarterword;
foolargefam(p)^:=(curval div 256)mod 16;
foolargechar(p)^:=curval mod 256+minquarterword;end;{:1160}{1163:}
procedure mathradical;begin tailappend(getnode(radicalnoadsize));
footype(tail)^:=radicalnoad;foosubtype(tail)^:=normal;
mem[foonucleus(tail)^].hh:=emptyfield;
mem[foosubscr(tail)^].hh:=emptyfield;
mem[foosupscr(tail)^].hh:=emptyfield;
scandelimiter(fooleftdelimiter(tail)^,true);scanmath(foonucleus(tail)^);
end;{:1163}{1165:}procedure mathac;begin if curcmd=accent then{1166:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1138));end;printesc(strprotector(534));
print(strprotector(1139));begin helpptr:=2;
helpline[1]:=strprotector(1140);helpline[0]:=strprotector(1141);end;
error;end{:1166};tailappend(getnode(accentnoadsize));
footype(tail)^:=accentnoad;foosubtype(tail)^:=normal;
mem[foonucleus(tail)^].hh:=emptyfield;
mem[foosubscr(tail)^].hh:=emptyfield;
mem[foosupscr(tail)^].hh:=emptyfield;
foomathtype(fooaccentchr(tail)^)^:=mathchar;scanfifteenbitint;
foocharacter(fooaccentchr(tail)^)^:=curval mod 256+minquarterword;
if(curval>=varcode)and faminrange then foofam(fooaccentchr(tail)^)^:=
curfam else foofam(fooaccentchr(tail)^)^:=(curval div 256)mod 16;
scanmath(foonucleus(tail)^);end;{:1165}{1172:}procedure appendchoices;
begin tailappend(newchoice);saveptr:=saveptr+1;foosaved(-1)^:=0;
pushmath(mathchoicegroup);scanleftbrace;end;{:1172}{1174:}{1184:}
function finmlist(p:pointer):pointer;var q:pointer;
begin if incompleatnoad<>0 then{1185:}
begin foomathtype(foodenominator(incompleatnoad)^)^:=submlist;
fooinfo(foodenominator(incompleatnoad)^)^:=foolink(head)^;
if p=0 then q:=incompleatnoad else begin q:=fooinfo(foonumerator(
incompleatnoad)^)^;
if footype(q)^<>leftnoad then confusion(strprotector(877));
fooinfo(foonumerator(incompleatnoad)^)^:=foolink(q)^;
foolink(q)^:=incompleatnoad;foolink(incompleatnoad)^:=p;end;end{:1185}
else begin foolink(tail)^:=p;q:=foolink(head)^;end;popnest;finmlist:=q;
end;{:1184}procedure buildchoices;label exit;var p:pointer;begin unsave;
p:=finmlist(0);case foosaved(-1)^of 0:foodisplaymlist(tail)^:=p;
1:footextmlist(tail)^:=p;2:fooscriptmlist(tail)^:=p;
3:begin fooscriptscriptmlist(tail)^:=p;saveptr:=saveptr-1;goto exit;end;
end;foosaved(-1)^:=foosaved(-1)^+1;pushmath(mathchoicegroup);
scanleftbrace;exit:end;{:1174}{1176:}procedure subsup;var t:smallnumber;
p:pointer;begin t:=empty;p:=0;
if tail<>head then if scriptsallowed(tail)then begin p:=foosupscr(tail)^
+curcmd-supmark;t:=foomathtype(p)^;end;if(p=0)or(t<>empty)then{1177:}
begin tailappend(newnoad);p:=foosupscr(tail)^+curcmd-supmark;
if t<>empty then begin if curcmd=supmark then begin begin if interaction
=errorstopmode then;printnl(258);print(strprotector(1142));end;
begin helpptr:=1;helpline[0]:=strprotector(1143);end;
end else begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1144));end;begin helpptr:=1;
helpline[0]:=strprotector(1145);end;end;error;end;end{:1177};
scanmath(p);end;{:1176}{1181:}procedure mathfraction;var c:smallnumber;
begin c:=curchr;if incompleatnoad<>0 then{1183:}
begin if c>=delimitedcode then begin scandelimiter(garbage,false);
scandelimiter(garbage,false);end;
if c mod delimitedcode=abovecode then scannormaldimen;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1152));end;begin helpptr:=3;
helpline[2]:=strprotector(1153);helpline[1]:=strprotector(1154);
helpline[0]:=strprotector(1155);end;error;end{:1183}
else begin incompleatnoad:=getnode(fractionnoadsize);
footype(incompleatnoad)^:=fractionnoad;
foosubtype(incompleatnoad)^:=normal;
foomathtype(foonumerator(incompleatnoad)^)^:=submlist;
fooinfo(foonumerator(incompleatnoad)^)^:=foolink(head)^;
mem[foodenominator(incompleatnoad)^].hh:=emptyfield;
mem[fooleftdelimiter(incompleatnoad)^].qqqq:=nulldelimiter;
mem[foorightdelimiter(incompleatnoad)^].qqqq:=nulldelimiter;
foolink(head)^:=0;tail:=head;{1182:}
if c>=delimitedcode then begin scandelimiter(fooleftdelimiter(
incompleatnoad)^,false);
scandelimiter(foorightdelimiter(incompleatnoad)^,false);end;
case c mod delimitedcode of abovecode:begin scannormaldimen;
foothickness(incompleatnoad)^:=curval;end;
overcode:foothickness(incompleatnoad)^:=defaultcode;
atopcode:foothickness(incompleatnoad)^:=0;end{:1182};end;end;{:1181}
{1191:}procedure mathleftright;var t:smallnumber;p:pointer;
begin t:=curchr;if(t=rightnoad)and(curgroup<>mathleftgroup)then{1192:}
begin if curgroup=mathshiftgroup then begin scandelimiter(garbage,false)
;begin if interaction=errorstopmode then;printnl(258);
print(strprotector(784));end;printesc(strprotector(877));
begin helpptr:=1;helpline[0]:=strprotector(1156);end;error;
end else offsave;end{:1192}else begin p:=newnoad;footype(p)^:=t;
scandelimiter(foodelimiter(p)^,false);
if t=leftnoad then begin pushmath(mathleftgroup);foolink(head)^:=p;
tail:=p;end else begin p:=finmlist(p);unsave;tailappend(newnoad);
footype(tail)^:=innernoad;foomathtype(foonucleus(tail)^)^:=submlist;
fooinfo(foonucleus(tail)^)^:=p;end;end;end;{:1191}{1194:}
procedure aftermath;var l:boolean;danger:boolean;m:integer;p:pointer;
a:pointer;{1198:}b:pointer;w:scaled;z:scaled;e:scaled;q:scaled;d:scaled;
s:scaled;g1,g2:smallnumber;r:pointer;t:pointer;{:1198}
begin danger:=false;{1195:}
if(fontparams[foofamfnt(2+textsize)^]<totalmathsyparams)or(fontparams[
foofamfnt(2+scriptsize)^]<totalmathsyparams)or(fontparams[foofamfnt(2+
scriptscriptsize)^]<totalmathsyparams)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1157));end;
begin helpptr:=3;helpline[2]:=strprotector(1158);
helpline[1]:=strprotector(1159);helpline[0]:=strprotector(1160);end;
error;flushmath;danger:=true;
end else if(fontparams[foofamfnt(3+textsize)^]<totalmathexparams)or(
fontparams[foofamfnt(3+scriptsize)^]<totalmathexparams)or(fontparams[
foofamfnt(3+scriptscriptsize)^]<totalmathexparams)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1161));
end;begin helpptr:=3;helpline[2]:=strprotector(1162);
helpline[1]:=strprotector(1163);helpline[0]:=strprotector(1164);end;
error;flushmath;danger:=true;end{:1195};m:=mode;l:=false;p:=finmlist(0);
if mode=-m then begin{1197:}begin getxtoken;
if curcmd<>mathshift then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1165));end;begin helpptr:=2;
helpline[1]:=strprotector(1166);helpline[0]:=strprotector(1167);end;
backerror;end;end{:1197};curmlist:=p;curstyle:=textstyle;
mlistpenalties:=false;mlisttohlist;
a:=hpack(foolink(temphead)^,0,additional);unsave;saveptr:=saveptr-1;
if foosaved(0)^=1 then l:=true;danger:=false;{1195:}
if(fontparams[foofamfnt(2+textsize)^]<totalmathsyparams)or(fontparams[
foofamfnt(2+scriptsize)^]<totalmathsyparams)or(fontparams[foofamfnt(2+
scriptscriptsize)^]<totalmathsyparams)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1157));end;
begin helpptr:=3;helpline[2]:=strprotector(1158);
helpline[1]:=strprotector(1159);helpline[0]:=strprotector(1160);end;
error;flushmath;danger:=true;
end else if(fontparams[foofamfnt(3+textsize)^]<totalmathexparams)or(
fontparams[foofamfnt(3+scriptsize)^]<totalmathexparams)or(fontparams[
foofamfnt(3+scriptscriptsize)^]<totalmathexparams)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1161));
end;begin helpptr:=3;helpline[2]:=strprotector(1162);
helpline[1]:=strprotector(1163);helpline[0]:=strprotector(1164);end;
error;flushmath;danger:=true;end{:1195};m:=mode;p:=finmlist(0);
end else a:=0;if m<0 then{1196:}
begin tailappend(newmath(mathsurround,before));curmlist:=p;
curstyle:=textstyle;mlistpenalties:=(mode>0);mlisttohlist;
foolink(tail)^:=foolink(temphead)^;
while foolink(tail)^<>0 do tail:=foolink(tail)^;
tailappend(newmath(mathsurround,after));spacefactor:=1000;unsave;
end{:1196}else begin if a=0 then{1197:}begin getxtoken;
if curcmd<>mathshift then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1165));end;begin helpptr:=2;
helpline[1]:=strprotector(1166);helpline[0]:=strprotector(1167);end;
backerror;end;end{:1197};{1199:}curmlist:=p;curstyle:=displaystyle;
mlistpenalties:=false;mlisttohlist;p:=foolink(temphead)^;
adjusttail:=adjusthead;b:=hpack(p,0,additional);p:=foolistptr(b)^;
t:=adjusttail;adjusttail:=0;w:=foowidth(b)^;z:=displaywidth;
s:=displayindent;if(a=0)or danger then begin e:=0;q:=0;
end else begin e:=foowidth(a)^;q:=e+foomathquad(textsize)^;end;
if w+q>z then{1201:}
begin if(e<>0)and((w-totalshrink[normal]+q<=z)or(totalshrink[fil]<>0)or(
totalshrink[fill]<>0)or(totalshrink[filll]<>0))then begin freenode(b,
boxnodesize);b:=hpack(p,z-q,exactly);end else begin e:=0;
if w>z then begin freenode(b,boxnodesize);b:=hpack(p,z,exactly);end;end;
w:=foowidth(b)^;end{:1201};{1202:}d:=half(z-w);
if(e>0)and(d<2*e)then begin d:=half(z-w-e);
if p<>0 then if not ischarnode(p)then if footype(p)^=gluenode then d:=0;
end{:1202};{1203:}tailappend(newpenalty(predisplaypenalty));
if(d+s<=predisplaysize)or l then begin g1:=abovedisplayskipcode;
g2:=belowdisplayskipcode;end else begin g1:=abovedisplayshortskipcode;
g2:=belowdisplayshortskipcode;end;
if l and(e=0)then begin fooshiftamount(a)^:=s;appendtovlist(a);
tailappend(newpenalty(infpenalty));
end else tailappend(newparamglue(g1)){:1203};{1204:}
if e<>0 then begin r:=newkern(z-w-e-d);if l then begin foolink(a)^:=r;
foolink(r)^:=b;b:=a;d:=0;end else begin foolink(b)^:=r;foolink(r)^:=a;
end;b:=hpack(b,0,additional);end;fooshiftamount(b)^:=s+d;
appendtovlist(b){:1204};{1205:}
if(a<>0)and(e=0)and not l then begin tailappend(newpenalty(infpenalty));
fooshiftamount(a)^:=s+z-foowidth(a)^;appendtovlist(a);g2:=0;end;
if t<>adjusthead then begin foolink(tail)^:=foolink(adjusthead)^;
tail:=t;end;tailappend(newpenalty(postdisplaypenalty));
if g2>0 then tailappend(newparamglue(g2)){:1205};
resumeafterdisplay{:1199};end;end;{:1194}{1200:}
procedure resumeafterdisplay;
begin if curgroup<>mathshiftgroup then confusion(strprotector(1168));
unsave;prevgraf:=prevgraf+3;pushnest;mode:=hmode;spacefactor:=1000;
setcurlang;clang:=curlang;
prevgraf:=(normmin(lefthyphenmin)*64+normmin(righthyphenmin))*65536+
curlang;{443:}begin getxtoken;if curcmd<>spacer then backinput;end{:443}
;if nestptr=1 then buildpage;end;{:1200}{1211:}{1215:}
procedure getrtoken;label restart;begin restart:repeat gettoken;
until curtok<>spacetoken;
if(curcs=0)or(curcs>frozencontrolsequence)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1183));
end;begin helpptr:=5;helpline[4]:=strprotector(1184);
helpline[3]:=strprotector(1185);helpline[2]:=strprotector(1186);
helpline[1]:=strprotector(1187);helpline[0]:=strprotector(1188);end;
if curcs=0 then backinput;curtok:=cstokenflag+frozenprotection;inserror;
goto restart;end;end;{:1215}{1229:}procedure trapzeroglue;
begin if(foowidth(curval)^=0)and(foostretch(curval)^=0)and(fooshrink(
curval)^=0)then begin addglueref(zeroglue);deleteglueref(curval);
curval:=zeroglue;end;end;{:1229}{1236:}
procedure doregistercommand(a:smallnumber);label found,exit;
var l,q,r,s:pointer;p:intval..muval;begin q:=curcmd;{1237:}
begin if q<>register then begin getxtoken;
if(curcmd>=assignint)and(curcmd<=assignmuglue)then begin l:=curchr;
p:=curcmd-assignint;goto found;end;
if curcmd<>register then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(694));end;printcmdchr(curcmd,curchr);
print(strprotector(695));printcmdchr(q,0);begin helpptr:=1;
helpline[0]:=strprotector(1209);end;error;goto exit;end;end;p:=curchr;
scaneightbitint;case p of intval:l:=curval+countbase;
dimenval:l:=curval+scaledbase;glueval:l:=curval+skipbase;
muval:l:=curval+muskipbase;end;end;found:{:1237};
if q=register then scanoptionalequals else if scankeyword(strprotector(
1205))then;aritherror:=false;if q<multiply then{1238:}
if p<glueval then begin if p=intval then scanint else scannormaldimen;
if q=advance then curval:=curval+eqtb[l].int;end else begin scanglue(p);
if q=advance then{1239:}begin q:=newspec(curval);r:=fooequiv(l)^;
deleteglueref(curval);foowidth(q)^:=foowidth(q)^+foowidth(r)^;
if foostretch(q)^=0 then foostretchorder(q)^:=normal;
if foostretchorder(q)^=foostretchorder(r)^then foostretch(q)^:=
foostretch(q)^+foostretch(r)^else if(foostretchorder(q)^<foostretchorder
(r)^)and(foostretch(r)^<>0)then begin foostretch(q)^:=foostretch(r)^;
foostretchorder(q)^:=foostretchorder(r)^;end;
if fooshrink(q)^=0 then fooshrinkorder(q)^:=normal;
if fooshrinkorder(q)^=fooshrinkorder(r)^then fooshrink(q)^:=fooshrink(q)
^+fooshrink(r)^else if(fooshrinkorder(q)^<fooshrinkorder(r)^)and(
fooshrink(r)^<>0)then begin fooshrink(q)^:=fooshrink(r)^;
fooshrinkorder(q)^:=fooshrinkorder(r)^;end;curval:=q;end{:1239};
end{:1238}else{1240:}begin scanint;
if p<glueval then if q=multiply then if p=intval then curval:=multandadd
(eqtb[l].int,curval,0,2147483647)else curval:=multandadd(eqtb[l].int,
curval,0,1073741823)else curval:=xovern(eqtb[l].int,curval)else begin s
:=fooequiv(l)^;r:=newspec(s);
if q=multiply then begin foowidth(r)^:=multandadd(foowidth(s)^,curval,0,
1073741823);
foostretch(r)^:=multandadd(foostretch(s)^,curval,0,1073741823);
fooshrink(r)^:=multandadd(fooshrink(s)^,curval,0,1073741823);
end else begin foowidth(r)^:=xovern(foowidth(s)^,curval);
foostretch(r)^:=xovern(foostretch(s)^,curval);
fooshrink(r)^:=xovern(fooshrink(s)^,curval);end;curval:=r;end;end{:1240}
;if aritherror then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1206));end;begin helpptr:=2;
helpline[1]:=strprotector(1207);helpline[0]:=strprotector(1208);end;
error;goto exit;end;
if p<glueval then worddefine(l,curval)else begin trapzeroglue;
define(l,glueref,curval);end;exit:end;{:1236}{1243:}procedure alteraux;
var c:halfword;
begin if curchr<>abs(mode)then reportillegalcase else begin c:=curchr;
scanoptionalequals;if c=vmode then begin scannormaldimen;
prevdepth:=curval;end else begin scanint;
if(curval<=0)or(curval>32767)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1212));end;
begin helpptr:=1;helpline[0]:=strprotector(1213);end;interror(curval);
end else spacefactor:=curval;end;end;end;{:1243}{1244:}
procedure alterprevgraf;var p:0..nestsize;begin nest[nestptr]:=curlist;
p:=nestptr;while abs(nest[p].modefield)<>vmode do p:=p-1;
scanoptionalequals;scanint;
if curval<0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(954));end;printesc(strprotector(543));
begin helpptr:=1;helpline[0]:=strprotector(1214);end;interror(curval);
end else begin nest[p].pgfield:=curval;curlist:=nest[nestptr];end;end;
{:1244}{1245:}procedure alterpagesofar;var c:0..7;begin c:=curchr;
scanoptionalequals;scannormaldimen;pagesofar[c]:=curval;end;{:1245}
{1246:}procedure alterinteger;var c:0..1;begin c:=curchr;
scanoptionalequals;scanint;
if c=0 then deadcycles:=curval else insertpenalties:=curval;end;{:1246}
{1247:}procedure alterboxdimen;var c:smallnumber;b:eightbits;
begin c:=curchr;scaneightbitint;b:=curval;scanoptionalequals;
scannormaldimen;if foobox(b)^<>0 then mem[foobox(b)^+c].sc:=curval;end;
{:1247}{1257:}procedure newfont(a:smallnumber);label commonending;
var u:pointer;s:scaled;f:internalfontnumber;t:strnumber;
oldsetting:0..maxselector;flushablestring:strnumber;
begin if jobname=0 then openlogfile;getrtoken;u:=curcs;
if u>=hashbase then t:=footext(u)^else if u>=singlebase then if u=nullcs
then t:=strprotector(1218)else t:=u-singlebase else begin oldsetting:=
selector;selector:=newstring;print(strprotector(1218));
print(u-activebase);selector:=oldsetting;
begin if poolptr+1>poolsize then overflow(257,poolsize-initpoolptr);end;
t:=makestring;end;define(u,setfont,nullfont);scanoptionalequals;
scanfilename;{1258:}nameinprogress:=true;
if scankeyword(strprotector(1219))then{1259:}begin scannormaldimen;
s:=curval;
if(s<=0)or(s>=134217728)then begin begin if interaction=errorstopmode
then;printnl(258);print(strprotector(1221));end;printscaled(s);
print(strprotector(1222));begin helpptr:=2;
helpline[1]:=strprotector(1223);helpline[0]:=strprotector(1224);end;
error;s:=10*unity;end;end{:1259}
else if scankeyword(strprotector(1220))then begin scanint;s:=-curval;
if(curval<=0)or(curval>32768)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(562));end;
begin helpptr:=1;helpline[0]:=strprotector(563);end;interror(curval);
s:=-1000;end;end else s:=-1000;nameinprogress:=false{:1258};{1260:}
flushablestring:=strptr-1;
for f:=fontbase+1 to fontptr do if streqstr(fontname[f],curname)and
streqstr(fontarea[f],curarea)then begin if curname=flushablestring then
begin flushstring;curname:=fontname[f];end;
if s>0 then begin if s=fontsize[f]then goto commonending;
end else if fontsize[f]=xnoverd(fontdsize[f],-s,1000)then goto
commonending;end{:1260};f:=readfontinfo(u,curname,curarea,s);
commonending:fooequiv(u)^:=f;eqtb[fontidbase+f]:=eqtb[u];
foofontidtext(f)^:=t;end;{:1257}{1265:}procedure newinteraction;
begin println;interaction:=curchr;{75:}
if interaction=batchmode then selector:=noprint else selector:=termonly{
:75};if logopened then selector:=selector+2;end;{:1265}
procedure prefixedcommand;label done,exit;var a:smallnumber;
f:internalfontnumber;j:halfword;k:fontindex;p,q:pointer;n:integer;
e:boolean;begin a:=0;
while curcmd=prefix do begin if not odd(a div curchr)then a:=a+curchr;
{404:}repeat getxtoken;until(curcmd<>spacer)and(curcmd<>relax){:404};
if curcmd<=maxnonprefixedcommand then{1212:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1178));end;printcmdchr(curcmd,curchr);
printchar(tobar(''''));begin helpptr:=1;helpline[0]:=strprotector(1179);
end;backerror;goto exit;end{:1212};end;{1213:}
if(curcmd<>def)and(a mod 4<>0)then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(694));end;
printesc(strprotector(1170));print(strprotector(1180));
printesc(strprotector(1171));print(strprotector(1181));
printcmdchr(curcmd,curchr);printchar(tobar(''''));begin helpptr:=1;
helpline[0]:=strprotector(1182);end;error;end{:1213};{1214:}
if globaldefs<>0 then if globaldefs<0 then begin if global then a:=a-4;
end else begin if not global then a:=a+4;end{:1214};
case curcmd of{1217:}setfont:define(curfontloc,data,curchr);{:1217}
{1218:}
def:begin if odd(curchr)and not global and(globaldefs>=0)then a:=a+4;
e:=(curchr>=2);getrtoken;p:=curcs;q:=scantoks(true,e);
define(p,call+(a mod 4),defref);end;{:1218}{1221:}let:begin n:=curchr;
getrtoken;p:=curcs;if n=normal then begin repeat gettoken;
until curcmd<>spacer;if curtok=othertoken+tobar('=')then begin gettoken;
if curcmd=spacer then gettoken;end;end else begin gettoken;q:=curtok;
gettoken;backinput;curtok:=q;backinput;end;
if curcmd>=call then addtokenref(curchr);define(p,curcmd,curchr);end;
{:1221}{1224:}shorthanddef:begin n:=curchr;getrtoken;p:=curcs;
define(p,relax,256);scanoptionalequals;
case n of chardefcode:begin scancharnum;define(p,chargiven,curval);end;
mathchardefcode:begin scanfifteenbitint;define(p,mathgiven,curval);end;
otherwise begin scaneightbitint;
case n of countdefcode:define(p,assignint,countbase+curval);
dimendefcode:define(p,assigndimen,scaledbase+curval);
skipdefcode:define(p,assignglue,skipbase+curval);
muskipdefcode:define(p,assignmuglue,muskipbase+curval);
toksdefcode:define(p,assigntoks,toksbase+curval);end;end end;end;{:1224}
{1225:}readtocs:begin scanint;n:=curval;
if not scankeyword(strprotector(842))then begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(1072));end;
begin helpptr:=2;helpline[1]:=strprotector(1199);
helpline[0]:=strprotector(1200);end;error;end;getrtoken;p:=curcs;
readtoks(n,p);define(p,call,curval);end;{:1225}{1226:}
toksregister,assigntoks:begin q:=curcs;
if curcmd=toksregister then begin scaneightbitint;p:=toksbase+curval;
end else p:=curchr;scanoptionalequals;{404:}repeat getxtoken;
until(curcmd<>spacer)and(curcmd<>relax){:404};
if curcmd<>leftbrace then{1227:}
begin if curcmd=toksregister then begin scaneightbitint;
curcmd:=assigntoks;curchr:=toksbase+curval;end;
if curcmd=assigntoks then begin q:=fooequiv(curchr)^;
if q=0 then define(p,undefinedcs,0)else begin addtokenref(q);
define(p,call,q);end;goto done;end;end{:1227};backinput;curcs:=q;
q:=scantoks(false,false);
if foolink(defref)^=0 then begin define(p,undefinedcs,0);
freeavail(defref);
end else begin if p=outputroutineloc then begin foolink(q)^:=getavail;
q:=foolink(q)^;fooinfo(q)^:=rightbracetoken+tobar('}');q:=getavail;
fooinfo(q)^:=leftbracetoken+tobar('{');foolink(q)^:=foolink(defref)^;
foolink(defref)^:=q;end;define(p,call,defref);end;end;{:1226}{1228:}
assignint:begin p:=curchr;scanoptionalequals;scanint;
worddefine(p,curval);end;assigndimen:begin p:=curchr;scanoptionalequals;
scannormaldimen;worddefine(p,curval);end;
assignglue,assignmuglue:begin p:=curchr;n:=curcmd;scanoptionalequals;
if n=assignmuglue then scanglue(muval)else scanglue(glueval);
trapzeroglue;define(p,glueref,curval);end;{:1228}{1232:}
defcode:begin{1233:}
if curchr=catcodebase then n:=maxcharcode else if curchr=mathcodebase
then n:=32768 else if curchr=sfcodebase then n:=32767 else if curchr=
delcodebase then n:=16777215 else n:=255{:1233};p:=curchr;scancharnum;
p:=p+curval;scanoptionalequals;scanint;
if((curval<0)and(p<delcodebase))or(curval>n)then begin begin if
interaction=errorstopmode then;printnl(258);print(strprotector(1201));
end;printint(curval);
if p<delcodebase then print(strprotector(1202))else print(strprotector(
1203));printint(n);begin helpptr:=1;helpline[0]:=strprotector(1204);end;
error;curval:=0;end;
if p<mathcodebase then define(p,data,curval)else if p<delcodebase then
define(p,data,curval+0)else worddefine(p,curval);end;{:1232}{1234:}
deffamily:begin p:=curchr;scanfourbitint;p:=p+curval;scanoptionalequals;
scanfontident;define(p,data,curval);end;{:1234}{1235:}
register,advance,multiply,divide:doregistercommand(a);{:1235}{1241:}
setbox:begin scaneightbitint;
if global then n:=256+curval else n:=curval;scanoptionalequals;
if setboxallowed then scanbox(boxflag+n)else begin begin if interaction=
errorstopmode then;printnl(258);print(strprotector(689));end;
printesc(strprotector(547));begin helpptr:=2;
helpline[1]:=strprotector(1210);helpline[0]:=strprotector(1211);end;
error;end;end;{:1241}{1242:}setaux:alteraux;setprevgraf:alterprevgraf;
setpagedimen:alterpagesofar;setpageint:alterinteger;
setboxdimen:alterboxdimen;{:1242}{1248:}
setshape:begin scanoptionalequals;scanint;n:=curval;
if n<=0 then p:=0 else begin p:=getnode(2*n+1);fooinfo(p)^:=n;
for j:=1 to n do begin scannormaldimen;mem[p+2*j-1].sc:=curval;
scannormaldimen;mem[p+2*j].sc:=curval;end;end;
define(parshapeloc,shaperef,p);end;{:1248}{1252:}
hyphdata:if curchr=1 then begin newpatterns;goto done;
begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1215));end;helpptr:=0;error;repeat gettoken;
until curcmd=rightbrace;goto exit;end else begin newhyphexceptions;
goto done;end;{:1252}{1253:}assignfontdimen:begin findfontdimen(true);
k:=curval;scanoptionalequals;scannormaldimen;fontinfo[k].sc:=curval;end;
assignfontint:begin n:=curchr;scanfontident;f:=curval;
scanoptionalequals;scanint;
if n=0 then hyphenchar[f]:=curval else skewchar[f]:=curval;end;{:1253}
{1256:}deffont:newfont(a);{:1256}{1264:}setinteraction:newinteraction;
{:1264}otherwise confusion(strprotector(1177))end;done:{1269:}
if aftertoken<>0 then begin curtok:=aftertoken;backinput;aftertoken:=0;
end{:1269};exit:end;{:1211}{1270:}procedure doassignments;label exit;
begin while true do begin{404:}repeat getxtoken;
until(curcmd<>spacer)and(curcmd<>relax){:404};
if curcmd<=maxnonprefixedcommand then goto exit;setboxallowed:=false;
prefixedcommand;setboxallowed:=true;end;exit:end;{:1270}{1275:}
procedure openorclosein;var c:0..1;n:0..15;begin c:=curchr;
scanfourbitint;n:=curval;
if readopen[n]<>closed then begin aclose(readfile[n]);
readopen[n]:=closed;end;if c<>0 then begin scanoptionalequals;
scanfilename;if curext=strprotector(266)then curext:=strprotector(795);
packcurname;if aopenin(readfile[n])then readopen[n]:=justopen;end;end;
{:1275}{1279:}procedure issuemessage;var oldsetting:0..maxselector;
c:0..1;s:strnumber;begin c:=curchr;
foolink(garbage)^:=scantoks(false,true);oldsetting:=selector;
selector:=newstring;tokenshow(defref);selector:=oldsetting;
flushlist(defref);
begin if poolptr+1>poolsize then overflow(257,poolsize-initpoolptr);end;
s:=makestring;if c=0 then{1280:}
begin if termoffset+flength(s)>maxprintline-2 then println else if(
termoffset>0)or(fileoffset>0)then printchar(tobar(' '));slowprint(s);
fflush(termout);end{:1280}else{1283:}
begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(266));end;slowprint(s);
if errhelp<>0 then useerrhelp:=true else if longhelpseen then begin
helpptr:=1;helpline[0]:=strprotector(1231);
end else begin if interaction<errorstopmode then longhelpseen:=true;
begin helpptr:=4;helpline[3]:=strprotector(1232);
helpline[2]:=strprotector(1233);helpline[1]:=strprotector(1234);
helpline[0]:=strprotector(1235);end;end;error;useerrhelp:=false;
end{:1283};flushstring;end;{:1279}{1288:}procedure shiftcase;
var b:pointer;p:pointer;t:halfword;c:eightbits;begin b:=curchr;
p:=scantoks(false,false);p:=foolink(defref)^;while p<>0 do begin{1289:}
t:=fooinfo(p)^;if t<cstokenflag+singlebase then begin c:=t mod 256;
if fooequiv(b+c)^<>0 then fooinfo(p)^:=t-c+fooequiv(b+c)^;end{:1289};
p:=foolink(p)^;end;backlist(foolink(defref)^);freeavail(defref);end;
{:1288}{1293:}procedure showwhatever;label commonending;var p:pointer;
begin case curchr of showlists:begin begindiagnostic;showactivities;end;
showboxcode:{1296:}begin scaneightbitint;begindiagnostic;
printnl(strprotector(1253));printint(curval);printchar(tobar('='));
if foobox(curval)^=0 then print(strprotector(421))else showbox(foobox(
curval)^);end{:1296};showcode:{1294:}begin gettoken;
if interaction=errorstopmode then;printnl(strprotector(1247));
if curcs<>0 then begin sprintcs(curcs);printchar(tobar('='));end;
printmeaning;goto commonending;end{:1294};otherwise{1297:}
begin p:=thetoks;if interaction=errorstopmode then;
printnl(strprotector(1247));tokenshow(temphead);
flushlist(foolink(temphead)^);goto commonending;end{:1297}end;{1298:}
enddiagnostic(true);begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1254));end;
if selector=termandlog then if tracingonline<=0 then begin selector:=
termonly;print(strprotector(1255));selector:=termandlog;end{:1298};
commonending:if interaction<errorstopmode then begin helpptr:=0;
errorcount:=errorcount-1;
end else if tracingonline>0 then begin begin helpptr:=3;
helpline[2]:=strprotector(1242);helpline[1]:=strprotector(1243);
helpline[0]:=strprotector(1244);end;end else begin begin helpptr:=5;
helpline[4]:=strprotector(1242);helpline[3]:=strprotector(1243);
helpline[2]:=strprotector(1244);helpline[1]:=strprotector(1245);
helpline[0]:=strprotector(1246);end;end;error;end;{:1293}{1302:}
procedure storefmtfile;label found1,found2,done1,done2;
var j,k,l:integer;p,q:pointer;x:integer;w:fourquarters;begin{1304:}
if saveptr<>0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1257));end;begin helpptr:=1;
helpline[0]:=strprotector(1258);end;
begin if interaction=errorstopmode then interaction:=scrollmode;
if logopened then error;{_DEBUG}if interaction>batchmode then debughelp;
{_ENDDEBUG}history:=fatalerrorstop;jumpout;end;end{:1304};{1328:}
selector:=newstring;print(strprotector(1271));print(jobname);
printchar(tobar(' '));printint(year mod 100);printchar(tobar('.'));
printint(month);printchar(tobar('.'));printint(day);
printchar(tobar(')'));
if interaction=batchmode then selector:=logonly else selector:=
termandlog;
begin if poolptr+1>poolsize then overflow(257,poolsize-initpoolptr);end;
formatident:=makestring;packjobname(formatextension);
while not wopenout(fmtfile)do promptfilename(strprotector(1272),
formatextension);printnl(strprotector(1273));
slowprint(wmakenamestring(fmtfile));flushstring;
printnl(strprotector(266));slowprint(formatident){:1328};{1307:}
begin pppfmtfile.int:=371982687;pput(pppfmtfile);end;
begin pppfmtfile.int:=membot;pput(pppfmtfile);end;
begin pppfmtfile.int:=memtop;pput(pppfmtfile);end;
begin pppfmtfile.int:=eqtbsize;pput(pppfmtfile);end;
begin pppfmtfile.int:=hashprime;pput(pppfmtfile);end;
begin pppfmtfile.int:=hyphsize;pput(pppfmtfile);end{:1307};{1309:}
begin pppfmtfile.int:=poolptr;pput(pppfmtfile);end;
begin pppfmtfile.int:=strptr;pput(pppfmtfile);end;
for k:=0 to strptr do begin pppfmtfile.int:=strstart[k];
pput(pppfmtfile);end;k:=0;
while k+4<poolptr do begin w.b0:=strpool[k]+minquarterword;
w.b1:=strpool[k+1]+minquarterword;w.b2:=strpool[k+2]+minquarterword;
w.b3:=strpool[k+3]+minquarterword;begin pppfmtfile.qqqq:=w;
pput(pppfmtfile);end;k:=k+4;end;k:=poolptr-4;
w.b0:=strpool[k]+minquarterword;w.b1:=strpool[k+1]+minquarterword;
w.b2:=strpool[k+2]+minquarterword;w.b3:=strpool[k+3]+minquarterword;
begin pppfmtfile.qqqq:=w;pput(pppfmtfile);end;println;printint(strptr);
print(strprotector(1259));printint(poolptr){:1309};{1311:}sortavail;
varused:=0;begin pppfmtfile.int:=lomemmax;pput(pppfmtfile);end;
begin pppfmtfile.int:=rover;pput(pppfmtfile);end;p:=membot;q:=rover;
x:=0;repeat for k:=p to q+1 do begin pppfmtfile:=mem[k];
pput(pppfmtfile);end;x:=x+q+2-p;varused:=varused+q-p;
p:=q+foonodesize(q)^;q:=foorlink(q)^;until q=rover;
varused:=varused+lomemmax-p;dynused:=memend+1-himemmin;
for k:=p to lomemmax do begin pppfmtfile:=mem[k];pput(pppfmtfile);end;
x:=x+lomemmax+1-p;begin pppfmtfile.int:=himemmin;pput(pppfmtfile);end;
begin pppfmtfile.int:=avail;pput(pppfmtfile);end;
for k:=himemmin to memend do begin pppfmtfile:=mem[k];pput(pppfmtfile);
end;x:=x+memend+1-himemmin;p:=avail;
while p<>0 do begin dynused:=dynused-1;p:=foolink(p)^;end;
begin pppfmtfile.int:=varused;pput(pppfmtfile);end;
begin pppfmtfile.int:=dynused;pput(pppfmtfile);end;println;printint(x);
print(strprotector(1260));printint(varused);printchar(tobar('&'));
printint(dynused){:1311};{1313:}{1315:}k:=activebase;repeat j:=k;
while j<intbase-1 do begin if(fooequiv(j)^=fooequiv(j+1)^)and(fooeqtype(
j)^=fooeqtype(j+1)^)and(fooeqlevel(j)^=fooeqlevel(j+1)^)then goto found1
;j:=j+1;end;l:=intbase;goto done1;found1:j:=j+1;l:=j;
while j<intbase-1 do begin if(fooequiv(j)^<>fooequiv(j+1)^)or(fooeqtype(
j)^<>fooeqtype(j+1)^)or(fooeqlevel(j)^<>fooeqlevel(j+1)^)then goto done1
;j:=j+1;end;done1:begin pppfmtfile.int:=l-k;pput(pppfmtfile);end;
while k<l do begin begin pppfmtfile:=eqtb[k];pput(pppfmtfile);end;
k:=k+1;end;k:=j+1;begin pppfmtfile.int:=k-l;pput(pppfmtfile);end;
until k=intbase{:1315};{1316:}repeat j:=k;
while j<eqtbsize do begin if eqtb[j].int=eqtb[j+1].int then goto found2;
j:=j+1;end;l:=eqtbsize+1;goto done2;found2:j:=j+1;l:=j;
while j<eqtbsize do begin if eqtb[j].int<>eqtb[j+1].int then goto done2;
j:=j+1;end;done2:begin pppfmtfile.int:=l-k;pput(pppfmtfile);end;
while k<l do begin begin pppfmtfile:=eqtb[k];pput(pppfmtfile);end;
k:=k+1;end;k:=j+1;begin pppfmtfile.int:=k-l;pput(pppfmtfile);end;
until k>eqtbsize{:1316};begin pppfmtfile.int:=parloc;pput(pppfmtfile);
end;begin pppfmtfile.int:=writeloc;pput(pppfmtfile);end;{1318:}
begin pppfmtfile.int:=hashused;pput(pppfmtfile);end;
cscount:=frozencontrolsequence-1-hashused;
for p:=hashbase to hashused do if footext(p)^<>0 then begin begin
pppfmtfile.int:=p;pput(pppfmtfile);end;begin pppfmtfile.hh:=hash[p];
pput(pppfmtfile);end;cscount:=cscount+1;end;
for p:=hashused+1 to undefinedcontrolsequence-1 do begin pppfmtfile.hh:=
hash[p];pput(pppfmtfile);end;begin pppfmtfile.int:=cscount;
pput(pppfmtfile);end;println;printint(cscount);
print(strprotector(1261)){:1318}{:1313};{1320:}
begin pppfmtfile.int:=fmemptr;pput(pppfmtfile);end;
for k:=0 to fmemptr-1 do begin pppfmtfile:=fontinfo[k];pput(pppfmtfile);
end;begin pppfmtfile.int:=fontptr;pput(pppfmtfile);end;
for k:=nullfont to fontptr do{1322:}
begin begin pppfmtfile.qqqq:=fontcheck[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontsize[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontdsize[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontparams[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=hyphenchar[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=skewchar[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontname[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontarea[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontbc[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontec[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=charbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=widthbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=heightbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=depthbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=italicbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=ligkernbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=kernbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=extenbase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=parambase[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontglue[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=bcharlabel[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontbchar[k];pput(pppfmtfile);end;
begin pppfmtfile.int:=fontfalsebchar[k];pput(pppfmtfile);end;
printnl(strprotector(1264));printesc(foofontidtext(k)^);
printchar(tobar('='));
printfilename(fontname[k],fontarea[k],strprotector(266));
if fontsize[k]<>fontdsize[k]then begin print(strprotector(267));
printscaled(fontsize[k]);print(strprotector(268));end;end{:1322};
println;printint(fmemptr-7);print(strprotector(1262));
printint(fontptr-fontbase);print(strprotector(1263));
if fontptr<>fontbase+1 then printchar(tobar('s')){:1320};{1324:}
begin pppfmtfile.int:=hyphcount;pput(pppfmtfile);end;
for k:=0 to hyphsize do if hyphword[k]<>0 then begin begin pppfmtfile.
int:=k;pput(pppfmtfile);end;begin pppfmtfile.int:=hyphword[k];
pput(pppfmtfile);end;begin pppfmtfile.int:=hyphlist[k];pput(pppfmtfile);
end;end;println;printint(hyphcount);print(strprotector(1265));
if hyphcount<>1 then printchar(tobar('s'));
if trienotready then inittrie;begin pppfmtfile.int:=triemax;
pput(pppfmtfile);end;
for k:=0 to triemax do begin pppfmtfile.hh:=trie[k];pput(pppfmtfile);
end;begin pppfmtfile.int:=trieopptr;pput(pppfmtfile);end;
for k:=1 to trieopptr do begin begin pppfmtfile.int:=hyfdistance[k];
pput(pppfmtfile);end;begin pppfmtfile.int:=hyfnum[k];pput(pppfmtfile);
end;begin pppfmtfile.int:=hyfnext[k];pput(pppfmtfile);end;end;
printnl(strprotector(1266));printint(triemax);print(strprotector(1267));
printint(trieopptr);print(strprotector(1268));
if trieopptr<>1 then printchar(tobar('s'));print(strprotector(1269));
printint(trieopsize);
for k:=255 downto 0 do if trieused[k]>minquarterword then begin printnl(
strprotector(802));printint(trieused[k]-minquarterword);
print(strprotector(1270));printint(k);begin pppfmtfile.int:=k;
pput(pppfmtfile);end;begin pppfmtfile.int:=trieused[k]-minquarterword;
pput(pppfmtfile);end;end{:1324};{1326:}
begin pppfmtfile.int:=interaction;pput(pppfmtfile);end;
begin pppfmtfile.int:=formatident;pput(pppfmtfile);end;
begin pppfmtfile.int:=69069;pput(pppfmtfile);end;tracingstats:=0{:1326};
{1329:}wclose(fmtfile){:1329};end;{:1302}{1348:}{1349:}
procedure newwhatsit(s:smallnumber;w:smallnumber);var p:pointer;
begin p:=getnode(w);footype(p)^:=whatsitnode;foosubtype(p)^:=s;
foolink(tail)^:=p;tail:=p;end;{:1349}{1350:}
procedure newwritewhatsit(w:smallnumber);begin newwhatsit(curchr,w);
if w<>writenodesize then scanfourbitint else begin scanint;
if curval<0 then curval:=17 else if curval>15 then curval:=16;end;
foowritestream(tail)^:=curval;end;{:1350}procedure doextension;
var i,j,k:integer;p,q,r:pointer;begin case curchr of opennode:{1351:}
begin newwritewhatsit(opennodesize);scanoptionalequals;scanfilename;
fooopenname(tail)^:=curname;fooopenarea(tail)^:=curarea;
fooopenext(tail)^:=curext;end{:1351};writenode:{1352:}begin k:=curcs;
newwritewhatsit(writenodesize);curcs:=k;p:=scantoks(false,false);
foowritetokens(tail)^:=defref;end{:1352};closenode:{1353:}
begin newwritewhatsit(writenodesize);foowritetokens(tail)^:=0;end{:1353}
;specialnode:{1354:}begin newwhatsit(specialnode,writenodesize);
foowritestream(tail)^:=0;p:=scantoks(false,true);
foowritetokens(tail)^:=defref;end{:1354};immediatecode:{1375:}
begin getxtoken;
if(curcmd=extension)and(curchr<=closenode)then begin p:=tail;
doextension;outwhat(tail);flushnodelist(tail);tail:=p;foolink(p)^:=0;
end else backinput;end{:1375};setlanguagecode:{1377:}
if abs(mode)<>hmode then reportillegalcase else begin newwhatsit(
languagenode,smallnodesize);scanint;
if curval<=0 then clang:=0 else if curval>255 then clang:=0 else clang:=
curval;foowhatlang(tail)^:=clang;
foowhatlhm(tail)^:=normmin(lefthyphenmin);
foowhatrhm(tail)^:=normmin(righthyphenmin);end{:1377};
otherwise confusion(strprotector(1290))end;end;{:1348}{1376:}
procedure fixlanguage;var l:ASCIIcode;
begin if language<=0 then l:=0 else if language>255 then l:=0 else l:=
language;if l<>clang then begin newwhatsit(languagenode,smallnodesize);
foowhatlang(tail)^:=l;clang:=l;
foowhatlhm(tail)^:=normmin(lefthyphenmin);
foowhatrhm(tail)^:=normmin(righthyphenmin);end;end;{:1376}{1068:}
procedure handlerightbrace;var p,q:pointer;d:scaled;f:integer;
begin case curgroup of simplegroup:unsave;
bottomlevel:begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1043));end;begin helpptr:=2;
helpline[1]:=strprotector(1044);helpline[0]:=strprotector(1045);end;
error;end;semisimplegroup,mathshiftgroup,mathleftgroup:extrarightbrace;
{1085:}hboxgroup:package(0);
adjustedhboxgroup:begin adjusttail:=adjusthead;package(0);end;
vboxgroup:begin endgraf;package(0);end;vtopgroup:begin endgraf;
package(vtopcode);end;{:1085}{1100:}insertgroup:begin endgraf;
q:=splittopskip;addglueref(q);d:=splitmaxdepth;f:=floatingpenalty;
unsave;saveptr:=saveptr-1;p:=foovpack(foolink(head)^,0,additional)^;
popnest;if foosaved(0)^<255 then begin tailappend(getnode(insnodesize));
footype(tail)^:=insnode;foosubtype(tail)^:=foosaved(0)^+minquarterword;
fooheight(tail)^:=fooheight(p)^+foodepth(p)^;
fooinsptr(tail)^:=foolistptr(p)^;foosplittopptr(tail)^:=q;
foodepth(tail)^:=d;foofloatcost(tail)^:=f;
end else begin tailappend(getnode(smallnodesize));
footype(tail)^:=adjustnode;foosubtype(tail)^:=0;
fooadjustptr(tail)^:=foolistptr(p)^;deleteglueref(q);end;
freenode(p,boxnodesize);if nestptr=0 then buildpage;end;
outputgroup:{1026:}
begin if(loc<>0)or((tokentype<>outputtext)and(tokentype<>backedup))then{
1027:}begin begin if interaction=errorstopmode then;printnl(258);
print(strprotector(1009));end;begin helpptr:=2;
helpline[1]:=strprotector(1010);helpline[0]:=strprotector(1011);end;
error;repeat gettoken;until loc=0;end{:1027};endtokenlist;endgraf;
unsave;outputactive:=false;insertpenalties:=0;{1028:}
if foobox(255)^<>0 then begin begin if interaction=errorstopmode then;
printnl(258);print(strprotector(1012));end;printesc(strprotector(420));
printint(255);begin helpptr:=3;helpline[2]:=strprotector(1013);
helpline[1]:=strprotector(1014);helpline[0]:=strprotector(1015);end;
boxerror(255);end{:1028};
if tail<>head then begin foolink(pagetail)^:=foolink(head)^;
pagetail:=tail;end;
if foolink(pagehead)^<>0 then begin if foolink(contribhead)^=0 then
contribtail:=pagetail;foolink(pagetail)^:=foolink(contribhead)^;
foolink(contribhead)^:=foolink(pagehead)^;foolink(pagehead)^:=0;
pagetail:=pagehead;end;popnest;buildpage;end{:1026};{:1100}{1118:}
discgroup:builddiscretionary;{:1118}{1132:}aligngroup:begin backinput;
curtok:=cstokenflag+frozencr;begin if interaction=errorstopmode then;
printnl(258);print(strprotector(634));end;printesc(strprotector(898));
print(strprotector(635));begin helpptr:=1;
helpline[0]:=strprotector(1124);end;inserror;end;{:1132}{1133:}
noaligngroup:begin endgraf;unsave;alignpeek;end;{:1133}{1168:}
vcentergroup:begin endgraf;unsave;saveptr:=saveptr-2;
p:=foovpack(foolink(head)^,foosaved(1)^,foosaved(0)^)^;popnest;
tailappend(newnoad);footype(tail)^:=vcenternoad;
foomathtype(foonucleus(tail)^)^:=subbox;fooinfo(foonucleus(tail)^)^:=p;
end;{:1168}{1173:}mathchoicegroup:buildchoices;{:1173}{1186:}
mathgroup:begin unsave;saveptr:=saveptr-1;
foomathtype(foosaved(0)^)^:=submlist;p:=finmlist(0);
fooinfo(foosaved(0)^)^:=p;
if p<>0 then if foolink(p)^=0 then if footype(p)^=ordnoad then begin if
foomathtype(foosubscr(p)^)^=empty then if foomathtype(foosupscr(p)^)^=
empty then begin mem[foosaved(0)^].hh:=mem[foonucleus(p)^].hh;
freenode(p,noadsize);end;
end else if footype(p)^=accentnoad then if foosaved(0)^=foonucleus(tail)
^then if footype(tail)^=ordnoad then{1187:}begin q:=head;
while foolink(q)^<>tail do q:=foolink(q)^;foolink(q)^:=p;
freenode(tail,noadsize);tail:=p;end{:1187};end;{:1186}
otherwise confusion(strprotector(1046))end;end;{:1068}
procedure maincontrol;
label bigswitch,reswitch,mainloop,mainloopwrapup,mainloopmove,
mainloopmove1,mainloopmove2,mainloopmovelig,mainlooplookahead,
mainlooplookahead1,mainligloop,mainligloop1,mainligloop2,
appendnormalspace,exit;var t:integer;
begin if everyjob<>0 then begintokenlist(everyjob,everyjobtext);
bigswitch:getxtoken;reswitch:{1031:}
if interrupt<>0 then if OKtointerrupt then begin backinput;
checkinterrupt;goto bigswitch;end;{_DEBUG}
if panicking then checkmem(false);{_ENDDEBUG}
if tracingcommands>0 then showcurcmdchr{:1031};
case abs(mode)+curcmd of hmode+letter,hmode+otherchar,hmode+chargiven:
goto mainloop;hmode+charnum:begin scancharnum;curchr:=curval;
goto mainloop;end;hmode+noboundary:begin getxtoken;
if(curcmd=letter)or(curcmd=otherchar)or(curcmd=chargiven)or(curcmd=
charnum)then cancelboundary:=true;goto reswitch;end;
hmode+spacer:if spacefactor=1000 then goto appendnormalspace else
appspace;hmode+exspace,mmode+exspace:goto appendnormalspace;{1045:}
vmode+relax,hmode+relax,mmode+relax,vmode+spacer,mmode+spacer,mmode+
noboundary:;
vmode+ignorespaces,hmode+ignorespaces,mmode+ignorespaces:begin{406:}
repeat getxtoken;until curcmd<>spacer{:406};goto reswitch;end;
vmode+stop:if itsallover then goto exit;{1048:}
vmode+vmove,hmode+hmove,mmode+hmove,vmode+lastitem,hmode+lastitem,mmode+
lastitem,{:1048}{1098:}vmode+vadjust,{:1098}{1111:}
vmode+italcorr,{:1111}{1144:}vmode+eqno,hmode+eqno,{:1144}
vmode+macparam,hmode+macparam,mmode+macparam:reportillegalcase;{1046:}
vmode+supmark,hmode+supmark,vmode+submark,hmode+submark,vmode+
mathcharnum,hmode+mathcharnum,vmode+mathgiven,hmode+mathgiven,vmode+
mathcomp,hmode+mathcomp,vmode+delimnum,hmode+delimnum,vmode+leftright,
hmode+leftright,vmode+above,hmode+above,vmode+radical,hmode+radical,
vmode+mathstyle,hmode+mathstyle,vmode+mathchoice,hmode+mathchoice,vmode+
vcenter,hmode+vcenter,vmode+nonscript,hmode+nonscript,vmode+mkern,hmode+
mkern,vmode+limitswitch,hmode+limitswitch,vmode+mskip,hmode+mskip,vmode+
mathaccent,hmode+mathaccent,mmode+endv,mmode+parend,mmode+stop,mmode+
vskip,mmode+unvbox,mmode+valign,mmode+hrule{:1046}:insertdollarsign;
{1056:}
vmode+hrule,hmode+vrule,mmode+vrule:begin tailappend(scanrulespec);
if abs(mode)=vmode then prevdepth:=ignoredepth else if abs(mode)=hmode
then spacefactor:=1000;end;{:1056}{1057:}
vmode+vskip,hmode+hskip,mmode+hskip,mmode+mskip:appendglue;
vmode+kern,hmode+kern,mmode+kern,mmode+mkern:appendkern;{:1057}{1063:}
vmode+leftbrace,hmode+leftbrace:newsavelevel(simplegroup);
vmode+begingroup,hmode+begingroup,mmode+begingroup:newsavelevel(
semisimplegroup);
vmode+endgroup,hmode+endgroup,mmode+endgroup:if curgroup=semisimplegroup
then unsave else offsave;{:1063}{1067:}
vmode+rightbrace,hmode+rightbrace,mmode+rightbrace:handlerightbrace;
{:1067}{1073:}vmode+hmove,hmode+vmove,mmode+vmove:begin t:=curchr;
scannormaldimen;if t=0 then scanbox(curval)else scanbox(-curval);end;
vmode+leadership,hmode+leadership,mmode+leadership:scanbox(leaderflag-
aleaders+curchr);vmode+makebox,hmode+makebox,mmode+makebox:beginbox(0);
{:1073}{1090:}vmode+startpar:newgraf(curchr>0);
vmode+letter,vmode+otherchar,vmode+charnum,vmode+chargiven,vmode+
mathshift,vmode+unhbox,vmode+vrule,vmode+accent,vmode+discretionary,
vmode+hskip,vmode+valign,vmode+exspace,vmode+noboundary:begin backinput;
newgraf(true);end;{:1090}{1092:}
hmode+startpar,mmode+startpar:indentinhmode;{:1092}{1094:}
vmode+parend:begin normalparagraph;if mode>0 then buildpage;end;
hmode+parend:begin if alignstate<0 then offsave;endgraf;
if mode=vmode then buildpage;end;
hmode+stop,hmode+vskip,hmode+hrule,hmode+unvbox,hmode+halign:
headforvmode;{:1094}{1097:}
vmode+insert,hmode+insert,mmode+insert,hmode+vadjust,mmode+vadjust:
begininsertoradjust;vmode+mark,hmode+mark,mmode+mark:makemark;{:1097}
{1102:}
vmode+breakpenalty,hmode+breakpenalty,mmode+breakpenalty:appendpenalty;
{:1102}{1104:}
vmode+removeitem,hmode+removeitem,mmode+removeitem:deletelast;{:1104}
{1109:}vmode+unvbox,hmode+unhbox,mmode+unhbox:unpackage;{:1109}{1112:}
hmode+italcorr:appenditaliccorrection;
mmode+italcorr:tailappend(newkern(0));{:1112}{1116:}
hmode+discretionary,mmode+discretionary:appenddiscretionary;{:1116}
{1122:}hmode+accent:makeaccent;{:1122}{1126:}
vmode+carret,hmode+carret,mmode+carret,vmode+tabmark,hmode+tabmark,mmode
+tabmark:alignerror;
vmode+noalign,hmode+noalign,mmode+noalign:noalignerror;
vmode+omit,hmode+omit,mmode+omit:omiterror;{:1126}{1130:}
vmode+halign,hmode+valign:initalign;
mmode+halign:if privileged then if curgroup=mathshiftgroup then
initalign else offsave;vmode+endv,hmode+endv:doendv;{:1130}{1134:}
vmode+endcsname,hmode+endcsname,mmode+endcsname:cserror;{:1134}{1137:}
hmode+mathshift:initmath;{:1137}{1140:}
mmode+eqno:if privileged then if curgroup=mathshiftgroup then starteqno
else offsave;{:1140}{1150:}mmode+leftbrace:begin tailappend(newnoad);
backinput;scanmath(foonucleus(tail)^);end;{:1150}{1154:}
mmode+letter,mmode+otherchar,mmode+chargiven:setmathchar(foomathcode(
curchr)^-0);mmode+charnum:begin scancharnum;curchr:=curval;
setmathchar(foomathcode(curchr)^-0);end;
mmode+mathcharnum:begin scanfifteenbitint;setmathchar(curval);end;
mmode+mathgiven:setmathchar(curchr);
mmode+delimnum:begin scantwentysevenbitint;setmathchar(curval div 4096);
end;{:1154}{1158:}mmode+mathcomp:begin tailappend(newnoad);
footype(tail)^:=curchr;scanmath(foonucleus(tail)^);end;
mmode+limitswitch:mathlimitswitch;{:1158}{1162:}
mmode+radical:mathradical;{:1162}{1164:}
mmode+accent,mmode+mathaccent:mathac;{:1164}{1167:}
mmode+vcenter:begin scanspec(vcentergroup,false);normalparagraph;
pushnest;mode:=-vmode;prevdepth:=ignoredepth;
if everyvbox<>0 then begintokenlist(everyvbox,everyvboxtext);end;{:1167}
{1171:}mmode+mathstyle:tailappend(newstyle(curchr));
mmode+nonscript:begin tailappend(newglue(zeroglue));
foosubtype(tail)^:=condmathglue;end;mmode+mathchoice:appendchoices;
{:1171}{1175:}mmode+submark,mmode+supmark:subsup;{:1175}{1180:}
mmode+above:mathfraction;{:1180}{1190:}mmode+leftright:mathleftright;
{:1190}{1193:}
mmode+mathshift:if curgroup=mathshiftgroup then aftermath else offsave;
{:1193}{1210:}
vmode+toksregister,hmode+toksregister,mmode+toksregister,vmode+
assigntoks,hmode+assigntoks,mmode+assigntoks,vmode+assignint,hmode+
assignint,mmode+assignint,vmode+assigndimen,hmode+assigndimen,mmode+
assigndimen,vmode+assignglue,hmode+assignglue,mmode+assignglue,vmode+
assignmuglue,hmode+assignmuglue,mmode+assignmuglue,vmode+assignfontdimen
,hmode+assignfontdimen,mmode+assignfontdimen,vmode+assignfontint,hmode+
assignfontint,mmode+assignfontint,vmode+setaux,hmode+setaux,mmode+setaux
,vmode+setprevgraf,hmode+setprevgraf,mmode+setprevgraf,vmode+
setpagedimen,hmode+setpagedimen,mmode+setpagedimen,vmode+setpageint,
hmode+setpageint,mmode+setpageint,vmode+setboxdimen,hmode+setboxdimen,
mmode+setboxdimen,vmode+setshape,hmode+setshape,mmode+setshape,vmode+
defcode,hmode+defcode,mmode+defcode,vmode+deffamily,hmode+deffamily,
mmode+deffamily,vmode+setfont,hmode+setfont,mmode+setfont,vmode+deffont,
hmode+deffont,mmode+deffont,vmode+register,hmode+register,mmode+register
,vmode+advance,hmode+advance,mmode+advance,vmode+multiply,hmode+multiply
,mmode+multiply,vmode+divide,hmode+divide,mmode+divide,vmode+prefix,
hmode+prefix,mmode+prefix,vmode+let,hmode+let,mmode+let,vmode+
shorthanddef,hmode+shorthanddef,mmode+shorthanddef,vmode+readtocs,hmode+
readtocs,mmode+readtocs,vmode+def,hmode+def,mmode+def,vmode+setbox,hmode
+setbox,mmode+setbox,vmode+hyphdata,hmode+hyphdata,mmode+hyphdata,vmode+
setinteraction,hmode+setinteraction,mmode+setinteraction:prefixedcommand
;{:1210}{1268:}
vmode+afterassignment,hmode+afterassignment,mmode+afterassignment:begin
gettoken;aftertoken:=curtok;end;{:1268}{1271:}
vmode+aftergroup,hmode+aftergroup,mmode+aftergroup:begin gettoken;
saveforafter(curtok);end;{:1271}{1274:}
vmode+instream,hmode+instream,mmode+instream:openorclosein;{:1274}
{1276:}vmode+message,hmode+message,mmode+message:issuemessage;{:1276}
{1285:}vmode+caseshift,hmode+caseshift,mmode+caseshift:shiftcase;{:1285}
{1290:}vmode+xray,hmode+xray,mmode+xray:showwhatever;{:1290}{1347:}
vmode+extension,hmode+extension,mmode+extension:doextension;{:1347}
{:1045}end;goto bigswitch;mainloop:{1034:}adjustspacefactor;
mainf:=curfont;bchar:=fontbchar[mainf];
falsebchar:=fontfalsebchar[mainf];
if mode>0 then if language<>clang then fixlanguage;
fastgetavail(ligstack);foofont(ligstack)^:=mainf;
curl:=curchr+minquarterword;foocharacter(ligstack)^:=curl;curq:=tail;
if cancelboundary then begin cancelboundary:=false;maink:=nonaddress;
end else maink:=bcharlabel[mainf];
if maink=nonaddress then goto mainloopmove2;curr:=curl;curl:=nonchar;
goto mainligloop1;mainloopwrapup:{1035:}wrapup(rthit){:1035};
mainloopmove:{1036:}if ligstack=0 then goto reswitch;curq:=tail;
curl:=foocharacter(ligstack)^;
mainloopmove1:if not ischarnode(ligstack)then goto mainloopmovelig;
mainloopmove2:if(curchr<fontbc[mainf])or(curchr>fontec[mainf])then begin
charwarning(mainf,curchr);freeavail(ligstack);goto bigswitch;end;
maini:=foocharinfo lparenprotector mainf,curl rparenprotector^;
if not charexists(maini)then begin charwarning(mainf,curchr);
freeavail(ligstack);goto bigswitch;end;tailappend(ligstack){:1036};
mainlooplookahead:{1038:}getnext;
if curcmd=letter then goto mainlooplookahead1;
if curcmd=otherchar then goto mainlooplookahead1;
if curcmd=chargiven then goto mainlooplookahead1;xtoken;
if curcmd=letter then goto mainlooplookahead1;
if curcmd=otherchar then goto mainlooplookahead1;
if curcmd=chargiven then goto mainlooplookahead1;
if curcmd=charnum then begin scancharnum;curchr:=curval;
goto mainlooplookahead1;end;if curcmd=noboundary then bchar:=nonchar;
curr:=bchar;ligstack:=0;goto mainligloop;
mainlooplookahead1:adjustspacefactor;fastgetavail(ligstack);
foofont(ligstack)^:=mainf;curr:=curchr+minquarterword;
foocharacter(ligstack)^:=curr;
if curr=falsebchar then curr:=nonchar{:1038};mainligloop:{1039:}
if chartag(maini)<>ligtag then goto mainloopwrapup;
maink:=ligkernbase[mainf]+foorembyte(maini)^;
mainj:=fontinfo[maink].qqqq;
if fooskipbyte(mainj)^<=stopflag then goto mainligloop2;
maink:=ligkernbase[mainf]+256*fooopbyte(mainj)^+foorembyte(mainj)^
+32768-kernbaseoffset;mainligloop1:mainj:=fontinfo[maink].qqqq;
mainligloop2:if foonextchar(mainj)^=curr then if fooskipbyte(mainj)^<=
stopflag then{1040:}
begin if fooopbyte(mainj)^>=kernflag then begin wrapup(rthit);
tailappend(newkern(foocharkern lparenprotector mainf,mainj
rparenprotector^));goto mainloopmove;end;
if curl=nonchar then lfthit:=true else if ligstack=0 then rthit:=true;
checkinterrupt;
case fooopbyte(mainj)^of 1+minquarterword,5+minquarterword:begin curl:=
foorembyte(mainj)^;
maini:=foocharinfo lparenprotector mainf,curl rparenprotector^;
ligaturepresent:=true;end;
2+minquarterword,6+minquarterword:begin curr:=foorembyte(mainj)^;
if ligstack=0 then begin ligstack:=newligitem(curr);bchar:=nonchar;
end else if ischarnode(ligstack)then begin mainp:=ligstack;
ligstack:=newligitem(curr);fooligptr(ligstack)^:=mainp;
end else foocharacter(ligstack)^:=curr;end;
3+minquarterword:begin curr:=foorembyte(mainj)^;mainp:=ligstack;
ligstack:=newligitem(curr);foolink(ligstack)^:=mainp;end;
7+minquarterword,11+minquarterword:begin wrapup(false);curq:=tail;
curl:=foorembyte(mainj)^;
maini:=foocharinfo lparenprotector mainf,curl rparenprotector^;
ligaturepresent:=true;end;otherwise begin curl:=foorembyte(mainj)^;
ligaturepresent:=true;
if ligstack=0 then goto mainloopwrapup else goto mainloopmove1;end end;
if fooopbyte(mainj)^>4+minquarterword then if fooopbyte(mainj)^<>7+
minquarterword then goto mainloopwrapup;
if curl<nonchar then goto mainligloop;maink:=bcharlabel[mainf];
goto mainligloop1;end{:1040};
if fooskipbyte(mainj)^=0+minquarterword then maink:=maink+1 else begin
if fooskipbyte(mainj)^>=stopflag then goto mainloopwrapup;
maink:=maink+fooskipbyte(mainj)^-minquarterword+1;end;
goto mainligloop1{:1039};mainloopmovelig:{1037:}
mainp:=fooligptr(ligstack)^;if mainp>0 then tailappend(mainp);
tempptr:=ligstack;ligstack:=foolink(tempptr)^;
freenode(tempptr,smallnodesize);
maini:=foocharinfo lparenprotector mainf,curl rparenprotector^;
ligaturepresent:=true;
if ligstack=0 then if mainp>0 then goto mainlooplookahead else curr:=
bchar else curr:=foocharacter(ligstack)^;goto mainligloop{:1037}{:1034};
appendnormalspace:{1041:}if spaceskip=zeroglue then begin{1042:}
begin mainp:=fontglue[curfont];
if mainp=0 then begin mainp:=newspec(zeroglue);
maink:=parambase[curfont]+spacecode;
foowidth(mainp)^:=fontinfo[maink].sc;
foostretch(mainp)^:=fontinfo[maink+1].sc;
fooshrink(mainp)^:=fontinfo[maink+2].sc;fontglue[curfont]:=mainp;end;
end{:1042};tempptr:=newglue(mainp);
end else tempptr:=newparamglue(spaceskipcode);foolink(tail)^:=tempptr;
tail:=tempptr;goto bigswitch{:1041};exit:end;{:1030}{1284:}
procedure giveerrhelp;begin tokenshow(errhelp);end;{:1284}{1303:}{524:}
function openfmtfile:boolean;label found,exit;var j:0..bufsize;
begin j:=loc;if buffer[loc]=tobar('&')then begin loc:=loc+1;j:=loc;
buffer[last]:=tobar(' ');while buffer[j]<>tobar(' ')do j:=j+1;
packbufferedname(0,loc,j-1);if wopenin(fmtfile)then goto found;
packbufferedname(formatarealength,loc,j-1);
if wopenin(fmtfile)then goto found;;
writeln(termout,'Sorry, I can''t find that format;',' will try PLAIN.');
fflush(termout);end;
packbufferedname(formatdefaultlength-formatextlength,1,0);
if not wopenin(fmtfile)then begin;
writeln(termout,'I can''t find the PLAIN format file!');
openfmtfile:=false;goto exit;end;found:loc:=j;openfmtfile:=true;
exit:end;{:524}function loadfmtfile:boolean;label badfmt,exit;
var j,k:integer;p,q:pointer;x:integer;w:fourquarters;begin{1308:}
pget(pppfmtfile);x:=pppfmtfile.int;if x<>371982687 then goto badfmt;
begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if x<>membot then goto badfmt;begin pget(pppfmtfile);x:=pppfmtfile.int;
end;if x<>memtop then goto badfmt;begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if x<>eqtbsize then goto badfmt;
begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if x<>hashprime then goto badfmt;begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if x<>hyphsize then goto badfmt{:1308};{1310:}
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if x<0 then goto badfmt;if x>poolsize then begin;
writeln(termout,'---! Must increase the ','string pool size');
goto badfmt;end else poolptr:=x;end;begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if x<0 then goto badfmt;
if x>maxstrings then begin;
writeln(termout,'---! Must increase the ','max strings');goto badfmt;
end else strptr:=x;end;
for k:=0 to strptr do begin begin pget(pppfmtfile);x:=pppfmtfile.int;
end;if(x<0)or(x>poolptr)then goto badfmt else strstart[k]:=x;end;k:=0;
while k+4<poolptr do begin begin pget(pppfmtfile);w:=pppfmtfile.qqqq;
end;strpool[k]:=w.b0-minquarterword;strpool[k+1]:=w.b1-minquarterword;
strpool[k+2]:=w.b2-minquarterword;strpool[k+3]:=w.b3-minquarterword;
k:=k+4;end;k:=poolptr-4;begin pget(pppfmtfile);w:=pppfmtfile.qqqq;end;
strpool[k]:=w.b0-minquarterword;strpool[k+1]:=w.b1-minquarterword;
strpool[k+2]:=w.b2-minquarterword;strpool[k+3]:=w.b3-minquarterword;
initstrptr:=strptr;initpoolptr:=poolptr{:1310};{1312:}
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<lomemstatmax+1000)or(x>himemstatmin-1)then goto badfmt else
lomemmax:=x;end;begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<lomemstatmax+1)or(x>lomemmax)then goto badfmt else rover:=x;end;
p:=membot;q:=rover;repeat for k:=p to q+1 do begin pget(pppfmtfile);
mem[k]:=pppfmtfile;end;p:=q+foonodesize(q)^;
if(p>lomemmax)or((q>=foorlink(q)^)and(foorlink(q)^<>rover))then goto
badfmt;q:=foorlink(q)^;until q=rover;
for k:=p to lomemmax do begin pget(pppfmtfile);mem[k]:=pppfmtfile;end;
if memmin<membot-2 then begin p:=foollink(rover)^;q:=memmin+1;
foolink(memmin)^:=0;fooinfo(memmin)^:=0;foorlink(p)^:=q;
foollink(rover)^:=q;foorlink(q)^:=rover;foollink(q)^:=p;
foolink(q)^:=emptyflag;foonodesize(q)^:=membot-q;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<lomemmax+1)or(x>himemstatmin)then goto badfmt else himemmin:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>memtop)then goto badfmt else avail:=x;end;memend:=memtop;
for k:=himemmin to memend do begin pget(pppfmtfile);mem[k]:=pppfmtfile;
end;begin pget(pppfmtfile);varused:=pppfmtfile.int;end;
begin pget(pppfmtfile);dynused:=pppfmtfile.int;end{:1312};{1314:}{1317:}
k:=activebase;repeat begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<1)or(k+x>eqtbsize+1)then goto badfmt;
for j:=k to k+x-1 do begin pget(pppfmtfile);eqtb[j]:=pppfmtfile;end;
k:=k+x;begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(k+x>eqtbsize+1)then goto badfmt;
for j:=k to k+x-1 do eqtb[j]:=eqtb[k-1];k:=k+x;until k>eqtbsize{:1317};
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<hashbase)or(x>frozencontrolsequence)then goto badfmt else parloc:=x
;end;partoken:=cstokenflag+parloc;begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;
if(x<hashbase)or(x>frozencontrolsequence)then goto badfmt else writeloc
:=x;end;{1319:}begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<hashbase)or(x>frozencontrolsequence)then goto badfmt else hashused
:=x;end;p:=hashbase-1;repeat begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if(x<p+1)or(x>hashused)then goto badfmt else p:=x;
end;begin pget(pppfmtfile);hash[p]:=pppfmtfile.hh;end;until p=hashused;
for p:=hashused+1 to undefinedcontrolsequence-1 do begin pget(pppfmtfile
);hash[p]:=pppfmtfile.hh;end;begin pget(pppfmtfile);
cscount:=pppfmtfile.int;end{:1319}{:1314};{1321:}
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if x<7 then goto badfmt;if x>fontmemsize then begin;
writeln(termout,'---! Must increase the ','font mem size');goto badfmt;
end else fmemptr:=x;end;for k:=0 to fmemptr-1 do begin pget(pppfmtfile);
fontinfo[k]:=pppfmtfile;end;begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if x<fontbase then goto badfmt;
if x>fontmax then begin;
writeln(termout,'---! Must increase the ','font max');goto badfmt;
end else fontptr:=x;end;for k:=nullfont to fontptr do{1323:}
begin begin pget(pppfmtfile);fontcheck[k]:=pppfmtfile.qqqq;end;
begin pget(pppfmtfile);fontsize[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);fontdsize[k]:=pppfmtfile.int;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>maxhalfword)then goto badfmt else fontparams[k]:=x;end;
begin pget(pppfmtfile);hyphenchar[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);skewchar[k]:=pppfmtfile.int;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>strptr)then goto badfmt else fontname[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>strptr)then goto badfmt else fontarea[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>255)then goto badfmt else fontbc[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>255)then goto badfmt else fontec[k]:=x;end;
begin pget(pppfmtfile);charbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);widthbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);heightbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);depthbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);italicbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);ligkernbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);kernbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);extenbase[k]:=pppfmtfile.int;end;
begin pget(pppfmtfile);parambase[k]:=pppfmtfile.int;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>lomemmax)then goto badfmt else fontglue[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>fmemptr-1)then goto badfmt else bcharlabel[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<minquarterword)or(x>nonchar)then goto badfmt else fontbchar[k]:=x;
end;begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<minquarterword)or(x>nonchar)then goto badfmt else fontfalsebchar[k]
:=x;end;end{:1323}{:1321};{1325:}begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;
if(x<0)or(x>hyphsize)then goto badfmt else hyphcount:=x;end;
for k:=1 to hyphcount do begin begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if(x<0)or(x>hyphsize)then goto badfmt else j:=x;
end;begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>strptr)then goto badfmt else hyphword[j]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>maxhalfword)then goto badfmt else hyphlist[j]:=x;end;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if x<0 then goto badfmt;if x>triesize then begin;
writeln(termout,'---! Must increase the ','trie size');goto badfmt;
end else j:=x;end;triemax:=j;for k:=0 to j do begin pget(pppfmtfile);
trie[k]:=pppfmtfile.hh;end;begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;if x<0 then goto badfmt;
if x>trieopsize then begin;
writeln(termout,'---! Must increase the ','trie op size');goto badfmt;
end else j:=x;end;trieopptr:=j;
for k:=1 to j do begin begin begin pget(pppfmtfile);x:=pppfmtfile.int;
end;if(x<0)or(x>63)then goto badfmt else hyfdistance[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>63)then goto badfmt else hyfnum[k]:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<minquarterword)or(x>maxquarterword)then goto badfmt else hyfnext[k]
:=x;end;end;for k:=0 to 255 do trieused[k]:=minquarterword;k:=256;
while j>0 do begin begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>k-1)then goto badfmt else k:=x;end;
begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<1)or(x>j)then goto badfmt else x:=x;end;
trieused[k]:=x+minquarterword;j:=j-x;opstart[k]:=j-minquarterword;end;
trienotready:=false{:1325};{1327:}begin begin pget(pppfmtfile);
x:=pppfmtfile.int;end;
if(x<batchmode)or(x>errorstopmode)then goto badfmt else interaction:=x;
end;begin begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<0)or(x>strptr)then goto badfmt else formatident:=x;end;
begin pget(pppfmtfile);x:=pppfmtfile.int;end;
if(x<>69069)or eof(fmtfile)then goto badfmt{:1327};loadfmtfile:=true;
goto exit;badfmt:;
writeln(termout,'(Fatal format file error; I''m stymied)');
loadfmtfile:=false;exit:end;{:1303}{1330:}{1333:}
procedure closefilesandterminate;var k:integer;begin{1378:}
for k:=0 to 15 do if writeopen[k]then aclose(writefile[k]){:1378};
{_STAT}if tracingstats>0 then{1334:}
if logopened then begin writeln(logfile,' ');
writeln(logfile,'Here is how much of TeX''s memory',' you used:');
write(logfile,' ',strptr-initstrptr:1,' string');
if strptr<>initstrptr+1 then write(logfile,'s');
writeln(logfile,' out of ',maxstrings-initstrptr:1);
writeln(logfile,' ',poolptr-initpoolptr:1,' string characters out of ',
poolsize-initpoolptr:1);
writeln(logfile,' ',lomemmax-memmin+memend-himemmin+2:1,
' words of memory out of ',memend+1-memmin:1);
writeln(logfile,' ',cscount:1,' multiletter control sequences out of ',
hashsize:1);
write(logfile,' ',fmemptr:1,' words of font info for ',fontptr-fontbase:
1,' font');if fontptr<>fontbase+1 then write(logfile,'s');
writeln(logfile,', out of ',fontmemsize:1,' for ',fontmax-fontbase:1);
write(logfile,' ',hyphcount:1,' hyphenation exception');
if hyphcount<>1 then write(logfile,'s');
writeln(logfile,' out of ',hyphsize:1);
writeln(logfile,' ',maxinstack:1,'i,',maxneststack:1,'n,',maxparamstack:
1,'p,',maxbufstack+1:1,'b,',maxsavestack+6:1,'s stack positions out of '
,stacksize:1,'i,',nestsize:1,'n,',paramsize:1,'p,',bufsize:1,'b,',
savesize:1,'s');end{:1334};{_ENDSTAT};{642:}
while curs>-1 do begin if curs>0 then dviout(pop)else begin dviout(eop);
totalpages:=totalpages+1;end;curs:=curs-1;end;
if totalpages=0 then printnl(strprotector(837))else begin dviout(post);
dvifour(lastbop);lastbop:=dvioffset+dviptr-5;dvifour(25400000);
dvifour(473628672);preparemag;dvifour(mag);dvifour(maxv);dvifour(maxh);
dviout(maxpush div 256);dviout(maxpush mod 256);
dviout((totalpages div 256)mod 256);dviout(totalpages mod 256);{643:}
while fontptr>fontbase do begin if fontused[fontptr]then dvifontdef(
fontptr);fontptr:=fontptr-1;end{:643};dviout(postpost);dvifour(lastbop);
dviout(idbyte);k:=4+((dvibufsize-dviptr)mod 4);
while k>0 do begin dviout(223);k:=k-1;end;{599:}
if dvilimit=halfbuf then writedvi(halfbuf,dvibufsize-1);
if dviptr>0 then writedvi(0,dviptr-1){:599};printnl(strprotector(838));
slowprint(outputfilename);print(strprotector(300));printint(totalpages);
print(strprotector(839));if totalpages<>1 then printchar(tobar('s'));
print(strprotector(840));printint(dvioffset+dviptr);
print(strprotector(841));bclose(dvifile);end{:642};
if logopened then begin writeln(logfile);aclose(logfile);
selector:=selector-2;
if selector=termonly then begin printnl(strprotector(1274));
slowprint(logname);printchar(tobar('.'));end;end;end;{:1333}{1335:}
procedure finalcleanup;label exit;var c:smallnumber;begin c:=curchr;
if jobname=0 then openlogfile;
while inputptr>0 do if state=tokenlist then endtokenlist else
endfilereading;while openparens>0 do begin print(strprotector(1275));
openparens:=openparens-1;end;
if curlevel>levelone then begin printnl(tobar('('));
printesc(strprotector(1276));print(strprotector(1277));
printint(curlevel-levelone);printchar(tobar(')'));end;
while condptr<>0 do begin printnl(tobar('('));
printesc(strprotector(1276));print(strprotector(1278));
printcmdchr(iftest,curif);
if ifline<>0 then begin print(strprotector(1279));printint(ifline);end;
print(strprotector(1280));ifline:=fooiflinefield(condptr)^;
curif:=foosubtype(condptr)^;tempptr:=condptr;condptr:=foolink(condptr)^;
freenode(tempptr,ifnodesize);end;
if history<>spotless then if((history=warningissued)or(interaction<
errorstopmode))then if selector=termandlog then begin selector:=termonly
;printnl(strprotector(1281));selector:=termandlog;end;
if c=1 then begin for c:=topmarkcode to splitbotmarkcode do if curmark[c
]<>0 then deletetokenref(curmark[c]);storefmtfile;goto exit;
printnl(strprotector(1282));goto exit;end;exit:end;{:1335}{1336:}
procedure initprim;begin nonewcontrolsequence:=false;{226:}
primitive(strprotector(388),assignglue,gluebase+lineskipcode);
primitive(strprotector(389),assignglue,gluebase+baselineskipcode);
primitive(strprotector(390),assignglue,gluebase+parskipcode);
primitive(strprotector(391),assignglue,gluebase+abovedisplayskipcode);
primitive(strprotector(392),assignglue,gluebase+belowdisplayskipcode);
primitive(strprotector(393),assignglue,gluebase+
abovedisplayshortskipcode);
primitive(strprotector(394),assignglue,gluebase+
belowdisplayshortskipcode);
primitive(strprotector(395),assignglue,gluebase+leftskipcode);
primitive(strprotector(396),assignglue,gluebase+rightskipcode);
primitive(strprotector(397),assignglue,gluebase+topskipcode);
primitive(strprotector(398),assignglue,gluebase+splittopskipcode);
primitive(strprotector(399),assignglue,gluebase+tabskipcode);
primitive(strprotector(400),assignglue,gluebase+spaceskipcode);
primitive(strprotector(401),assignglue,gluebase+xspaceskipcode);
primitive(strprotector(402),assignglue,gluebase+parfillskipcode);
primitive(strprotector(403),assignmuglue,gluebase+thinmuskipcode);
primitive(strprotector(404),assignmuglue,gluebase+medmuskipcode);
primitive(strprotector(405),assignmuglue,gluebase+thickmuskipcode);
{:226}{230:}primitive(strprotector(409),assigntoks,outputroutineloc);
primitive(strprotector(410),assigntoks,everyparloc);
primitive(strprotector(411),assigntoks,everymathloc);
primitive(strprotector(412),assigntoks,everydisplayloc);
primitive(strprotector(413),assigntoks,everyhboxloc);
primitive(strprotector(414),assigntoks,everyvboxloc);
primitive(strprotector(415),assigntoks,everyjobloc);
primitive(strprotector(416),assigntoks,everycrloc);
primitive(strprotector(417),assigntoks,errhelploc);{:230}{238:}
primitive(strprotector(431),assignint,intbase+pretolerancecode);
primitive(strprotector(432),assignint,intbase+tolerancecode);
primitive(strprotector(433),assignint,intbase+linepenaltycode);
primitive(strprotector(434),assignint,intbase+hyphenpenaltycode);
primitive(strprotector(435),assignint,intbase+exhyphenpenaltycode);
primitive(strprotector(436),assignint,intbase+clubpenaltycode);
primitive(strprotector(437),assignint,intbase+widowpenaltycode);
primitive(strprotector(438),assignint,intbase+displaywidowpenaltycode);
primitive(strprotector(439),assignint,intbase+brokenpenaltycode);
primitive(strprotector(440),assignint,intbase+binoppenaltycode);
primitive(strprotector(441),assignint,intbase+relpenaltycode);
primitive(strprotector(442),assignint,intbase+predisplaypenaltycode);
primitive(strprotector(443),assignint,intbase+postdisplaypenaltycode);
primitive(strprotector(444),assignint,intbase+interlinepenaltycode);
primitive(strprotector(445),assignint,intbase+doublehyphendemeritscode);
primitive(strprotector(446),assignint,intbase+finalhyphendemeritscode);
primitive(strprotector(447),assignint,intbase+adjdemeritscode);
primitive(strprotector(448),assignint,intbase+magcode);
primitive(strprotector(449),assignint,intbase+delimiterfactorcode);
primitive(strprotector(450),assignint,intbase+loosenesscode);
primitive(strprotector(451),assignint,intbase+timecode);
primitive(strprotector(452),assignint,intbase+daycode);
primitive(strprotector(453),assignint,intbase+monthcode);
primitive(strprotector(454),assignint,intbase+yearcode);
primitive(strprotector(455),assignint,intbase+showboxbreadthcode);
primitive(strprotector(456),assignint,intbase+showboxdepthcode);
primitive(strprotector(457),assignint,intbase+hbadnesscode);
primitive(strprotector(458),assignint,intbase+vbadnesscode);
primitive(strprotector(459),assignint,intbase+pausingcode);
primitive(strprotector(460),assignint,intbase+tracingonlinecode);
primitive(strprotector(461),assignint,intbase+tracingmacroscode);
primitive(strprotector(462),assignint,intbase+tracingstatscode);
primitive(strprotector(463),assignint,intbase+tracingparagraphscode);
primitive(strprotector(464),assignint,intbase+tracingpagescode);
primitive(strprotector(465),assignint,intbase+tracingoutputcode);
primitive(strprotector(466),assignint,intbase+tracinglostcharscode);
primitive(strprotector(467),assignint,intbase+tracingcommandscode);
primitive(strprotector(468),assignint,intbase+tracingrestorescode);
primitive(strprotector(469),assignint,intbase+uchyphcode);
primitive(strprotector(470),assignint,intbase+outputpenaltycode);
primitive(strprotector(471),assignint,intbase+maxdeadcyclescode);
primitive(strprotector(472),assignint,intbase+hangaftercode);
primitive(strprotector(473),assignint,intbase+floatingpenaltycode);
primitive(strprotector(474),assignint,intbase+globaldefscode);
primitive(strprotector(475),assignint,intbase+curfamcode);
primitive(strprotector(476),assignint,intbase+escapecharcode);
primitive(strprotector(477),assignint,intbase+defaulthyphencharcode);
primitive(strprotector(478),assignint,intbase+defaultskewcharcode);
primitive(strprotector(479),assignint,intbase+endlinecharcode);
primitive(strprotector(480),assignint,intbase+newlinecharcode);
primitive(strprotector(481),assignint,intbase+languagecode);
primitive(strprotector(482),assignint,intbase+lefthyphenmincode);
primitive(strprotector(483),assignint,intbase+righthyphenmincode);
primitive(strprotector(484),assignint,intbase+holdinginsertscode);
primitive(strprotector(485),assignint,intbase+errorcontextlinescode);
{:238}{248:}
primitive(strprotector(489),assigndimen,dimenbase+parindentcode);
primitive(strprotector(490),assigndimen,dimenbase+mathsurroundcode);
primitive(strprotector(491),assigndimen,dimenbase+lineskiplimitcode);
primitive(strprotector(492),assigndimen,dimenbase+hsizecode);
primitive(strprotector(493),assigndimen,dimenbase+vsizecode);
primitive(strprotector(494),assigndimen,dimenbase+maxdepthcode);
primitive(strprotector(495),assigndimen,dimenbase+splitmaxdepthcode);
primitive(strprotector(496),assigndimen,dimenbase+boxmaxdepthcode);
primitive(strprotector(497),assigndimen,dimenbase+hfuzzcode);
primitive(strprotector(498),assigndimen,dimenbase+vfuzzcode);
primitive(strprotector(499),assigndimen,dimenbase+delimitershortfallcode
);
primitive(strprotector(500),assigndimen,dimenbase+nulldelimiterspacecode
);primitive(strprotector(501),assigndimen,dimenbase+scriptspacecode);
primitive(strprotector(502),assigndimen,dimenbase+predisplaysizecode);
primitive(strprotector(503),assigndimen,dimenbase+displaywidthcode);
primitive(strprotector(504),assigndimen,dimenbase+displayindentcode);
primitive(strprotector(505),assigndimen,dimenbase+overfullrulecode);
primitive(strprotector(506),assigndimen,dimenbase+hangindentcode);
primitive(strprotector(507),assigndimen,dimenbase+hoffsetcode);
primitive(strprotector(508),assigndimen,dimenbase+voffsetcode);
primitive(strprotector(509),assigndimen,dimenbase+emergencystretchcode);
{:248}{265:}primitive(tobar(' '),exspace,0);
primitive(tobar('/'),italcorr,0);primitive(strprotector(519),accent,0);
primitive(strprotector(520),advance,0);
primitive(strprotector(521),afterassignment,0);
primitive(strprotector(522),aftergroup,0);
primitive(strprotector(523),begingroup,0);
primitive(strprotector(524),charnum,0);
primitive(strprotector(515),csname,0);
primitive(strprotector(525),delimnum,0);
primitive(strprotector(526),divide,0);
primitive(strprotector(516),endcsname,0);
primitive(strprotector(527),endgroup,0);
footext(frozenendgroup)^:=strprotector(527);
eqtb[frozenendgroup]:=eqtb[curval];
primitive(strprotector(528),expandafter,0);
primitive(strprotector(529),deffont,0);
primitive(strprotector(530),assignfontdimen,0);
primitive(strprotector(531),halign,0);
primitive(strprotector(532),hrule,0);
primitive(strprotector(533),ignorespaces,0);
primitive(strprotector(343),insert,0);
primitive(strprotector(363),mark,0);
primitive(strprotector(534),mathaccent,0);
primitive(strprotector(535),mathcharnum,0);
primitive(strprotector(536),mathchoice,0);
primitive(strprotector(537),multiply,0);
primitive(strprotector(538),noalign,0);
primitive(strprotector(539),noboundary,0);
primitive(strprotector(540),noexpand,0);
primitive(strprotector(348),nonscript,0);
primitive(strprotector(541),omit,0);
primitive(strprotector(419),setshape,0);
primitive(strprotector(542),breakpenalty,0);
primitive(strprotector(543),setprevgraf,0);
primitive(strprotector(544),radical,0);
primitive(strprotector(545),readtocs,0);
primitive(strprotector(546),relax,256);
footext(frozenrelax)^:=strprotector(546);
eqtb[frozenrelax]:=eqtb[curval];primitive(strprotector(547),setbox,0);
primitive(strprotector(548),the,0);
primitive(strprotector(418),toksregister,0);
primitive(strprotector(364),vadjust,0);
primitive(strprotector(549),valign,0);
primitive(strprotector(550),vcenter,0);
primitive(strprotector(551),vrule,0);{:265}{334:}
primitive(strprotector(606),parend,256);parloc:=curval;
partoken:=cstokenflag+parloc;{:334}{376:}
primitive(strprotector(638),input,0);
primitive(strprotector(639),input,1);{:376}{384:}
primitive(strprotector(640),topbotmark,topmarkcode);
primitive(strprotector(641),topbotmark,firstmarkcode);
primitive(strprotector(642),topbotmark,botmarkcode);
primitive(strprotector(643),topbotmark,splitfirstmarkcode);
primitive(strprotector(644),topbotmark,splitbotmarkcode);{:384}{411:}
primitive(strprotector(487),register,intval);
primitive(strprotector(511),register,dimenval);
primitive(strprotector(407),register,glueval);
primitive(strprotector(408),register,muval);{:411}{416:}
primitive(strprotector(677),setaux,hmode);
primitive(strprotector(678),setaux,vmode);
primitive(strprotector(679),setpageint,0);
primitive(strprotector(680),setpageint,1);
primitive(strprotector(681),setboxdimen,widthoffset);
primitive(strprotector(682),setboxdimen,heightoffset);
primitive(strprotector(683),setboxdimen,depthoffset);
primitive(strprotector(684),lastitem,intval);
primitive(strprotector(685),lastitem,dimenval);
primitive(strprotector(686),lastitem,glueval);
primitive(strprotector(687),lastitem,inputlinenocode);
primitive(strprotector(688),lastitem,badnesscode);{:416}{468:}
primitive(strprotector(744),convert,numbercode);
primitive(strprotector(745),convert,romannumeralcode);
primitive(strprotector(746),convert,stringcode);
primitive(strprotector(747),convert,meaningcode);
primitive(strprotector(748),convert,fontnamecode);
primitive(strprotector(749),convert,jobnamecode);{:468}{487:}
primitive(strprotector(764),iftest,ifcharcode);
primitive(strprotector(765),iftest,ifcatcode);
primitive(strprotector(766),iftest,ifintcode);
primitive(strprotector(767),iftest,ifdimcode);
primitive(strprotector(768),iftest,ifoddcode);
primitive(strprotector(769),iftest,ifvmodecode);
primitive(strprotector(770),iftest,ifhmodecode);
primitive(strprotector(771),iftest,ifmmodecode);
primitive(strprotector(772),iftest,ifinnercode);
primitive(strprotector(773),iftest,ifvoidcode);
primitive(strprotector(774),iftest,ifhboxcode);
primitive(strprotector(775),iftest,ifvboxcode);
primitive(strprotector(776),iftest,ifxcode);
primitive(strprotector(777),iftest,ifeofcode);
primitive(strprotector(778),iftest,iftruecode);
primitive(strprotector(779),iftest,iffalsecode);
primitive(strprotector(780),iftest,ifcasecode);{:487}{491:}
primitive(strprotector(781),fiorelse,ficode);
footext(frozenfi)^:=strprotector(781);eqtb[frozenfi]:=eqtb[curval];
primitive(strprotector(782),fiorelse,orcode);
primitive(strprotector(783),fiorelse,elsecode);{:491}{553:}
primitive(strprotector(803),setfont,nullfont);
footext(frozennullfont)^:=strprotector(803);
eqtb[frozennullfont]:=eqtb[curval];{:553}{780:}
primitive(strprotector(897),tabmark,spancode);
primitive(strprotector(898),carret,crcode);
footext(frozencr)^:=strprotector(898);eqtb[frozencr]:=eqtb[curval];
primitive(strprotector(899),carret,crcrcode);
footext(frozenendtemplate)^:=strprotector(900);
footext(frozenendv)^:=strprotector(900);fooeqtype(frozenendv)^:=endv;
fooequiv(frozenendv)^:=nulllist;fooeqlevel(frozenendv)^:=levelone;
eqtb[frozenendtemplate]:=eqtb[frozenendv];
fooeqtype(frozenendtemplate)^:=endtemplate;{:780}{983:}
primitive(strprotector(969),setpagedimen,0);
primitive(strprotector(970),setpagedimen,1);
primitive(strprotector(971),setpagedimen,2);
primitive(strprotector(972),setpagedimen,3);
primitive(strprotector(973),setpagedimen,4);
primitive(strprotector(974),setpagedimen,5);
primitive(strprotector(975),setpagedimen,6);
primitive(strprotector(976),setpagedimen,7);{:983}{1052:}
primitive(strprotector(1024),stop,0);
primitive(strprotector(1025),stop,1);{:1052}{1058:}
primitive(strprotector(1026),hskip,skipcode);
primitive(strprotector(1027),hskip,filcode);
primitive(strprotector(1028),hskip,fillcode);
primitive(strprotector(1029),hskip,sscode);
primitive(strprotector(1030),hskip,filnegcode);
primitive(strprotector(1031),vskip,skipcode);
primitive(strprotector(1032),vskip,filcode);
primitive(strprotector(1033),vskip,fillcode);
primitive(strprotector(1034),vskip,sscode);
primitive(strprotector(1035),vskip,filnegcode);
primitive(strprotector(349),mskip,mskipcode);
primitive(strprotector(352),kern,explicit);
primitive(strprotector(354),mkern,muglue);{:1058}{1071:}
primitive(strprotector(1053),hmove,1);
primitive(strprotector(1054),hmove,0);
primitive(strprotector(1055),vmove,1);
primitive(strprotector(1056),vmove,0);
primitive(strprotector(420),makebox,boxcode);
primitive(strprotector(1057),makebox,copycode);
primitive(strprotector(1058),makebox,lastboxcode);
primitive(strprotector(964),makebox,vsplitcode);
primitive(strprotector(1059),makebox,vtopcode);
primitive(strprotector(966),makebox,vtopcode+vmode);
primitive(strprotector(1060),makebox,vtopcode+hmode);
primitive(strprotector(1061),leadership,aleaders-1);
primitive(strprotector(1062),leadership,aleaders);
primitive(strprotector(1063),leadership,cleaders);
primitive(strprotector(1064),leadership,xleaders);{:1071}{1088:}
primitive(strprotector(1079),startpar,1);
primitive(strprotector(1080),startpar,0);{:1088}{1107:}
primitive(strprotector(1089),removeitem,penaltynode);
primitive(strprotector(1090),removeitem,kernnode);
primitive(strprotector(1091),removeitem,gluenode);
primitive(strprotector(1092),unhbox,boxcode);
primitive(strprotector(1093),unhbox,copycode);
primitive(strprotector(1094),unvbox,boxcode);
primitive(strprotector(1095),unvbox,copycode);{:1107}{1114:}
primitive(tobar('-'),discretionary,1);
primitive(strprotector(361),discretionary,0);{:1114}{1141:}
primitive(strprotector(1126),eqno,0);
primitive(strprotector(1127),eqno,1);{:1141}{1156:}
primitive(strprotector(866),mathcomp,ordnoad);
primitive(strprotector(867),mathcomp,opnoad);
primitive(strprotector(868),mathcomp,binnoad);
primitive(strprotector(869),mathcomp,relnoad);
primitive(strprotector(870),mathcomp,opennoad);
primitive(strprotector(871),mathcomp,closenoad);
primitive(strprotector(872),mathcomp,punctnoad);
primitive(strprotector(873),mathcomp,innernoad);
primitive(strprotector(875),mathcomp,undernoad);
primitive(strprotector(874),mathcomp,overnoad);
primitive(strprotector(1128),limitswitch,normal);
primitive(strprotector(878),limitswitch,limits);
primitive(strprotector(879),limitswitch,nolimits);{:1156}{1169:}
primitive(strprotector(861),mathstyle,displaystyle);
primitive(strprotector(862),mathstyle,textstyle);
primitive(strprotector(863),mathstyle,scriptstyle);
primitive(strprotector(864),mathstyle,scriptscriptstyle);{:1169}{1178:}
primitive(strprotector(1146),above,abovecode);
primitive(strprotector(1147),above,overcode);
primitive(strprotector(1148),above,atopcode);
primitive(strprotector(1149),above,delimitedcode+abovecode);
primitive(strprotector(1150),above,delimitedcode+overcode);
primitive(strprotector(1151),above,delimitedcode+atopcode);{:1178}
{1188:}primitive(strprotector(876),leftright,leftnoad);
primitive(strprotector(877),leftright,rightnoad);
footext(frozenright)^:=strprotector(877);
eqtb[frozenright]:=eqtb[curval];{:1188}{1208:}
primitive(strprotector(1170),prefix,1);
primitive(strprotector(1171),prefix,2);
primitive(strprotector(1172),prefix,4);
primitive(strprotector(1173),def,0);primitive(strprotector(1174),def,1);
primitive(strprotector(1175),def,2);primitive(strprotector(1176),def,3);
{:1208}{1219:}primitive(strprotector(1190),let,normal);
primitive(strprotector(1191),let,normal+1);{:1219}{1222:}
primitive(strprotector(1192),shorthanddef,chardefcode);
primitive(strprotector(1193),shorthanddef,mathchardefcode);
primitive(strprotector(1194),shorthanddef,countdefcode);
primitive(strprotector(1195),shorthanddef,dimendefcode);
primitive(strprotector(1196),shorthanddef,skipdefcode);
primitive(strprotector(1197),shorthanddef,muskipdefcode);
primitive(strprotector(1198),shorthanddef,toksdefcode);{:1222}{1230:}
primitive(strprotector(426),defcode,catcodebase);
primitive(strprotector(430),defcode,mathcodebase);
primitive(strprotector(427),defcode,lccodebase);
primitive(strprotector(428),defcode,uccodebase);
primitive(strprotector(429),defcode,sfcodebase);
primitive(strprotector(488),defcode,delcodebase);
primitive(strprotector(423),deffamily,mathfontbase);
primitive(strprotector(424),deffamily,mathfontbase+scriptsize);
primitive(strprotector(425),deffamily,mathfontbase+scriptscriptsize);
{:1230}{1250:}primitive(strprotector(940),hyphdata,0);
primitive(strprotector(952),hyphdata,1);{:1250}{1254:}
primitive(strprotector(1216),assignfontint,0);
primitive(strprotector(1217),assignfontint,1);{:1254}{1262:}
primitive(strprotector(288),setinteraction,batchmode);
primitive(strprotector(289),setinteraction,nonstopmode);
primitive(strprotector(290),setinteraction,scrollmode);
primitive(strprotector(1226),setinteraction,errorstopmode);{:1262}
{1272:}primitive(strprotector(1227),instream,1);
primitive(strprotector(1228),instream,0);{:1272}{1277:}
primitive(strprotector(1229),message,0);
primitive(strprotector(1230),message,1);{:1277}{1286:}
primitive(strprotector(1236),caseshift,lccodebase);
primitive(strprotector(1237),caseshift,uccodebase);{:1286}{1291:}
primitive(strprotector(1238),xray,showcode);
primitive(strprotector(1239),xray,showboxcode);
primitive(strprotector(1240),xray,showthecode);
primitive(strprotector(1241),xray,showlists);{:1291}{1344:}
primitive(strprotector(1284),extension,opennode);
primitive(strprotector(603),extension,writenode);writeloc:=curval;
primitive(strprotector(1285),extension,closenode);
primitive(strprotector(1286),extension,specialnode);
primitive(strprotector(1287),extension,immediatecode);
primitive(strprotector(1288),extension,setlanguagecode);{:1344};
nonewcontrolsequence:=true;end;{:1336}{1338:}{_DEBUG}
procedure debughelp;label breakpoint,exit;var k,l,m,n:integer;
begin while true do begin;printnl(strprotector(1283));fflush(termout);
read(termin,m);
if m<0 then goto exit else if m=0 then begin goto breakpoint;
breakpoint:m:=0;{'BREAKPOINT'}
end else begin read(termin,n);case m of{1339:}1:printword(mem[n]);
2:printint(fooinfo(n)^);3:printint(foolink(n)^);4:printword(eqtb[n]);
5:printword(fontinfo[n]);6:printword(savestack[n]);7:showbox(n);
8:begin breadthmax:=10000;depththreshold:=poolsize-poolptr-10;
shownodelist(n);end;9:showtokenlist(n,0,1000);10:slowprint(n);
11:checkmem(n>0);12:searchmem(n);13:begin read(termin,l);
printcmdchr(n,l);end;14:for k:=0 to n do print(buffer[k]);
15:begin fontinshortdisplay:=nullfont;shortdisplay(n);end;
16:panicking:=not panicking;{:1339}otherwise print(tobar('?'))end;end;
end;exit:end;{_ENDDEBUG}{:1338}{:1330}{1332:}begin fooinit;
history:=fatalerrorstop;topenout;
if readyalready=314159 then goto startofTEX;{14:}bad:=0;
if(halferrorline<30)or(halferrorline>errorline-15)then bad:=1;
if maxprintline<60 then bad:=2;if dvibufsize mod 8<>0 then bad:=3;
if membot+1100>memtop then bad:=4;if hashprime>hashsize then bad:=5;
if maxinopen>=128 then bad:=6;if memtop<267 then bad:=7;{:14}{111:}
if(memmin<>membot)or(memmax<>memtop)then bad:=10;
if(memmin>membot)or(memmax<memtop)then bad:=10;
if(minquarterword>0)or(maxquarterword<127)then bad:=11;
if(0>0)or(maxhalfword<32767)then bad:=12;
if(minquarterword<0)or(maxquarterword>maxhalfword)then bad:=13;
if(memmin<0)or(memmax>=maxhalfword)or(membot-memmin>maxhalfword+1)then
bad:=14;
if(fontbase<minquarterword)or(fontmax>maxquarterword)then bad:=15;
if fontmax>fontbase+256 then bad:=16;
if(savesize>maxhalfword)or(maxstrings>maxhalfword)then bad:=17;
if bufsize>maxhalfword then bad:=18;
if maxquarterword-minquarterword<255 then bad:=19;{:111}{290:}
if cstokenflag+undefinedcontrolsequence>maxhalfword then bad:=21;{:290}
{522:}if formatdefaultlength>filenamesize then bad:=31;{:522}{1249:}
if 2*maxhalfword<memtop-memmin then bad:=41;{:1249}
if bad>0 then begin writeln(termout,
'Ouch---my internal constants have been clobbered!','---case ',bad:1);
goto finalend;end;initialize;
if not getstringsstarted then goto finalend;initprim;initstrptr:=strptr;
initpoolptr:=poolptr;fixdateandtime;readyalready:=314159;
startofTEX:{55:}selector:=termonly;tally:=0;termoffset:=0;fileoffset:=0;
{:55}{61:}write(termout,banner);
if formatident=0 then writeln(termout,' (no format preloaded)')else
begin slowprint(formatident);println;end;fflush(termout);{:61}{528:}
jobname:=0;nameinprogress:=false;logopened:=false;{:528}{533:}
outputfilename:=0;{:533};{1337:}begin{331:}begin inputptr:=0;
maxinstack:=0;inopen:=0;openparens:=0;maxbufstack:=0;paramptr:=0;
maxparamstack:=0;first:=bufsize;repeat buffer[first]:=0;first:=first-1;
until first=0;scannerstatus:=normal;warningindex:=0;first:=1;
state:=newline;start:=1;iindex:=0;line:=0;name:=0;forceeof:=false;
alignstate:=1000000;if not initterminal then goto finalend;limit:=last;
first:=last+1;end{:331};
if(formatident=0)or(buffer[loc]=tobar('&'))then begin if formatident<>0
then initialize;if not openfmtfile then goto finalend;
if not loadfmtfile then begin wclose(fmtfile);goto finalend;end;
wclose(fmtfile);
while(loc<limit)and(buffer[loc]=tobar(' '))do loc:=loc+1;end;
if endlinecharinactive then limit:=limit-1 else buffer[limit]:=
endlinechar;fixdateandtime;{765:}
magicoffset:=strstart[256]-9*ordnoad{:765};{75:}
if interaction=batchmode then selector:=noprint else selector:=termonly{
:75};if(loc<limit)and(foocatcode(buffer[loc])^<>escape)then startinput;
end{:1337};history:=spotless;maincontrol;finalcleanup;
endofTEX:closefilesandterminate;finalend:readyalready:=0;end.{:1332}
