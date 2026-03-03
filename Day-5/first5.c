
// Structure is a mechanism that provides a means to aggregate elements of the different type.
#include<stdio.h>
#define N 100
int main()
{

struct date
{
int month;
int day;
int year;
};
struct account
{
int acct_no;
char acct_type;
char name[10];
float balance;
struct date lastpayment;
};
struct account customer[N];
int n, i;
printf("How many customers:");
scanf("%d", &n);
for(i = 0; i < n; i++)
{
printf("Enter data for customer %d:\n", i+1);

printf("Enter account number:\n");
scanf("%d", &customer[i].acct_no);
printf("Enter account type:\n");
scanf(" %c", &customer[i].acct_type);
printf("Enter name:\n");
scanf(" %[^\n]", customer[i].name);
printf("Enter balance:\n");
scanf("%f", &customer[i].balance);
printf("Enter month:\n");
scanf("%d", &customer[i].lastpayment.month);
printf("Enter day:\n");
scanf("%d", &customer[i].lastpayment.day);
printf("Enter year:\n");
scanf("%d", &customer[i].lastpayment.year);
}
printf("Customers having balance greater than 1000:\n");
for(i = 0; i < n; i++)
{
if(customer[i].balance > 1000)

{

printf("Account number: %d\n", customer[i].acct_no);
printf("Account type: %c\n", customer[i].acct_type);
printf("Name: %s\n", customer[i].name);
printf("Balance: %f\n", customer[i].balance);
printf("Month: %d\n", customer[i].lastpayment.month);

printf("Month: %d\n", customer[i].lastpayment.day);
printf("Month: %d\n", customer[i].lastpayment.year);

}
}
}