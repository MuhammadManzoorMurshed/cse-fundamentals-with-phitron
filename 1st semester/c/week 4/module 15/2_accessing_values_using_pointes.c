#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // Initializes ptr to point to the memory location of x
    int y = *ptr;  // Accesses the value stored at the memory location pointed to by ptr

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    printf("\nAddress of x = %p\n", &x);
    printf("Value of ptr = %p\n", ptr);

    return 0;
}
