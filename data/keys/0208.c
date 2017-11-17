#include <stdio.h>
#include <math.h>

void triangle_area()
{
    float a, b, c, p, s;
    scanf("%f%f%f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = p * (p - a) * ( p - b) * (p - c);
    if (s > 0)
    {
        printf("%g\n", sqrt(s));
    }
    else
    {
        printf("Error Data!\n");
    }
}

int main()
{
    for (int i = 0; i < 2; ++i)
    {
        triangle_area();
    }
    return 0;
}
