#include <stdio.h>

void display_array(int arr[], int length)
{
   int i = 0;
   while (i < length)
   {
        printf("The element %d of the array is %d\n", i+1, arr[i]);
        i++;
   }
}

int main()
{
    int array[] = {7, 6, 3, 34, 10, 710};
    int length = sizeof(array) / sizeof(array[0]);
    display_array(array, length);
    return 0;
}
