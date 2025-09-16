#include <stdio.h>
double y(double x)
{
    double g = 9.8;
    return -0.5 * g * x * x + x;
}
int main()
{
    float result;
    double x;
    result = y(5);
    printf("The position of bullet: %.2lf\n", result);

    printf("Enter x:");
    scanf("%lf", &x);
    result = y(x);
    printf("The position of bullet: %.2lf\n", result);

    double val = y(x);
    printf("y(%.2lf) = %.2lf\n",x,val);
    if (val >50 || val <30)
    {
        printf("The bullet got out");
    }
    else
    {
        printf("The bullet got a goal");
    }

    return 0;
}