/// A program in a c language to do the with the help of the storage classes: 
// In the  line auto int a;
// auto is the storage classes;
// Scope and Visibility in the c lanauge which is the part of the storage class
// Which is determinedd throught how it's stays existence 
//
// Four Different class such as auto,register,static, and the extern
// Inside the function withour the name of storage class is save in auto:: 
// Automatic is also known as the local variable:: 
// lifetime, visibility, Initialization,
#include<stdio.h>
int add(int);
int main(){
    int n;
    printf("Enter the number :: ");
    scanf("%d",&n);
     printf("The sum of the number = %d",add(n));
    return 0;
}
int add(int n){
    auto int sum = 0; // int sum =0;
    int i;
    for(i=1;i<=n;i++){
        sum = sum +i;
    }
    // printf("The sum of the number = %d",sum);
    return sum;
}

