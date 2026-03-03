\n");
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