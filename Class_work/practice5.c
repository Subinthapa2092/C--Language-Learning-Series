// A tranforming Matrix::
#include<stdio.h>
int main(){
    int a[2][3] = {{1,2,3},{4,5,6}};
    void transpose(int a[2][3]);
    transpose(a);
    return 0;
}
void transpose(int a[2][3])
{
    int b[3][2] ,i,j;
    for(j = 0;j<3;j++){
        for(i= 0;i<2;i++){
            b[j][i] = a[i][j];
        }
    }
    for(i =0;i<3;i++){
        for(j =0;j<2;j++)
        {
            printf("%-4d",b[i][j]);
        }
        printf("\n");
    }

    }
