#include <stdio.h>

int capital_to_small(char a_letter);

int main()
{
    char ch;

    scanf("%c", &ch);

    char returned_converted_to_small = capital_to_small(ch);

    printf("%c\n", returned_converted_to_small);

    return 0;
}

int capital_to_small(char a_letter)
{
    char convertet_to_small = a_letter +  32;

    return convertet_to_small;
}