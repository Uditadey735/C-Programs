/*WAPC to do the following:
Follow the given rules:
a.Withdrawal amount must be a multiple of 100.
b.Withdrawal must not exceed balance.
c.Maintain a minimum balance of Rs. 500 after withdrawal.

Output:Transaction success or failure with reason.*/


#include<stdio.h>
int main()
{
	int amount,accountBalance,remBalance;
	printf("\nEnter the account balance:");
	scanf("%d",&accountBalance);
		printf("\nEnter the withdrawal amount:");
	scanf("%d",&amount);
	if(accountBalance-amount<500)
	{
		printf("\nTransaction failed as minimum balance of Rs. 500 was not followed.");
	}
	else if(accountBalance<amount)
	{
			printf("\nTransaction failed as withdrawal amount cannot exceed the account balance.");
	}
	else if(amount%100 !=0)
	{
			printf("\nTransaction failed as withdrawal amount must be a multiple of 100.");
	}
	else
	{
		printf("\nTransaction Succesfull");
		remBalance=accountBalance-amount;
			printf("\nRemaining balance is %d",remBalance);
	}
	return 0;
}