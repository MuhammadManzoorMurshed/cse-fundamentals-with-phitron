#include <stdio.h>
#include <string.h>

int main()
{
    char s;

    int number_of_character[26] = {0};

    while(scanf("%c", &s) != EOF)
    {
        number_of_character[s - 97]++;
    }

    for(int i = 0; i < 26; i++)
    {
        if(number_of_character[i] > 0)
        {
            printf("%c : %d\n", 97 + i, number_of_character[i]);
        }
    }

    return 0;
}