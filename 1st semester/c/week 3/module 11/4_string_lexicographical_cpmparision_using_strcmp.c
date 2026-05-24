#include <stdio.h>
#include <string.h>

int main()
{
    char str0[50], str1[50];
    int returned_value;

    scanf("%s %s", str0, str1);

    returned_value = strcmp(str0, str1);


    if(returned_value == 0)
    {
        printf("Both %s and %s are smaller.\n", str0, str1);
    }
    if(returned_value < 0)
    {
        printf("%s is smaller.\n", str0);
    }
    if(returned_value > 0)
    {
        printf("%s is smaller.\n", str1);
    }

    return 0;
}