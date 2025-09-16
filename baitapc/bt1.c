#include <stdio.h>
#define gravity 9.8
float caculate(float x){
    return -0.5 * gravity * x * x + x;
}
int main(){
    float x;
    float y5 = caculate(5);
    printf("Ket qua la: y(5) = %.2f \n", y5);
    printf("Xin moi nhap x: ");
    scanf("%f", &x);
    float y = caculate(x);
    printf("Ket qua la: y(%.2f) = %.2f\n", x, y);

    if(x > 50 || y < 30){
        printf("Vien dan da ra ngoai");
    }else if(x <= 50 && y >= 30){
        printf("Vien dan da vao muc tieu");
    }
    return 0;
}