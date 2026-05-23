#include <stdio.h>
int main()
{
    int number, i, minimum, maximum, minimum_position = 0, maximum_position = 0, temporary;

    scanf("%d", &number);

    int an_array[number];

    for(i = 0; i < number; i++)
    {
        scanf("%d", &an_array[i]);
    }    

    minimum = an_array[0];
    maximum = an_array[0];

    for(i = 1; i < number; i++)
    {
        if(minimum > an_array[i])
        {
            minimum = an_array[i];
            minimum_position = i;
        }

        if(maximum < an_array[i])
        {
            maximum = an_array[i];
            maximum_position = i;
        }
    }

    temporary = an_array[minimum_position];
    an_array[minimum_position] = an_array[maximum_position];
    an_array[maximum_position] = temporary;

    for(i = 0; i < number; i++)
    {
        printf("%d ", an_array[i]);
    } 
    return 0;
}