#include <stdio.h>

int imax(int array[], int count)
{
    int max = array[0];
    for (int i = 1; i < count; ++i)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int imin(int array[], int count)
{
    int min = array[0];
    for (int i = 1; i < count; ++i)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}

int main()
{
    int array[100], count;
    scanf("%d", &count);
    for (int i = 0; i < count; ++i)
    {
        scanf("%d", &array[i]);
    }
    printf("%d\n", imax(array, count));
    printf("%d\n", imin(array, count));
    return 0;
}
