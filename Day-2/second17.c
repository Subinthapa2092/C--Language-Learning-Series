/* 17. Write a program to calculate discount for the purchased amount as
 given below.
a) If purchased amount is greater than or equal to 5000, discount is 10%
b) If purchased amount is less than 5000, there is no discount

*/
#include<stdio.h>
int main(){
    float p_amount,discount;
    printf("Enter the Purchased Amount: ");
    scanf("%f",&p_amount);
    if(p_amount >= 5000){
    discount = p_amount*0.10;
    }
    else{
        discount = 0;
    }
    printf("The Discount Amount is %f",discount);
return 0;
}