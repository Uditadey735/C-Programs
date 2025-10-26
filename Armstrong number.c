//WAPC to input a positive integer.Assume that the number is of three digits.Check and print if the number is Armstrong or not

#include<stdio.h>
int main()
{
	int number,num,remainder=0,output;
	printf("\nEnter a three-digit positive integer:");
	scanf("%d", &number);
	num=number;
	while(number>0)
	{
		remainder=number%10;
		output=output+(remainder*remainder*remainder);
		number/=10;
	}
	if(output == num)
	{
		printf("\n%d is an Armstrong number.", num);
	}
	else
	{
		printf("\n%d is a not an Armstrong number.", num);
	}
	return 0;
}