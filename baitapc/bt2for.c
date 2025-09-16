#include<stdio.h>
int main(){
    int array[6] = {7, 6, 3, 34, 10, 710};
    for (int i = 0; i < 6; i++)
    {
        printf("Phan tu thu %d cua mang la %d\n", i + 1, array[i]);
    }
     return 0;
}