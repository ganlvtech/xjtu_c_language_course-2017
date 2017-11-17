#include <stdio.h>

int main()
{
    int a, n, s, b, e;
    scanf("%d%d", &a, &n);
    s = 0;
    b = 0;
    e = 1;
    for (int i = 0; i < n; ++i)
    {
        b += a * e;
        s += b;
        e *= 10;
    }
    printf("%d", s);
    return 0;
}
