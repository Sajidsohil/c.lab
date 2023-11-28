#include <stdio.h>
#include <math.h>

void main() {
    int choice;
    double side, height, radius, area, perimeter;

    printf("Enter the figure's number to calculate its area and perimeter.\n");
    printf("1. Circle\n2. Square\n3. Rectangle\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            area = M_PI * pow(radius, 2);
            perimeter = 2 * M_PI * radius;
            break;

        case 2:
            printf("Enter the side length of the square: ");
            scanf("%lf", &side);
            area = pow(side, 2);
            perimeter = 4 * side;
            break;

        case 3:
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &side);
            printf("Enter the height of the rectangle: ");
            scanf("%lf", &height);
            area = side * height;
            perimeter = 2 * (side + height);
            break;

        default:
            printf("Error! Invalid choice entered.");
            return;
    }

    printf("The area of the figure is: %.2lf\n", area);
    printf("The perimeter of the figure is: %.2lf\n", perimeter);
}
