#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    char name[50];
    float gpa;
};

int main() {
    int choice;
    FILE *fp;
    struct Student s;

    while (1) {
        printf("\n=== STUDENT RECORD SYSTEM ===\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                // Open in append-binary mode
                fp = fopen("students.dat", "ab");
                if (fp == NULL) {
                    printf("Error opening file!\n");
                    break;
                }

                printf("\nEnter Roll Number: ");
                scanf("%d", &s.roll_no);
                printf("Enter Name (No spaces): ");
                scanf("%s", s.name);
                printf("Enter GPA: ");
                scanf("%f", &s.gpa);

                // Write the entire struct block to file
                fwrite(&s, sizeof(struct Student), 1, fp);
                fclose(fp);
                
                printf("Record Added Successfully!\n");
                break;
            }

            case 2: {
                // Open in read-binary mode
                fp = fopen("students.dat", "rb");
                if (fp == NULL) {
                    printf("\nNo records found! Add a student first.\n");
                    break;
                }

                printf("\n--- CURRENT STUDENT RECORDS ---\n");
                printf("%-10s %-20s %-5s\n", "Roll No", "Name", "GPA");
                printf("-----------------------------------------\n");

                // Read struct blocks one by one until end of file
                while (fread(&s, sizeof(struct Student), 1, fp) == 1) {
                    printf("%-10d %-20s %-5.2f\n", s.roll_no, s.name, s.gpa);
                }
                fclose(fp);
                break;
            }

            case 3:
                printf("Exiting system. Goodbye!\n");
                return 0;

            default:
                printf("Invalid selection! Try again.\n");
        }
        printf("\n-----------------------------------------\n");
    }
    return 0;
}