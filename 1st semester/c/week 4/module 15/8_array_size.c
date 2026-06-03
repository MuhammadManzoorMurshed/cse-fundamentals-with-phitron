#include <stdio.h>

void func(int []);

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};

    int size = sizeof(arr) / sizeof(int);

    printf("%d\n", size);

    func(arr);

    return 0;
}

void func(int arr[])
{
    int size = sizeof(arr) / sizeof(int);

    printf("%d\n", size);
}