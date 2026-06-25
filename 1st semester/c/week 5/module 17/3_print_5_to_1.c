#include <stdio.h>

void func(int number);

int main()
{
    func(5);

    return 0;
}

void func(int number)
{
    if (number < 1)
    {
        return;
    }

    printf("%d\n", number);
    func(number - 1);
}