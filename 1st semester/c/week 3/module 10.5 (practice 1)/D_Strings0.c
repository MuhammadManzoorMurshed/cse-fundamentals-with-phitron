#include <stdio.h>
#include <string.h>

int main() {
    char A[11], B[11];
    scanf("%s %s", A, B);

    int lenA = strlen(A), lenB = strlen(B);

    printf("%d %d\n", lenA, lenB);

    char C[21];
    strcpy(C, A);
    strcat(C, B);
    printf("%s\n", C);

    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    printf("%s %s\n", A, B);

    return 0;
}