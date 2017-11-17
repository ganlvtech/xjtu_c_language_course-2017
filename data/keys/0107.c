#include <stdio.h>
#include <math.h>

#define N 200

float f(float x)
{
    return sin(x) + exp(x);
}

int main()
{
    float a, b, x1, x2, s;
    scanf("%f%f", &a, &b);
    s = 0;
    for (int i = 0; i < N; ++i)
    {
        x1 = a + (b - a) * i / N;
        x2 = a + (b - a) * (i + 1) / N;
        s += (x2 - x1) * (f(x2) + f(x1)) / 2;
    }
    printf("%g", s);
    return 0;
}
