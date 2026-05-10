#include <stdio.h>
int main()
{
    int a, b;

    char ch;
    int num_i;
    float num_f;
    double num_d;

    //scanf("%d%% %d%%", &a, &b);
    scanf("%c", &ch);
    scanf("%d", &num_i);
    scanf("%f", &num_f);
    scanf("%lf", &num_d);

    //printf("%d%% %d%%", a, b);
    printf("%c\n%d\n%f\n%lf\n", ch, num_i, num_f, num_d);

    return 0;
}
