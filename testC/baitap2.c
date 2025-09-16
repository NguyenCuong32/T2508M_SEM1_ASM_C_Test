#include <stdio.h>

int main() {
int array[6] = {7, 6, 3, 34, 10, 710};
int i, choice;
printf("MENU\n");
printf("1. dùng for\n");
printf("2. dùng while\n");
printf("3. dùng do while\n");
printf("4. thoát\n");
printf("nhập choice\n ");
scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("sử dụng for\n");
        for (i = 0; i < 6; i++) {
        printf("phần tử %d : %d\n", i + 1, array[i]);
        }
        break;

        case 2:
        printf("sử dụng while\n");
        i = 0;
        while (i < 6) {
        printf("phần tử %d : %d\n", i + 1, array[i]);
        i++;
        }
         break;

        case 3:
        printf("sử dụng do while\n");
        i = 0;
        do {
        printf("phần tử %d : %d\n", i + 1, array[i]);
        i++;
        } while (i < 6);
        break;

        case 4:
        printf("Thoát\n");
        break;
        default:
        printf("Lỗi");
        }
    
    return 0;
}
