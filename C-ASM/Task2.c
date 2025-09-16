#include <stdio.h>

void findMax (int array[], int *max)
{
    *max = array[0];
    for (int i = 0; i < 6; i++)
    {
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
}

int main()
{
    printf("Task 2.1\n");
    int array[6] = {7, 6, 3, 34, 10, 710};
    printf("a. Using for loop\n");
    for (int i = 0; i < 6; i++)
    {
        printf("The element %d of the array is %d\n", i, array[i]);
    }
    printf("\n");

    printf("b. Using while loop\n");
    int i = 0;
    while (i < 6)
    {
        printf("The element %d of the array is %d\n", i, array[i]);
        i++;
    }
    printf("\n");

    printf("c. Using do-while loop.\n");
    int j = 0;
    do 
    {
        
        printf("The element %d of the array is %d\n", j, array[j]);
        j++;
    }
    while (j < 6);
    printf("\n");

    printf("Task 2.2\n");
    int max;
    findMinMax(array, &max);
    printf("The largest value is: %d\n", max);

    return 0;
}