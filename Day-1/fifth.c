// a program in a c - language to perform the square root of the 
//a number using the math header file 
#include<stdio.h>
#include<math.h>
int main()
{
    float number,result;
    printf("Enter the given number: ");
    scanf("%f",&number);
    result = sqrt(number);
    printf("The Square root of the %f is %f",number,result);
    return 0;
}