// Program to in a c- language to find the power of the any number: 
#include<stdio.h>
#include<math.h>
int main(){
    float number,pow_number,result;
    printf("Enter the number which you want power: ");
    scanf("%f",&number);
    printf("Enter the power which youu want: ");
    scanf("%f",&pow_number);
    // power syntax: pow(given_number,power_of number)
    result = pow(number,pow_number);
    printf("%f",result);
    return 0;
}