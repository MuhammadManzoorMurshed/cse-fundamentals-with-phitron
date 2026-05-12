#include <stdio.h>

int main() {

   int num;

   scanf("%d", &num);

   if(num < 0) {
      printf("Invalid input.\n");
   }
   else if(num % 2 == 0) {
      printf("even\n");
   }
   else {
      printf("odd\n");
   }

   return 0;
}
