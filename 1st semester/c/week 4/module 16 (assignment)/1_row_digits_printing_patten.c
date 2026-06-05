#include <stdio.h>

int main()
{
    int n, row, space, col;

    scanf("%d", &n);

    for (row = 0; row < n; row++)
    {
        for (space = 0; space < (n - row) - 1; space++)
        {
            printf(" ");
        }
        for (col = 1; col <= row + 1; col++)
        {
            printf("%d", row + 1);
        }
        printf("\n");
    }

    return 0;
}
