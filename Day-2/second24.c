// 24. Write a program to print the largest number among three
//  numbers input by the user.
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter any there number : ");
    scanf("%f%f%f",&a,&b,&c);
    if(a > b && a >c)
    {
        printf("The largest number is %f",a);
    }
    else if(b>a && b >c){
        printf("The Largest number is %f",b);
    }
    else{
        printf("The largest number is %f",c);
    }
    return 0;

}