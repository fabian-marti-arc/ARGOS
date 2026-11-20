// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0027_Array2DSum.h"

// Function definitions
// TODO: implement ex_0027_Array2DSum
void ex_0027_Array2DSum(void)
{
    int array[50][50];

    int scanned = 0;
    int lines = 0;
    do
    {
        printf("Nb lines (max.50): ");
        scanned = scanf(" %d", &lines);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while ((scanned != 1 && scanned != EOF) || (lines < 0 || lines > 50));

    int columns = 0;
    do
    {
        printf("Nb columns (max.50): ");
        scanned = scanf(" %d", &columns);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while ((scanned != 1 && scanned != EOF) || (columns < 0 || columns > 50));

    int total = 0;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            int value;
            do
            {
                printf("array[%d][%d]: ", i, j);
                scanned = scanf(" %d", &value);

                {
                    int c;
                    do
                    {
                        c = getchar();
                    } while (c != '\n' && c != EOF);
                }
            } while (scanned != 1 && scanned != EOF);

            total += value;
        }
    }

    printf("Total sum: %d\n", total);
}