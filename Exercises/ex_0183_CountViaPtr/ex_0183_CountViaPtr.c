// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0183_CountViaPtr.h"

// Function definitions
// TODO: implement ex_0183_CountViaPtr
void ex_0183_CountViaPtr(const int *values, int size, int target, int *count)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        if (values[i] == target)
        {
            total++;
        }
    }

    *count = total;
}
