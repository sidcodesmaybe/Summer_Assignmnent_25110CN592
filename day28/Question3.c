//Ticket booking system
#include <stdio.h>

int main() {
    int totalSeats = 50;
    int choice, seatsToBook;

    while(1) {
        printf("\n--- Ticket Booking System ---\n");
        printf("Available Seats: %d\n", totalSeats);
        printf("1. Book Tickets\n2. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter number of seats to book: ");
            scanf("%d", &seatsToBook);
            if(seatsToBook <= totalSeats) {
                totalSeats -= seatsToBook;
                printf("Booking successful! %d seats confirmed.\n", seatsToBook);
            } else {
                printf("Not enough seats available.\n");
            }
        } 
        else if(choice == 2) {
            break;
        }
    }
    return 0;
}