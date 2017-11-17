#include <stdio.h>
#include <math.h>

int isprime(int a)
{
    int max;
    if (a < 2)
    {
        return 0;
    }
    else if (a == 2)
    {
        return 1;
    }
    else if ((a & 1) == 0)
    {
        return 0;
    }
    else
    {
        max = (int)sqrt(a) + 1;
        for (int i = 3; i <= max; i += 2)
        {
            if (a % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
    int tmp, array[100], count;
    count = 0;
    for (;;)
    {
        scanf("%d", &tmp);
        if (tmp == 0)
        {
            break;
        }
        array[count++] = tmp;
    }
    for (int i = 0; i < count; ++i)
    {
        if (isprime(array[i]))
        {
            printf("%d\n", array[i]);
        }
    }
    return 0;
}
