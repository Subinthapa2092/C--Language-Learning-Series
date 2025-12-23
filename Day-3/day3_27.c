//Write a program using switch statement to display EXCELLENT,
//  VERY GOOD, GOOD,
// SATISFACTORY, or FAIL if the user enters A, B, C, D, or E 
// respectively.
#include<stdio.h>
int main(){
    char user_enter;
    printf("Enter the User Enter Grade(A-E)");
    scanf("%c",&user_enter);
    switch(user_enter){
        case 'A':
        printf("EXCELLENT");
        break;
        case 'B':
        printf("VERY GOOD");
        break;
        case 'C':
        printf("GOOD");
        break;
        case 'D':
        printf("SATISFACTORY");
        break;
        case 'E':
        printf("FAIL");
        break;
        default:
        printf("Invalid User Entered: ");
    }
    return 0;
}