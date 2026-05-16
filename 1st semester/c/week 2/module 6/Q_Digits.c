#include <stdio.h>

int main()
{
    int T, N, i, remainder;

    scanf("%d", &T);

    for(i = 1; i <= T; i++)
    {
        scanf("%d", &N);

        do
        {
            remainder = N % 10;
            N = N / 10;

            printf("%d ", remainder);
        }while(N != 0);
        printf("\n");
    }

    return 0;
}