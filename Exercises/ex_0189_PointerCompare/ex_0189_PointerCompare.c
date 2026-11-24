// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0189_PointerCompare.h"

// Function definitions
// TODO: implement ex_0189_PointerCompare
int ex_0189_PointerCompare(const int *first, const int *second, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (first[i] != second[i])
        {
            if (first[i] > second[i])
            {
                return 1;
            }
            else
            {
                return -1;
            }
        }
    }
    return 0;
}
