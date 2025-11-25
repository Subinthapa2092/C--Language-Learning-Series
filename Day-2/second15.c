// Write a program using conditional operator to 
// find minimum of two numbers.
#include<stdio.h>
int main(){
    float a,b,result;
    printf("Enter any two number: ");
    scanf("%f%f",&a,&b);
    result = (a<b?a:b);
    printf("The mimimum  number is %f",result);
    return 0;
}