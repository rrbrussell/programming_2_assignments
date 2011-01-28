CFLAGS=-Wall -Werror -I./
LDFLAGS=-Wl,--as-needed
CC=gcc $(CFLAGS)
WRITEUP_INCLUDES=main.c table_generator.c table_generator.h constraints.h constraints.c common_datatypes.h

ALL: writeup.pdf table

table: main.o table_generator.o constraints.o
	$(CC) $(LDFLAGS) -o table main.o constraints.o table_generator.o -lm

main.o: main.c table_generator.h constraints.h common_datatypes.h
	$(CC) -c main.c --std=gnu99

table_generator.o: table_generator.h table_generator.c common_datatypes.h
	$(CC) -c table_generator.c

constraints.o: constraints.c constraints.h common_datatypes.h
	$(CC) -c constraints.c --std=gnu99

writeup.pdf: writeup.tex $(WRITEUP_INCLUDES)
	pdflatex writeup.tex