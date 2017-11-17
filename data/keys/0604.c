#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, n1, *a;
    scanf("%d", &n);
    n1 = n + 1;
    a = (int *)malloc(n1 * sizeof(int));
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < n1; ++i)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    for (int i = 0; i < n1; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
