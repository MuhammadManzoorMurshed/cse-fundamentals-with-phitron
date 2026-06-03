#include <stdio.h>

void func(int *);

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(int);

    printf("Before calling func().\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    func(arr);

    printf("\n\nAfter calling func().\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

void func(int *arr)
{
    arr[0] = 200;
    arr[4] = 1000;
}