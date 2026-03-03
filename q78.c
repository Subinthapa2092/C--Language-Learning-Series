// 78. Double Pointer
#include <stdio.h>
int main(){
    int x=10;
    int *p=&x;
    int **pp=&p;

    printf("Value using double pointer = %d", **pp);
    return 0;
}