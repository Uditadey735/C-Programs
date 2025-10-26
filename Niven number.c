/*WAPC to input a positive integer.Check whether it is Niven or not.
Note:Niven number:A number divisible by the sum of its digits
Example:18/(1+8)=2*/

#include<stdio.h>
int main()
{
	int number,sum=0,lastDigit,tempStorage;
	printf("\nEnter a positive integer:");
	scanf("%d",&number);
	tempStorage=number;
	while(number!=0)
	{
		lastDigit=number%10;
		sum+=lastDigit;
		number/=10;
	}
	if(tempStorage%sum==0)
	{
		printf("\nThe integer is a Niven number.");
	}
	else
	{
		printf("\nIt is not a Niven number.");
	}
return 0;
}