#include <stdio.h>

int sum()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    return sum;
}


int main()
{
    int returned_sum;

    returned_sum = sum(100); //No need to pass argument

    printf("%d\n", returned_sum);
    printf("%d\n", sum());
    
    return 0;
}