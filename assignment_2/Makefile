CFLAGS=-Wall -Werror -I./
LDFLAGS=-Wl,--as-needed
CC=gcc $(CFLAGS)
WRITEUP_INCLUDES=main.c table_generator.c table_generator.h

ALL: writeup.pdf table

table: main.o table.o
	$(CC) $(LDFLAGS) -o wci main.o table.o -lm

main.o: main.c table.h
	$(CC) -c main.c

table.o: table.h table.c
	$(CC) -c wci.c -lm

writeup.pdf: writeup.tex $(WRITEUP_INCLUDES)
	pdflatex writeup.tex