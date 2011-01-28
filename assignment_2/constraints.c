/* programming_2/assignment_2/constraints.c
   Assignment 2 Constraints Implementation
   Requires C99 Compiler
*/

#include "constraints.h"
#include <stdio.h>

const int NUMBER_OF_ARGUMENTS = 4;

bool satisfy_constraints(int argcount, char *arguments[],
		       struct bounds_struct *bounds) {
  bool return_value = false;
  if(argcount == NUMBER_OF_ARGUMENTS) {
    if((sscanf(arguments[1], "%d", &bounds->starting) != EOF) && 
       (sscanf(arguments[2], "%d", &bounds->ending) != EOF) &&
       (sscanf(arguments[3], "%d", &bounds->increment) != EOF)) {
      // All arguments have been confirmed to be integers 
      if((((bounds->starting < bounds->ending) && (bounds->increment > 0))) &&
	 ((bounds->starting > bounds->ending) && (bounds->increment < 0))) {
	return_value = true;
      }
    }
  } else {
    fprintf(stderr, "table requires three arguments: ");
    fprintf(stderr, "\"the starting bound\" \"the ending bound\" ");
    fprintf(stderr, "\" and the increment\"");
  }
  return return_value;
}
