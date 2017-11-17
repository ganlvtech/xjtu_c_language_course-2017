#include <stdio.h>

int main()
{
    int n, a, b, c, s;
    scanf("%d", &n);
    a = 0;
    b = 1;
    s = 0;
    for (int i = 0; i < n; ++i)
    {
        c = a + b;
        a = b;
        b = c;
        s += a;
    }
    printf("%d\n%d", a, s);
    return 0;
}
