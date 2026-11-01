// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <math.h>

// Local includes
#include "ex_0013_SecondOrderEquation.h"

// Function definitions
void ex_0013_SecondOrderEquation(void)
{
  // Use the following messages
  // print with printf("%s", usage_message);
  const char *usage_message = "Compute solutions of an equation of the form ax^2 + bx + c = 0\n";
  // print with printf("%s", input_message);
  const char *input_message = "Please enter coefficients a, b, and c: ";
  // print with printf("%s", no_solution_message);
  const char *no_solution_message = "This equation has no solution.\n";
  // print with printf("%s", no_real_solution_message);
  const char *no_real_solution_message = "This equation has no real solution.\n";
  // print with printf("%s", linear_solution_message);
  const char *linear_solution_message = "The solution of this linear equation is: \n";
  // print with printf("%s", double_real_solution_message);
  const char *double_real_solution_message = "The double real solution of this equation is: \n";
  // print with printf("%s", two_real_solutions_message);
  const char *two_real_solutions_message = "The real solutions of this equation are: \n";
  // print with printf("%s", any_real_solution_message);
  const char *any_real_solution_message = "Any real is solution of this equation.\n";

  // TODO: read coefficients a, b and c, then print the real solutions of the equation
  int a, b, c;
  double x, x2;

  printf(usage_message);
  while (true)
  {
    printf(input_message);
    bool passed = scanf("%d %d %d", &a, &b, &c);

    if (passed)
      break;

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
  }

  if (a == 0 && b == 0 && c == 0)
  {
    printf(any_real_solution_message);
  }
  else if (a == 0 && b == 0)
  {
    printf(no_real_solution_message);
  }
  else if (a == 0)
  {
    x = (-c) / b;
    printf("x = %.4f\n", x);
  }
  else
  {
    double d = b * b - 4.0 * a * c;
    if (d < 0)
    {
      printf(no_real_solution_message);
    }
    else if (d == 0)
    {
      x = (-b) / (2 * a);
      printf("x = %.4f\n", x);
    }
    else
    {
      x = (-b + sqrt(d)) / (2 * a);
      x2 = (-b - sqrt(d)) / (2 * a);

      printf("x1 = %.4f\n", x);
      printf("x2 = %.4f\n", x2);
    }
  }
}
