#include <stdio.h>

#define N 5

int main()
{
    int s, n;
    int money[] = {50, 20, 10, 5, 1};
    scanf("%d", &s);
    for (int i = 0; i < N; ++i)
    {
        n = 0;
        while (s >= money[i])
        {
            ++n;
            s -= money[i];
        }
        printf("%d\n", n);
    }
    return 0;
}
