#include <stdio.h>

int main()
{
    char str[100];

    scanf("%s", str);

    int number_of_character[26] = {0}, i;

    printf("%s\n", str);
    for(i = 0; i < strlen(str); i++)
    {
        number_of_character[str[i] - 97]++;
    }

    for(i = 0; i < 26; i++)
    {
        printf("%c - %d\n", 97 + i, number_of_character[i]);
    }

    printf("\n\n%s\n", str);
    for(i = 0; i < 26; i++)
    {
        if(number_of_character[i] != 0)
        {
            printf("%c - %d\n", 97 + i, number_of_character[i]);
        }
    }

    printf("\n\n%s\n", str);
    for(i = 0; i < strlen(str); i++)
    {
        if(number_of_character[str[i] - 97] != 0)
        {
            printf("%c - %d\n", str[i], number_of_character[str[i] - 97]);
        }
    }

    printf("\n\n%s\n", str);
    for(i = 0; i < strlen(str); i++)
    {
        if(number_of_character[str[i] - 97] != 0)
        {
            printf("%c - %d\n", str[i], number_of_character[str[i] - 97]);

            number_of_character[str[i] - 97] = 0;
        }
    }

    return 0;
}