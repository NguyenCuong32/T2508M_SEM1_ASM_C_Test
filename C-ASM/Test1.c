#include<stdio.h>
// Hằng số g 
#define g 9.8


float calcY (float x ){
    return -0.5 * g * x * x + x;
}
int main (){
    float x , y ;
     x= 5;
     y=calcY(x);
     printf("The possition of bullet : y(%.0f= %.2f/n) ",x,y);

     printf("Enter x:");
        scanf("%f",&x);

        y=calcY(x);
        printf("The possition of bullet : y(%.2f= %.2f/n",x,y);

        if(y<=50&&y>=30){
            printf("The bullet got a goal\n");
        }else{
            printf("The bullet got out\n");
        }
        return 0;

}