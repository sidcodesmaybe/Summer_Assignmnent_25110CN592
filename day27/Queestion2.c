#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char designation[50];
};

int main() {
    struct Employee emp[100];
    int count = 0, choice, searchId, found;

    while(1) {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n2. Display All Employees\n3. Search Employee\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter ID: ");
            scanf("%d", &emp[count].id);
            printf("Enter Name: ");
            scanf("%s", emp[count].name);
            printf("Enter Designation: ");
            scanf("%s", emp[count].designation);
            count++;
            printf("Employee added successfully!\n");
        } 
        else if (choice == 2) {
            printf("\nID\tName\tDesignation\n");
            for(int i = 0; i < count; i++) {
                printf("%d\t%s\t%s\n", emp[i].id, emp[i].name, emp[i].designation);
            }
        } 
        else if (choice == 3) {
            printf("Enter ID to search: ");
            scanf("%d", &searchId);
            found = 0;
            for(int i = 0; i < count; i++) {
                if(emp[i].id == searchId) {
                    printf("Found! Name: %s, Designation: %s\n", emp[i].name, emp[i].designation);
                    found = 1;
                    break;
                }
            }
            if(!found) printf("Employee not found.\n");
        } 
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}