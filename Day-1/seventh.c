// Program in a c language to find the area and the circumference of the circle
#include<stdio.h>
# define PI 3.14
int main(){
    float r,area,circum;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);
    area = PI * r*r;
    circum = 2*PI*r;
    printf("The area of the circle: %f\n",area);
    printf("The circum of the Circle: %f",circum);
    return 0;
}