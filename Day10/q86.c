// 86. Total & Average Marks Using Function
#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks[5];
};

float total(struct Student s){
    float sum = 0;
    int i;
    for(i = 0; i < 5; i++)
        sum += s.marks[i];
    return sum;
}

float average(struct Student s){
    return total(s) / 5;
}

int main(){
    struct Student s;
    int i;

    printf("Enter student name: ");
    getchar();  
    // Using getchar() to consume the newline character left by previous input
    fgets(s.name, sizeof(s.name), stdin);//Using fgets to read the name with spaces
    // In the vs code fget is used instead of gets because gets is unsafe and can cause buffer overflow

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter 5 subject marks:\n");
    for(i = 0; i < 5; i++){
        printf("Subject %d: ", i+1);
        scanf("%f", &s.marks[i]);
    }

    printf("\nStudent Details:\n");
    printf("Name: %s", s.name);
    printf("Roll: %d\n", s.roll);

    printf("Total Marks = %.2f\n", total(s));
    printf("Average Marks = %.2f\n", average(s));

    return 0;
}