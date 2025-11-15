// Program in a C language to find the price of n Mangos given that 
// The price of a dozen mangos
#include<stdio.h>
int main(){
    float dozen_price,n,result;
    printf("Enter the price of mangoes in Dozen: ");
    scanf("%f",&dozen_price);
    printf("Enter the no. of the mangoes: ");
    scanf("%f",&n);
    result = (dozen_price/12)*n;
    printf("The Price of %f Mangos is %f",n,result);
    return 0;
}