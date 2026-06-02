#include <stdio.h>

int main()
{
    int n, x, match = 0;

    scanf("%d", &n);

    int a[n];

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &x);

    for(int i = 0; i < 5; i++)
    {
        for(int j = i + 1; j < 5; j++)
        {

            if(a[i] + a[j] == x)
            {
                printf("Yes, matched.\n");
                
                match++;
                break;
            }
        }
    }

    if(match == 0)
    {
        printf("Opps! Didn't match.");
    }

    return 0;
}