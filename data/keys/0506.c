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
    int a, b;
    char s1[255], s2[255];
    scanf("%d%d", &a, &b);
    for (int i = a; i <= b; ++i)
    {
        sprintf(s1, "%d", i);
        strcpy(s2, s1);
        strrev(s2);
        if (0 == strcmp(s1, s2))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
