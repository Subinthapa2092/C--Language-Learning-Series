// 31. Write a program to display first n natural numbers, 
// their sum, and their average using all the
// three looping statements.

//----- Using For Loop's -------
#include<stdio.h>
int main(){
    int i,sum =0,n;
    float avg;
    printf("Enter the natural Number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum += i;
    }
    avg = (float)sum/n;
    printf("The Sum of the number is %d\n",sum);
    printf("The Average of the number is %f",avg);
    return 0;
}