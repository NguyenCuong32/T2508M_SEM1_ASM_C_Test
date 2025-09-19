#include <stdio.h>

// Hàm tính y(x)
double tinh_y(double x) {
    double g = 9.8;
    return -0.5 * g * x * x + x;
}

int main() {
    double x, y;

    // 1. Tính y(5)
    y = tinh_y(5);
    printf("Vị trí của viên đạn: y(5) = %.2f\n", y);

    // 2. Nhập x từ bàn phím
    printf("Nhập giá trị x: ");
    scanf("%lf", &x);

    // 3. Tính y(x)
    y = tinh_y(x);
    printf("Vị trí của viên đạn: y(%.2f) = %.2f\n", x, y);

    // 4. Kiểm tra điều kiện
    if (y < 0)
    printf("The bullet got out\n");
    else
    printf("The bullet got a goal\n");

    return 0;
    
}


#include<stdio.h>

int main() {
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;

    while (i < 6) {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
    }
    return 0;
}