/* programming_2/assignment_2/table_generator.c
   Assignment 2 Table Generator Main File
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "table_generator.h"

void table_generator(struct bounds_struct bounds) {
  int counter;
  double result;
  char normal_format_string[] = "%d & %.4f \\\\ \n";
  char imaginary_format_string[] = "%d & %.4f$\\imath$ \\\\ \n";
  /* Start the fancy formatting for Latex */
  printf("\\begin{tabular}{l|l}\n");
  printf("Number & Square Root \\\\ \\hline\n");
  if(bounds.starting < bounds.ending) {
    counter = bounds.starting;
    while(counter <= bounds.ending) {
      if(counter < 0) {
	result = sqrt(abs(counter));
	printf(imaginary_format_string, counter, result);
      } else {
	result = sqrt(counter);
	printf(normal_format_string, counter, result);
      }
      counter += bounds.increment;
    }
  } else {
    counter = bounds.starting;
    while(counter >= bounds.ending) {
      if(counter < 0) {
	result = sqrt(abs(counter));
	printf(imaginary_format_string, counter, result);
      } else {
	result = sqrt(counter);
	printf(normal_format_string, counter, result);
      }
      counter += bounds.increment;
    }
  }
  printf("\\end{tabular}\n");
}
