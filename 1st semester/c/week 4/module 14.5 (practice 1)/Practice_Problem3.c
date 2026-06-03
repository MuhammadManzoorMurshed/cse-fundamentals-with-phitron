#include <stdio.h>

int char_to_ascii(char a_letter);

int main()
{
    char ch;

    scanf("%c", &ch);

    int returned_converted_to_ascii = char_to_ascii(ch);

    printf("%d\n", returned_converted_to_ascii);

    return 0;
}

int char_to_ascii(char a_letter)
{
    int convertet_to_ascii = a_letter;

    return convertet_to_ascii;
}