#DEBUG = -DPRINTRANDOM
CFLAGS = -Wall $(DEBUG)
CC = gcc
#LDFLAGS = -lm
OBJECTS = main.o random.o printrandoms.o
SOURCES = *.c *.h

#test_results.txt: solvequad
#	./run_tests.sh
#	cat test_results.txt

sortrandom: $(OBJECTS) 
	$(CC) -o sortrandom $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex

clean:
	-rm -f writeup.{pdf,aux,log} *.o sortrandom