#include <stdio.h>

int main()
{
    char to[255], from[255];
    scanf("%s%s", to, from);
    printf("====================================\n"
           "My dear %s,\n"
           "Happy birthday to you!\n"
           "yours,\n"
           "%s\n"
           "====================================", to, from);
    return 0;
}
