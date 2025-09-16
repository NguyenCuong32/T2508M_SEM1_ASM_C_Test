#include <stdio.h>

float calculate_y(float x)
{
    float g = 9.8;
    float y = (-0.5)*g*x*x + x;
    return y;
}

int main()
{
    float x = 5;
    printf("Enter x variable: ");
    scanf("%f", &x);

    float y = calculate_y(x);
    printf("The position of bullet y(%.2f) = %.2f\n", x, y);

    if (y > 50 || y < 30)
    {
        printf("The bullet got out!\n");
    }
    else if (y <= 50 && y >= 30)
    {
        printf("The bullet got a goal!\n");
    }

    return 0;
}
