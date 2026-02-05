// Program in a c language to do the solution 
#include<stdio.h>
int *max(int a[]){
    int m = a[0],i,j;
    for(i = 1;i<6;i++){
        if(a[i]>m){
            m = a[i];
            j = i;
        }
    }
    return &a[j];
}
int main(){
    int a[] = {23,67,45,90,45,8};
    printf("%d",*max(a));
    return 0;
}