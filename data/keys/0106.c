#include <stdio.h>

int main()
{
    char to[255], from[255], date[255];
    scanf("%s%s%s", to, from, date);
    printf("====================================\n"
           "My dear %s,\n"
           "Happy birthday to you!\n"
           "yours,\n"
           "%s\n"
           "%s\n"
           "====================================", to, from, date);
    return 0;
}
