/* programming_2/assignment_2/main.c
   Assignment 2 Main File
   Assumes C99 Compiler
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "constraints.h"
#include "table_generator.h"
#include "common_datatypes.h"

int main(int argc, char *argv[]) {
  struct bounds_struct bounds;
  bool constraints_satisfied = true;
  if(check_constriants(argc, argv, &bounds)) {
    table_generator(bounds);
  } else {
    constraints_satisfied = false;
  }
  if(!constraints_satisfied) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
