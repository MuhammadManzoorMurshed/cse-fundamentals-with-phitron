#include <stdio.h>
int main()
{
    int n, i, start_from;

    scanf("%d", &n);

    if(n > 0)
    {
        start_from = 1;
    }
    else
    {
        start_from = n;
        n = 1;
    }

    for (i = start_from; i <= n; i++)
    {
        printf("%d ", i);
    }

    return 0;
}