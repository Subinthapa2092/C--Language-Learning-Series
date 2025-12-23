// Write a program to display prime numbers up to n, their sum and average.
#include<stdio.h>
int main(){
    int i,j,n,flag;
    int sum = 0,count =0;
    printf("Enter the number you want to display Prime Number: ");
    scanf("%d",&n);
    printf("Displaying number of %d of the Prime:\n",n);
    // Starting the Prime Number: 
    for(i=2;i<=n;i++){
        flag = 1;// Assuming i is prime
        for(j=2;j<=i/2;j++){
            if(i%j ==0){
                flag = 0;
                break;
            }
        }
        if(flag ==1){
            printf("%d\n",i);
            sum += i;
            count = count+1;
        }
    }
    printf("Sum of the Prime number = %d\n",sum);
   if (count > 0) {
        float avg = (float)sum / count;
        printf("Average = %.2f\n", avg);
    }
    return 0;
}