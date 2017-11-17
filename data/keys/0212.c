#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Love", x, y;
    int N, n;
    scanf("%d", &N);
    n = strlen(s);
    for (int i = 0; i < n; ++i)
    {
        x = s[i];
        if (x >= 'A' && x <= 'Z')
        {
            y = ((x - 'A') + N) % 26 + 'A';
        }
        else if (x >= 'a' && x <= 'z')
        {
            y = ((x - 'a') + N) % 26 + 'a';
        }
        s[i] = y;
    }
    printf("%s", s);
    return 0;
}
