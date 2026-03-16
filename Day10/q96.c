// 96. Define a structure Student with three fields roll_no, name, and address. Write a program that
// takes student details from the user and stores them in “students.txt” file and also reads the stored
// student records and displays them.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    char address[100];
};

int main() {
    struct Student s;
    FILE *fp;

    fp = fopen("q96_student.txt", "w");

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    fflush(stdin);

    printf("Enter name: ");
    gets(s.name);

    printf("Enter address: ");
    gets(s.address);

    fprintf(fp, "Roll Number: %d\n", s.roll_no);
    fprintf(fp, "Name: %s\n", s.name);
    fprintf(fp, "Address: %s\n", s.address);

    fclose(fp);

    printf("Student details stored in q96_student.txt\n");

    // Reading and displaying stored student records
    fp = fopen("q96_student.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nStored Student Records:\n");
    while (fscanf(fp, "Roll Number: %d\n", &s.roll_no) != EOF) {
        fscanf(fp, "Name: %[^\n]\n", s.name);
        fscanf(fp, "Address: %[^\n]\n", s.address);
        printf("Roll Number: %d\n", s.roll_no);
        printf("Name: %s\n", s.name);
        printf("Address: %s\n", s.address);
        printf("\n");
    }

    fclose(fp);
    return 0;
}