// 37. Write a program to find sum of digits of a given number.
#include<stdio.h>
int main(){
    int number,sum =0,digit,orginal;
    printf("Enter the number you want to entered the sum of digits:: ");
    scanf("%d",&number);
    orginal = number;
    while(number >0){
        digit = number % 10; // it give the remainder 
        sum = sum +digit;
        number = number / 10;
    }
    printf("The sum of the %d is %d",orginal,sum);
    return 0;
}