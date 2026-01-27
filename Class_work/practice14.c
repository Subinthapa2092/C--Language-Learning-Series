// Disaplying the array  
#include<stdio.h>
int main(){
    int a[] = {34,28,99,100};
    int *b;
    b = a;
    printf("%d\n",b);// First Variable Address 
    printf("%d\n",b+1); // Second Variable Address
    return 0;
}