DEBUG = -DDEBUG
CFLAGS = -Wall $(DEBUG) -std=gnu99 -pedantic
CC = gcc 
#LDFLAGS = -lm
OBJECTS = main.o tree.o menu.o
SOURCES = *.c *.h
HEADERS = *.h
EXECUTABLE_NAME = trees

#Phony targets
.PHONY : clean 
.PHONY : all
.PHONY : clean-tex

all: $(EXECUTABLE_NAME)

#test_results.txt: solvequad
#	./run_tests.sh
#	cat test_results.txt

$(EXECUTABLE_NAME): $(OBJECTS) $(HEADERS)
	$(CC) -o $(EXECUTABLE_NAME) $(OBJECTS) $(LDFLAGS)

writeup.pdf: writeup.tex ${SOURCES}
	pdflatex writeup.tex 

clean:
	-rm -f *.o  *.*~ $(EXECUTABLE_NAME)

clean-tex: clean
	-rm -f writeup.{pdf,aux,log}