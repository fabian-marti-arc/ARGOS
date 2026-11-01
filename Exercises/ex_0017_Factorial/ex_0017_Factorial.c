// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0017_Factorial.h"

// Function definitions
void ex_0017_Factorial(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter a non-negative integer N: ";

  // TODO: read a non-negative integer N, then compute and print N!
  int n;
  unsigned long long int result = 1;
  int passed = 0;

  while ((passed != 1 && passed != EOF) || n < 0)
  {
    printf("%s", input_message);
    passed = scanf(" %d", &n);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
  }

  for (int i = 0; i < n; i++)
  {
    result = result * (n - i);
  }

  printf("%d! = %lld\n", n, result);
}
