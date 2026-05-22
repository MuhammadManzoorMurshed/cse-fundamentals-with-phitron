#include <stdio.h>
//#include <iostream>
#include <string.h>

//unsing namespace std;

int main()
{
    char s[1000001];
    int i;

    fgets(s, 1000001, stdin);
    //getline(cin, s);

    for(i = 0; s[i] != '\\'; i++)
    {
        printf("%c", s[i]);
    }

    return 0;
}