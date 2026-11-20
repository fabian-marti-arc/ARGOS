// Author: HE-Arc

// Standard includes
#include <stdio.h>

// Local includes
#include "ex_0029_Time.h"

// Function definitions
// TODO: implement ex_0029_InitTime
Time ex_0029_InitTime(int h, int m, int s)
{
    Time time = {h, m, s};
    return time;
}

// TODO: implement ex_0029_PrintTime

void ex_0029_PrintTime(Time time)
{
    if (time.hh < 10)
    {
        printf("0");
    }
    printf("%d:", time.hh);

    if (time.mm < 10)
    {
        printf("0");
    }
    printf("%d:", time.mm);

    if (time.ss < 10)
    {
        printf("0");
    }
    printf("%d\n", time.ss);
}

// TODO: implement ex_0029_Time
void ex_0029_Time(void)
{
    Time time = ex_0029_InitTime(5, 3, 17);
    ex_0029_PrintTime(time);
}