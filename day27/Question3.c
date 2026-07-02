//Salary management system
#include <stdio.h>

struct Salary {
    int empId;
    float basic, hra, da, netSalary;
};

int main() {
    struct Salary sal[100];
    int count = 0, choice, searchId;

    while(1) {
        printf("\n--- Salary Management System ---\n");
        printf("1. Add Salary Details\n2. Display Salary Slips\n3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("Enter Employee ID: ");
            scanf("%d", &sal[count].empId);
            printf("Enter Basic Salary: ");
            scanf("%f", &sal[count].basic);
            
            // Basic calculations
            sal[count].hra = sal[count].basic * 0.20; // 20% HRA
            sal[count].da = sal[count].basic * 0.10;  // 10% DA
            sal[count].netSalary = sal[count].basic + sal[count].hra + sal[count].da;
            
            count++;
            printf("Salary details added!\n");
        } 
        else if(choice == 2) {
            for(int i = 0; i < count; i++) {
                printf("\nEmp ID: %d\nBasic: %.2f\nHRA: %.2f\nDA: %.2f\nNet Salary: %.2f\n", 
                       sal[i].empId, sal[i].basic, sal[i].hra, sal[i].da, sal[i].netSalary);
            }
        } 
        else if(choice == 3) {
            break;
        }
    }
    return 0;
}