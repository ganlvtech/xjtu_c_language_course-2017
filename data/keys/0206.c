#include <stdio.h>

char convert(char c)
{
    if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
    {
        return c ^ 0x20;
    }
    else
    {
        return c;
    }
}

int main()
{
    char c;
    for (int i = 0; i < 3; ++i)
    {
        scanf("%c", &c);
        getchar();
        printf("%c\n", convert(c));
    }
    return 0;
}
