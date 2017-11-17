#include <stdio.h>

int main()
{
    int num, a, b, c;
    for (int i = 0; i < 6; ++i)
    {
        scanf("%d%d%d%d", &num, &a, &b, &c);
        printf("%d %d %d %d %d \n", num, a, b, c, (a + b + c) / 3);
    }
    return 0;
}
