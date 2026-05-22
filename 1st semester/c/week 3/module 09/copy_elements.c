#include <stdio.h>
int main()
{
    int n, i, m, j;

    scanf("%d", &n);

    int arr0[n];

    for(i = 0; i < n;  i++)
    {
        scanf("%d", &arr0[i]);
    }

    scanf("%d", &m);
    int arr1[m];

    for(j = 0; j < m;  j++)
    {
        scanf("%d", &arr1[j]);
    }

    int arr2[m + n];

    for(i = 0; i < n; i++)
    {
        arr2[i] = arr0[i];
    }

    for(j = 0; j < m; j++)
    {
        arr2[i] = arr1[j];
        i++;
    }

    for(i = 0; i < m + n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
