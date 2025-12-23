// Given an integer, write a program to reverse and print it.
#include<stdio.h>
int main(){
    int number,remainder,sum=0,orginal;
    printf("Enter the number You want to print reverse:: ");
    scanf("%d",&number);
    orginal = number;
    while(number >0){
        remainder = number%10;
        sum = sum *10 +remainder;
        number = number /10;
    }
    if(orginal == 0){
    printf("The reverse of %d number is 0",orginal);
}
    else{
        printf("The reverse of the %d number : %d",orginal,sum);
    }

    return 0;
}