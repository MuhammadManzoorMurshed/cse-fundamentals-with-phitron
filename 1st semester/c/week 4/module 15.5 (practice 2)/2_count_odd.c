#include <stdio.h>

int count_odd(int[], int);

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

    int total_odd_numbers = count_odd(arr, size);

    printf("%d\n", total_odd_numbers);

    return 0;
}

int count_odd(int arr[], int size)
{
    int odd = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
    }

    return odd;
}
