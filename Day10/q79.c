// 79. Swap Using Reference
#include <stdio.h>

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=5,y=10;
    printf("Before Swap:: %d %d\n",x,y);
    swap(&x,&y);
    printf("After swap: %d %d",x,y);
    return 0;
}