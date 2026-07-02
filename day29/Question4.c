//Inventory management
#include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item inventory[100];
    int count = 0, choice;

    while(1) {
        printf("\n--- Inventory Management ---\n");
        printf("1. Add Item\n2. Display Inventory\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Item ID: ");
            scanf("%d", &inventory[count].id);
            printf("Enter Item Name: ");
            scanf("%s", inventory[count].name);
            printf("Enter Quantity: ");
            scanf("%d", &inventory[count].quantity);
            printf("Enter Price: ");
            scanf("%f", &inventory[count].price);
            count++;
            printf("Item added!\n");
        } 
        else if (choice == 2) {
            printf("\nID\tName\tQty\tPrice\n");
            for(int i = 0; i < count; i++) {
                printf("%d\t%s\t%d\t%.2f\n", inventory[i].id, inventory[i].name, inventory[i].quantity, inventory[i].price);
            }
        } 
        else if (choice == 3) {
            break;
        }
    }
    return 0;
}