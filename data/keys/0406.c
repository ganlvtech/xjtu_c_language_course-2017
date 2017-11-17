#include <stdio.h>

char *strupr(char *s)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 'a' - 'A';
        }
        ++i;
    }
    return s;
}

int main()
{
    char s[255];
    scanf("%s", s);
    printf("%s", strupr(s));
    return 0;
}
