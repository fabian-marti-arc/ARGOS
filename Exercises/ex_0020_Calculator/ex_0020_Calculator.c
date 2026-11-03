// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0020_Calculator.h"

// Function definitions
// TODO: implement ex_0020_Calculator
double ex_0020_Calculator(double a, double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b == 0)
        {
            return 0;
        }
        return a / b;
    default:
        return 0;
    }
}