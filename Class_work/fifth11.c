/// Program in a c language to display the the pattern with the help fo the c code: 
// #include<stdio.h>
// int main(){
//     int i,j,n,k;
//     printf("Enter the number you want to display the * : ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++){
//         for(j=n;j>i;j--)
//         {
//         printf(" ");
//         }
//         for(k=0;k<i;k++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }
/*
    *
   * *
  * * *
 * * * *
* * * * *
*/
// A program in a c language to do the fibonacci sequene
// #include<stdio.h>
// int main(){
//     int n,i,f1 =0,f2 =1,f3;
//     printf("Enter the number how many you want the fibonnacci Sequence: ");
//     scanf("%d",&n);
//     printf("%d ",f1);
//     for(i=0;i<n;i++){
//         // printf("%d ",f1);
//         f3 = f1+f2;
//         f1 = f2;
//         f2 = f3;
//         // f3 = f1+f2;
//         printf("%d ",f3);
//     }
//     return 0;
// }
// Displaying the name in the multiple times using while 
// #include<stdio.h>
// int main(){
//     char ch,count =0;
//     while((ch = getchar())!= '\n'){
//         if(ch == 'a'|| ch =='e'|| ch == 'i'|| ch =='o'|| ch == 'u'){
//         count ++;
//         }
//     }
// printf("%d",count);
// return 0;
// // }
// #include<stdio.h>
// int main(){
//     char ch,count =0;
//     while((scanf("%c",&ch)) == 1 && ch != '\n'){
//         if(ch == 'a'|| ch =='e'|| ch == 'i'|| ch =='o'|| ch == 'u'){
//         count ++;
//         }
//     }
// printf("%d",count);
// return 0;
// }
// Program in a c language to display the the pattern with the help fo the c code: 
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