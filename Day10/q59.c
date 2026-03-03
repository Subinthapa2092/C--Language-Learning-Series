// 59. Print Array in Reverse Order
#include <stdio.h>
int main(){
    int arr[5], i;
    printf("Enter the 5 number:: ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Reverse order:\n");
    for(i=4;i>=0;i--)
        printf("%d ",arr[i]);
}