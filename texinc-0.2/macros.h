#define pget(x) fread(&x,8,1,fmtfile)
#define pput(x) fwrite(&x,8,1,fmtfile)
#define nonchar  256

#define chrcmd(x)  (print(x),print(chrcode))

#define opbyte(x)  x.b2
#define rembyte(x)  x.b3
#define chartag(x)  (((x).b2) % 4)
#define charexists(x)  ((x).b0>minquarterword)
#define help1(x1) set_help(1,x1)
#define help2(x1,x2) set_help(2,x1,x2)
#define help3(x1,x2,x3) set_help(3,x1,x2,x3)
#define help4(x1,x2,x3,x4) set_help(4,x1,x2,x3,x4)
#define help5(x1,x2,x3,x4,x5) set_help(5,x1,x2,x3,x4,x5)
#define help6(x1,x2,x3,x4,x5,x6) set_help(6,x1,x2,x3,x4,x5,x6)
