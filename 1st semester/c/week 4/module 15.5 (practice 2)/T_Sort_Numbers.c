#include <stdio.h>

void sort_in_ascending(int []);

int main()
{
    int arr[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    int x = arr[0], y = arr[1], z = arr[2];

    sort_in_ascending(arr);

    printf("\n%d\n%d\n%d", x, y, z);

    return 0;
}

void sort_in_ascending(int arr[])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if(arr[i] > arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", arr[i]);
    }

        return;
}