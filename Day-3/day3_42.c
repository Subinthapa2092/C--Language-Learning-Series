// 42. Write a program to print the following pattern.
// *
// **
// ***
// ****
// *****
// ******
#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number you want to display:: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}