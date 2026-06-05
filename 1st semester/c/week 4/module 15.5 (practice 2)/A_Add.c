#include <stdio.h>

void sum(int, int);

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    sum(x, y);

    return 0;
}

void sum(int num1, int num2)
{
    int sum = num1 + num2;

    printf("%d\n", sum);

    return;
}