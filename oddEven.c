//WAPC to input a number.If it is positive,check if the number is odd or even.

#include<stdio.h>
int main()
{
	int num;
	printf("\nEnter a number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("\n%d is positive.",num);
		if(num%2 == 0)
		{
			printf("\n%d is an even number.",num);
		}
		else
		{
			printf("\n%d is an odd number.",num);
		}
	}
	else
	{
		printf("\n%d is negative",num);
	}
	return 0;
}