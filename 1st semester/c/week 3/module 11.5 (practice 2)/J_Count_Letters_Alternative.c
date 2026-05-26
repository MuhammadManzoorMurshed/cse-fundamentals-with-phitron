#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000000];

    scanf("%s", s);

    int number_of_character[26] = {0};

    for(int i = 0; i < strlen(s); i++)
    {
        number_of_character[s[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(number_of_character[i] != 0)
        {
            printf("%c : %d\n", 97 + i, number_of_character[i]);

            number_of_character[i] = 0;
        }
    }

    return 0;
}