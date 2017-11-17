#include <stdio.h>

int main()
{
    int x, max = 0x80000000;
    for (int i = 0; i < 7; ++i)
    {
        scanf("%d", &x);
        if (x > max)
        {
            max = x;
        }
    }
    printf("%d", max);
    return 0;
}
