CFLAGS= -g

all: ttex

tex1.o: tex.c p2c/p2c.h
	gcc ${CFLAGS} -c -o tex1.o -I. tex.c 

funcs.o: funcs.c
	gcc ${CFLAGS} -c  funcs.c

inipool.o: inipool.c pool_str.c
	gcc ${CFLAGS} -c  inipool.c

ttex: tex1.o funcs.o inipool.o
	gcc -g -o ttex tex1.o funcs.o inipool.o -lm


clean: 
	-rm ttex tex1.o funcs.o inipool.o tex1.c tex3.web tex3.p tex1.p \
		tex2.c nn.ch

.PHONY: diffs clean 
