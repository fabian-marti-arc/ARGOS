// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0110_Minmax.h"

// Function definitions
// TODO: implement ex_0110_Minmax
void ex_0110_Minmax(int a, int b, int c, int *min, int *max)
{
    int tmp[2] = {b, c};

    int minValue = a, maxValue = a;

    for (int i = 0; i < 2; i++)
    {
        if (minValue > tmp[i])
        {
            minValue = tmp[i];
        }
        if (maxValue < tmp[i])
        {
            maxValue = tmp[i];
        }
    }

    *min = minValue;
    *max = maxValue;
}