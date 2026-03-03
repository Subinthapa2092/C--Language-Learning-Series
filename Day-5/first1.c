// In C lanugage Series , We will learn the sturcuture in the C Languages::
// Structure and Union :: 
/*
struct student 
{
char name[20];
int roll_no;
int marks[9];
}

*/
// Structure is a mechanism that provides a means to aggregate elements of the different type.
#include<stdio.h>
int main(){
    struct student{
        char name[25];
        int roll_no;
        int marks[5];

    };
    struct student s1;
    printf("Enter the detail of the Information of Students::\n");
    scanf("%s",s1.name);
    scanf("%d",&s1.roll_no);
    for(int i = 0;i<5;i++){
        scanf("%d",&s1.marks);
    }
    return 0;
}