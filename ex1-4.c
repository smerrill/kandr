#include <stdio.h>

/* print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 */

main()
{
  int fahr, celsius;
  int lower, upper, step;


  lower = 0; /* lower limit of temperature scale */ 
  upper = 300; /* upper limit */
  step = 20; /* step size */

  celsius = lower;
  printf("°C\t°F\n");
  while (celsius <= upper) {
    // °C = (5 / 9) * (°F - 32)
    // °C = 5 * (°F - 32) / 9
    // °C * 9 / 5 = °F - 32
    // (°C * 9 / 5) + 32 = °F
    fahr = (celsius * 9 / 5) + 32;
    printf("%d\t%d\n", celsius, fahr);
    celsius = celsius + step;
  }
}

