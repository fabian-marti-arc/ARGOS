// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0185_ArraySumPtr.h"

// Function definitions
// TODO: implement ex_0185_ArraySumPtr
int ex_0185_ArraySumPtr(const int *values, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += values[i];
    }

    return sum;
}
