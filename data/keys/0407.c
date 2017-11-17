#include <stdio.h>
#include <string.h>

int main()
{
    char s[255], s2[255];
    strcpy(s, "abcdefg");
    scanf("%s", s2);
    printf("%s", strcat(s, s2));
    return 0;
}
