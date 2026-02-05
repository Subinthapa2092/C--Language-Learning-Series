#include<stdio.h>
#include<stdlib.h>
int *getPointer(){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    return ptr;
}
int main(){
    int *ptr = getPointer();
    printf("%d\n",*ptr); // It give the 10 Output
    free(ptr);
}