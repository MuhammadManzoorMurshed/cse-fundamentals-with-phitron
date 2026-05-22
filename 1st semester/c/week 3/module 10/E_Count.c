#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[1000001];
    int i, sum = 0;

    fgets(s, 1000001, stdin);

    size_t len = strlen(s);

    if(s[len - 1] == '\n')
    {
        s[len - 1] = '\0';
    }

    for(i = 0; s[i] != '\0'; i++)
    {
        sum += (s[i] - '0');
    }
    printf("%d", sum);

    return 0;
}