/* programming_2/assignment_1/main.c
   Main program for wind chill assignment
   Robert R. Russell
*/

#include <stdio.h>
#include <stdlib.h>
#include <wci.h>

int main() {
  /* The windspeed related variables */
  const int MIN_WIND_SPEED = 0;
  const int MAX_WIND_SPEED = 20;
  const int WIND_SPEED_INCREMENT = 5;
  int wind_speed_counter = 0;
  const int MIN_TEMPERATURE = 20;
  const int MAX_TEMPERATURE = 50;
  const int TEMPERATURE_INCREMENT = 2;
  int temperature_counter = 0;
  /*const int PRECISION = 6;*/
  for(temperature_counter = MIN_TEMPERATURE;
      temperature_counter <= MAX_TEMPERATURE;
      temperature_counter += TEMPERATURE_INCREMENT)
    {
      /* insert the leading column of the table */
      printf("%d$^{\\circ}$ ", temperature_counter);
      for(wind_speed_counter = MIN_WIND_SPEED;
	  wind_speed_counter <= MAX_WIND_SPEED;
	  wind_speed_counter += WIND_SPEED_INCREMENT)
	{
	  printf("&%.3f ", wci(temperature_counter, wind_speed_counter));
	}
      printf("\\\\\n"); /* the \\\\ inserts the row seperators for Latex */

    }
  exit(EXIT_SUCCESS);
}
