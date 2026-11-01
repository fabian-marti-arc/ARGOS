// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0019_MultiplicationTable.h"

// Function definitions
// TODO: implement ex_0019_Read and ex_0019_MultiplicationTable
int ex_0019_Read(int min, int max)
{
    int value = 0;
    int status = 0;

    while ((status != 1 && status != EOF) || value < min || value > max)
    {
        printf("Please enter the multiplication table (in [%d..%d]): ", min, max);

        status = scanf(" %d", &value);

        int c;
        while ((c = getchar()) != '\n' && c != EOF)
        {
        }
    }

    return value;
}

void ex_0019_MultiplicationTable(int number)
{
    printf("\nMULTIPLICATION TABLE FOR %d\n", number);

    for (int i = 0; i < 10; i++)
    {
        int result = (i + 1) * number;
        printf("%d X %d = %d\n", number, i + 1, result);
    }
}