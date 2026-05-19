#include <stdio.h>
int main()
{
    int n, i, x;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            x = 1;
            break;
        }
    }

    if(x == 1)
    {
        printf("%d\n", i);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}