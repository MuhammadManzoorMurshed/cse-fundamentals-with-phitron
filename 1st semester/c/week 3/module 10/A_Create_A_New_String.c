#include <stdio.h>
#include <string.h>

int main()
{
    char s[1001], t[1001];
    int i, count0 = 0, count1 = 0;

    fgets(s, 1001, stdin);
    fgets(t, 1001, stdin);

    // Removing newline character using strtok()
    // strtok(s,"\n");
    // strtok(t, "\n");

    // Removing newline character using sscanf()
    // sscanf(s, "%[^\n]", s);
    // sscanf(t, "%[^\n]", t);

    s[strcspn(s, "\n")] = '\0';
    t[strcspn(t, "\n")] = '\0';

    for(i = 0; s[i] != '\0'; i++)
    {
        count0++;
    }

    i = 0;
    while(t[i] != '\0')
    {
        count1++;
        i++;
    }
    printf("%d %d\n", count0, count1);
    printf("%s %s\n", s, t);

    return 0;
}