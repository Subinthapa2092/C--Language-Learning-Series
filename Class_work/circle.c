// #include<stdio.h>
// #include<math.h>
// int main(){
//     float r,a;
//     extern float PI;
//     printf("Enter the radius: ");
//     scanf("%f",&r);
//     a = PI * pow(r,2);
//     printf("The area of the circle is %f",a);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int c;
//     int count();
//     c =count();
//     c =count();
//     c =count();
//     c =count();
//     printf("%d",c);
//     return 0;

// }
// int count(){
//      int i =0;
//     i++;
//     return i;
// }
// #include<stdio.h>
// int main(){
//     void count();
//     count();
//     count();
//     count();
//     count();
//     return 0;

// }
// void count(){
//     static int i = 0;
//     i++;
//     printf("%d\n",i);
// }
#include<stdio.h> 
#include<math.h>
int main(){
    float r, a;
    extern float PI;
    printf("Enter the radius for the Circle:: ");
    scanf("%f",&r);
    a = PI * pow(r,2);
    printf("The area of the circle  = %f",a);
    return 0;
}
// For the compiling Code in the Vs Studio I have to 
// Type:: gcc store_filename.c function_filename.c -o function_filename.c
// ./function_filename.c
