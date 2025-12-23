// 28. Write a program to display number of 
// days in a month using switch statement.
#include<stdio.h>
int main(){
    int month;
    printf("Enter the no. of the Months: ");
    scanf("%d",&month);
    switch(month){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        printf("%d month have a 31 Days",month);
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("%d month have a 30 Days",month);
        break;
        case 2:
        printf("%d month have a 28 or 29 Days",month);
        break;
        default:
        printf("Invalid number: ");

    }
    return 0;
}

/*
####### 
Tabular Form of the Days such as 30,29or 28, and 31
Feb = 28 2
Group A     || Group B
Jan 1           
Mar 3           April 4
May  5         June  6
July 7
August 8       September 9
octomber10      November 11
december 12
*/