// /// Program in c langugge to do the fibonnic sequnce number: 
// #include<stdio.h>
// int main(){
//     int n,f,fibo(int);
//     printf("Enter the number which you want to find the factorial: ");
//     scanf("%d",&n);
//     f = fibo(n);
//     printf("%dth term fibonnic sequence number is %d",n,f);
//     return 0;

// }
// int fibo(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         return fibo(n-1)+fibo(n-2);
//     }
// }

/* A Program to do the gcd algorithmn logic:: */
// gcd(p,q) = q if q divides p 
// gcd(p,q) = gcd(q,p%q) if q doesnot divides p : : 
#include<stdio.h>
int main(){
    int gcd(int,int);
    int p,q;
    printf("Enter the  numbers: ");
    scanf("%d%d",&p,&q);
    printf("gcd(%d,%d)= %d",p,q,gcd(p,q));
    return 0;
}
int gcd(int p,int q){
    if(p%q == 0){
        return q;
    }
    else{
        return gcd(q,p%q);
    }

}
// Tower of the hallowe