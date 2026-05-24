#include <stdio.h>
#include <string.h>

int main()
{
    char str0[100], str1[50];
    int i, k;

    scanf("%s %s", str0, str1);

    strcat(str0, str1);

    printf("%s %s\n", str0, str1);

    return 0;
}