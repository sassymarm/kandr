#include <stdio.h>

main()
{
  float fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  celsius = lower;
  printf("Fahrenheit Celsius\n");
  while (celsius <= upper)
  {
    fahr = (celsius - 32.0) / (9.0/5.0);
    printf("%10.0f %7.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
