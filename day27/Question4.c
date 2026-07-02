//Marksheet Generation
#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int sub1, sub2, sub3;
    int total;
    float percentage;
};

int main() {
    struct Student s;
    printf("--- Marksheet Generation ---\n");
    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);
    printf("Enter Name: ");
    scanf("%s", s.name);
    printf("Enter marks for 3 subjects (out of 100): ");
    scanf("%d %d %d", &s.sub1, &s.sub2, &s.sub3);

    s.total = s.sub1 + s.sub2 + s.sub3;
    s.percentage = s.total / 3.0;

    printf("\n==================================\n");
    printf("            MARKSHEET             \n");
    printf("==================================\n");
    printf("Roll No: %d\tName: %s\n", s.rollNo, s.name);
    printf("----------------------------------\n");
    printf("Subject 1: %d\nSubject 2: %d\nSubject 3: %d\n", s.sub1, s.sub2, s.sub3);
    printf("----------------------------------\n");
    printf("Total Marks: %d/300\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);
    printf("Result: %s\n", (s.percentage >= 40) ? "PASS" : "FAIL");
    printf("==================================\n");

    return 0;
}