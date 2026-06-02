#include <stdio.h>

int sum(void)
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    return sum;
}


int main()
{
    int returned_sum;

    returned_sum = sum(100); //Error; since, parametre has void

    printf("%d\n", returned_sum);
    printf("%d\n", sum());
    
    return 0;
}