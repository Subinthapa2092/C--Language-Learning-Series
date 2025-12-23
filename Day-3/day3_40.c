// 40. Write a program to print Fibonacci series.
#include<stdio.h>
int main(){
    int next,i,n;
    int a = 0,b =1;
    printf("Enter the number you want to create the fibonacci Series:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\t",a);
        next = a+b;
        a = b;
        b = next;
    }
    return 0;
}