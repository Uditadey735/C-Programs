//WAPC to check if a number is of three digits and divisible by 3

#include<stdio.h>
int main()
{
	int number,count=0;
	printf("\nEnter a number:");
	scanf("%d",&number);
	int num=number;
	while(number>0)
	{
	number/=10;
	count++;
	}
	if(count == 3 && (num%3 == 0))
	{
		printf("\n%d is of three digits and is divisible by 3.", num);
	}
	else
	{
		printf("\n%d is not the desired output.", num);
	}
	return 0;
}