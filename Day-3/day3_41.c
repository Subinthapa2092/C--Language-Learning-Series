// 41. Write a menu driven program to perform basic 
// arithmetic operations.
#include <stdio.h>

int main() {
    int choice;
    float a, b;

    while (1) {
        printf("\n---- MENU ----\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Program terminated.");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);

        switch (choice) {
            case 1:
                printf("Result = %f", a + b);
                break;

            case 2:
                printf("Result = %f", a - b);
                break;

            case 3:
                printf("Result = %f", a * b);
                break;

            case 4:
                if (b != 0)
                    printf("Result = %f", a / b);
                else
                    printf("Division by zero not allowed");
                break;

            default:
                printf("Invalid choice");
        }
    }

    return 0;
}
