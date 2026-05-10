#include <stdio.h>
int main()
{
    int num0 = 1000000000;
    int num1 = 10000000000;

    float num2 = 12.898342;
    float num3 = 342.3282324;

    long long num4 = 10000000000;
    double num5 = 342.3282324;

    printf("%d %d\n%f %f\n%lld %0.9lf\n", num0, num1, num2, num3, num4, num5);

    return 0;
}