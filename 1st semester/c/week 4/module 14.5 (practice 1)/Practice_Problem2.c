#include <stdio.h>

int main()
{
    int n, star;

    scanf("%d", &n);

    star = (n * 2) - 1;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }
        for(int k = star; k > 0; k--)
        {
            printf("*");
        }
        star -= 2;
        printf("\n");
    }

    return 0;
}