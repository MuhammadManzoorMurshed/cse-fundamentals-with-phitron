#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int arr[n], i, zero = 0, one = 0, two = 0, three = 0, four = 0, five = 0;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zero++;
        }
        else if(arr[i] == 1)
        {
            one++;
        }
        else if(arr[i] == 2)
        {
            two++;
        }
        else if(arr[i] == 3)
        {
            three++;
        }
        else if(arr[i] == 4)
        {
            four++;
        }
        else if(arr[i] == 5)
        {
            five++;
        }
        
    }

    printf("\n\n0 - %d\n", zero);
    printf("1 - %d\n", one);
    printf("2 - %d\n", two);
    printf("3 - %d\n", three);
    printf("4 - %d\n", four);
    printf("5 - %d\n", five);

    return 0;
}