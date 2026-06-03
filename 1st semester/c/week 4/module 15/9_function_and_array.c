#include <stdio.h>

void func(int [], int);

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(int);

    printf("%d\n", size);

    func(arr, size);

    return 0;
}

void func(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}