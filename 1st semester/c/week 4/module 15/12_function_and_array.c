#include <stdio.h>
#include <string.h>

void func(char *);

int main()
{
    char str[20], ch;
    int i = 0;

    while((ch = getchar()) != '\n')
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    func(str);

    return 0;
}

void func(char *str)
{
    int length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        putchar(str[i]);
    }

    return;
}