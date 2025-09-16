#include <stdio.h>

float calculateY(float x) {
    float g = 9.8;
    return -0.5 * g * x * x + x;
}

int main() {
    float x,y;
    printf("nhap x :");
    scanf("%f", &x);
    y=calculateY(x);
    printf("vien dan: y(%f) = %.2f\n",x,y);
    return 0;
}

