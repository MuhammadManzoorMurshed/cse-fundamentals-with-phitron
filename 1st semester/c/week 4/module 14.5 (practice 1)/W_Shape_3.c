#include <stdio.h>

int main()
{
    int n, space, star = 0;

    scanf("%d", &n);

    space = n - 1;
    for (int i = 0; i < (n * 2); i++)
    {
        if(i < n)
        {
            for(int j = space; j > 0; j--)
            {
                printf(" ");
            }
            for(int k = star; k >= 0; k--)
            {
                printf("*");
            }
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
            for(int j = 0; j < space; j++)
            {
                printf(" ");
            }
            for(int k = 0; k <= star; k++)
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
