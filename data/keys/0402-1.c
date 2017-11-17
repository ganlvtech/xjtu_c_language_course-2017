#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (i == j)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            if (j == N - 1)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
    }
    return 0;
}
