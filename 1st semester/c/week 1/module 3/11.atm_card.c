#include <stdio.h>

int main() {
    int pin, correct_pin = 1234;

    do {
        printf("Enter your 4-digit PIN code: ");
        scanf("%d", &pin);

        if (pin != correct_pin) {
            printf("Incorrect PIN. Please try again.\n");
        }
    } while (pin != correct_pin);
    printf("Access granted. Welcome to the ATM.\n");
    
    return 0;
}
