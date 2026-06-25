#include <stdio.h>

int fun(char[], int);

int main()
{
    char str[14] = "Hello! World.";

    int length = fun(str, 0);

    printf("%d\n", length);

    return 0;
}

int fun(char str[], int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }

    int l = fun(str, index + 1);

    return l + 1;
}
