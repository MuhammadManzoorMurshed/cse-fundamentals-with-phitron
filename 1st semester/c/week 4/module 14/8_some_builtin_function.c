#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    printf("1. %.2f\n", ceil(5.00001));
    printf("2. %.2f\n\n", floor(5.99999));

    printf("3. %.2f\n", round(5.49999));
    printf("4. %.2f\n\n", round(5.50000));

    printf("5. %.2f\n", sqrt(4));
    printf("6. %.2f\n\n", sqrt(178.4526));

    printf("8. %d\n", pow(2, 3));
    int r = pow(2, 3);
    printf("7. %d\n", r);
    printf("8. %.2f\n\n", pow(2.5, 5.8));

    printf("8. %d\n", abs(-5));
    printf("8. %d\n", abs(5));
    
    return 0;
}