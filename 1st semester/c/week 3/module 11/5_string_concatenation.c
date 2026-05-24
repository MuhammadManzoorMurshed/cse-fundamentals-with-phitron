#include <stdio.h>
#include <string.h>

int main()
{
    char str0[100], str1[50];
    int i, k;

    scanf("%s %s", str0, str1);

    k = strlen(str0);

    for(i = 0; i <= strlen(str1); i++)
    {
        str0[k++] = str1[i];
    }

    /*
    for(i = 0; i < strlen(str1); i++)
    {
        str0[k++] = str1[i];
    }

    str0[k] = '\0';
    */

    printf("%s %s\n", str0, str1);

    return 0;
}