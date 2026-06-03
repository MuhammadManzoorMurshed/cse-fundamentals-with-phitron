#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;
    int y = *ptr;
    int* ptr1 = ptr;
    int z = *ptr1;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("y = %d\n", z);
    
    *ptr = 15;
    y = *ptr;
    z = *ptr1;
    printf("\nx = %d\n", x);
    printf("y = %d\n", y);
    printf("y = %d\n", z);

    *ptr1 = 20;
    y = *ptr;
    z = *ptr1;
    printf("\nx = %d\n", x);
    printf("y = %d\n", y);
    printf("y = %d\n", z);

    printf("\nAddress of x = %p\n", &x);
    printf("Value of ptr = %p\n", ptr);
    printf("Value of ptr = %p\n", ptr1);

    return 0;
}
