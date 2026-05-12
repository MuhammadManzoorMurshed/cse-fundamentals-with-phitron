#include <stdio.h>

int main() {

   int num1, num2;
   float division;

   scanf("%d %d", &num1, &num2);

   printf("%d + %d = %d\n", num1, num2, num1 + num2);
   printf("%d - %d = %d\n", num1, num2, num1 - num2);
   printf("%d * %d = %d\n", num1, num2, num1 * num2);

   if(num2 == 0) {
      printf("Cannot divide by zero\n");
   } else {
      division = (float) num1 / num2;
      printf("%d / %d = %.2f\n", num1, num2, division);
   }

   return 0;
}
