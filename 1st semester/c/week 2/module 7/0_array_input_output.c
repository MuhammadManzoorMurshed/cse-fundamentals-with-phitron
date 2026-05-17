#include <stdio.h>

int main()
{
    int a[3] = {3, 30, 300};
    int ar[3];

    ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;

    printf("a[0] = %d\n\n", a);
    printf("ar[0] = %d\n\n", ar);

    printf("ar[0] = %d\n", ar[0]);
    printf("ar[1] = %d\n", ar[1]);
    printf("ar[2] = %d\n", ar[2]);

    return 0;
}