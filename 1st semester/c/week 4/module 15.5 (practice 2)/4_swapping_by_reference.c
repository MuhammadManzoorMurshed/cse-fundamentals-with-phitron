#include <stdio.h>

void swap_it(int *, int *);

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);

    swap_it(&m, &n);

    printf("%d %d\n", m, n);

    return 0;
}

void swap_it(int *num1, int *num2)
{
    *num1 = *num1 + *num2;
    *num2 = *num1 - *num2;
    *num1 = *num1 - *num2;
}
