// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0188_ReverseArrayPtr.h"

// Function definitions
// TODO: implement ex_0188_ReverseArrayPtr
void ex_0188_ReverseArrayPtr(const int *source, int *dest, int size)
{
    for (int i = 0; i < size; i++)
    {
        dest[i] = source[size - 1 - i];
    }
}
