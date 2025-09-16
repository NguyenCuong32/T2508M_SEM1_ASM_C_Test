#include<stdio.h>
int timMax (int array[],int n) {
    
    int max = array[0];
    for(int i = 0; i < n; i++){
        if(max < array[i]) {
            max = array[i];
        }
    }
    return max;
}
int main () {
    int array[6] = {7,6,3,34,10,710};
    int n = 6;
    printf("The largest of the array is: %d",timMax(array,n));

  /*  Ham for:
  for (int i = 0; i < n; i++) {
        printf("The element %d of the array is %d\n",i ,array[i]);
    } */

    /* Ham while:  
    while ( i < n) {
        printf("The element %d of the array is %d\n",i,array[i]);
        i++;
    } */

    /* Ham do while :
    do {
        printf("The element %d of the array is %d\n",i,array[i]);
        i++;
    } while (i < n);
     */
    return 0;
}