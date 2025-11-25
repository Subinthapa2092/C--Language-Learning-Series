/*
23. Jet Company gives 5% commission to its salesman if their monthly 
sales are less than Rs.
10,000 and a 10% commission if it is equal to or greater than Rs. 10,000.
 Write a program to
calculate commission at the end of the month.
*/


#include<stdio.h>

int main() {
    float sales, commission;

    printf("Enter the monthly sales amount: ");
    scanf("%f", &sales);

    if (sales < 10000) {
        commission = sales * 0.05;
    }
    else {
        commission = sales * 0.10; 
    }

    printf("The Commission Amount is: %f", commission);

    return 0;
}
