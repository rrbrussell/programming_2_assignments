/* programming_2/assignment_2/constraints.h
   Assingment 2 Constraints Header
   Assumes C99 Compiler
*/

#ifndef ASSIGNMENT_2_CONSTRAINTS_H
#define ASISGNMENT_2_CONSTRAINTS_H

#include <stdbool.h>
#include "common_datatypes.h"

bool satisfy_constraints(int argcount, char *arguments[],
			 struct bounds_struct *bounds);

#endif
