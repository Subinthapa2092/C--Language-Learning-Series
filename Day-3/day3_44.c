// 44. Write a program to print Floyd’s Triangle.
#include<stdio.h>
int main(){
    int i,j,n;
    int num = 1;
    printf("Enter the number you want to display:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",num);
            num = num +1;
        }
        printf("\n");
    }
    return 0;

}