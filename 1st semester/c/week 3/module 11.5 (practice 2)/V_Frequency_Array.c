#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    int a[n], number_of_elements[m + 1];

    for(int i = 1; i <= m; i++)
    {
        number_of_elements[i] = 0;
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
        number_of_elements[a[i]]++;
        
    }

    for(int i = 1; i <= m; i++)
    {
        printf("%d\n", number_of_elements[i]);
    }

    return 0;
}