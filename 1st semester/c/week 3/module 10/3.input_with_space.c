#include <stdio.h>
#include <string.h>

int main() {
    char str0[50], str1[50], str2[50], str3[50];

    gets(str0);
    printf("%s\n\n", str0);

    fgets(str1, 25, stdin);
    //str1[24] = '\0';
    printf("%s\n", str1);

    // consume the newline character left in the input buffer
    fgets(str2, 2, stdin);

    fgets(str2, 24, stdin);
    printf("%s\n", str2);

    // consume the newline character left in the input buffer
    fgets(str2, 2, stdin);

    fgets(str2, 28, stdin);
    printf("%s\n", str2);

    return 0;
}