// 56. Sum & Average of Float Array
#include <stdio.h>

int main(){
    float arr[5], sum=0;
    int i;
    printf("Enter a Five Number:: ");
    for(i=0;i<5;i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum = %.2f\n",sum);
    printf("Average = %.2f",sum/5);
}