#include <stdio.h>

void print_array(int arr[]);

int main()
{
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", arr);

    print_array(arr);

    return 0;
}

void print_array(int arr[])
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }

    return;
}