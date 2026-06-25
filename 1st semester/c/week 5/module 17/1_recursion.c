#include <stdio.h>

// Recursive function to calculate the sum of numbers from 1 to n
int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum(n - 1);
    }
}

int main()
{
    int num = 5, result;

    result = sum(num);

    printf("Sum of numbers from 1 to %d = %d\n", num, result);
    
    return 0;
}
