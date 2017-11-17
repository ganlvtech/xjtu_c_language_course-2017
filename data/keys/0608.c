#include <stdio.h>
#include <string.h>

int main()
{
    int len, i, upper, lower, number, other;
    char s[255], c;
    gets(s);
    len = strlen(s);
    upper = 0;
    lower = 0;
    number = 0;
    other = 0;
    for (i = 0; i < len; ++i)
    {
        c = s[i];
        if (c >= 'A' && c <= 'Z')
        {
            ++upper;
        }
        else if (c >= 'a' && c <= 'z')
        {
            ++lower;
        }
        else if (c >= '0' && c <= '9')
        {
            ++number;
        }
        else
        {
            ++other;
        }
    }
    printf("%d\n%d\n%d\n%d\n%d", upper, lower, number, other, len);
    return 0;
}
