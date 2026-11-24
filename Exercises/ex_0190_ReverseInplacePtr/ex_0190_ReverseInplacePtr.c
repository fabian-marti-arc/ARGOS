// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0190_ReverseInplacePtr.h"

// Function definitions
// TODO: implement ex_0190_ReverseInplacePtr
void ex_0190_ReverseInplacePtr(int *array, int size)
{
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        temp[i] = array[i];
    }

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[size - 1 - i];
    }
}
