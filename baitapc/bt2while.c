#include<stdio.h>
int main(){
    int array[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;
    while (i < 6)
    {
       printf("Phan tu thu %d cua mang la %d\n", i + 1, array[i]);
        i++;
    }
    return 0;
}