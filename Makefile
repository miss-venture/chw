CFLAGS=-Wall -g


all:
	make ex1
	make ex3

clean:
	rm -f ex1
	rm -f ex3

mf:
	cp ex2.1.mak Makefile