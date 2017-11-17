#include <stdio.h>
#include <string.h>

int main()
{
    int result;
    char s1[255], s2[255];
    scanf("%s%s", s1, s2);
    result = strcmp(s1, s2);
    printf("%s", s1);
    if (result < 0)
    {
        printf("<");
    }
    else if (result > 0)
    {
        printf(">");
    }
    else
    {
        printf("=");
    }
    printf("%s", s2);
    return 0;
}
