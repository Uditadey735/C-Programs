//WAPC to input a positive integer.Check and print if the number is perfect or not.

#include<stdio.h>
int main()
{
	int number,sum;
	printf("\nEnter a positive integer:");
	scanf("%d",&number);
	for(int i=1; i<number; i++)
	{
		if(number%i == 0)
		{
			sum+=i;
		}
	}
	if(sum == number)
	{
		printf("\n%d is a perfect number.", number);
	}
	else
	{
		printf("\n%d is not a perfect number.", number);
	}
	return 0;
}