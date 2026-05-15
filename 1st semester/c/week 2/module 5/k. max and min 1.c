#include <stdio.h>

int main()
{
    int A, B, C, max, min;

    scanf("%d %d %d", &A, &B, &C);

    if (A > B && A > C)
    {
        max = A;
    }
    else if (B > C)
    {
        max = B;
    }
    else
    {
        max = C;
    }

    if (A < B && A < C)
    {
        min = A;
    }
    else if (B < C)
    {
        min = B;
    }
    else
    {
        min = C;
    }

    printf("%d %d\n", min, max);

    return 0;
}
