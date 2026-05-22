#include <stdio.h>
int main()
{
    int n, i, position, value;

    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n;  i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &value);

    for(i = n; i >= position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[i] = value;

    for(i = 0; i <= n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
