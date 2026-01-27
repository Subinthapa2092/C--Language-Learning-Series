// Program to display the array memory location :: 
#include<stdio.h>
int main(){
    int a[] = {34,67,45,90};
    printf("%d\n",*a); // Displaying the first Variables array 
    printf("%d",*(a+2)); // Displaying the Remaining array Variables 
    return 0;
}