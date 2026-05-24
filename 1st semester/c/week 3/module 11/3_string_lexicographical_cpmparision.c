#include <stdio.h>

int main()
{
    char str0[50], str1[50];
    int i = 0;

    scanf("%s %s", str0, str1);

    while(1)
    {
        if(str0[i] == '\0' && str1[i] == '\0')
        {
                printf("Both %s and %s are same.\n", str0, str1);
                break;
        }
        else if(str0[i] == '\0')
        {
            printf("%s is smaller.\n", str0);
            break;
        }
        else if(str1[i] == '\0')
        {
            printf("%s is smaller.\n", str1);
            break;
        }

        if(str0[i] != str1[i])
        {
            if(str0[i] < str1[i])
            {
                printf("%s is smaller.\n", str0);
                break;
            }
            else
            {
                printf("%s is smaller.\n", str1);
                break;
            }
        }

        i++;
    }

    return 0;
}