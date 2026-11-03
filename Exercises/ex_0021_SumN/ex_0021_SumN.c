// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0021_SumN.h"

// Function definitions
// TODO: implement ex_0021_SumN
int ex_0021_SumN(int a, int b)
{
    int total = 0;
    if (a > b)
    {
        int temp = b;
        b = a;
        a = temp;
    }

    for (int i = a; i <= b; i++)
    {
        total += i;
    }

    return total;
}