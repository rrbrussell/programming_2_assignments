#DEBUG = -DDEBUG
CFLAGS = -Wall -Werror $(DEBUG) -std=gnu99 -pedantic
CC = gcc 
#LDFLAGS = -lm
OBJECTS = main.o stack.o
SOURCES = *.c *.h
HEADERS = *.h
EXECUTABLE_NAME = stacker

#Phony targets
.PHONY : clean 
.PHONY : all

all: writeup.pdf $(EXECUTABLE_NAME)

#test_results.txt: solvequad
#	./run_tests.sh
#	cat test_results.txt

$(EXECUTABLE_NAME): $(OBJECTS) $(HEADERS)
	$(CC) -o $(EXECUTABLE_NAME) $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex 

clean:
	-rm -f writeup.{pdf,aux,log} *.o  *.*~ $(EXECUTABLE_NAME)