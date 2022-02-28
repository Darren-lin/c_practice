#include <math.h>
#include <stdlib.h>

static int iterations = 0;

void e()
{
    int temp = 0;
    int total;
    for (int i = 1; i < 10; i++)
    {
        total += (temp * (i / factorial(i)));
        printf("%d", total);
    }
}

static int eterms()
{
    return iterations;
}