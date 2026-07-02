//Mini Employee Management System
#include <stdio.h>

struct MiniEmployee {
    int id;
    char name[50];
};

int main() {
    struct MiniEmployee list[50];
    int count = 0, choice;

    while(1) {
        printf("\n--- Mini Employee System ---\n");
        printf("1. Add Employee\n2. View Employee Roster\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &list[count].id);
            printf("Enter Name: ");
            scanf("%s", list[count].name);
            count++;
            printf("Employee added!\n");
        } 
        else if (choice == 2) {
            printf("\nEmployee List:\n");
            for(int i = 0; i < count; i++) {
                printf("ID: %d | Name: %s\n", list[i].id, list[i].name);
            }
        } 
        else if (choice == 3) {
            break;
        }
    }
    return 0;
}