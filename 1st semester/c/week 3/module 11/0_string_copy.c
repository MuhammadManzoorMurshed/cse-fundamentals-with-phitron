#include <stdio.h>
#include <string.h>

int main()
{
    char str0[100], str1[100];
    int i;

    scanf("%s %s", str0, str1);

    for(i = 0; i < strlen(str1); i++)
    {
        str0[i] = str1[i];
    }
    str0[i] = '\0';

    printf("%s\n", str0);
    printf("%s\n", str1);

    return 0;
}