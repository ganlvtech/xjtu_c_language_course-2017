#include <stdio.h>

int main()
{
    int n;
    char s[255];
    scanf("%d", &n);
    printf("+");
    for (int i = 0; i < n; ++i)
    {
        printf(" ");
    }
    printf("+\n");
    printf("+123456789A123456789B123456789C123456789D123456789E+\n");
    return 0;
}
