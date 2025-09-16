#include <stdio.h>
float Viendan(float x){
    float g = 9.8;
    float bullet = (-0.5)*g*x*x+x;
    return bullet;
}
int main(){
    float x;
    printf("Nhap x trong y(x):");
    scanf("%f", &x);
    float bullet =  Viendan(x);
    printf("Cach di cua vien dan la= y(x):%.2f", bullet);
    return 0;
}