#include <stdio.h>
#include <math.h>

// Function to calculate the area and perimeter of a circle
void calculateCircle(float radius) {
    float area = 3.14159 * pow(radius, 2);
    float perimeter = 2 * 3.14159 * radius;

    printf("Area of Circle: %.2f\n", area);
    printf("Perimeter of Circle: %.2f\n", perimeter);
}

// Function to calculate the area and perimeter of a rectangle
void calculateRectangle(float length, float breadth) {
    float area = length * breadth;
    float perimeter = 2 * (length + breadth);

    printf("Area of Rectangle: %.2f\n", area);
    printf("Perimeter of Rectangle: %.2f\n", perimeter);
}

// Function to calculate the area and perimeter of a square
void calculateSquare(float side) {
    float area = pow(side, 2);
    float perimeter = 4 * side;

    printf("Area of Square: %.2f\n", area);
    printf("Perimeter of Square: %.2f\n", perimeter);
}

int main() {
    int choice;
    float radius, length, breadth, side;

    printf("Choose a shape: \n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter radius of circle: ");
            scanf("%f", &radius);
            calculateCircle(radius);
            break;

        case 2:
            printf("Enter length of rectangle: ");
            scanf("%f", &length);
            printf("Enter breadth of rectangle: ");
            scanf("%f", &breadth);
            calculateRectangle(length, breadth);
            break;

        case 3:
            printf("Enter side of square: ");
            scanf("%f", &side);
            calculateSquare(side);
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
