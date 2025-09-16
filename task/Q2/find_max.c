#include <stdio.h>

int find_max(int arr[], int length)
{
    int max = arr[0];
    for (int i=0; i<length; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int array[] = {7, 6, 3, 34, 10, 710};
    int length = sizeof(array) / sizeof(array[0]);

    int max_value = find_max(array, length);
    printf("The largest number in array is: %d\n", max_value);

    return 0;
}
