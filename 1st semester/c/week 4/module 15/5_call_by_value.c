#include <stdio.h>

void modifyValue(int x) {
    x = x + 10;

    printf("Inside function: x = %d\n", x);
}

int main() {
    int num = 5;

    modifyValue(num); // Passing num by value
    printf("Outside function: num = %d\n", num);
    
    return 0;
}
