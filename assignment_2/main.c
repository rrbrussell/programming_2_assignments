/* programming_2/assignment_2/main.c
   Assignment 2 Main File
   Assumes C99 Compiler
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "constraints.h"

char[] program_name="Square Root Tabler";

int main(int argc, char *argv[]) {
  int upper_bound, lower_bound, increment;
  bool constraints_satisfied = true;
  if(argc == 4) { /* First constraint: There must be three arguments */
     test ==
       if((sscanf(argv[1], "%d", &upper_bound) != EOF) &&
	  (sscanf(argv[2], "%d", &lower_bound) != EOF) &&
	  (sscanf(argv[3], "%d", &increment) != EOF)) {
	 table_generator(upper_bound, lower_bound, increment);	
       } else {
	 constriants_satisfies = false;
       }
    /*
     */
  } else {
    printf("%s requires three arguments: ", program_name);
    printf("\"the upper bound\" \"the lower bound\" \"Increment\"");
  }
  if(!constraints_satisfied) {
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
