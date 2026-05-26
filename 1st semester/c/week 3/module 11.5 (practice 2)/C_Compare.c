#include <stdio.h>

int main()
{
    char x[21], y[21];
    int i = 0;

    scanf("%s %s", x, y);

    while(1)
    {
        if(x[i] == '\0' && y[i] == '\0')
        {
            puts(x);

            break;
        }
        else if(x[i] == '\0')
        {
            puts(x);

            break;
        }
        else if(y[i] == '\0')
        {
            puts(y);

            break;
        }

        if(x[i] != y[i])
        {
            if(x[i] < y[i])
            {
                puts(x);

                break;
            }
            else
            {
                puts(y);

                break;
            }
        }

        i++;
    }

    return 0;
}