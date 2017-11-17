#include <stdio.h>
#include <string.h>

// https://stackoverflow.com/questions/198199/how-do-you-reverse-a-string-in-place-in-c-or-c/199891#199891
void strrev(char s[])
{
    int length = strlen(s) ;
    int c, i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

int main()
{
    char s[255];
    gets(s);
    strrev(s);
    puts(s);
    return 0;
}
