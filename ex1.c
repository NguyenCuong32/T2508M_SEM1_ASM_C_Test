#include <stdio.h>

#define G 9.8

double y(double x) {
    return -0.5 * G * x * x + x;
}

int main() {

    double x_fixed = 5.0;
    double y_fixed = y(x_fixed);
    printf("The position of bullet: y(%.1f) = %.2f\n", x_fixed, y_fixed);
    double x_input;
    printf("Enter a value for x: ");
    if (scanf("%lf", &x_input) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

  
    double y_input = y(x_input);
    printf("The position of bullet: y(%.2f) = %.2f\n", x_input, y_input);


    if (y_input > 50 || y_input < 30) {
        printf("The bullet got out\n");
    } else {
        printf("The bullet got a goal\n");
    }

    return 0;
}
