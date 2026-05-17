#include <stdio.h>

int main()
{
    int n, sum = 0;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
    }
    printf("Sum of the array is %d.\n", sum);

    return 0;
}