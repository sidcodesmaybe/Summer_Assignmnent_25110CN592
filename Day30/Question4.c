//Create a mini project
#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 10

int roomStatus[MAX_ROOMS];        // 0 = available, 1 = booked
char guestName[MAX_ROOMS][50];    // guest name for each room

// show all rooms and their status
void displayRooms() {
    printf("\n---- ROOM STATUS ----\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("Room %d : ", i + 1);
        if (roomStatus[i] == 0)
            printf("Available\n");
        else
            printf("Booked by %s\n", guestName[i]);
    }
}

// book a room if it's free
void bookRoom() {
    int roomNo;
    printf("Enter room number to book (1-%d): ", MAX_ROOMS);
    scanf("%d", &roomNo);

    if (roomNo < 1 || roomNo > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    int i = roomNo - 1;
    if (roomStatus[i] == 1) {
        printf("Room %d is already booked by %s.\n", roomNo, guestName[i]);
        return;
    }

    printf("Enter guest name: ");
    scanf(" %[^\n]", guestName[i]);   // reads full name with spaces
    roomStatus[i] = 1;
    printf("Room %d booked successfully for %s.\n", roomNo, guestName[i]);
}

// cancel a booking
void cancelRoom() {
    int roomNo;
    printf("Enter room number to cancel (1-%d): ", MAX_ROOMS);
    scanf("%d", &roomNo);

    if (roomNo < 1 || roomNo > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    int i = roomNo - 1;
    if (roomStatus[i] == 0) {
        printf("Room %d is already free.\n", roomNo);
        return;
    }

    printf("Booking for %s in room %d cancelled.\n", guestName[i], roomNo);
    roomStatus[i] = 0;
    strcpy(guestName[i], "");
}

// search which room a guest is staying in
void searchGuest() {
    char name[50];
    int found = 0;
    printf("Enter guest name to search: ");
    scanf(" %[^\n]", name);

    for (int i = 0; i < MAX_ROOMS; i++) {
        if (roomStatus[i] == 1 && strcmp(guestName[i], name) == 0) {
            printf("%s is staying in Room %d.\n", name, i + 1);
            found = 1;
        }
    }
    if (!found)
        printf("No booking found for %s.\n", name);
}

int main() {
    int choice;

    // start with all rooms empty
    for (int i = 0; i < MAX_ROOMS; i++) {
        roomStatus[i] = 0;
        strcpy(guestName[i], "");
    }

    do {
        printf("\n===== HOTEL ROOM BOOKING SYSTEM =====\n");
        printf("1. Display Rooms\n");
        printf("2. Book a Room\n");
        printf("3. Cancel Booking\n");
        printf("4. Search Guest\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: displayRooms(); break;
            case 2: bookRoom(); break;
            case 3: cancelRoom(); break;
            case 4: searchGuest(); break;
            case 5: printf("Exiting... Thank you!\n"); break;
            default: printf("Invalid choice, try again.\n");
        }

    } while (choice != 5);

    return 0;
}