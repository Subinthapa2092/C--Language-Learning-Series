// Program in a c language to do the solution 
#include<stdio.h>
int *max(int *a){
    // int m = a[0],i,j;
    int *m = &a[0],i;
    for(i = 1;i<6;i++){
        if(a[i]>*m){
            m = a[i];
        }
    }
    return m;
}
int main(){
    int a[] = {23,67,45,90,45,8,100};
    printf("%d of%d \n",*max(a),&max(a));
    return 0;
}