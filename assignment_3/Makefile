CFLAGS = -Wall
CC = gcc $(CFLAGS)
LDFLAGS = -lm
OBJECTS = main.o SolveLinear.o SolveQuadratic.o SolveComplex.o SolveReal.o
SOURCES = *.c *.h

test_results.txt: solvequad
	./run_tests.sh
	cat test_results.txt

solvequad: $(OBJECTS) 
	$(CC) -o solvequad $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex

clean:
	-rm -f writeup.{pdf,aux,log} *.o solvequad *~ test_results.txt

