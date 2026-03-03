// 82. Return Pointer to Maximum Value
#include <stdio.h>

int* maxValue(int arr[], int n){
    int i;
    int *max=&arr[0];

    for(i=1;i<n;i++){
        if(arr[i]>*max)
            max=&arr[i];
    }
    return max;
}

int main(){
    int arr[5]={5,8,2,10,3};
    int *p = maxValue(arr,5);

    printf("Maximum value = %d", *p);
    return 0;
}