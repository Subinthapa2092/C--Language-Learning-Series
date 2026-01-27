// Calculating the array of the sum :: 
#include<stdio.h>
int main(){
    int x[] = {32,44,90,89};
    int sum = 0 ,i;
    for(i = 0;i<4;i++){
        // sum += x[i];
        sum += *(x+i);
    printf("%d",sum);
    }
    return 0;
}