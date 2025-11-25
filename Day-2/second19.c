#include <stdio.h>

int main() {
    float p_amount, discount;

    printf("Enter the Purchased Amount: ");
    scanf("%f", &p_amount);

    if (p_amount >= 5000) {
        discount = p_amount * 0.10;
    }
    else if (p_amount >= 4000) {
        discount = p_amount * 0.07;  
    }
    else if (p_amount >= 3000) {
        discount = p_amount * 0.05;  
    }
    else if (p_amount >= 2000) {
        discount = p_amount * 0.03; 
    }
    else {
        discount = p_amount * 0.02;
    }

    printf("The Discount Amount is %f\n", discount);

    return 0;
}
