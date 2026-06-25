#include <stdio.h>

int main()
{
    int rows, columns, elements, flag = 1;

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

    if(rows != columns)
    {
        printf("Not a diagonal matrix\n");
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if(i == j)
                {
                    continue;
                }
                if (arr[i][j] != 0)
                {
                    flag = 0;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("A primary diagonal matrix.\n");
    }
    else
    {
        printf("Not a primary diagonal matrix.\n");
    }

    return 0;
}
