// Returning Multiple Values from Function :: 
#include<stdio.h>
void calculate(int a,int b,int*sum,int *diff){
    *sum = a+b;
    *diff = a-b;
}
int main(){
    int a,b;
    int sum,diff;
    printf("Enter any two number::\n ");
    scanf("%d%d",&a,&b);
    calculate(a,b,&sum,&diff);
    printf("Sum : %d\n Differnce : %d",sum ,diff);
    return 0;
}
