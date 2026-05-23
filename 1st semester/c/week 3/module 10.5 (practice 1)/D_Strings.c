#include <stdio.h>
#include <string.h>

int main()
{
    char a[11], b[11], temp;
    int i, j, count0 = 0, count1 = 0;

    gets(a);
    gets(b);

    for(i = 0; i < strlen(a); i++)
    {
        count0++;
    }

    i = 0;
    while(b[i] != '\0')
    {
        count1++;
        i++;
    }

    char a_plus_b[count0 + count1 + 1];
    for(i = 0; i < count0; i++)
    {
        a_plus_b[i] = a[i];
    }
    for(i = 0; i < count1; i++)
    {
        a_plus_b[count0 + i] = b[i];
    }
    a_plus_b[count0 + count1] = '\0';

    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%d %d\n", count0, count1);
    printf("%s\n", a_plus_b);
    printf("%s %s", a, b);

    return 0;
}