#include <stdio.h>

char *mystrspc(char *string, int n)
{
    int i;
    for (i = 0; i < n; ++i)
    {
        string[i] = ' ';
    }
    string[i + 1] = '\0';
    return string;
}

int main()
{
    int n;
    char s[255];
    scanf("%d", &n);
    printf("+%s+\n", mystrspc(s, n));
    printf("+123456789A123456789B123456789C123456789D123456789E+\n");
    return 0;
}
