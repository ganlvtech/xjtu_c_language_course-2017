#include <stdio.h>

int mystrlen(char s[])
{
    int i = 0;
    while (s[i] != '\0')
    {
        ++i;
    }
    return i;
}

int main()
{
    char s[255];
    gets(s);
    printf("%d", mystrlen(s));
    return 0;
}
