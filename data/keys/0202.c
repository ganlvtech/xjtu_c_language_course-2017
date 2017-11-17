#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, p, s;
    scanf("%f%f%f", &a, &b, &c);
    p = (a + b + c) / 2;
    s = p * (p - a) * (p - b) * (p - c);
    s = sqrt(s);
    printf("%g", s);
    return 0;
}
