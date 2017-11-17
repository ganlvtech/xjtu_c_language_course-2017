#include <stdio.h>

int main()
{
    int n, x, min;
    scanf("%d", &n);
    min = 0x7fffffff;
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &x);
        if (x < min)
        {
            min = x;
        }
    }
    printf("%d", min);
    return 0;
}
