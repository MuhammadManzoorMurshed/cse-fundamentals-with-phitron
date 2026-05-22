#include <stdio.h>
int main()
{
    char str0[5];

    scanf("%s", str0);

    printf("%s\n", str0);
    printf("%d\n\n", sizeof(str0) / sizeof(char));

    char str1[10];

    scanf("%s", str1);
    printf("%s\n", str1);
    printf("%d\n\n", sizeof(str1) / sizeof(char));

    char str2[5];

    scanf("%s", str2);
    printf("%s\n", str2);
    printf("%d", sizeof(str2) / sizeof(char));
    
    return 0;
}