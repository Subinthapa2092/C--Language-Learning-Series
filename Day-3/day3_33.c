// 33. Write a program to check whether a number entered is prime or not.
#include<stdio.h>
int main(){
    int n,i,flag = 1;
    printf("Enter the number you want to check prime or not: ");
    scanf("%d",&n);
    if(n<=1){
        flag = 0;
    }
    else{
        for(i=2;i<=n/2;i++){
            if(n%i ==0){
                flag = 0;
                break;
            }
        }
    }
if (flag == 1){
    printf("The %d number is Prime ",n);
}
else{
    printf("The %d number is not Prime",n);
} 
    return 0;
}