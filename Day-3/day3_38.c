// 38) Write a program to check if a number an Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int number,orginal,sum = 0,digit,n;
    printf("Enter the number you want to print Amstrong:: \n");
     scanf("%d",&number);
    printf("How many digit in the nuber::");
    scanf("%d",&n);
    orginal = number;
    while(number >0){
        digit = number % 10;
        sum = sum + (int)pow(digit,n);
        number = number / 10;
    }
    // 
    if(orginal == sum){
        printf("The number is Amstrong: ");
    }
    else{
        printf("Not Amstrong: ");
    }
    return 0;
}