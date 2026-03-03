// 60. Second Largest Element
#include <stdio.h>
int main(){
    int arr[5], i, largest, second;
    printf("Enter the 5 number :: ");

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    largest = second = arr[0];

    for(i=1;i<5;i++){
        if(arr[i] > largest){
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest){
            second = arr[i];
        }
    }

    printf("Second Largest = %d", second);
}