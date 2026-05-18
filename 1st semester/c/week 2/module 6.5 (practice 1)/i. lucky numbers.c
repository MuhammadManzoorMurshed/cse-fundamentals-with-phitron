#include <stdio.h>
int main()
{
    int n, remainder;

    scanf("%d", &n);

    remainder = n % 10;
    n = n / 10;

    if(remainder % n == 0 || n % remainder == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
