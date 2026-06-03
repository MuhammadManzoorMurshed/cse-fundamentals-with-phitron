#include <stdio.h>

void func(double *, int);

int main()
{
    double arr[5] = {2.123, 4.567, 6.234, 8.456, 10.345};

    int size = sizeof(arr) / sizeof(double);

    printf("%d\n", size);

    func(arr, size);

    return 0;
}

void func(double *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.2lf ", arr[i]);
    }
}