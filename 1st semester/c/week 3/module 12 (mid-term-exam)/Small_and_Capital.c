#include <stdio.h>

int main()
{
    char s[1001];

    int number_of_capital_alphabets = 0, number_of_small_alphabets = 0;

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            number_of_capital_alphabets++;
        }
        else
        {
            number_of_small_alphabets++;
        }
    }

    printf("%d %d\n", number_of_capital_alphabets, number_of_small_alphabets);

    return 0;
}