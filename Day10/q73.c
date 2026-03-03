// 73. Product of Two Matrices
#include <stdio.h>
int main(){
    int a[2][2], b[2][2], mul[2][2];
    int i,j,k;

    printf("Enter first matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&b[i][j]);

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            mul[i][j]=0;
            for(k=0;k<2;k++)
                mul[i][j]+=a[i][k]*b[k][j];
        }
    }

    printf("Product matrix:\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",mul[i][j]);
        printf("\n");
    }
}