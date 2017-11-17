#include <stdio.h>

int main()
{
    int n;
    float a, b, c, s;
    scanf("%d", &n);
    a = 2;
    b = 1;
    s = 0;
    for (int i = 0; i < n; ++i)
    {
        s += a / b;
        c = a + b;
        b = a;
        a = c;
    }
    printf("%g", s);
    return 0;
}
