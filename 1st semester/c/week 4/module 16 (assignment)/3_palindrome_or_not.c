#include <stdio.h>
#include <string.h>

int is_palindrome(char *);

int main()
{
    char str[11];
    int returned_value;

    scanf("%s", str);

    returned_value = is_palindrome(str);

    if (returned_value == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}

int is_palindrome(char *str)
{
    char *str1;
    int i = 0;

    str1 = (char *)malloc(11);

    strcpy(str1, str);
    strrev(str);

    while (str[i] != '\0')
    {
        if (str[i] == str1[i])
        {
            i++;
            continue;
        }
        else
        {
            i = 0;
            break;
        }
    }

    if (i == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
