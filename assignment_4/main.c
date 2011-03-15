#include <stdio.h>
#include <stdlib.h>
/*#include "random.h"*/

int main(int argc, char* argv[]) {
  const size_t MAX_ARRAY_SIZE = 100000;
  unsigned long int numbers[MAX_ARRAY_SIZE];
  size_t counter = 0;
  int NumberOfInts = 0;
  for(counter = 0; count < MAX_ARRAY_SIZE; ++counter) {
    numbers[counter] = 0;
  }
  if(argc != 2) {
    printf("usage sortrandom NUMBER\n");
    exit(EXIT_FAILURE);
  }
  sscanf("%d", &NumberOfInts);
  if(( NumberOfInts <= 0) || (NumberOfInts >= (MAX_ARRAY_SIZE + 1))) {
    printf("usage sortrandom NUMBER\n");
    printf("NUMBER must between 1 and %li\n", MAX_ARRAY_SIZE);
    exit(EXIT_FAILURE);
  }
  random(&numbers, NumberOfInts);
  sort(&numbers, NumberOfInts);
  exit(EXIT_SUCCESS);
}
