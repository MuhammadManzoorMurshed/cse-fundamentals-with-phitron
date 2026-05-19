#include <stdio.h>
int main()
{
    int n, i, min, pos = 0;

    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    if(min == a[0])
    {
        pos = 1;
    }
    
    for (i = 1; i < n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
            pos = i + 1;
        }
    }

    printf("%d %d\n", min, pos);
    return 0;
}