CFLAGS=-Wall -Werror -I./
LDFLAGS=-Wl,--as-needed
CC=gcc $(CFLAGS)
WRITEUP_INCLUDES=main.c wci.c wci.h

ALL: writeup.pdf wci

wci: main.o wci.o
	$(CC) $(LDFLAGS) -o wci main.o wci.o -lm

main.o: main.c wci.h
	$(CC) -c main.c

wci.o: wci.h wci.c
	$(CC) -c wci.c -lm

writeup.pdf: writeup.tex $(WRITEUP_INCLUDES)
	pdflatex writeup.tex