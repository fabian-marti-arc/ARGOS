// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0026_ArraySum.h"

// Function definitions
// TODO: implement ex_0026_ArraySum
void ex_0026_ArraySum()
{
    int array[50];

    int scanned = 0;
    int size = 0;
    do
    {
        printf("Nb values (max.50): ");
        scanned = scanf(" %d", &size);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while ((scanned != 1 && scanned != EOF) || (size < 0 || size > 50));

    int i = 0;
    for (; i < size; i++)
    {
        int value_scanned = 0;
        int x = 0;
        do
        {
            printf("Value %d? ", i);
            value_scanned = scanf(" %d", &x);

            {
                int c;
                do
                {
                    c = getchar();
                } while (c != '\n' && c != EOF);
            }
        } while (value_scanned != 1 && value_scanned != EOF);

        array[i] = x;
    }

    printf("array:\n");
    for (int j = 0; j < i; j++)
    {
        if (j + 1 == i)
        {
            printf("%d", array[j]);
        }
        else
        {
            printf("%d ", array[j]);
        }
    }
    printf("\n");

    int total = 0;
    for (int j = 0; j < i; j++)
    {
        total += array[j];
    }
    printf("Total sum: %d\n", total);
}