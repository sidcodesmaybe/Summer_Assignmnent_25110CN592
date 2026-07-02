//Write a program to Create menu-driven array operations system.
#include <stdio.h>
int main() {
    int arr[100], n = 0, choice, element, i;
    while(1) {
        printf("\n--- Array Operations ---\n");
        printf("1. Insert Element\n2. Display Array\n3. Search Element\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter element to insert: ");
            scanf("%d", &element);
            arr[n++] = element;
            printf("Element inserted!\n");
        } 
        else if (choice == 2) {
            if (n == 0) {
                printf("Array is empty.\n");
            } else {
                printf("Array elements: ");
                for(i = 0; i < n; i++) printf("%d ", arr[i]);
                printf("\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter element to search: ");
            scanf("%d", &element);
            int found = -1;
            for(i = 0; i < n; i++) {
                if(arr[i] == element) {
                    found = i;
                    break;
                }
            }
            if(found != -1) printf("Found at index %d\n", found);
            else printf("Element not found.\n");
        } 
        else if (choice == 4) {
            break;
        }
    }
    return 0;
}