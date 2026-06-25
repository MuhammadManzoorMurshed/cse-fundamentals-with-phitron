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

    if (rows != columns)
    {
        flag = 0;
    }
    else
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if ((i + j) == (rows - 1))
                {
                    if (arr[i][j] != 1)
                    {
                        flag = 0;
                        break;
                    }
                    continue;
                }
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
    }

    if (flag == 1)
    {
        printf("A secondary diagonal unit matrix.\n");
    }
    else
    {
        printf("Not a secondary diagonal unit matrix.\n");
    }

    return 0;
}
