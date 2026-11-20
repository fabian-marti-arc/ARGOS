// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0025_FillArray.h"

int main(void)
{

  int array[] = {-2, -2, -2, -2};

  int val = ex_0025_FillArray(array, 4);
  printf("%d\n", val);

  for (int i = 0; i < 4; i++)
  {
    printf("%d ", array[i]);
  }

  return 0;
}
