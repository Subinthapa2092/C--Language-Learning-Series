// 20. Write a program to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int number;
    printf("Enter any Number: ");
    scanf("%d",&number);
    if(number%2 == 0){
        printf("%d is Even",number);
    }
    else{
        printf("%d is Odd",number);
    }
    return 0;
}