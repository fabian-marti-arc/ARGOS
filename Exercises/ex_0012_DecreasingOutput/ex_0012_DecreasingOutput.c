// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0012_DecreasingOutput.h"

// Function definitions
void ex_0012_DecreasingOutput(void)
{
  // TODO: read 3 integers separated by commas, then print them in decreasing order
  int a, b, c;
  int scanned = 0;

  while (scanned != 3 && scanned != EOF)
  {
    printf("Please enter 3 integers separated by commas: ");
    scanned = scanf("%d , %d , %d", &a, &b, &c);

    {
      int f;
      do
      {
        f = getchar();
      } while (f != '\n' && f != EOF);
    }
  }

  if (a < b)
  {
    int temp = a;
    a = b;
    b = temp;
  }

  if (b < c)
  {
    int temp = b;
    b = c;
    c = temp;
  }

  if (a < b)
  {
    int temp = a;
    a = b;
    b = temp;
  }

  printf("The 3 integers sorted in decreasing order: %d, %d, %d\n", a, b, c);
}
