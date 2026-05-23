#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    int i;

    scanf("%s", s);

    for(i = 0; i < strlen(s); i++)
    {
        if(s[i] == ',')
        {
            s[i] = ' ';
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
        else
        {
            s[i] = s[i] + 32;
        }
    }
    printf("%s\n", s);
    
    return 0;
}