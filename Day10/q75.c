// 75. Sum of Two Matrices Using Functions
#include <stdio.h>

void input(int a[2][2]){
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
}

void display(int a[2][2]){
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}

void add(int a[2][2], int b[2][2], int sum[2][2]){
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            sum[i][j]=a[i][j]+b[i][j];
}

int main(){
    int a[2][2],b[2][2],sum[2][2];

    printf("Enter first matrix:\n");
    input(a);

    printf("Enter second matrix:\n");
    input(b);

    add(a,b,sum);

    printf("Sum matrix:\n");
    display(sum);
}