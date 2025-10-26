/*WAPC to input a positive integer.Check whether the number is abundant or not.
Abundant number-A number for which the sum of proper divisors is greater than the number.Example:12-1+2+3+4+6=12*/

#include<stdio.h>
int abundantNumber(int num);
int main()
{
	int num;
	printf("\nEnter a positive integer:");
	scanf("%d",&num);
	if(abundantNumber(num))
	printf("\nIt is an abundant number.");
	else
	printf("\nIt is not an abundant number.");
	return 0;
}
int abundantNumber(int num)
{
	int sum=0;
	for (int i=0;i<num;i++)
	{
		if(num%i==0)
		sum+=i;
	
	}
	if(sum>num)
	return 1;
	return 0;
}