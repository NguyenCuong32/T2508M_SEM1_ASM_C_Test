#include <stdio.h>
int Array[6] = {7, 6, 3, 34, 10, 710};
int main()
{
    for (int i = 0; i < 6; i++)
    {
        printf("The element %d of the array is %d\n", i + 1, Array[i]);
    }
    
    
    int i =0;
    while (i<6)
    {
        printf("The element %d of the array is %d\n\n",i+1,Array[i]);
        i++;
    }

    
    do
    {
       printf("The element %d of the array is %d\n",i+1,Array[i]);
    } while (i<6);
    
    return 0;
}
