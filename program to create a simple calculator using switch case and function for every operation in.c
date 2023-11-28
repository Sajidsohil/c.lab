#include <stdio.h>

float add(float num1, float num2) {
   return num1 + num2;
}

float subtract(float num1, float num2) {
   return num1 - num2;
}

float multiply(float num1, float num2) {
   return num1 * num2;
}

float divide(float num1, float num2) {
   return num1 / num2;
}

int main() {
   int choice;
   float num1, num2;

   printf("Enter first number: ");
   scanf("%f", &num1);

   printf("Enter second number: ");
   scanf("%f", &num2);

   printf("Enter choice:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
   scanf("%d", &choice);

   switch (choice) {
      case 1:
         printf("Result: %.2f", add(num1, num2));
         break;

      case 2:
         printf("Result: %.2f", subtract(num1, num2));
         break;

      case 3:
         printf("Result: %.2f", multiply(num1, num2));
         break;

      case 4:
         if (num2 != 0)
            printf("Result: %.2f", divide(num1, num2));
         else
            printf("Division by zero is not allowed");
         break;

      default:
         printf("Invalid choice. Please enter a number between 1 and 4.");
   }

   return 0;
}
