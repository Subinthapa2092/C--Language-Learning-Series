// 84. Structure Student
#include <stdio.h>

struct Student{
    char name[50];
    int roll;
    float marks[5];
};

int main(){
    struct Student s[2];
    int i,j;

    for(i=0;i<2;i++){
        printf("Enter name and roll: ");
        scanf("%s%d",s[i].name,&s[i].roll);
        for(j=0;j<5;j++)
            scanf("%f",&s[i].marks[j]);
    }

    for(i=0;i<2;i++){
        printf("Name: %s Roll: %d\n",s[i].name,s[i].roll);
    }
}