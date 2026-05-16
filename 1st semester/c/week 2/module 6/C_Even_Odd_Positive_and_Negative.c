#include <stdio.h>

int main()
{
    int N, i, number_to_check, no_of_even = 0, no_of_odd = 0, no_of_positive = 0, no_of_negative = 0;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        scanf("%d", &number_to_check);

        if(number_to_check % 2 == 0)
        {
            no_of_even++;
        }
        else
        {
            no_of_odd++;
        }

        if(number_to_check != 0)
        {
            if(number_to_check < 0)
            {
                no_of_negative++;
            }
            else
            {
                no_of_positive++;
            }
        }
    }

    printf("Even: %d\n", no_of_even);
    printf("Odd: %d\n", no_of_odd);
    printf("Positive: %d\n", no_of_positive);
    printf("Negative: %d\n", no_of_negative);

    return 0;
}