#include<stdio.h>
int main(){
int array[6];
int choice,i;
for (int i = 0; i < 6; i++)
{
    printf("nhap so phan tu thu %d:",i +1);
    scanf("%d",&array[i]);
}
    printf("\nchon kieu vong lap:\n");
    printf("1. Dung for\n");
    printf("2. Dung while\n");
    printf("3. Dung do-while\n");
    printf("Nhap lua chon cua ban: ");
    scanf("%d", &choice);
switch (choice)
{
case 1:
    printf("dung for");
    for (int i = 0; i < 6; i++)
    {
         printf("nhap so thu %d cua mang %d\n ",i +1,array[i]);
    }
    break;
    case 2:
    printf("dung while");
    i =0;
    while (i<6)
    {
         printf("nhap so thu %d cua mang %d\n ",i +1,array[i]);
    }
    break;
    case 3:
    printf("dung do while");
    i =0;
    do
    {
         printf("nhap so thu %d cua mang %d\n ",i +1,array[i]);
         i++;
    }
    while(i > 6);
    break;

default: 
printf("truong hop ko jop le");
    break;
}
return 0;
}