#include <stdio.h>

int main()
{
    int N, i, has_even = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n", i);

            has_even++;
        }
    }

    if(has_even == 0)
    {
        printf("-1\n");
    }

    return 0;
}