// Write a program to find factorial of a number.
#include<stdio.h>
int main(){
    int n,i,fact = 1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact = fact *i;
    }
    printf("The Factorial number of the %d is %d",n,fact);
    return 0;
}
