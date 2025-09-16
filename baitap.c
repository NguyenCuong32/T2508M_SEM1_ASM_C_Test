#include <stdio.h>

    int max( int arr[],int n) {
        int max = arr [0];
        for (int i = 1; i <n; i++) {
            if ( arr[i] >max) {
                max = arr [i];
            }
        }
        return max;
    }

int main () {
    int A[6]={7, 6, 3, 34, 10 ,710};
    printf (" Dung for--- \n");
    for (int i =0; i <6; i++) {
        printf ("Phan tu %d cua mang la : %d\n", i+1, A[i]);

    }
    printf("  Dung while \n");
    int i = 0;
    while (i<6) {
        printf (" Phan tu %d cua mang la : %d\n", i+1, A[i] );
        i++;

    }
    printf ("\nDung do while \n");
    int j=0;
    do {
        printf(" Phan tu %d cua mang la :%d\n", j+1, A [j]);
        j++;

    } while (j<6);
    int solonnhat = max (A,6);
    printf( "\n phan tu lon nhat cua mang la %d.\n", solonnhat);
    
    return 0;
}