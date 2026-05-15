#include <stdio.h>

int main() {
    int X, first_digit;

    scanf("%d", &X);

    while(X != 0)
    {
        first_digit = X % 10;
        X = X / 10;
    }

    if(first_digit % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return 0;
}

