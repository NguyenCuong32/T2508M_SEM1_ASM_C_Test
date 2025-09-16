#include <stdio.h>
int so_lon_nhat(int array[],int n){
    int max = array[0];
    for (int i = 1;i < n;i++){
        if(array[i]>max){
            max = array[i];

        }
    }
    return max;
}
int main(){
    int n;
    printf("nhập số phần tử của mảng: \n");
    scanf("%d",&n);
    int array[n];

    for(int i = 0;i<n;i++){
        printf("nhập phần tử thứ %d",i+1);
        scanf ("%d",&array[i]);

    }
    int max = so_lon_nhat( array, n);
    printf("số lớn nhất trong mảng là: %d\n",max);
}