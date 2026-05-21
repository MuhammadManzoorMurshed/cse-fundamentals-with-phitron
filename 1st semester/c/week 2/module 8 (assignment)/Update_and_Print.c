#include <stdio.h>
int main()
{
    int n, i, x, v;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);
    scanf("%d", &v);

    for (i = n - 1; i >= 0; i--)
    {
        if(i == x)
        {
            a[i] = v;
        }
        printf("%d ", a[i]);
    }

    return 0;
}