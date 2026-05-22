#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];

    scanf("%s", &s);

    int number_of_character[26] = {0};

    for(int i = 0; i < strlen(s); i++)
    {
        number_of_character[s[i] - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, number_of_character[i]);
    }

    return 0;
}