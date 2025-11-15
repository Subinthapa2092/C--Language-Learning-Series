// program in a c- Lanugage to convert a temperature in 
// a Celcius to Fahrenheit
// F = C*9/5+32
#include<stdio.h>
int main()
{
    float f,c;
    printf("Enter the Celcius Temperature: ");
    scanf("%f",&c);
    f = (c*9/5)+32;
    printf("The Converted Fahrenheit Temperature is %f",f);
    return 0;
}