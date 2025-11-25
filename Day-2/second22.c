/*The rates of tax on gross salary are given below.
Income Tax
Less than 10,000 Nill
Rs. 10,000 to 19,999 10%
Rs. 20,000 to 39,999 15%
Rs. 40,000 to above 20%
Write a program to compute the net salary after deducting the
 tax for the given information
and print the same.
*/

#include<stdio.h>

int main() {
    float gross_salary, tax, net_salary;

    printf("Enter the Gross Salary: ");
    scanf("%f", &gross_salary);

    if (gross_salary < 10000) {
        tax = 0;
    }
    else if (gross_salary >= 10000 && gross_salary <= 19999) {
        tax = gross_salary * 0.10;
    }
    else if (gross_salary >= 20000 && gross_salary <= 39999) {
        tax = gross_salary * 0.15; 
    }
    else {
        tax = gross_salary * 0.20;
    }

    net_salary = gross_salary - tax;

    printf("Tax Included:: %f\n", tax);
    printf("Net Salary: %f\n", net_salary);

    return 0;
}
