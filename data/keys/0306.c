#include <stdio.h>

int main()
{
    float k, pi, a, i, s;
    scanf("%f", &k);
    pi = 0;
    i = 1;
    s = 1;
    a = 1;
    while (a >= k)
    {
        pi += s * a;
        i += 2;
        s = -s;
        a = 1 / i;
    }
    pi *= 4;
    printf("%g", pi);
    return 0;
}
