#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d", first, second);

    for (int i = 3; i <= n; i++) {
        next = first + second;
        first = second;
        second = next;

        printf(", %d", next);
    }

    printf("\n");

    return 0;
}
