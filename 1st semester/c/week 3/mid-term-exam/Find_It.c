#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int a[n], x, number_of_x = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(int i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            number_of_x++;
        }
    }
    printf("%d\n", number_of_x);

    return 0;
}