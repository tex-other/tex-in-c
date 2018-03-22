/* Do NOT edit - this is generated file */
#line 1 "printout.ppc"
#include "tex.h"
#include "p2c.h"
#include "str.h"
#include "printout.h"
#include "fonts.h"
#include "texfunc.h"

/*247:*/
void printlengthparam(long n)
{
  switch (n) {

  case parindentcode:
    printesc(S(1090));
    break;

  case mathsurroundcode:
    printesc(S(1091));
    break;

  case lineskiplimitcode:
    printesc(S(1092));
    break;

  case hsizecode:
    printesc(S(1093));
    break;

  case vsizecode:
    printesc(S(1094));
    break;

  case maxdepthcode:
    printesc(S(1095));
    break;

  case splitmaxdepthcode:
    printesc(S(1096));
    break;

  case boxmaxdepthcode:
    printesc(S(1097));
    break;

  case hfuzzcode:
    printesc(S(1098));
    break;

  case vfuzzcode:
    printesc(S(1099));
    break;

  case delimitershortfallcode:
    printesc(S(1100));
    break;

  case nulldelimiterspacecode:
    printesc(S(1101));
    break;

  case scriptspacecode:
    printesc(S(1102));
    break;

  case predisplaysizecode:
    printesc(S(1103));
    break;

  case displaywidthcode:
    printesc(S(1104));
    break;

  case displayindentcode:
    printesc(S(1105));
    break;

  case overfullrulecode:
    printesc(S(1106));
    break;

  case hangindentcode:
    printesc(S(1107));
    break;

  case hoffsetcode:
    printesc(S(1108));
    break;

  case voffsetcode:
    printesc(S(1109));
    break;

  case emergencystretchcode:
    printesc(S(1110));
    break;

  default:
    print(S(1255));
    break;
  }
}
/*:247*/

/*237:*/
void printparam(long n)
{
  switch (n) {

  case pretolerancecode:
    printesc(S(1036));
    break;

  case tolerancecode:
    printesc(S(1037));
    break;

  case linepenaltycode:
    printesc(S(1038));
    break;

  case hyphenpenaltycode:
    printesc(S(1039));
    break;

  case exhyphenpenaltycode:
    printesc(S(1040));
    break;

  case clubpenaltycode:
    printesc(S(1041));
    break;

  case widowpenaltycode:
    printesc(S(1042));
    break;

  case displaywidowpenaltycode:
    printesc(S(1043));
    break;

  case brokenpenaltycode:
    printesc(S(1044));
    break;

  case binoppenaltycode:
    printesc(S(1045));
    break;

  case relpenaltycode:
    printesc(S(1046));
    break;

  case predisplaypenaltycode:
    printesc(S(1047));
    break;

  case postdisplaypenaltycode:
    printesc(S(1048));
    break;

  case interlinepenaltycode:
    printesc(S(1049));
    break;

  case doublehyphendemeritscode:
    printesc(S(1050));
    break;

  case finalhyphendemeritscode:
    printesc(S(1051));
    break;

  case adjdemeritscode:
    printesc(S(1052));
    break;

  case magcode:
    printesc(S(1053));
    break;

  case delimiterfactorcode:
    printesc(S(1054));
    break;

  case loosenesscode:
    printesc(S(1055));
    break;

  case timecode:
    printesc(S(1056));
    break;

  case daycode:
    printesc(S(1057));
    break;

  case monthcode:
    printesc(S(1058));
    break;

  case yearcode:
    printesc(S(1059));
    break;

  case showboxbreadthcode:
    printesc(S(1060));
    break;

  case showboxdepthcode:
    printesc(S(1061));
    break;

  case hbadnesscode:
    printesc(S(1062));
    break;

  case vbadnesscode:
    printesc(S(1063));
    break;

  case pausingcode:
    printesc(S(1064));
    break;

  case tracingonlinecode:
    printesc(S(1065));
    break;

  case tracingmacroscode:
    printesc(S(1066));
    break;

  case tracingstatscode:
    printesc(S(1067));
    break;

  case tracingparagraphscode:
    printesc(S(1068));
    break;

  case tracingpagescode:
    printesc(S(1069));
    break;

  case tracingoutputcode:
    printesc(S(1070));
    break;

  case tracinglostcharscode:
    printesc(S(1071));
    break;

  case tracingcommandscode:
    printesc(S(1072));
    break;

  case tracingrestorescode:
    printesc(S(1073));
    break;

  case uchyphcode:
    printesc(S(1074));
    break;

  case outputpenaltycode:
    printesc(S(1075));
    break;

  case maxdeadcyclescode:
    printesc(S(1076));
    break;

  case hangaftercode:
    printesc(S(1077));
    break;

  case floatingpenaltycode:
    printesc(S(1078));
    break;

  case globaldefscode:
    printesc(S(1079));
    break;

  case curfamcode:
    printesc(S(333));
    break;

  case escapecharcode:
    printesc(S(1080));
    break;

  case defaulthyphencharcode:
    printesc(S(1081));
    break;

  case defaultskewcharcode:
    printesc(S(1082));
    break;

  case endlinecharcode:
    printesc(S(1083));
    break;

  case newlinecharcode:
    printesc(S(1084));
    break;

  case languagecode:
    printesc(S(1085));
    break;

  case lefthyphenmincode:
    printesc(S(1086));
    break;

  case righthyphenmincode:
    printesc(S(1087));
    break;

  case holdinginsertscode:
    printesc(S(1088));
    break;

  case errorcontextlinescode:
    printesc(S(1089));
    break;

  default:
    print(S(1256));
    break;
  }
}


