// A program in a c language to display wherther the number is not divisble by 5 or not 3 
// #include<stdio.h>
// int main(){
//     int n,i;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(i=0;i<=n;i++)
//     {
//         if(i%3 ==0 || i% 5==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }
// a program in a c language to display or using the break and the continue statement:

// #include<stdio.h>
// int main(){
//     int i,n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         if(i==3)
//         {
//         break;
//     }
//     printf("%d\n",i);
// }
// return 0;
// }

///  A program in a c langauge to perform the c languge to check whether a number
// numbrer is prime or not 
// #include<stdio.h>
// int main(){
//     int n,i,flag =1;
//     printf("Enter the nuberr: ");
//     scanf("%d",&n);
//     for(i=2;i<=n/2;i++){
//         if(n %i ==0){
//             flag =0;
//             break;
//         }
//     }
//     printf("%s",flag ==1? "Prime":"Not Prime");
//     return 0;
// }
/// Checking in the code in the c language to check that the number is prime 
// not using the c language:
// Program to the  c langauge to do the  c lanaguage to do the work :
// Program to disiplay SMS, TU
// 10 times:
// #include<stdio.h>
// int main(){
//     for(int i=0;i<9;i++){
//         printf("SMS, Tu\n");
//     }
//     return 0;

// }
/// Factorial of the Number: 

// #include<stdio.h>
// int main(){
//     int n,f=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i = 1;i<=n;i++){
//         f *= i;
//     printf("%d",f);

//     }
//     return 0;
// }
//  #include<stdio.h>
// int main(){
//     int n,i,j,flag;
//     printf("Enter the nuberr: ");
//     scanf("%d",&n);
//     printf("Prime Number upto %d\n",n);
//     for(i=2;i<=n;i++){
//         flag = 1;
//         for(j=2;j<=i/2;j++){

//         if(i % j == 0){
//             flag = 0;
//             break;
//         }
//     }
//     if(flag == 1){
//         printf("%d\n",i);

//     }
// }
//     return 0;

// }
// A Program in  c language to perform the armstrong number in the
// Write a program in c language to generate the patterns:
// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
//     }
    // a program in a c language to do the another pattern question

// Floyd Triangle
#include<stdio.h>
int main(){
    int i,j,k=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
// A Program in a C language to perform the Menu Driven  Program
// 1) Addition
// 2) Substraction
// 3) Multiplication
// 4) Division
// 5) Modulus
// 6) clear
// 7) Exist  

