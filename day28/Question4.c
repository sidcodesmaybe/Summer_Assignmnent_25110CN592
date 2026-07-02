//Contact management system
#include <stdio.h>

struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact contacts[100];
    int count = 0, choice;

    while(1) {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add Contact\n2. Display All Contacts\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Name: ");
            scanf("%s", contacts[count].name);
            printf("Enter Phone Number: ");
            scanf("%s", contacts[count].phone);
            count++;
            printf("Contact added successfully!\n");
        } 
        else if(choice == 2) {
            printf("\n--- Contact List ---\n");
            for(int i = 0; i < count; i++) {
                printf("%d. Name: %s | Phone: %s\n", i+1, contacts[i].name, contacts[i].phone);
            }
        } 
        else if(choice == 3) {
            break;
        }
    }
    return 0;
}