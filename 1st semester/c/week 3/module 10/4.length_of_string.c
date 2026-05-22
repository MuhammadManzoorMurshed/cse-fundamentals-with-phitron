#include <stdio.h>
#include <string.h>

int main()
{
    char str0[50], str1[50];
    int i, count = 0;

    scanf("%s", str0);
    fgets(str1, 2, stdin);
    fgets(str1, 28, stdin);
    
    for(i = 0; str0[i] != '\0'; i++)
    {
        count++;
    }
    printf("%d\n", count);

    i = 0;
    count = 0;
    while(str1[i] != '\0')
    {
        count++;
        i++;

    }
    printf("%d\n", count);

    return 0;
}