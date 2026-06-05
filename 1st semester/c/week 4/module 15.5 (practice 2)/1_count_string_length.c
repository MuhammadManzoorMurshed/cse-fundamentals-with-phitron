#include <stdio.h>

int my_len(char *);

int main()
{
    char str[50];

    scanf("%s", str);

    int length = my_len(str);

    printf("%d\n", length);

    return 0;
}

int my_len(char *str)
{
    int lenght = 0, i = 0;

    while(str[i] != '\0')
    {
        lenght++;
        i++;
    }

    return lenght;
}