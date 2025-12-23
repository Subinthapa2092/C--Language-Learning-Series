// program in a c language to do the perfroming the function operation's
// #include<stdio.h>
// #include<math.h>
// int main(){
//     float r,a,c;
//     printf("Enter the radius: ");
//     scanf("%f",&r);
//     a = M_PI * pow(r,2);
//     c = 2*M_PI*r;
//     printf("The area of the circle = %f\n",a);
//     printf("The circumfernce of the circle = %f",c);
//     return 0;

// }
/// A function which is call insided the body of the own function is it is called the recursion Function:: 
/*
- Nature of the function is recursive 
- In the  C language we can also used the recursive to find the factorial number: 
*/
// Factorial number using the recursive function 
// #include<stdio.h>
// int main(){
//     int n;
//     long f,facto(int);
//     printf("Enter the number which you want to find the factorial: ");
//     scanf("%d",&n);
//     f = facto(n);
//     printf("%d number factorial is %ld",n,f);
//     return 0;

// }
// long facto(int n){
//     if(n==0){
//         return 1;
//     }
//     else{
//         return n*facto(n-1);
//     }
// }
// without recursion 
#include<stdio.h>
int main(){
    int n;
    long f,facto(int);
    printf("Enter the number which you want to find the factorial: ");
    scanf("%d",&n);
    f = facto(n);
    printf("%d number factorial is %ld",n,f);
    return 0;

}
long facto(int n){
    long f =1;
    int i;
    for(i = n;i>=1;i--){
        f *= i;
    }
    return f;
}