#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2;

    printf("Enter the coordinates of the first point: ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter the coordinates of the second point: ");
    scanf("%lf %lf", &x2, &y2);

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("The Euclidean distance between the two points is: %.2lf\n", distance);

    return 0;
}
