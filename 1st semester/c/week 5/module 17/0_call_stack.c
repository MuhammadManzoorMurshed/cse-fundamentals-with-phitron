#include <stdio.h>

void functionB()
{
    printf("Inside functionB\n");
}

void functionA()
{
    printf("Inside functionA\n");
    functionB();
}

int main()
{
    printf("Inside main\n");

    functionA();

    printf("Back in main\n");

    return 0;
}

/*

1. main is the entry point of the program.

2. main calls functionA.

3. functionA calls functionB.

The call stack looks like this during execution:
[functionB]
[functionA]
[main]

functionB completes and is popped off the stack first.
[functionA]
[main]

functionA completes and is popped off the stack.
[main]

Control returns to main, and it completes is popped off the stack.

*/
