#include <stdio.h>
#include <string.h>

int main()
{
    char s[10001];
    int i, j, k, count = 0;

    scanf("%s", s);

    k = (strlen(s) / 2) + (strlen(s) % 2);

    for(i = 0, j = strlen(s) - 1; i < k; i++, j--)
    {
        if(s[i] == s[j])
        {
            count++;
        }
    }

    if(count == k)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}