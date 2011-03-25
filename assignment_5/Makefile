DEBUG = -DDEBUG
CFLAGS = -Wall $(DEBUG)
CC = gcc
#LDFLAGS = -lm
OBJECTS = main.o 
SOURCES = *.c *.h
EXECUTABLE_NAME = stacker

#Phony targets
.PHONY : clean 
.PHONY : all

all: writeup.pdf $(EXECUTABLE_NAME)

#test_results.txt: solvequad
#	./run_tests.sh
#	cat test_results.txt

$(EXECUTABLE_NAME): $(OBJECTS) 
	$(CC) -o sortrandom $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex

clean:
	-rm -f writeup.{pdf,aux,log} *.o  *.*~ sortrandom