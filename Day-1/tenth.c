// Program in a C- language to convert pounds to kilogram
// pounds = kilogram *2.2
#include<stdio.h>
int main(){
    float pounds,kg;
    printf("Enter the weight in pounds: ");
    scanf("%f",&pounds);
    kg = pounds/2.2;
    printf("The pounds to kilogram of given wt. is %f",kg);
    return 0;
}