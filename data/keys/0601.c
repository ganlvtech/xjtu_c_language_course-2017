#include <stdio.h>

int main()
{
    int a, b;
    int *pa, *pb;
    pa = &a;
    pb = &b;
    scanf("%d%d", pa, pb);
    pa = &b;
    pb = &a;
    printf("%d %d", *pa, *pb);
    return 0;
}
