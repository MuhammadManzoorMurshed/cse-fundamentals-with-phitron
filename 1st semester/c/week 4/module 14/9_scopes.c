#include <stdio.h>

int globalVar = 20;

void locFunction()
{

    int localVar = 10;
    printf("Local variable: %d\n", localVar);
}

void gloFunction()
{
    printf("Global variable from function: %d\n", globalVar);
}

void staFunction()
{
    static int staticVar = 5;
    printf("Static variable: %d\n", staticVar);
    staticVar++;
}

int main()
{
    printf("In main()\n\n");

    // Local
    printf("In locFunctin()\n");
    locFunction();
    // printf("%d\n", localVar);  // This would result in an error - localVar is not in scope here

    // Global
    printf("\nIn gloFunctin()\n");
    printf("Global variable from main: %d\n", globalVar);
    gloFunction();

    // Static
    printf("\nIn staFunctin()\n");
    staFunction(); // staticVar is initialized to 5
    staFunction(); // staticVar retains its value (6)
    staFunction(); // staticVar retains its value (7)

    return 0;
}
