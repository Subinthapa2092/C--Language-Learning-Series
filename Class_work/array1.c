// Program in a C language to display the number:: 
#include<stdio.h>
int main(){
    int a[2][3] = {{1,6,10},{7,9,50}};
    int b[2][3] = {{1,2,33},{4,5,26}};
    int i,j,k;
    int c;
    for(i = 0;i<2;i++){
        for(j=0;j<3;j++){
            c =0;
            for(k=0;k<3;k++){
             c += a[i][k]*b[k][i];
        }
        printf("%-4d",c);
    }
    printf("\n");
}
return 0;
}
