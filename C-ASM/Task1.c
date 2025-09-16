#include <stdio.h>

float y(float x)
{
    float g = 9.8;
    int v0 = 30;
    float result = - 0.5 * g * x * x  + v0 * x;
    return result;
}

int main()
{
    float result, x;

    // Test voi x = 5;
    result = y(5);
    printf("The position of bullet: %.2f.\n", result);

    // Nhap x tu ban phim;
    printf("Enter the value for x: ");
    scanf("%f", &x);

    result = y(x);
    printf("The position of bullet: %.2f\n", result);

    // Kiem tra vi tri cua vien dan
    if (y(x) > 50 || y(x) < 30)
    {
        printf("The bullet got out.\n");
    }
    else
    {
        printf("The bullet got a goal.\n");
    }
}