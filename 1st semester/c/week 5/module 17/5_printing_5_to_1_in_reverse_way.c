#include <stdio.h>

void func(int number);

int main()
{
    func(1);

    return 0;
}

void func(int number)
{
    if (number > 5)
    {
        return;
    }

    func(number + 1);
    printf("%d\n", number);
}