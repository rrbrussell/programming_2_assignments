/* programming_2/assignment_2/constraints.h
   Assingment 2 Constraints Header
   Assumes C99 Compiler
*/

#IFNDEF ASSIGNMENT_2_CONSTRAINTS_H
#DEFINE ASISGNMENT_2_CONSTRAINTS_H

#include <stdbool.h>
#include "common_datatypes.h"

const int NUMBER_OF_ARGUMENTS = 4;

bool satisfy_constraints(int argcount, char *arguments[],
			 struct bounds_struct *bounds);

#ENDIF
