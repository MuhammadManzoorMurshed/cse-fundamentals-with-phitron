#include <stdio.h>
#include <stdlib.h>

int my_abs(int num);

int main()
{
    int value;

    scanf("%d", &value);

    int abs_value = my_abs(value);

    printf("%d\n", abs_value);

    return 0;
}

int my_abs(int num)
{
    return abs(num);
}
