// // 98. Write a program using random access files to read and write employee records randomly. Each
// employee record contains id, name and salary as members.
#include <stdio.h>

struct Employee{
    int id;
    char name[50];
    float salary;
};

int main(){

    struct Employee e;
    FILE *fp;

    fp = fopen("q98_employee.dat","w");

    printf("Enter ID: ");
    scanf("%d",&e.id);
    getchar(); // clear the leftover newline

    printf("Enter Name: ");
    fgets(e.name,50,stdin); // reads full name with spaces

    printf("Enter Salary: ");
    scanf("%f",&e.salary);

    fwrite(&e,sizeof(e),1,fp);
    fclose(fp);

    // Reading back the record
    fp = fopen("q98_employee.dat","r");
    fread(&e,sizeof(e),1,fp);
    printf("\nEmployee Record\nID: %d\nName: %sSalary: %.2f\n", e.id, e.name, e.salary);
    fclose(fp);

    return 0;
}