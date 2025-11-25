#include<stdio.h>

int main() {
    float p_amount, discount;

    printf("Enter the Purchased Amount: ");
    scanf("%f", &p_amount);

    if (p_amount >= 5000) {
        discount = p_amount * 0.10; 
    } 
    else {
        discount = p_amount * 0.07; 
    }

    printf("The Discount Amount is %f\n", discount);

    return 0;
}
