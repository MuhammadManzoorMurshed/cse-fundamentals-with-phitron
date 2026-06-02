/*

1
12
123
1234

*/

#include <stdio.h>

int main()
{
    int n, digit;

    scanf("%d", &n);

    digit = n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= digit; j++)
        {
            printf("%d", j);
        }
        digit--;
        printf("\n");
    }

    return 0;
}