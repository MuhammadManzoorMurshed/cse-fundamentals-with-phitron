#include <stdio.h>

int main()
{
    int rows, columns, elements, counting_zero = 0;

    scanf("%d", &rows);
    scanf("%d", &columns);

    elements = rows * columns;

    int arr[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            if(arr[i][j] == 0)
            {
                counting_zero++;
            }
        }
    }

    if(counting_zero == elements)
    {
        printf("A zero/ null matrix.\n");
    }
    else
    {
        printf("Not a zero/ null matrix.\n");
    }

    return 0;
}
