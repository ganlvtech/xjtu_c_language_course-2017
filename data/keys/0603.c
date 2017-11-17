#include <stdio.h>
#include <string.h>
#define SIZE 255

// https://stackoverflow.com/questions/31522555/read-int-with-scanf-until-new-line/31522942#31522942
int get_numbers(int a[])
{
    int i = 0, value, valsRead;
    char line[SIZE], *val;
    char delims[] = " \t\r\n";
    fgets(line, SIZE, stdin);
    val = strtok(line, delims);
    valsRead = sscanf(val, "%d", &value);

    while (valsRead > 0)
    {
        a[i++] = value;
        val = strtok(NULL, delims);
        valsRead = (val == NULL) ? 0 : sscanf(val, "%d", &value);
    }
    return i;
}

int main()
{
    int a[100], i, count, n;
    count = get_numbers(a);
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        a[i] = 0;
    }
    for (i = 0; i < count; ++i)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
