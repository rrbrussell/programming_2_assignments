CFLAGS = -Wall
CC = gcc $(CFLAGS)
LDFLAGS = 
OBJECTS = main.o SolveLinear.o SolveQuadratic.o
SOURCES = *.c *.h

solvequad: $(OBJECTS) 
	$(CC) -o solvequad $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex

clean:
	-rm -f writeup.{pdf,aux,log} *.o solvequad *~