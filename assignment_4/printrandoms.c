/* assignment_4/printrandom.c
   Debugging function that prints all of the random numbers
*/

#include "printrandoms.h"
#include <stdio.h>

void printrandoms(size_t numbers[], size_t HowManyNumbers) {
  size_t counter = 0;
  for( ; counter < HowManyNumbers; ++counter) {
    printf("%lu\n", numbers[counter]);
  }
}
