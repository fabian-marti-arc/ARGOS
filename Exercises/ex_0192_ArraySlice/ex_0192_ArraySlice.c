// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0192_ArraySlice.h"

// Function definitions
// TODO: implement ex_0192_ArraySlice
int ex_0192_ArraySlice(const int *source, int size, int start, int end, int *destination)
{
    if (start < 0 || end < start || end > size)
    {
        return -1;
    }

    for (int i = 0; i < size; i++)
    {
        if (i >= start && i < end)
        {
            destination[i - start] = source[i];
        }
    }

    return end - start;
}
