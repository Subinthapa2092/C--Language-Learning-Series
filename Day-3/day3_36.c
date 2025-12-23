// Write a program to check if a number is palindrome.
#include<stdio.h>
int  main(){
    int number,orginal,remainder,sum =0;
    printf("Enter the number: ");
    scanf("%d",&number);
    orginal = number;
    while(number>0){
        remainder = number %10;
        sum = sum *10+ remainder;
        number = number /10;
    }
    if(orginal == sum){
        printf("The %d number is the Palindrome",orginal);
    }
    else{
        printf("The %d number is Not the Palindrome",orginal);
    }
    return 0;
}