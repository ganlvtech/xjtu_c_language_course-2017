#include <stdio.h>
#include <math.h>

#define EPS 1e-9

float f(float x)
{
    return 2 * pow(x, 3) - 4 * pow(x, 2) + 3 * x - 6;
}

float df(float x)
{
    return 6 * pow(x, 2) - 8 * x + 3;
}

int main()
{
    float x0, x;
    do
    {
        x = x0 - f(x0) / df(x0);
    } while (fabs(f(x)) < EPS && fabs(x - x0) < EPS);
    printf("%g", x);
    return 0;
}
