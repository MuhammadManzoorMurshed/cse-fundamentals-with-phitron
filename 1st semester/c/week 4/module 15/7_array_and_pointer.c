#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15, 20, 25};

    printf("%p\n", arr);
    printf("%p\n", &arr[0]);

    printf("\n%d\n", *arr);
    printf("%d\n", arr[0]);

    printf("\n%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);

    printf("\n%d\n", 0[arr]);
    printf("%d\n", 1[arr]);
    printf("%d\n", 2[arr]);

    printf("\n%d\n", *(arr));
    printf("%d\n", *(arr + 1));
    printf("%d\n", *(arr + 2));

    printf("%p\n", arr + 2);
    printf("%p\n", &arr[2]);

    return 0;
}