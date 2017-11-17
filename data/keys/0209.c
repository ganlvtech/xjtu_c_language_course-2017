#include <stdio.h>
#include <math.h>

void func()
{
    float x, y, z1, z2;
    scanf("%f%f", &x, &y);
    z1 = sin(fabs(x) + fabs(y));
    z2 = fabs(cos(x + y));
    if (z2 < 1e-5)
    {
        printf("divided by zero!\n");
    }
    else
    {
        printf("%g\n", z1 / sqrt(z2));
    }
}

int main()
{
    for (int i = 0; i < 2; ++i)
    {
        func();
    }
    return 0;
}
