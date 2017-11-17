#include <stdio.h>

#define G 6.67E-11

int main()
{
    float m1, m2, R;
    scanf("%f%f%f", &m1, &m2, &R);
    printf("%g", G * m1 * m2 / (R * R));
    return 0;
}
