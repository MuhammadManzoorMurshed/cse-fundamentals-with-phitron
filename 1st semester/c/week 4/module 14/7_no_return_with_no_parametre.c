#include <stdio.h>

int sum(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    printf("%d\n", sum);
}


int main()
{
    sum();
    sum();
    
    return 0;
}