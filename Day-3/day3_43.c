#include<stdio.h>
int main(){
    int i,j,n,k;
    printf("Enter the number you want to display the * : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=n;j>i;j--)
        {
        printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
    *
   * *
  * * *
 * * * *
* * * * *
*/