#include <stdio.h>

void findPosition(char arr[], int size, char key) {
    int i, found = 0;
    for(i = 0; i < size; i++) {
        if(arr[i] == key) {
            printf("Character '%c' found at position: %d\n", key, i+1);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Character '%c' not found in array.\n", key);
    }
}

int main() {
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    findPosition(Array, 6, 'p');
    return 0;
}