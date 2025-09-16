#include<stdio.h>
int findMax(int array[], int n) {
    int max = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] > max)
            max = array[i];
    }
    return max;
}
int main(){
 int array[6] =   {7,6,3,34,10,710};
 int maxvalue = findMax(array, 6);
 printf("max: %d", maxvalue);
 return 0;
}
 
