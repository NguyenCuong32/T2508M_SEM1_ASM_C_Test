#include <stdio.h>


int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int n = 6;
    int i;

    
    printf("=== Using for loop ===\n");
    for (i = 0; i < n; i++) {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
    }

    
    printf("\n=== Using while loop ===\n");
    i = 0;
    while (i < n) {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
        i++;
    }

    
    printf("\n=== Using do while loop ===\n");
    i = 0;
    do {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
        i++;
    } while (i < n);

    
    int max = findMax(Array, n);
    printf("\nThe largest element of the array is %d\n", max);

    return 0;
}