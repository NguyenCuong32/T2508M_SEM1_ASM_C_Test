#include <stdio.h>
#define G 9.8

double y(double x) {
    return -0.5 * G * x * x + x;
}

int main() {
    double x, result;

    
    result = y(5);
    printf("Vi tri cua vien dan: %.2f\n", result);

    
    printf("Nhap gia tri x: ");
    if (scanf("%2f", &x) != 1) {
        printf("Gia tri khong hop le.\n");
        return 1;
    }

    
    result = y(x);
    printf("y(%.2f) = %.2f\n", x, result);

    
    if (result > 1000.0 || result < 30.0) {
        printf("Vien dan ra ngoai\n");
    } else {
        printf("Vien dan trung dich\n");
    }

    return 0;
}