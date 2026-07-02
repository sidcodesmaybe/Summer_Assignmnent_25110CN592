//Write a program to Create menu-driven string operations system.
#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char str1[100], str2[100];

    while(1) {
        printf("\n--- String Operations ---\n");
        printf("1. Length of String\n2. Copy String\n3. Compare Strings\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter primary string: ");
        scanf("%s", str1);

        switch(choice) {
            case 1:
                printf("Length: %lu\n", strlen(str1));
                break;
            case 2:
                strcpy(str2, str1);
                printf("Copied String: %s\n", str2);
                break;
            case 3:
                printf("Enter second string to compare: ");
                scanf("%s", str2);
                if (strcmp(str1, str2) == 0) printf("Strings are equal.\n");
                else printf("Strings are not equal.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}