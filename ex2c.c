#include<stdio.h>
int main(){
    int array[6] = {7,6,3,34,10,710};
    int size = 6;
    int i= 0;
    do{
         printf("the element %d of array is: %d\n",i + 1, array[i] );
         i++;
    } while(i<size);
return 0;
}