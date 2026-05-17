#include <stdio.h>

int main()
{
    int a[3];

    a[0] = 10;
    a[1] = 20;
    a[2] = 30;

    printf("a[0] = %d\n", a[0]);
    printf("a[1] = %d\n", a[1]);
    printf("a[2] = %d\n\n", a[2]);

    int ar[3] = {2, 4, 6};
    int arr[] = {1, 3, 5};
    int arrr[3] = {100};
    int arrrr[3] = {0};
    int arrrrr[3] = {1, 3};
    int arrrrrr[3];

    printf("ar[0] = %d\n", ar[0]);
    printf("ar[1] = %d\n", ar[1]);
    printf("ar[2] = %d\n\n", ar[2]);

    printf("arr[0] = %d\n", arr[0]);
    printf("arr[1] = %d\n", arr[1]);
    printf("arr[2] = %d\n\n", arr[2]);

    printf("arrr[0] = %d\n", arrr[0]);
    printf("arrr[1] = %d\n", arrr[1]);
    printf("arrr[2] = %d\n\n", arrr[2]);

    printf("arrrr[0] = %d\n", arrrr[0]);
    printf("arrrr[1] = %d\n", arrrr[1]);
    printf("arrrr[2] = %d\n\n", arrrr[2]);

    printf("arrrrr[0] = %d\n", arrrrr[0]);
    printf("arrrrr[1] = %d\n", arrrrr[1]);
    printf("arrrrr[2] = %d\n\n", arrrrr[2]);

    printf("arrrrrr[0] = %d\n", arrrrrr[0]);
    printf("arrrrrr[1] = %d\n", arrrrrr[1]);
    printf("arrrrrr[2] = %d\n", arrrrrr[2]);

    return 0;
}