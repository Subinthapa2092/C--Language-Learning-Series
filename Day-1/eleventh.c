// Program in a Clanguage to find the ruppee equivlent of U.S dollars
#include<stdio.h>
int main(){
    float usd,rate,npr;
    printf("Enter the amount in USD: ");
    scanf("%f",&usd);
    printf("Enter exchange rate: ");
    scanf("%f",&rate);
    npr = usd*rate;
    printf("The conversion of usd to npr is %f",npr);
    return 0;
}