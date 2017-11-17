#include <stdio.h>

int main()
{
    float k, e, i, a;
    scanf("%f", &k);
    e = 1;
    i = 0;
    a = 1;
    while (a >= k)
    {
        ++i;
        a /= i;
        e += a;
    }
    printf("%g", e);
    return 0;
}
