// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0015_DaysInMonth.h"

// Function definitions
void ex_0015_DaysInMonth(void)
{
  // Use the following message
  // print with printf("%s", input_message);
  const char *input_message = "Please enter the number of the month (january=1, ... , december=12): ";

  // TODO: read a month number between 1 and 12, then print its number of days
  int month;

  while (true)
  {
    printf("Please enter the number of the month (january=1, ... , december=12): ");
    bool passed = scanf("%d", &month);

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    if (month > 0 && month < 13 && passed)
    {
      if (month == 2)
      {
        printf("Month 2 has %d days.\n", 28);
        break;
      }

      int day;

      if (month < 8)
      {
        day = month % 2 == 1 ? 31 : 30;
      }
      else
      {
        day = month % 2 == 1 ? 30 : 31;
      }

      printf("Month %d has %d days.\n", month, day);
      break;
    }
  }
}
