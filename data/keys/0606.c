#include <stdio.h>

void select_sort(int a[], int n)
{
    int min, min_index;
    for (int i = 0; i < n - 1; ++i)
    {
        min_index = i;
        min = a[min_index];
        for (int j = i + 1; j < n; ++j)
        {
            if (a[j] < min)
            {
                min = a[j];
                min_index = j;
            }
        }
        a[min_index] = a[i];
        a[i] = min;
    }
}

int main()
{
    int n, a[100], i;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
    }
    select_sort(a, n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
