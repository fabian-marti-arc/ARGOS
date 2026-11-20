// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0030_Complex.h"

// Function definitions
// TODO: implement ex_0030_InputComplex, ex_0030_SumComplex, ex_0030_DiffComplex, ex_0030_PrintComplex and ex_0030_Complex
Complex ex_0030_InputComplex(void)
{
    int status = 0;
    double imaginary, real;
    do
    {
        printf("Please enter a complex number (r,i): ");
        status = scanf(" ( %lf , %lf )", &real, &imaginary);

        {
            int c;
            do
            {
                c = getchar();
            } while (c != '\n' && c != EOF);
        }
    } while (status != 2 && status != EOF);

    Complex complex = {real, imaginary};

    return complex;
}

Complex ex_0030_SumComplex(Complex a, Complex b)
{
    Complex complex = {(a.real + b.real), (a.imaginary + b.imaginary)};
    return complex;
}

Complex ex_0030_DiffComplex(Complex a, Complex b)
{
    Complex complex = {(a.real - b.real), (a.imaginary - b.imaginary)};
    return complex;
}

void ex_0030_PrintComplex(Complex c)
{
    printf("%.2lf + %.2lfi\n", c.real, c.imaginary);
}

void ex_0030_Complex(void)
{
    Complex a = ex_0030_InputComplex();
    Complex b = ex_0030_InputComplex();

    Complex sum = ex_0030_SumComplex(a, b);
    Complex diff = ex_0030_DiffComplex(a, b);

    printf("\nSum = ");
    ex_0030_PrintComplex(sum);

    printf("\nDiff = ");
    ex_0030_PrintComplex(diff);
}