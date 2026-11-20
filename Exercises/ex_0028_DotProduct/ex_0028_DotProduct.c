// Author: HE-Arc

// Standard includes

// Local includes
#include "ex_0028_DotProduct.h"

// Function definitions
// TODO: implement ex_0028_DotProduct
int ex_0028_DotProduct(int vec1[], int vec2[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        int product = 0;

        product = vec1[i] * vec2[i];
        total += product;
    }

    return total;
}