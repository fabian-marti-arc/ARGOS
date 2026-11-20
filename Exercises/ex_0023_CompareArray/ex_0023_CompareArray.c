// Author: HE-Arc

// Standard includes
#include <stdbool.h>

// Local includes
#include "ex_0023_CompareArray.h"

// Function definitions
// TODO: implement ex_0023_CompareArray

bool ex_0023_CompareArray(int array1[], int array2[], int nb_vals)
{
    bool same_array = true;
    for (int i = 0; i < nb_vals; i++)
    {
        same_array = array1[i] == array2[i];

        if (same_array == false)
        {
            break;
        }
    }

    return same_array;
}