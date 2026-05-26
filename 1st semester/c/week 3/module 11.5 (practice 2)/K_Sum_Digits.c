#include <stdio.h>
#include <string.h>

int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    char a[n + 1];
    scanf("%s", a);

    for(int i = 0; i < strlen(a); i++)
    {
        sum += a[i] - 48;
    }
    printf("%d\n", sum);

    return 0;
}