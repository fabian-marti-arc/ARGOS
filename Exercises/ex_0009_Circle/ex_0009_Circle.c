// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0009_Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0009_Circle(void)
{
  // TODO: read the radius with scanf, then print pi and the circle surface
  double r, result;

  printf("Circle radius: ");
  scanf("%lf", &r);
  printf("pi = 3.141593\n");
  result = 3.141593 * r * r;

  printf("Circle surface = %.2f\n", result);
}
