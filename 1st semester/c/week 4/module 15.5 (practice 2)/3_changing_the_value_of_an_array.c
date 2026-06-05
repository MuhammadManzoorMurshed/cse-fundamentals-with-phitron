#include <stdio.h>

void change_it(int[], int);

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int size = sizeof(arr) / sizeof(int);

    change_it(arr, size);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void change_it(int arr[], int size)
{
    arr[size - 1] = 100;
}
