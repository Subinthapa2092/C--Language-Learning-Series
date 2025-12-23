// 31. Write a program to display first n natural numbers, 
// their sum, and their average using all the
// three looping statements.
// Using the  Do While Loop's 
#include <stdio.h>

int main() {
    int i = 1, n, sum = 0;
    float average;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("First %d natural numbers:\n", n);

    do {
        printf("%d ", i);
        sum += i;
        i++;
    } while (i <= n);

    average = (float)sum / n;

    printf("\nSum = %d", sum);
    printf("\nAverage = %f", average);

    return 0;
}
