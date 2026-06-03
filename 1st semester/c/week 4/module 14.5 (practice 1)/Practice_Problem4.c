#include <stdio.h>

int small_to_capital(char a_letter);

int main()
{
    char ch;

    scanf("%c", &ch);

    char returned_converted_to_capital = small_to_capital(ch);

    printf("%c\n", returned_converted_to_capital);

    return 0;
}

int small_to_capital(char a_letter)
{
    char convertet_to_capital = a_letter - 32;

    return convertet_to_capital;
}