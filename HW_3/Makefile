# Student's Makefile for the CS:APP Data Lab
TEAM = ac00
VERSION = 1
INSTRHOME = /homes/users/cs/faculty/rig
HANDINDIR = ${INSTRHOME}/public/c264/datalab/handin

CC = gcc
CFLAGS = -O -Wall

btest: btest.c bits.c decl.c tests.c btest.h bits.h
	$(CC) $(CFLAGS) -o btest bits.c btest.c decl.c tests.c

handin:
	cp bits.c $(HANDINDIR)/$(TEAM)-$(VERSION)-`${INSTRHOME}/public/bin/randname`-bits.c

clean:
	rm -f *.o btest

