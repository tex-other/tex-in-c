#CC=/usr/bin/g++
CC=gcc
CFLAGS = -pedantic  
#-Wall 
# -Wstrict-prototypes -Wmissing-prototypes
#-Wstrict-prototypes
#-Wmissing-prototypes
#-fprofile-arcs -ftest-coverage

OBJS=tex.o funcs.o inipool.o inputln.o printout.o str.o fonts.o dviout.o
PSRCS=tex.ppc inputln.ppc printout.ppc str.ppc fonts.ppc dviout.ppc

all: ttex 


pool_str.c: ${PSRCS}
	perl mk_pool.pl ${PSRCS}
	cmp pool_str.c1 pool_str.c || cp pool_str.c1 pool_str.c

tex.c: tex.ppc pool_str.c
	perl str2num.pl tex.ppc > tex.c

dviout.c: dviout.ppc pool_str.c
	perl str2num.pl dviout.ppc > dviout.c

inputln.c: inputln.ppc pool_str.c global.h
	perl str2num.pl inputln.ppc > inputln.c

printout.c: printout.ppc pool_str.c
	perl str2num.pl printout.ppc > printout.c

str.c: str.ppc pool_str.c
	perl str2num.pl str.ppc > str.c

fonts.c: fonts.ppc pool_str.c
	perl str2num.pl fonts.ppc > fonts.c

tex.o: tex.c tex.h p2c.h funcs.h printout.h str.h \
     global.h fonts.h texfunc.h dviout.h

str.o: str.c str.h tex.h p2c.h  

fonts.o: fonts.c tex.h p2c.h printout.h funcs.h str.h 

funcs.o: funcs.c funcs.h tex.h

inipool.o: inipool.c pool_str.c funcs.h p2c.h tex.h

inputln.o: inputln.c funcs.h p2c.h tex.h str.h

printout.o: printout.c p2c.h tex.h printout.h str.h

ttex: ${OBJS}
	${CC} -o ttex ${OBJS} -lm


clean: 
	-rm ttex ${OBJS} pool_str.c1

distclean: clean
	-rm tex.c str.c fonts.c printout.c dviout.c inputln.c pool_str.c
.PHONY: clean 
