#include<stdio.h>
int main(){
 int array[6] =   {7,6,3,34,10,710};
int size = 6;
int i =0;
while(i<size){
     printf("the element %d of array is: %d\n",i + 1, array[i] );
     i++;
}
return 0;
}