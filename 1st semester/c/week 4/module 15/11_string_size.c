#include <stdio.h>
#include <string.h>

void func(char[]);

int main()
{
    char str[20] = "Manzoor";

    int size = sizeof(str) / sizeof(char);
    int length = strlen(str);

    printf("In main():\n");
    printf("Size: %d\n", size);
    printf("Length: %d\n", length);

    func(str);

    return 0;
}

void func(char str[])
{
    int size = sizeof(str) / sizeof(char);
    int length = strlen(str);

    printf("\nIn func():\n");
    printf("Size: %d (Not expected!)\n", size);
    printf("Length: %d\n", length);
}