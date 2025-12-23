///
// Write a program using switch statement to develop 
// a simple calculator for arithmetic operators.
#include<stdio.h>
int main(){
    float a,b;
    char ch;
    printf("Enter the number1 and number2:\n");
    scanf("%f%f",&a,&b);
    printf("Enter the Operator symbol such (+,-*,/):\n");
    scanf(" %c",&ch);
    switch(ch){
        case '+':
        printf("Sum = %f",a+b);
        break;
        case '-':
        printf("Difference = %f",a-b);
        break;
        case '*':
        printf("Multiplication = %f",a*b);
        break;
        case '/':
        if(b == 0){
            printf("Not Divisible By Zero");
        }
        else{
            printf("Division = %f",a/b);
        }
        break;
        default:
        printf("Invalid User Entered: ");
    }
    return 0;

    }