#include <stdio.h>

int main()
{
    int N, s, a, i;
    scanf("%d", &N);
    a = 1;
    s = 0;
    for (i = 1; i <= N; ++i)
    {
        a *= i;
        s += a;
    }
    printf("%d\n", s);
    return 0;
}
