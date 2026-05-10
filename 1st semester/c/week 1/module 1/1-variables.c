#include <stdio.h>
int main()
{
    char ch;
    int num_i;
    float num_f;
    double num_d;

    ch = 'm';
    num_i = 13;
    num_f = 35.23;
    num_d = 233.2345632195;

    printf("%c\n%d\n%f\n%.10lf\n", ch, num_i, num_f, num_d);

    return 0;
}
