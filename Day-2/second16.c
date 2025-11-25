// Write a program using conditional operator to 
// print if a number entered is even or odd.
#include <stdio.h>

int main() {
    int number;

    printf("Enter any number: ");
    scanf("%d", &number);

// Understanding the syntax: (conddition ? display result)
    (number % 2 == 0) ? 
        printf("%d is Even\n", number) : 
        printf("%d is Odd\n", number);

    return 0;
}
