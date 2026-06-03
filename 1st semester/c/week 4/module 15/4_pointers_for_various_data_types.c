#include <stdio.h>

int main() {
    int x = 10;
    float y = 3.14;
    char ch = 'A';
    int numbers[] = {1, 2, 3, 4, 5};

    int *intPtr = &x;       // Pointer to an integer
    float *floatPtr = &y;    // Pointer to a float
    char *charPtr = &ch;     // Pointer to a character
    

    // Accessing and printing values using pointers
    printf("Value of x (integer): %d\n", *intPtr);
    printf("Value of y (float): %f\n", *floatPtr);
    printf("Value of ch (character): %c\n", *charPtr);

    printf("\nAddress of x = %p\n", &x);
    printf("Value of intPtr = %p\n", intPtr);
    printf("Address of ch = %p\n", &ch);
    printf("Value of charPtr = %p\n", charPtr);
    printf("Address of y = %p\n", &y);
    printf("Value of floatPtr = %p\n", floatPtr);

    return 0;
}
