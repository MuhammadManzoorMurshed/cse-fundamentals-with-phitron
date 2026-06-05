#include <stdio.h>

int count_before_zero(int[], int);

int main()
{
    int n, size, returned_value;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    size = sizeof(arr) / sizeof(int);
    returned_value = count_before_zero(arr, size);

    printf("%d\n", returned_value);

    return 0;
}

int count_before_zero(int arr[], int size)
{
    int before_zero = 0;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] == 0)
        {
            break;
        }
        before_zero++;
    }

    return before_zero;
}