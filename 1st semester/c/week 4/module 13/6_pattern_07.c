/*

   *
  ***
 *****
*******
 *****
  ***
   *

*/

#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    int space = n - 1, star = 1;

    for (int i = 0; i < (n * 2) - 1; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < star; k++)
        {
            printf("*");
        }
        printf("\n");
        if (i < n -1)
        {
            space--;
            star += 2;
        }
        else
        {
            space++;
            star -= 2;
        }
    }

    return 0;
}