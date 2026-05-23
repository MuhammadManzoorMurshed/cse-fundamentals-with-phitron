#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    int t, i, s_Length;

    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%s", s);

        s_Length = strlen(s);

        if (s_Length <= 10)
        {
            printf("%s\n", s);
        }
        else
        {

            printf("%c%d%c\n", s[0], s_Length - 2, s[s_Length - 1]);
        }
    }

    return 0;
}