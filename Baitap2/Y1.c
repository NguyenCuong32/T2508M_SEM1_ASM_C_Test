#include <stdio.h>
void Array(){
    int array[6]={7,6,3,34,10,710};
    for(int i=0; i<6; i++){
      printf("\nPhan tu thu %d cua mang la : %d", i, array[i]);
    }
}
int main(){
    Array();
    return 0;
}