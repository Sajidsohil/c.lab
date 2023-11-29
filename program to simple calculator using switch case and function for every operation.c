#include <stdio.h>

int add(int num1, int num2) {
   return num1 + num2;
}

int subtract(int num1, int num2) {
   return num1 - num2;
}

int multiply(int num1, int num2) {
   return num1 * num2;
}

int divide(int num1, int num2) {
   return num1 / num2;
}

int modulus(int num1, int num2) {
   return num1 % num2;
}

int main() {
   int num1, num2;
   char operator;

   printf("Enter the first number: ");
   scanf("%d", &num1);

   printf("Enter the second number: ");
   scanf("%d", &num2);

   printf("Enter the operator (+, -, *, /, %%): ");
   scanf(" %c", &operator);

   switch(operator) {
      case '+':
         printf("%d + %d = %d", num1, num2, add(num1, num2));
         break;

      case '-':
         printf("%d - %d = %d", num1, num2, subtract(num1, num2));
         break;

      case '*':
         printf("%d * %d = %d", num1, num2, multiply(num1, num2));
         break;

      case '/':
         if(num2 != 0) {
            printf("%d / %d = %d", num1, num2, divide(num1, num2));
         } else {
            printf("Error! Dividing by zero is not allowed.");
         }
         break;

      case '%':
         printf("%d mod %d = %d", num1, num2, modulus(num1, num2));
         break;

      default:
         printf("Error! Invalid operator.");
         break;
   }

   return 0;
}
