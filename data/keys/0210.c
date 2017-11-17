#include <stdio.h>

#define N 4

int main()
{
    float x, s;
    s = 0;
    for (int i = 0; i < N; ++i)
    {
        scanf("%f", &x);
        s += x;
    }
    printf("%g\n", s);
    printf("%d\n", (int)(s + 0.5));
    return 0;
}
