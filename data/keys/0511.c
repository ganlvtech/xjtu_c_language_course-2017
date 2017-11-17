#include <stdio.h>
#include <math.h>
#define EPS 1e-7

float f(float x)
{
    return x * x - 2 * x;
}

int main()
{
    float x0, x1, x2, y0, y1, y2;
    scanf("%f%f", &x0, &x1);
    y2 = 2 * EPS;
    while (fabs(y2) > EPS)
    {
        y0 = f(x0);
        y1 = f(x1);
        x2 = x0 - (x0 - x1) / (y0 - y1) * y0;
        y2 = f(x2);
        if (y2 * y0 > 0)
        {
            x0 = x2;
        }
        else
        {
            x1 = x2;
        }
    }
    printf("%g", x2);
    return 0;
}
