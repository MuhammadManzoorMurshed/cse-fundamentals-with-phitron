#include <stdio.h>

int main()
{
    int rows, columns;

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

    // Output
    printf("\n\nThe 2D array is:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("arr[%d][%d] = %d ",i, j, arr[i][j]);
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
