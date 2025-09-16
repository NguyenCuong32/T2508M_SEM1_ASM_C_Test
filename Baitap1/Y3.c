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
    if(bullet>50 | bullet<30){
        printf("\nVien dan da di ra ngoai!");
    }
    else{
        printf("\nVien dan da ban trung hong tam!");
    }
    return 0;
}