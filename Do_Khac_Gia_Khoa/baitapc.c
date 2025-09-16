#include <stdio.h>

double tinhfx(float x,float g) 
{
    return -g*x*x/2+x;
}

void timmax(int a[],int *max)
{
    int i;
    *max = a[0];
    for (i = 1; i < 6; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}

int main() 
{
    float x;
    const float g = 9.8;
    printf("Question 1:\n");
    printf("The position of bullet: y(5) = %.2f\n",tinhfx(5,g));
    printf("Nhap vao gia tri cua x: \n");
    while(scanf("%f",&x) != 1) {
        printf("Wrong input!. Please try again!\n");
        while (getchar() != '\n');
    }
    printf("y(x) = %.2f\n",tinhfx(x,g));
    if ((tinhfx(x,g) < 30) || (tinhfx(x,g) > 50))
    {
        printf("The bullet got out.\n");
    }
    else 
    {
        printf("The bullet got a goal.\n");
    }
    printf("Question 2.1:\n");
    int i;
    int Array[6] ={7, 6, 3, 34, 10, 710};
    printf("Using loop \"for\":\n");
    for (i = 0; i < 6; i++)
    {
        printf("The element %d of the array is %d\n",i+1,Array[i]);
    }
    printf("Using loop \"while\":\n");
    i = 0;
    while (i < 6)
    {
        printf("The element %d of the array is %d\n",i+1,Array[i]);
        i++;
    }
    printf("Using loop \"do-while\":\n");
    i = 0;
    do
    {
        printf("The element %d of the array is %d\n",i+1,Array[i]);
        i++;
    } 
    while (i < 6);
    printf("Question 2.2:\n");
    int max;
    timmax(Array,&max);
    printf("The largest element of the array is %d\n",max);
    return 0;
}
