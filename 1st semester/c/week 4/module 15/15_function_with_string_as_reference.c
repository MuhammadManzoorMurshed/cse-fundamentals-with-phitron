#include <stdio.h>

void func(char *);

int main()
{
    char str[25] = "Tanzoor Mursheb";

    printf("Before calling func().\n");
    for (int i = 0; i < strlen(str); i++)
    {
        putchar(str[i]);
    }

    func(str);

    printf("\n\nAfter calling func().\n");
    for (int i = 0; i < strlen(str); i++)
    {
        putchar(str[i]);
    }

    return 0;
}

void func(char *str)
{
    str[0] = 'M';
    str[14] = 'd';
}