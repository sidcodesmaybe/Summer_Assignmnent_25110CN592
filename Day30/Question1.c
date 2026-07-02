/*Student Record System using Arrays and Strings*/
#include <stdio.h>

int main() {
    int rollNumbers[50];
    char names[50][50];
    int count = 0, choice;

    while(1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n2. Display Records\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll Number: ");
            scanf("%d", &rollNumbers[count]);
            printf("Enter Name: ");
            scanf("%s", names[count]);
            count++;
            printf("Student recorded successfully.\n");
        } 
        else if (choice == 2) {
            printf("\nRoll No\tName\n");
            for(int i = 0; i < count; i++) {
                printf("%d\t%s\n", rollNumbers[i], names[i]);
            }
        } 
        else if (choice == 3) {
            break;
        }
    }
    return 0;
}