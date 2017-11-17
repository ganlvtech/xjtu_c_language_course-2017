#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d", &x);
    if (x > 100)
    {
        return 1;
    }
    else if (x >= 90)
    {
        y = 5;
    }
    else if (x >= 80)
    {
        y = 4;
    }
    else if (x >= 70)
    {
        y = 3;
    }
    else if (x >= 60)
    {
        y = 2;
    }
    else
    {
        y = 1;
    }
    printf("%d", y);
    return 0;
}
