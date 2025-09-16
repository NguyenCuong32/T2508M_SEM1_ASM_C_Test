#include <stdio.h>
int Findmax(int n, int array[]){
    int max;
    for(int i=0; i<6; i++){
      if(max<array[i]){
        max = array[i];
      }
    }
    return max;
}
int main(){
    int max;
    int array[6]={7,6,3,34,10,710};
    max = Findmax(6,array);
    printf("So lon nhat cua mang la:%d", max);
    return 0;
}