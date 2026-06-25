#include <stdio.h>

void print_array(int[], int);

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    print_array(arr, n);
    return 0;
}

void print_array(int arr[], int size)
{
    if (size == 0)
    {
        return;
    }

    printf("%d\n", arr[--size]);
    print_array(arr, size);
    printf("%d ", arr[size]);

    return;
}
