#include <stdio.h>

void perform(int);
int find_minimum(int[], int);
int find_maximum(int[], int);

int main()
{
    int n;

    scanf("%d", &n);

    perform(n);

    return 0;
}

void perform(int size)
{
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int minimum = find_minimum(arr, size);
    int maximum = find_maximum(arr, size);

    printf("%d %d\n", minimum, maximum);

    return;
}
int find_minimum(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    return min;
}

int find_maximum(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    return max;
}
