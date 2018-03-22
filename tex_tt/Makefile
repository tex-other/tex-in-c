# CFLAGS = -fprofile-arcs -ftest-coverage
CFLAGS= -g

all: ttex

tex1.c: tex1.p
	../p2c -R -a tex1.p

tex1.p: tex3.p
	sed -f cw3.sed tex3.p > tex1.p

tex3.p: tex3.web nn.ch
	tangle tex3.web nn.ch

tex3.web: tex.web convert cw1.sed
	./convert tex.web | perl cwstr1.pl  > tex3.web

#	./convert tex.web | perl cwstr.pl > tex3.web
#./convert tex.web | sed -f cw1.sed  > tex3.web


stamp_tex: tex1.c corr.sed tex.diff
	sed -f cw2.sed tex1.c > tex2.c
	patch < tex.diff
	./corr.sed tex2.c > tex.c
	touch stamp_tex

tex1.o: stamp_tex p2c/p2c.h
	gcc ${CFLAGS} -c -o tex1.o -I. tex.c 

funcs.o: funcs.c
	gcc ${CFLAGS} -c  funcs.c

inipool.o: inipool.c pool_str.c
	gcc ${CFLAGS} -c  inipool.c

ttex: tex1.o funcs.o inipool.o
	gcc -g -o ttex tex1.o funcs.o inipool.o -lm


nn.ch: defs1.ch defs.ch2 consts.ch lab.ch 
	cat  defs1.ch defs.ch2 consts.ch lab.ch > nn.ch

diffs: 
	diff trip.log trip0.log
	diff trip.fmt trip0.fmt
	diff trip.dvi trip0.dvi
	diff tripos.tex tripos0.tex

tes: ttex
	./ttex trip > tripin.fot
	cmp trip.fmt trip0.fmt
	diff trip.log tripin.log
	./ttex '&trip' trip
	diff trip.log trip0.log
	diff trip.dvi trip0.dvi
	diff tripos.tex tripos0.tex

clean: 
	-rm ttex tex1.o funcs.o tex1.c tex3.web tex3.p tex1.p \
		tex2.c nn.ch

.PHONY: diffs tes clean 
