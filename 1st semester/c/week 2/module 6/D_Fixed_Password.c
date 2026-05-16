#include <stdio.h>

int main()
{
    int number;

    while(scanf("%d", &number) != EOF)
    {
        if(number == 1999)
        {
            printf("Correct\n");
            break;
        }
        else
        {
            printf("Wrong\n");
        }
    }

    return 0;
}