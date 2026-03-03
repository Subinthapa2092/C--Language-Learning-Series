// 89. Display Students Studying BDS
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char program[20];
    int day, month, year; // Date of Birth
};

int main() {
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    // Input student records
    for (i = 0; i < n; i++) {
        printf("\n--- Enter details for student %d ---\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);  // Read full name including spaces

        printf("Program: ");
        scanf("%s", s[i].program);

        printf("Date of Birth (day month year): ");
        scanf("%d %d %d", &s[i].day, &s[i].month, &s[i].year);
    }

    // Display students in BDS program
    printf("\n--- Students Studying BDS ---\n");
    int count = 0;

    for (i = 0; i < n; i++) {
        if (strcmp(s[i].program, "bds") == 0) {
            printf("Roll No: %d\n", s[i].roll);
            printf("Name: %s\n", s[i].name);
            printf("DOB: %02d-%02d-%04d\n\n", s[i].day, s[i].month, s[i].year);
            count++;
        }
    }

    if (count == 0) {
        printf("No students are enrolled in the BDS program.\n");
    }

    return 0;
}