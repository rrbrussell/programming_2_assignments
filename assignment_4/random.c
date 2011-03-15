/* assignment_4/random.c
   Function that fills an array with random numbers
*/

#include "random.h"
#include <stdlib.h>
#include <stdio.h>

void mkrandom(size_t numbers[], size_t HowManyNumbers) {
  FILE* SeedSource = fopen("/dev/urandom", "r");
  const size_t LengthOfSeed = 3;
  unsigned short Seed[3];
  size_t counter = 0;
  if( (SeedSource ==  NULL) ||
      (fread(&Seed, sizeof (unsigned short), LengthOfSeed, SeedSource) != LengthOfSeed)) {
    printf("Error seeding the random number generator.\n");
    fclose(SeedSource);
    exit(EXIT_FAILURE);
  }
  #ifdef PRINTRANDOM
  printf("The seed is: [%u,%u,%u]\n",
	 Seed[0], Seed[1], Seed[2]);
  #endif
  for(; counter < HowManyNumbers; ++counter) {
    numbers[counter] = nrand48(Seed);
  }
  fclose(SeedSource);
  SeedSource = NULL;
}
