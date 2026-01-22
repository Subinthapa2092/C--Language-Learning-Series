// Matrix addition 


// #include<stdio.h>
// int main(){
//     int a[2][3] ,b[2][3];
//     int c[2][3];
//     int i,j;
//     printf("Enter the first matrix:: ");
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Enter the Second matrix:: \n");
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&b[i][j]);
//         }
//     }
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             c[i][j] = a[i][j]+b[i][j];
//         }
//     }
//     printf("Addistion Matrix:: \n");
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             printf("%-3d",c[i][j]);
//     }
//     printf("\n");
// }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a[2][3] ,b[2][3];
//     int i,j;
//     printf("Enter the first matrix:: ");
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("Transpose Matrix:: \n");
//     for(j = 0;j<3;j++){
//         for(i=0;i<2;i++)
//         {
//             printf("%-3d",a[i][j]);
//     }
//     printf("\n");
// }
//     return 0;
// }

#include<stdio.h>
int main(){
    int a[2][3] = {{1,6,9},{7,9,0}};
    int b[2][3] = {{1,2,3},{4,5,6}};
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

//     printf("Addistion Matrix:: \n");
//     for(i = 0;i<2;i++){
//         for(j=0;j<3;j++)
//         {
//             printf("%-4d",c);
//     }
//     printf("\n");
// }
//     return 0;
// }