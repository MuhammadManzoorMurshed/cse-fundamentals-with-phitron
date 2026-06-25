#include <stdio.h>

int main()
{
    int rows, columns, fixed_row, fixed_col;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nEnter the number of columns: ");
    scanf("%d", &columns);

    int arr[rows][columns];

    // Input
    printf("\n\nEnter the elements of the 2D array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing by a fixed row
    scanf("%d", &fixed_row);
    printf("\nThe %d number row's values are:\n", fixed_row + 1);
    for (int j = 0; j < columns; j++)
    {
        printf("arr[%d][%d] = %d ", fixed_row, j, arr[fixed_row][j]);
    }

    // Printing by a fixed column
    scanf("%d", &fixed_col);
    printf("\n\nThe %d number column's values are:\n", fixed_col + 1);
    for (int i = 0; i < rows; i++)
    {
        printf("arr[%d][%d] = %d ", i, fixed_col, arr[i][fixed_col]);
    }
    return 0;
}
