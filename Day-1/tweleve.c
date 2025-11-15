// A program in a C language to convert mm into m and m
#include<stdio.h>
int main(){
    float mm,m,cm;
    printf("Enter the length in Millimeter: ");
    scanf("%f",&mm);
    m = mm /1000;
    cm = mm/10;
    printf("The conversion of %f mm is %f M\n",mm,m);
    printf("The conversion of %f mm is %f CM",mm,cm);
    return 0;
}