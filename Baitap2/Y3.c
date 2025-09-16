#include <stdio.h>
void Array()
{
    int array[6] = {7, 6, 3, 34, 10, 710};
    int i=0;
    do{
        printf("\nPhan tu thu %d cua mang la : %d", i +1, array[i]);
        i++;
    }
    while(i<6);
}
int main()
{
    Array();
    return 0;
}