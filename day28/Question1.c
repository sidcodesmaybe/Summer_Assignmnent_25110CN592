//Libraray managemetn system
#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    int isIssued;
};

int main() {
    struct Book library[100];
    int count = 0, choice, searchId;

    while(1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n2. Issue Book\n3. Return Book\n4. List Books\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Book ID: ");
            scanf("%d", &library[count].id);
            printf("Enter Book Title: ");
            scanf("%s", library[count].title);
            library[count].isIssued = 0;
            count++;
            printf("Book added!\n");
        } 
        else if(choice == 2) {
            printf("Enter Book ID to issue: ");
            scanf("%d", &searchId);
            for(int i=0; i<count; i++) {
                if(library[i].id == searchId) {
                    if(library[i].isIssued == 0) {
                        library[i].isIssued = 1;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book is already issued.\n");
                    }
                }
            }
        } 
        else if(choice == 3) {
            printf("Enter Book ID to return: ");
            scanf("%d", &searchId);
            for(int i=0; i<count; i++) {
                if(library[i].id == searchId) {
                    library[i].isIssued = 0;
                    printf("Book returned successfully.\n");
                }
            }
        } 
        else if(choice == 4) {
            for(int i=0; i<count; i++) {
                printf("ID: %d | Title: %s | Status: %s\n", 
                       library[i].id, library[i].title, library[i].isIssued ? "Issued" : "Available");
            }
        } 
        else if(choice == 5) {
            break;
        }
    }
    return 0;
}