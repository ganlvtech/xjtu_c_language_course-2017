#include <stdio.h>
#include <string.h>

char caesar(char c)
{
    if (c >= 'A' && c < 'X' || c >= 'a' && c < 'x')
    {
        return (c + 3) ^ 0x20;
    }
    else if (c >= 'X' && c <= 'Z' || c >= 'x' && c <= 'z')
    {
        return (c - 26 + 3) ^ 0x20;
    }
    else
    {
        return c;
    }
}

int main()
{
    char s[255];
    scanf("%s", s);
    for (int i = 0; i < strlen(s); ++i)
    {
        s[i] = caesar(s[i]);
    }
    printf("%s", s);
    return 0;
}
