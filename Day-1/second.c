// a program to perform the add, substract, multiply, and divide 
#include<stdio.h>
int main(){
    float a,b,add,sub,mult,divi;
    printf("Enter the Number first1: ");
    scanf("%f",&a);
    printf("Enter the Number Second: ");
    scanf("%f",&b);
    add = a+b;
    printf("Sum of the number is %f\n",add);
    sub = a-b;
    printf("Differnce of the number is %f\n",sub);
    mult = a*b;
    printf("Multiplication of the number is %f\n",mult);
    if (b != 0)
    {
    divi = a/b;
    printf("Division of the number is %f\n",divi);
    }
    else
    {
    printf("Not divisible by Zero");
    }
    return 0;
}