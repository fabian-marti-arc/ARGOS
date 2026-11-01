// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0008_ScanfPrintf.h"

// Function definitions
void ex_0008_ScanfPrintf(void)
{
  // TODO: read 3 letters with scanf, then print their ASCII codes
  char a, b, c;

  printf("\n\nPlease enter 3 letters:\n");
  scanf("%c %c %c", &a, &b, &c);

  int f;
  while ((f = getchar()) != '\n' && f != EOF)
  {
  }

  printf("\nHere are the corresponding ASCII codes:\n");
  printf("%c--------->%d\n", a, a);
  printf("%c--------->%d\n", b, b);
  printf("%c--------->%d\n", c, c);
}
