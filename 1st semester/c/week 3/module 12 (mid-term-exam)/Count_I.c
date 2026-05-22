#include <stdio.h>

int main()
{
    int n, number, even = 0, odd = 0;

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &number);

        if(number % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d\n", even, odd);

    return 0;
}