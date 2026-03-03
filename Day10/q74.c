// 74. Sum of 1D Array Using Function
#include <stdio.h>

int sumArray(int arr[], int n){
    int i,sum=0;
    for(i=0;i<n;i++)
        sum+=arr[i];
    return sum;
}

int main(){
    int arr[5],i;
    printf("Enter the number :: " );

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Sum = %d", sumArray(arr,5));
}