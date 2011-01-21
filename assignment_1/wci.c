/* programming_2/assignment_1/wci.c
   implementation of wci function
   Robert R. Russell
*/
#include "wci.h"
#include <math.h>

float wci(int temperature, int wind_speed) {
	float result;
	if(wind_speed <= 3 || temperature >= 50) {
		result = temperature;
	} else {
	result = 35.74 + 0.6215*temperature + (0.4275*temperature - 35.75) *
		powf(wind_speed,0.16);
	}
	return result;
}
