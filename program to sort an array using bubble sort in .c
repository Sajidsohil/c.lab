#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int array[], int n) {
   int i, j;
   for (i = 0; i < n-1; i++) {
       for (j = 0; j < n-i-1; j++) {
           if (array[j] > array[j+1])
              swap(&array[j], &array[j+1]);
       }
   }
}

void printArray(int array[], int size) {
   int i;
   for (i = 0; i < size; i++)
       printf("%d ", array[i]);
   printf("\n");
}

int main() {
   int data[] = {-2, 45, 0, 11, -9};
   int n = sizeof(data) / sizeof(data[0]);
   int i;

   printf("Original array: \n");
   printArray(data, n);

   bubbleSort(data, n);
   printf("\nSorted array: \n");
   printArray(data, n);

   return 0;
}
