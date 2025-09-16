//bai1
/*#include <stdio.h>


int giatri(double x, double y){
    double g = 9.8;
    y(x)= -0,5*g*(x*x) + x;
    
}
int main(){
  int giatri(double x, double y);
  int x =5;
  
  printf("Vi tri cua vien dan %2.lf\n",y(x));
    return 0;
}*/
//bai 2
#include<stdio.h>
 int solonnhat(int array[], int n){
    int max = array[0];
    
    for (int i = 0; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        
    }return max;
    
 }
 

int main(){
   int solonnhat(int array[], int max);
    int array[6]={7,6,3,34,10,710};
    int n=6;
    
    printf("so lon nhat la: %d",solonnhat(array,n));
  //2.1  
    /*for (int i = 0; i < 6; i++)
    {
        printf("The element %d  of the array is : %d \n",i+1,array[i]);
        
    }
    return 0;

    while (i < 6)
    {
        printf("The element %d  of the array is : %d \n",i+1,array[i]);
        i++;
    }
    
    return 0;
    do
    {
        printf("The element %d  of the array is : %d \n",i+1,array[i]);
        i++;
    } while (i < 6);*/

    //2.2
    
}
    

    

