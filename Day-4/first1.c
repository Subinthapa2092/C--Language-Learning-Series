#include<stdio.h>
int main(){
    int a = 7,b= 90, c= 45;
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    printf("%d\n",*arr[0]);
    printf("%d\n",*arr[1]);
    printf("%d\n",*arr[2]);
    return 0;
}