#include <stdio.h>

int main()
{
    int n, row, space, col, digits;

    scanf("%d", &n);

    digits = (n * 2) - 1;

    for (row = 0; row < (n * 2) - 1; row++)
    {
        if (row < n)
        {
            for (space = 0; space < (n - row) - 1; space++)
            {
                printf(" ");
            }
            for (col = 1; col <= (row * 2) + 1; col++)
            {
                printf("%d", col);
            }
        }
        else
        {
            digits = digits - 2;
            for (space = 0; space < (row - n) + 1; space++)
            {
                printf(" ");
            }
            for (col = 1; col <= digits; col++)
            {
                printf("%d", col);
            }
        }

        printf("\n");
    }

    return 0;
}
