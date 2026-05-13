#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, next, i = 0;

    printf("Fibonacci sequence: ");
    while (i < 10) {
        if (i <= 1) {
            next = i;
        } else {
            next = n1 + n2;
            n1 = n2;
            n2 = next;
        }
        printf("%d ", next);
        i++;
    }

    return 0;
}
