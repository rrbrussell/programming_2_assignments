/* assignment_4/sort.c
   Selection Sorter
*/

#include "sort.h"
#include <limits.h>

size_t minimum(size_t numbers[], size_t start, size_t HowManyNumbers);

void sort(size_t numbers[], size_t HowManyNumbers) {
  size_t counter = 0;
  size_t temporary = 0;
  for(; counter < HowManyNumbers; ++counter) {
    size_t swapwith = minimum(numbers, counter, HowManyNumbers);
    temporary = numbers[swapwith];
    numbers[swapwith] = numbers[counter];
    numbers[counter] = temporary;
  }
}

size_t minimum(size_t numbers[], size_t start, size_t HowManyNumbers) {
  size_t indexOfSmallest = start;
  size_t counter = 0;
  for(counter = start; counter < HowManyNumbers; ++counter) {
    if(numbers[counter] < numbers[indexOfSmallest]) {
      indexOfSmallest = counter;
    }
  }
  return indexOfSmallest;
}
