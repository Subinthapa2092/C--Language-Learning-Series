// 51. Tower of Hanoi
#include <stdio.h>

void toh(int n, char A, char B, char C){
    if(n==1){
        printf("Move disk 1 from %c to %c\n",A,C);
        return;
    }
    toh(n-1,A,C,B);
    printf("Move disk %d from %c to %c\n",n,A,C);
    toh(n-1,B,A,C);
}

int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    toh(n,'A','B','C');
}