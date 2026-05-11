#include <stdio.h>

int main()
{
	int a = 10, b = 4, result;
    float result_for_division;

	// printing a and b
	printf("a = %d and b = %d\n", a, b);

	result = a + b; // addition
	printf("\na + b is %d\n", result);

	result = a - b; // subtraction
	printf("a - b is %d\n", result);

	result = a * b; // multiplication
	printf("a * b is %d\n", result);

	result_for_division = a / b; // division
	printf("a / b is %f\n", result_for_division);

	result = a % b; // modulus
	printf("a %% b is %d\n", result);

	return 0;
}
