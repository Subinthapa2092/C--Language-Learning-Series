// 47. Sum and Average of numbers divisible by 5 and 7
#include <stdio.h>

void calculate(int n){
    int i, sum=0, count=0;

    for(i=1;i<=n;i++){
        if(i%5==0 && i%7==0){
            sum += i;
            count++;
        }
    }

    if(count==0){
        printf("No numbers divisible by 5 and 7\n");
    }else{
        printf("Sum = %d\n", sum);
        printf("Average = %.2f", (float)sum/count);
    }
}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    calculate(n);
}