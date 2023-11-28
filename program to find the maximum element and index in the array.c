#include <stdio.h>

int main() {
    int array[100], n, i, max;
    int index = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    max = array[0];

    for (i = 1; i < n; i++) {
        if (array[i] > max) {
            max = array[i];
            index = i;
        }
    }

    printf("Maximum element: %d\n", max);
    printf("Index of maximum element: %d\n", index);

    return 0;
}
