// A program to work with the pointers and One dimensional Arrays 
#include<stdio.h>
#define SIZE 100
int main(){
    float a[SIZE],sum = 0,avg;
    int n,i;
    printf("Enter any how many number:: ");
    scanf("%d",&n);
    printf("Enter numbers:: \n");
    for(i=0;i<n;i++){
        scanf("%f",(a+i));
    }
    for(i = 0;i<n;i++){
        sum = sum + *(a+i);
    avg = sum/n;
    }
    printf("Sum of the number = %f\n",sum);
    printf("Average of the number = %f\n",avg);
    return 0;
}