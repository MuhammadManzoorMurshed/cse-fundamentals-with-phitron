#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x; // Initializes ptr to point to the memory location of x

    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
    return 0;
}
