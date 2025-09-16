#include <stdio.h>
int findMax(int n, int array[])
{
    int max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
    }
    return max;
}

void findMinMax(int n, int array[], int *min, int *max)
{
    *min = array[0];
    *max = array[0];
    for (int i = 1; i < n; i++)
    {
        if (array[i] < *min)
        {
            *min = array[i];
        }
        if (array[i] > *max)
        {
            *max = array[i];
        }
    }
}

int main()
{
    int array[6] = {7, 6, 3, 34, 10, 710};

    int min;
    int max;
    findMinMax(6, array, &min, &max);
    printf("Gia tri nho nhat cua mang %d\n", min);
    printf("Gia tri lon nhat cua mang %d\n", max);
    return 0;
}