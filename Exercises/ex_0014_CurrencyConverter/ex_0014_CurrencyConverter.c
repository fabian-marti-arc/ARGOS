// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <stdbool.h> // for bool, true, false

// Local includes
#include "ex_0014_CurrencyConverter.h"

// Function definitions
void ex_0014_CurrencyConverter(void)
{
  // Use the following messages
  // print with printf("%s", input_message);
  const char *input_message = "USAGE: non-negative value [W | $ | Y | P]\n"
                              "Won = W  Dollar = $  Yen = Y  Pound = P\n"
                              "Please enter the amount to convert: ";
  // print with printf("%s", error_message);
  const char *error_message = "The input format is not correct!!\n";
  // print with printf("%s", unsupported_currency_message);
  const char *unsupported_currency_message = "Unsupported currency!!\n";
  // print with printf("%s", negative_amount_message);
  const char *negative_amount_message = "The input amount is negative!!\n";

  // TODO: read an amount and a currency, validate them, then convert to Swiss francs
  const double WON2CHF = 0.00070;
  const double USD2CHF = 0.99;
  const double YEN2CHF = 0.0067;
  const double POUND2CHF = 1.13;

  double amount, result;
  char currency;
  int scanned = 0;
  bool passed = false;

  while ((scanned != 2 && scanned != EOF) || !passed)
  {
    passed = true;
    printf("%s", input_message);
    scanned = scanf(" %lf %c", &amount, &currency);

    {
      int c;
      do
      {
        c = getchar();
      } while (c != '\n' && c != EOF);
    }

    if (currency != 'W' && currency != '$' && currency != 'Y' && currency != 'P')
    {
      printf(unsupported_currency_message);
      passed = false;
    }

    if (amount < 0)
    {
      printf("%s", negative_amount_message);
      passed = false;
    }

    if (scanned != 2)
    {
      printf("%s", error_message);
      passed = false;
    }
  }

  switch (currency)
  {
  case 'W':
    result = amount * WON2CHF;
    break;
  case '$':
    result = amount * USD2CHF;
    break;
  case 'Y':
    result = amount * YEN2CHF;
    break;
  case 'P':
    result = amount * POUND2CHF;
    break;
  default:
    break;
  }

  printf("Swiss francs: %.3lf\n", result);
}
