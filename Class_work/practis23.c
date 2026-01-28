/// Program to do the work with the pointer and the array 
// Dynamic  Memory Allocation's 
// Calloc() takes two arguments both of unsigned integral type . When we call this function ;
// it allocates contiguous space in Memory.
// This function allocates multiple blocks of the requested memory and initializes all the allocated
// Memory to Zero 
/*
program to read a n numbers and display their sum and average using calloc

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float *a,sum = 0,avg;
    int n,i;
    printf("How many numbers? ");
    scanf("%d",&n);
    // Syntax :: a = (int*)calloc(n,size of (int))
    a = (float*)malloc(n*sizeof(float)); // a points to the first memory block 
    // malloc work with block wise so we used * for malloc and , for the for the calloc
    printf("Enter numbers: \n");
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    // relloc is used for the adding new size of the array in the python 's 
    for(i = 0;i<n;i++){
        sum = sum +a[i];
    avg = sum/n;
    }
    printf("The sum of the number = %f\n",sum);
    printf("The average of the number = %f",avg);
    return 0;
}