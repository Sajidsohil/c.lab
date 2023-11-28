#include <stdio.h>

int main() {
    int n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);

    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Maximum of given numbers is: %d\n", max);

    return 0;
}
