#include <stdio.h>

int main()
{
    int x = 10;
    int *ptr;

    ptr = &x;
    printf("%p\n", &x);
    printf("%p\n", ptr);

    printf("\n%d\n", x);
    printf("%d\n", *ptr);

    *ptr = 15; // Referencing
    printf("\n%d\n", x);
    printf("%d\n", *ptr); // Dereferencing

    ptr = 500; // Now ptr is not pointing to x
    printf("\n%p\n", &x);
    printf("%p\n", ptr);

    ptr = &x;
    printf("\n%p\n", &x);
    printf("%p\n", ptr);


    return 0;
}
