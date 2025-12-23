// Program in a python to do the for loop with the help of the 
// // Natural of number using the c language

// #include<stdio.h>
// int main(){
//     int n,sum=0,i;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(i =1;i<=n;i++){
//         printf("%d\n",i);
//         sum += i;

//     }
//     printf("Sum = %d\n",sum);
//     return 0;
// }
/// Program in  c to find the product of the number
#include<stdio.h>
int main()
{
    int n,product= 1,i;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        // printf("%d\n",i);
        product = product * i;

    }
    printf("Product = %d",product);
    return 0 ;
}