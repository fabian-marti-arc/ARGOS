// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0016_SumProductMean.h"

// Function definitions
void ex_0016_SumProductMean(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "Number of values to read: ";
  // print with printf(value_message, i); where i is the value number, starting at 1
  const char *value_message = "%d. number: ";

  // TODO: read N (between 1 and 15), then N integers, and print their sum, product and mean
  int number;
  int passed = 0;

  while ((passed != 1 && passed != EOF) || number < 1 || number > 15)
  {
    printf("%s", input_message);
    passed = scanf(" %d", &number);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
  }

  double value, sum, prod = 1;
  for (int i = 0; i < number; i++)
  {

    int status = 0;
    while (status != 1 && status != EOF)
    {
      printf(value_message, i + 1);
      status = scanf(" %lf", &value);

      int c;
      while ((c = getchar()) != '\n' && c != EOF)
      {
      }
    }

    sum += value;
    prod *= value;
  }

  printf("Sum = %d\n", (int)sum);
  printf("Product = %d\n", (int)prod);
  printf("Mean = %.4lf\n", sum / number);
}
