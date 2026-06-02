#include <stdio.h>

int sum(int num1, int num2)
{
    int sum = num1 + num2;

    return sum;
}


int main()
{
    int num1, num2, returned_sum;

    scanf("%d %d", &num1, &num2);

    returned_sum = sum(num1, num2);

    printf("%d\n", returned_sum);
    printf("%d\n", sum(1, 4));
    
    return 0;
}