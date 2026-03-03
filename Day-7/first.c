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
char ch;
fpt = fopen("customer.txt", "w");
if(fpt == NULL)
printf("\nERROR - Cannot open the destination file\n");
else
{
printf("Enter customers' information:\n");

do
{
printf("Enter account number:\n");
scanf("%d\n", &customer.acct_no);
printf("Enter account type:\n");
scanf(" %c\n", &customer.acct_type);

printf("Enter name:\n");
scanf(" %[^\n]", customer.name);
printf("Enter balance:\n");
scanf("%f\n", &customer.balance);
fwrite(&customer, sizeof(struct account), 1, fpt);
printf("Do you wnat to add another record?(y/n)");
scanf(" %c", &ch);
} while(ch != 'n');
fclose(fpt);

}
return 0;
}