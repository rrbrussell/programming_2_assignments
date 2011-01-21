/* programming_2/assignment_1/wci.h
   Header for wci function
   Robert R. Russell
*/
#ifndef WCI
#define WCI

/* Wind Chill Index
 * 
 * Formula Developed by U.S.A National Weather Service on November 1, 2001
 * wci = 35.74+0.6215F+(0.4275f-35.75)V^0.16 for 3<=V and F<=50
 * V is wind speed in miles per hour
 * F air temperature in Farenheit
 * uses calulated wind speed at average height of 5 feet, (corrected from 33 foot
 * height of typical anemometer)
 *
 * Based on a "human face" model
 *
 * incorporates "modern" hear transfer theory
 *
 * uses a consistent standard for skin tissue resistance
 *
 * assumes no impact from sun (i.e. clear night sky)
 *
 * open to further modification by NWS
 *
 * "wind chill advisory" when wind chills reach -10
 *
 * "wind chill warning" when wind chills reach -20
 */
#ifdef __GNUC__
#define WARN_UNUSED __attribute__((warn_unused_result))
/* Why call a function if we do not use the result. */
float WARN_UNUSED wci(int temperature, int wind_speed);
#else /* Not using GCC */

float wci(int temperature, int wind_speed);
#endif /* End of #ifdef __GNUC__ */
#endif /* End of #ifndef WCI */
