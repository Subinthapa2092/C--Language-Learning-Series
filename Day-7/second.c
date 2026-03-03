#include<stdio.h>
int main()
{
struct account
{
int acct_no;
char acct_type;
char name[10];
float balance;
};
struct account customer;
FILE *fpt;
fpt = fopen("customer.txt", "r");
if(fpt == NULL)
printf("\nERROR - Cannot open the destination file\n");
else
{
while(fread(&customer, sizeof(struct account), 1, fpt))

{

printf("Account no = %d\n", customer.acct_no);
printf("Account type = %c\n", customer.acct_type);
printf("Customer name = %s\n", customer.name);
printf("Balance = %f\n", customer.balance);

}
fclose(fpt);
}
}