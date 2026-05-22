#include <stdio.h>
int main()
{
    char str[5];
    int i, size;

    size = sizeof(str) / sizeof(char);

    for(i = 0; i < size; i++)
    {
        scanf("%c", &str[i]);
    }

    for(i = 0; i < size; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
}