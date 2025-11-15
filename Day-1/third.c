/* program in a C - Language to find the Simple Interest: 

*/
#include<stdio.h>
int main(){
    float p,t,r,i;
    printf("Enter the Principal Amount: ");
    scanf("%f",&p);
    printf("Enter the Time Taken: ");
    scanf("%f",&t);
    printf("Enter the rate of Amount: ");
    scanf("%f",&r);
    i = (p*t*r)/100;
    printf("The Simple Interest of amount: %f",i);
    return 0;

}