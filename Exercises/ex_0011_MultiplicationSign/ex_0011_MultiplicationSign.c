// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0011_MultiplicationSign.h"

// Function definitions
void ex_0011_MultiplicationSign(void)
{
  // TODO: read 2 integers, then print the sign of their product without computing it
  int a, b;
  int scanned = 0;

  while (scanned != 2)
  {

    printf("Please enter 2 integers: ");
    scanned = scanf("%d %d", &a, &b);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }
  }

  if (a == 0 || b == 0)
  {
    printf("%d * %d = 0\n", a, b);
  }

  else if ((a < 0 && b > 0) || (a > 0 && b < 0))
  {
    printf("%d * %d < 0\n", a, b);
  }
  else
  {
    printf("%d * %d > 0\n", a, b);
  }
}
