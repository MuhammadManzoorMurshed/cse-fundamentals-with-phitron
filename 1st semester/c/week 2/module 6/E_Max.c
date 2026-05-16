#include <stdio.h>

int main()
{
    int N, number, i, max = 0;

    scanf("%d", &N);

    for(i = 0; i <= N; i++)
    {
        scanf("%d", &number);

        if(max < number)
        {
            max = number;
        }
    }

    printf("%d\n", max);

    return 0;
}