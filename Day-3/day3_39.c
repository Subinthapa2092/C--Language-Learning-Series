// 39. Write the program to determine the sum of
//  the harmonic series (1+ 1/2 + 1/3 + 1/4 + ... + 1/n)
// for a given value of n.
#include<stdio.h>
int main(){
    int i,n;
    float sum = 0;
    printf("Enter the number who want the harmonic Series's:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("1/%d\t",i);
        sum = sum + (1.0 / i);
    }
    printf("The Sum of the Harmonic Series is %f",sum);
    return 0;
}