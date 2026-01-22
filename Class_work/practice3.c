// A program in a c language:: 
#include<stdio.h>
void change(int a[]);
int main(void){
    int x[5] = {23,56,89,67,89};
    int i;
    printf("Before Function Calling\n ");
    for(i = 0;i<5;i++)
    {
        printf("%d\n",x[i]);
    }
    change(x);
    printf("After Function Calling\n");
    for(i = 0;i<5;i++)
    {
        printf("%d\n",x[i]);
    }
    return 0;
}
void change(int a[])
{
   a[4] = 100;
 }
