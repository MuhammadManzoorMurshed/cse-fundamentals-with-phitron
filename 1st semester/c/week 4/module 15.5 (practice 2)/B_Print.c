#include <stdio.h>

void print(int);

int main()
{
    int n;

    scanf("%d", &n);

    print(n);

    return 0;
}

void print(int num)
{
    int i;
    for (i = 1; i < num; i++)
    {
        printf("%d ", i);
    }
    printf("%d", i);

    return;
}