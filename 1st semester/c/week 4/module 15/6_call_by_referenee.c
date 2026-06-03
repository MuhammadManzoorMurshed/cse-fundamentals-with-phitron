#include <stdio.h>

void modifyValue(int *ptr) {
    *ptr = *ptr + 10;

    printf("Inside function after calling: *ptr = %d\n", *ptr);
}

int main() {
    int num = 5;

    printf("Outside function before calling: num = %d\n", num);

    modifyValue(&num); // Passing a pointer to num (by reference)
    printf("Outside function after calling: num = %d\n", num);
    return 0;
}
