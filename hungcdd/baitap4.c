#include<stdio.h>

int main() {
    int a[6] = {7, 6, 3, 34, 10, 710};
    for(int i = 0 ; i < 6 ; i++) {
        printf("The element %d of the array is %d\n", i , a[i]);
    }
    printf("\n");
    int i = 0;
    while(i < 6) {
    	 printf("The element %d of the array is %d\n", i , a[i]);
    	 i++;
	}
	printf("\n");
	i = 0;
	do {
	printf("The element %d of the array is %d\n", i , a[i]);
	i++;	
	}while(i < 6);
	}
