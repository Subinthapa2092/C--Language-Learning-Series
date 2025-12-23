// 31. Write a program to display first n natural numbers, 
// their sum, and their average using all the
// three looping statements.
// Using the while loop's
#include<stdio.h>
int main(){
    int i=1,sum =0,n;
    float avg;
    printf("Enter the natural number: ");
    scanf("%d",&n);
    while(i<=n){
        // printf("%d",i);
        sum += i;
        i++;
    }
    avg = (float)sum/n;
    printf("Sum of the natural number = %d",sum);
    printf("The Average number is %f",avg);
    return 0;
}