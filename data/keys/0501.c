#include <stdio.h>

int main()
{
    int n, s;
    // printf("Please input a number n to calculte n!:");
    scanf("%d", &n);
    s = 1;
    for (int i = 1; i <= n; ++i)
    {
        s *= i;
    }
    printf("%d", s);
    return 0;
}
