// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0010_LowercaseUppercase.h"

// Function definitions
void ex_0010_LowercaseUppercase(void)
{
  // TODO: read a character, then tell whether it is lowercase, uppercase or not a letter
  char letter;
  int scanned;
  do
  {
    printf("Type a letter: ");
    scanned = scanf(" %c", &letter);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }
  } while (scanned != 1 && scanned != EOF);

  if (letter >= 65 && letter <= 90)
  {
    printf("UPPERCASE\n");
  }
  else if (letter >= 97 && letter <= 122)
  {
    printf("lowercase\n");
  }
  else
  {
    printf("The character you entered is not a letter.\n");
  }
}
