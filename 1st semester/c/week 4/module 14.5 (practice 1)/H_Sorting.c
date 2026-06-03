#include <stdio.h>

void bubble_sort(int arr[], int size);
void swap(int *num1, int *num2);
void print_array(int arr[], int size);
void input_array(int arr[], int size);

int main()
{
    int n;

    scanf("%d", &n);
    int arr[n];

    input_array(arr, n);
    bubble_sort(arr, n);
    print_array(arr, n);

    return 0;
}

void input_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void bubble_sort(int arr[], int size)
{
    int swapped;
    for(int i = 0; i < size - 1; i++)
    {
        swapped = 0;
        for(int j = 0; j < (size - i) - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped++;
            }
        }
        if(swapped == 0)
        {
            break;
        }
    }
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void print_array(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}