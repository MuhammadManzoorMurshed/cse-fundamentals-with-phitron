#include <stdio.h>
#include <string.h>

int main()
{
    char str0[12], str1[15];
    int i;

    scanf("%s %s", str0, str1);

    strcpy(str0, str1);

    printf("%s\n", str0);
    printf("%s\n", str1);

    return 0;
}