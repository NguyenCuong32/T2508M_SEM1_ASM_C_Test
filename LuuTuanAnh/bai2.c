struct ClassRoom {
    char name[50];
    int roomNo;
};

#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char name[50];
    int roomNo;
};

int main() {
    struct ClassRooms[10];
    int i;

    printf("Enter information for 10 classroom:\n");
    for(i = 0; i < 10; i++) {
        printf("Enter name for room %d: ", i+1);
        scanf("%s", rooms[i].name);

        printf("Enter room number for room %d: ", i+1);
        scanf("%d", &rooms[i].roomNo);

    }

    printf("nClassroom list:\n");
    for(i = 0; i < 18; i++) {
        printf("Room name: %s\n", rooms[i].name);
        printf("Room no:%d\n\n", rooms[i].roomNo);
    }

    return 0;


}