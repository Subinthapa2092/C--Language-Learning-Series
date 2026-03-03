// 61. Sequential Search
#include <stdio.h>
int main(){
    int arr[5], i, key, found=0;
    printf("Enter any 5 number:: ");
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    printf("Enter element to search: ");
    scanf("%d",&key);

    for(i=0;i<5;i++){
        if(arr[i]==key){
            found=1;
            printf("Found at position %d", i+1);
            break;
        }
    }

    if(!found)
        printf("Not found");
}