void printcmdchr(quarterword cmd, halfword chrcode)
{
  switch (cmd) {

  case leftbrace:
    chrcmd(S(1257));
    break;

  case rightbrace:
    chrcmd(S(1258));
    break;

  case mathshift:
    chrcmd(S(1259));
    break;

  case macparam:
    chrcmd(S(1260));
    break;

  case supmark:
    chrcmd(S(1261));
    break;

  case submark:
    chrcmd(S(1262));
    break;

  case endv:
    print(S(1263));
    break;

  case spacer:
    chrcmd(S(1264));
    break;

  case letter:
    chrcmd(S(1265));
    break;

  case otherchar:
    chrcmd(S(1266));
    break;

  /*227:*/
  case assignglue:
  case assignmuglue:   /*:227*/
    if (chrcode < skipbase)
      printskipparam(chrcode - gluebase);
    else if (chrcode < muskipbase) {
      printesc(S(460));
      printint(chrcode - skipbase);
    } else {
      printesc(S(461));
      printint(chrcode - muskipbase);
    }
    break;
    /*231:*/

  case assigntoks:   /*:231*/
    if (chrcode >= toksbase) {
      printesc(S(463));
      printint(chrcode - toksbase);
    } else {
      switch (chrcode) {

      case outputroutineloc:
	printesc(S(1027));
	break;

      case everyparloc:
	printesc(S(1028));
	break;

      case everymathloc:
	printesc(S(1029));
	break;

      case everydisplayloc:
	printesc(S(1030));
	break;

      case everyhboxloc:
	printesc(S(1031));
	break;

      case everyvboxloc:
	printesc(S(1032));
	break;

      case everyjobloc:
	printesc(S(1033));
	break;

      case everycrloc:
	printesc(S(1034));
	break;

      default:
	printesc(S(1035));
	break;
      }
    }
    break;
    /*239:*/

  case assignint:
    if (chrcode < countbase)
      printparam(chrcode - intbase);
    else {
      printesc(S(472));
      printint(chrcode - countbase);
    }  /*:239*/
    break;

  /*249:*/
  case assigndimen:   /*:249*/
    if (chrcode < scaledbase)
      printlengthparam(chrcode - dimenbase);
    else {
      printesc(S(474));
      printint(chrcode - scaledbase);
    }
    break;
    /*266:*/

  case accent:
    printesc(S(417));
    break;

  case advance:
    printesc(S(1111));
    break;

  case afterassignment:
    printesc(S(1112));
    break;

  case aftergroup:
    printesc(S(1113));
    break;

  case assignfontdimen:
    printesc(S(1120));
    break;

  case begingroup:
    printesc(S(1114));
    break;

  case breakpenalty:
    printesc(S(762));
    break;

  case charnum:
    printesc(S(1115));
    break;

  case csname:
    printesc(S(262));
    break;

  case deffont:
    printesc(S(1119));
    break;

  case delimnum:
    printesc(S(1116));
    break;

  case divide:
    printesc(S(1117));
    break;

  case endcsname:
    printesc(S(263));
    break;

  case endgroup:
    printesc(S(837));
    break;

  case exspace:
    printesc(' ');
    break;

  case expandafter:
    printesc(S(1118));
    break;

  case halign:
    printesc(S(725));
    break;

  case hrule:
    printesc(S(864));
    break;

  case ignorespaces:
    printesc(S(1121));
    break;

  case insert_:
    printesc(S(374));
    break;

  case italcorr:
    printesc('/');
    break;

  case mark_:
    printesc(S(402));
    break;

  case mathaccent:
    printesc(S(914));
    break;

  case mathcharnum:
    printesc(S(1122));
    break;

  case mathchoice:
    printesc(S(404));
    break;

  case multiply:
    printesc(S(1123));
    break;

  case noalign:
    printesc(S(898));
    break;

  case noboundary:
    printesc(S(1124));
    break;

  case noexpand:
    printesc(S(1125));
    break;

  case nonscript:
    printesc(S(388));
    break;

  case omit:
    printesc(S(901));
    break;

  case radical:
    printesc(S(416));
    break;

  case readtocs:
    printesc(S(656));
    break;

  case relax:
    printesc(S(1126));
    break;

  case setbox:
    printesc(S(971));
    break;

  case setprevgraf:
    printesc(S(949));
    break;

  case setshape:
    printesc(S(462));
    break;

  case the:
    printesc(S(604));
    break;

  case toksregister:
    printesc(S(463));
    break;

  case vadjust:
    printesc(S(403));
    break;

  case valign:
    printesc(S(1127));
    break;

  case vcenter:
    printesc(S(415));
    break;

  case vrule:
    printesc(S(1128));
    break;

  /*:266*/
  /*335:*/
  case parend:
    printesc(S(761));
    break;

  /*:335*/
  /*377:*/
  case input:   /*:377*/
    if (chrcode == 0)
      printesc(S(1129));
    else
      printesc(S(1130));
    break;
    /*385:*/

  case topbotmark:   /*:385*/
    switch (chrcode) {

    case firstmarkcode:
      printesc(S(1132));
      break;

    case botmarkcode:
      printesc(S(1133));
      break;

    case splitfirstmarkcode:
      printesc(S(1134));
      break;

    case splitbotmarkcode:
      printesc(S(1135));
      break;

    default:
      printesc(S(1131));
      break;
    }
    break;
    /*412:*/

  case register_:   /*:412*/
    if (chrcode == intval)
      printesc(S(472));
    else if (chrcode == dimenval)
      printesc(S(474));
    else if (chrcode == glueval)
      printesc(S(460));
    else
      printesc(S(461));
    break;

  /*417:*/
  case setaux:
    if (chrcode == vmode)
      printesc(S(1137));
    else
      printesc(S(1136));
    break;

  case setpageint:
    if (chrcode == 0)
      printesc(S(1138));
    else
      printesc(S(1139));
    break;

  case setboxdimen:
    if (chrcode == widthoffset)
      printesc(S(1140));
    else {
      if (chrcode == heightoffset)
	printesc(S(1141));
      else
	printesc(S(1142));
    }
    break;

  case lastitem:   /*:417*/
    switch (chrcode) {

    case intval:
      printesc(S(1143));
      break;

    case dimenval:
      printesc(S(1144));
      break;

    case glueval:
      printesc(S(1145));
      break;

    case inputlinenocode:
      printesc(S(1146));
      break;

    default:
      printesc(S(1147));
      break;
    }
    break;
    /*469:*/

  case convert:   /*:469*/
    switch (chrcode) {

    case numbercode:
      printesc(S(1148));
      break;

    case romannumeralcode:
      printesc(S(1149));
      break;

    case stringcode:
      printesc(S(1150));
      break;

    case meaningcode:
      printesc(S(1151));
      break;

    case fontnamecode:
      printesc(S(1152));
      break;

    default:
      printesc(S(1153));
      break;
    }
    break;
    /*488:*/

  case iftest:   /*:488*/
    switch (chrcode) {

    case ifcatcode:
      printesc(S(1154));
      break;

    case ifintcode:
      printesc(S(1155));
      break;

    case ifdimcode:
      printesc(S(1156));
      break;

    case ifoddcode:
      printesc(S(1157));
      break;

    case ifvmodecode:
      printesc(S(1158));
      break;

    case ifhmodecode:
      printesc(S(1159));
      break;

    case ifmmodecode:
      printesc(S(1160));
      break;

    case ifinnercode:
      printesc(S(1161));
      break;

    case ifvoidcode:
      printesc(S(1162));
      break;

    case ifhboxcode:
      printesc(S(1163));
      break;

    case ifvboxcode:
      printesc(S(1164));
      break;

    case ifxcode:
      printesc(S(1165));
      break;

    case ifeofcode:
      printesc(S(1166));
      break;

    case iftruecode:
      printesc(S(1167));
      break;

    case iffalsecode:
      printesc(S(1168));
      break;

    case ifcasecode:
      printesc(S(1169));
      break;

    default:
      printesc(S(658));
      break;
    }
    break;
    /*492:*/

  case fiorelse:   /*:492*/
    if (chrcode == ficode)
      printesc(S(1170));
    else if (chrcode == orcode)
      printesc(S(664));
    else
      printesc(S(1171));
    break;
    /*781:*/

  case tabmark:
    if (chrcode == spancode)
      printesc(S(1173));
    else {
      chrcmd(S(1267));
    }
    break;

  case carret:   /*:781*/
    if (chrcode == crcode)
      printesc(S(738));
    else
      printesc(S(1174));
    break;
    /*984:*/

  case setpagedimen:   /*:984*/
    switch (chrcode) {

    case 0:
      printesc(S(1176));
      break;

    case 1:
      printesc(S(1177));
      break;

    case 2:
      printesc(S(1178));
      break;

    case 3:
      printesc(S(1179));
      break;

    case 4:
      printesc(S(1180));
      break;

    case 5:
      printesc(S(1181));
      break;

    case 6:
      printesc(S(1182));
      break;

    default:
      printesc(S(1183));
      break;
    }
    break;
    /*1053:*/

  case stop:   /*:1053*/
    if (chrcode == 1)
      printesc(S(1185));
    else
      printesc(S(1184));
    break;
    /*1059:*/

  case hskip:
    switch (chrcode) {

    case skipcode:
      printesc(S(1186));
      break;

    case filcode:
      printesc(S(1187));
      break;

    case fillcode:
      printesc(S(1188));
      break;

    case sscode:
      printesc(S(1189));
      break;

    default:
      printesc(S(1190));
      break;
    }
    break;

  case vskip:
    switch (chrcode) {

    case skipcode:
      printesc(S(1191));
      break;

    case filcode:
      printesc(S(1192));
      break;

    case fillcode:
      printesc(S(1193));
      break;

    case sscode:
      printesc(S(1194));
      break;

    default:
      printesc(S(1195));
      break;
    }
    break;

  case mskip:
    printesc(S(389));
    break;

  case kern:
    printesc(S(391));
    break;

  case mkern:   /*:1059*/
    printesc(S(393));
    break;
    /*1072:*/

  case hmove:
    if (chrcode == 1)
      printesc(S(1196));
    else
      printesc(S(1197));
    break;

  case vmove:
    if (chrcode == 1)
      printesc(S(1198));
    else
      printesc(S(1199));
    break;

  case makebox:
    switch (chrcode) {

    case boxcode:
      printesc(S(464));
      break;

    case copycode:
      printesc(S(1200));
      break;

    case lastboxcode:
      printesc(S(1201));
      break;

    case vsplitcode:
      printesc(S(798));
      break;

    case vtopcode:
      printesc(S(1202));
      break;

    case vtopcode + vmode:
      printesc(S(800));
      break;

    default:
      printesc(S(1203));
      break;
    }
    break;

  case leadership:   /*:1072*/
    if (chrcode == aleaders)
      printesc(S(1205));
    else if (chrcode == cleaders)
      printesc(S(1206));
    else if (chrcode == xleaders)
      printesc(S(1207));
    else
      printesc(S(1204));
    break;
    /*1089:*/

  case startpar:   /*:1089*/
    if (chrcode == 0)
      printesc(S(1209));
    else
      printesc(S(1208));
    break;
    /*1108:*/

  case removeitem:
    if (chrcode == gluenode)
      printesc(S(1212));
    else if (chrcode == kernnode)
      printesc(S(1211));
    else
      printesc(S(1210));
    break;

  case unhbox:
    if (chrcode == copycode)
      printesc(S(1214));
    else
      printesc(S(1213));
    break;

  case unvbox:   /*:1108*/
    if (chrcode == copycode)
      printesc(S(1216));
    else
      printesc(S(1215));
    break;
    /*1115:*/

  case discretionary:   /*:1115*/
    if (chrcode == 1)
      printesc('-');
    else
      printesc(S(400));
    break;
    /*1143:*/

  case eqno:   /*:1143*/
    if (chrcode == 1)
      printesc(S(1218));
    else
      printesc(S(1217));
    break;
    /*1157:*/

  case mathcomp:
    switch (chrcode) {

    case ordnoad:
      printesc(S(405));
      break;

    case opnoad:
      printesc(S(406));
      break;

    case binnoad:
      printesc(S(407));
      break;

    case relnoad:
      printesc(S(408));
      break;

    case opennoad:
      printesc(S(409));
      break;

    case closenoad:
      printesc(S(410));
      break;

    case punctnoad:
      printesc(S(411));
      break;

    case innernoad:
      printesc(S(412));
      break;

    case undernoad:
      printesc(S(414));
      break;

    default:
      printesc(S(413));
      break;
    }
    break;

  case limitswitch:   /*:1157*/
    if (chrcode == limits)
      printesc(S(420));
    else if (chrcode == nolimits)
      printesc(S(421));
    else
      printesc(S(1219));
    break;
    /*1170:*/

  case mathstyle:   /*:1170*/
    printstyle(chrcode);
    break;

  /*1179:*/
  case above:   /*:1179*/
    switch (chrcode) {

    case overcode:
      printesc(S(1221));
      break;

    case atopcode:
      printesc(S(1222));
      break;

    case delimitedcode:
      printesc(S(1223));
      break;

    case delimitedcode + overcode:
      printesc(S(1224));
      break;

    case delimitedcode + atopcode:
      printesc(S(1225));
      break;

    default:
      printesc(S(1220));
      break;
    }
    break;
    /*1189:*/

  case leftright:   /*:1189*/
    if (chrcode == leftnoad)
      printesc(S(418));
    else
      printesc(S(419));
    break;
    /*1209:*/

  case prefix:
    if (chrcode == 1)
      printesc(S(960));
    else if (chrcode == 2)
      printesc(S(962));
    else
      printesc(S(1226));
    break;

  case def:   /*:1209*/
    if (chrcode == 0)
      printesc(S(1227));
    else if (chrcode == 1)
      printesc(S(1228));
    else if (chrcode == 2)
      printesc(S(1229));
    else
      printesc(S(1230));
    break;
    /*1220:*/

  case let:   /*:1220*/
    if (chrcode != normal)
      printesc(S(1232));
    else
      printesc(S(1231));
    break;
    /*1223:*/

  case shorthanddef:
    switch (chrcode) {

    case chardefcode:
      printesc(S(1233));
      break;

    case mathchardefcode:
      printesc(S(1234));
      break;

    case countdefcode:
      printesc(S(1235));
      break;

    case dimendefcode:
      printesc(S(1236));
      break;

    case skipdefcode:
      printesc(S(1237));
      break;

    case muskipdefcode:
      printesc(S(1238));
      break;

    default:
      printesc(S(1239));
      break;
    }
    break;

  case chargiven:
    printesc(S(1115));
    printhex(chrcode);
    break;

  case mathgiven:
    printesc(S(1122));
    printhex(chrcode);
    break;

  /*:1223*/
  /*1231:*/
  case defcode:
    if (chrcode == catcodebase)
      printesc(S(467));
    else if (chrcode == mathcodebase)
      printesc(S(471));
    else if (chrcode == lccodebase)
      printesc(S(468));
    else if (chrcode == uccodebase)
      printesc(S(469));
    else if (chrcode == sfcodebase)
      printesc(S(470));
    else
      printesc(S(473));
    break;

  case deffamily:   /*:1231*/
    printsize(chrcode - mathfontbase);
    break;
    /*1251:*/

  case hyphdata:   /*:1251*/
    if (chrcode == 1)
      printesc(S(775));
    else
      printesc(S(788));
    break;
    /*1255:*/

  case assignfontint:   /*:1255*/
    if (chrcode == 0)
      printesc(S(1240));
    else
      printesc(S(1241));
    break;
    /*1261:*/

  case setfont:
    print(S(1268));
    slowprint(fontname[chrcode - fontbase]);
    if (fontsize[chrcode - fontbase] != fontdsize[chrcode - fontbase]) {
      print(S(642));
      printscaled(fontsize[chrcode - fontbase]);
      print(S(459));
    }
    break;

  /*:1261*/
  /*1263:*/
  case setinteraction:   /*:1263*/
    switch (chrcode) {

    case batchmode:
      printesc(S(281));
      break;

    case nonstopmode:
      printesc(S(282));
      break;

    case scrollmode:
      printesc(S(283));
      break;

    default:
      printesc(S(1242));
      break;
    }
    break;
    /*1273:*/

  case instream:   /*:1273*/
    if (chrcode == 0)
      printesc(S(1244));
    else
      printesc(S(1243));
    break;
    /*1278:*/

  case message:   /*:1278*/
    if (chrcode == 0)
      printesc(S(1245));
    else
      printesc(S(1246));
    break;
    /*1287:*/

  case caseshift:   /*:1287*/
    if (chrcode == lccodebase)
      printesc(S(1247));
    else
      printesc(S(1248));
    break;
    /*1292:*/

  case xray:   /*:1292*/
    switch (chrcode) {

    case showboxcode:
      printesc(S(1250));
      break;

    case showthecode:
      printesc(S(1251));
      break;

    case showlists:
      printesc(S(1252));
      break;

    default:
      printesc(S(1249));
      break;
    }
    break;
    /*1295:*/

  case undefinedcs:
    print(S(1269));
    break;

  case call:
    print(S(1270));
    break;

  case longcall:
    printesc(S(1271));
    break;

  case outercall:
    printesc(S(1272));
    break;

  case longoutercall:
    printesc(S(960));
    printesc(S(1272));
    break;

  case endtemplate:   /*:1295*/
    printesc(S(1273));
    break;
    /*1346:*/

  case extension:
    switch (chrcode) {

    case opennode:
      printesc(S(378));
      break;

    case writenode:
      printesc(S(379));
      break;

    case closenode:
      printesc(S(380));
      break;

    case specialnode:
      printesc(S(381));
      break;

    case immediatecode:
      printesc(S(1253));
      break;

    case setlanguagecode:
      printesc(S(382));
      break;

    default:
      print(S(1274));
      break;
    }/*:1346*/
    break;

  default:
    print(S(1275));
    break;
  }
}

