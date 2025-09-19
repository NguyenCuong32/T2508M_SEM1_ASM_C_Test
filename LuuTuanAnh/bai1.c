
 #include <stdio.h>
int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i;

    // Dung for
    printf("Using for loop:\n");
    for(i = 0; i < 6; i++) {
        printf("The element %d of the array is %c\n", i+1, Array[i]);
    }

    // Dung while
    printf("\nUsing while loop:\n");
    i = 0;
    while(i < 6) {
        printf("The element %d of the array is %c\n", i+1, Array[i]);
        i++;
    }

    // Dung do while
    printf("\nUsing do while loop:\n");
    i = 0;
    do {
        printf("The element %d of the array is %c\n", i+1, Array[i]);
        i++;
    } while(i < 6);

    return 0;
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    findPosition(Array, 6, 'p');
    return 0;
}
