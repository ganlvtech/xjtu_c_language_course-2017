#include <stdio.h>

float f(float x)
{
    if (x < 0)
    {
        return x + 1;
    }
    else if (x < 1)
    {
        return 1;
    }
    else
    {
        return x * x * x;
    }
}

int main()
{
    float x;
    scanf("%f", &x);
    printf("%g", f(x));
    return 0;
}
