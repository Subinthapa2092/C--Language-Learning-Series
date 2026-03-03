// Nested Strcture ::: 
#include<stdio.h>
int main (){
    struct date{
        int month;
        int day;
        int year;
    };
    struct account{
        int account_no;
        struct date payment;
        }
    a1;
    printf("Enter the Detail of the Bank Employee :: \n");
    scanf("%d",&a1.account_no);
    scanf("%d",&a1.payment.month);
    scanf("%d",&a1.payment.day);
    scanf("%d",&a1.payment.year);
    printf("%d\t%d\t%d\t%d\t",a1.account_no,a1.payment.month,a1.payment.day,a1.payment.year);
    return 0;
}