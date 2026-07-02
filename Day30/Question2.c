//Mini Library System
#include <stdio.h>

struct MiniBook {
    int id;
    char title[50];
};

int main() {
    struct MiniBook books[50];
    int count = 0, choice;

    while(1) {
        printf("\n--- Mini Library System ---\n");
        printf("1. Add Book\n2. View Books\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &books[count].id);
            printf("Enter Book Title: ");
            scanf("%s", books[count].title);
            count++;
            printf("Book added successfully!\n");
        } 
        else if (choice == 2) {
            printf("\nBook List:\n");
            for(int i = 0; i < count; i++) {
                printf("ID: %d, Title: %s\n", books[i].id, books[i].title);
            }
        } 
        else if (choice == 3) {
            break;
        }
    }
    return 0;
}