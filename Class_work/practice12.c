#include<stdio.h>
int main(){
    int a = 5;
    printf("%d\n",a);
    printf("%d\n",*&a);
    int *b;
    b = &a;
    *b = 89;
    printf("%d\n",b);
    printf("%d",*b);
    return 0;
    // * is used for the getting actual Value of Pointer Variable's :::

}