#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n], i, number_of_elements[6] = {0};

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        number_of_elements[arr[i]]++;
    }
    puts("\n");

    for(i = 0; i < 6; i++)
    {
        printf("%d - %d\n", i, number_of_elements[i]);
    }

    return 0;
}