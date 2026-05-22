#include <stdio.h>
int main()
{
    int i, size;
    char str0[] = {'T', 'o', 'n', 'i', 'M'};

    size = sizeof(str0) / sizeof(char);

    for(i = 0; i < size; i++)
    {
        printf("%c", str0[i]);
    }
    printf("\n\n");
    for(i = 0; i < size; i++)
    {
        printf("%c\n", str0[i]);
    }
    printf("\n\n");
    
    char str1[6] = "Tonima";
    char str2[6] = {'T', 'o', 'n', 'i', 'm', 'A'};
    size = sizeof(str1) / sizeof(char);
    for(i = 0; i < size; i++)
    {
        printf("%c", str1[i]);
    }
    printf("\n%s", str1);
    printf("\n%s\n", str2);

    char str3[] = "Tonima";
    char str4[] = {'T', 'o', 'n', 'i', 'M', 'a'};
    printf("\n%s", str3);
    printf("\n%s\n", str4);

    char str5[] = {'T', 'o', 'n', 'I', 'm', 'a', '\0'};
    printf("\n%s\n", str5);
    
    char str6[7] = "Tonima";
    char str7[7] = {'T', 'o', 'N', 'i', 'm', 'a'};
    printf("\n%s", str6);
    printf("\n%s\n", str7);

    char str8[7] = "Tonima\0";
    char str9[7] = {'T', 'O', 'n', 'i', 'm', 'a', '\0'};
    printf("\n%s", str8);
    printf("\n%s\n", str9);

    return 0;
}