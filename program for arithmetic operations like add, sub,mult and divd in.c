#include <stdio.h>

int main() {
   char operator;
   double num1, num2;

   printf("Enter the operator (+, -, *, /): ");
   scanf("%c", &operator);

   printf("Enter two operands: ");
   scanf("%lf %lf", &num1, &num2);

   switch(operator) {
      case '+':
         printf("The sum of %.2lf and %.2lf is: %.2lf", num1, num2, num1 + num2);
         break;

      case '-':
         printf("The difference of %.2lf and %.2lf is: %.2lf", num1, num2, num1 - num2);
         break;

      case '*':
         printf("The product of %.2lf and %.2lf is: %.2lf", num1, num2, num1 * num2);
         break;

      case '/':
         if(num2 == 0) {
            printf("Error! Division by zero is not allowed.");
         } else {
            printf("The quotient of %.2lf and %.2lf is: %.2lf", num1, num2, num1 / num2);
         }
         break;

      default:
         printf("Error! Invalid operator entered.");
   }

   return 0;
}
