// program in a C- language to find the area and Perimeter of the rectangle:
#include<stdio.h>
int main(){
    float area,peri,l,b;
    printf("Enter the length and breath of the rectangle: ");
    scanf("%f%f",&l,&b);
    area = l+b;
    peri = 2*(l+b);
    printf("The area of the rectangle is %f\n",area);
    printf("The Perimeter of the rectangle is %f",peri);
    return 0;
}