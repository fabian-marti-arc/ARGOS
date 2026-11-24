// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0186_FindMaxPtr.h"

// Function definitions
// TODO: implement ex_0186_FindMaxPtr
int *ex_0186_FindMaxPtr(int *values, int size)
{
    int max = 0;
    int maxValue = values[0];

    for (int i = 0; i < size; i++)
    {
        if (maxValue < values[i])
        {
            max = i;
            maxValue = values[i];
        }
    }

    return &values[max];
}
