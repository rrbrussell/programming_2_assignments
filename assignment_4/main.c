#include <stdio.h>
#include <stdlib.h>
#include "random.h"
#include "printrandoms.h"

int main(int argc, char* argv[]) {
  const size_t MAX_ARRAY_SIZE = 100000;
  size_t numbers[MAX_ARRAY_SIZE];
  size_t counter = 0;
  int NumberOfInts = 0;
  for(counter = 0; counter < MAX_ARRAY_SIZE; ++counter) {
    numbers[counter] = 0;
  }
  if(argc != 2) {
    printf("usage sortrandom NUMBER\n");
    exit(EXIT_FAILURE);
  }
  sscanf(argv[1], "%d", &NumberOfInts);
  if(( NumberOfInts <= 0) || (NumberOfInts >= (MAX_ARRAY_SIZE + 1))) {
    printf("usage sortrandom NUMBER\n");
    printf("NUMBER must between 1 and %li\n", MAX_ARRAY_SIZE);
    exit(EXIT_FAILURE);
  }
  #ifdef PRINTRANDOM
  printrandoms(numbers, NumberOfInts);
  #endif
  mkrandom(numbers, NumberOfInts);
  #ifdef PRINTRANDOM
  printrandoms(numbers, NumberOfInts);
  #endif
  /*sort(&numbers, NumberOfInts);*/
  exit(EXIT_SUCCESS);
}
