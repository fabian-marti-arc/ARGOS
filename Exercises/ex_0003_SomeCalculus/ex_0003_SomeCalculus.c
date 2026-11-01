// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h> // math functions (pow, sqrt, sin, cos, floor)

// Local includes
#include "ex_0003_SomeCalculus.h"

// M_PI is not guaranteed by the C standard; define it when the toolchain does not provide it
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Function definitions
void ex_0003_SomeCalculus(double a, double b)
{
  double res = 0.0;

  res = pow(a, b);
  printf("\n a) %f power %f = %G \n", a, b, res);

  res = pow(a, 2) + pow(b, 2);
  res = sqrt(res);
  printf("\n b) The hypotenuse of the right triangle is %f \n", res);

  double alpha = a * M_PI / 180;
  res = sin(alpha) / cos(alpha);
  printf("\n c) The tangent of A is %f \n", res);

  res = floor(a / b);
  printf("\n d) The rounded down value of A/B is %f \n", res);

  res = floor(a / b * 1000) / 1000;
  printf("\n e) The rounded down value of A/B with 3 decimals is %f \n\n", res);
}
