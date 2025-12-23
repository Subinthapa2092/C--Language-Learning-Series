// 45. Write a program to find addition, subtraction, multiplication, 
// and division of two numbers
// using functions. Use separate function for each
//  arithmetic operation.
#include <stdio.h>

// Function for addition
float add(float a, float b) {
    return a + b;
}

// Function for subtraction
float subtract(float a, float b) {
    return a - b;
}

// Function for multiplication
float multiply(float a, float b) {
    return a * b;
}

// Function for division
float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        printf("Division by zero is not allowed.\n");
        return 0;
    }
}

int main() {
    float num1, num2;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("Addition = %f\n", add(num1, num2));
    printf("Subtraction = %f\n", subtract(num1, num2));
    printf("Multiplication = %f\n", multiply(num1, num2));
    printf("Division = %f\n", divide(num1, num2));

    return 0;
}
