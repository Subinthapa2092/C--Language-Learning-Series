#include<stdio.h>
int main(){
    struct student{
        char name[30];
        int roll_no;
        int marks[5];
    };
    struct student s1,s2;
    printf("Enter name of S1: ");
    scanf("%s",s1.name);
    printf("Enter the roll_ number of s1: ");
    scanf("%d",&s1.roll_no);
    printf("Enter the marks in five subject of s1:");
    for (int i =0;i<5;i++){
        scanf("%d",&s1.marks[i]);
    }
    printf("Enter name of S2: ");
    scanf("%s",s2.name);
    printf("Enter the roll_ number of s1: ");
    scanf("%d",&s2.roll_no);
    printf("Enter the marks in five subject of s2:");
    for(int i =0;i<5;i++){
        scanf("%d",&s2.marks[i]);
    }
    printf("Data of S1");
    printf("%s\n",s1.name);
    printf("%d\n",s1.roll_no);
    for(int i =0;i<5;i++){
        printf("%d\n",s1.marks[i]);
    }
    return 0;

}