#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001];
    int number_of_vowels = 0;

    scanf("%s", s);

    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            number_of_vowels++;
        }
    }
    printf("%d\n", number_of_vowels);

    return 0;
}