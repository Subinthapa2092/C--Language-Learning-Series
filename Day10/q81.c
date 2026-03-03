// 81. Array of Pointers
#include <stdio.h>
int main(){
    int a=10,b=20,c=30;
    int *arr[3];

    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;

    printf("%d %d %d", *arr[0], *arr[1], *arr[2]);
    return 0;
}