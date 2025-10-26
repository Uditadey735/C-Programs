/*WAPC to input a positive integer.Check whether it is happy or not.
Note:Happy number-A number that eventually reaches 1 when replaced repeatedly by the sum of the squares of its digits.
For example:-19-1^2+9^2=82=8^2+2^2=68=6^2+8^2=100=1*/

#include<stdio.h>
int happyNumber(int num);
int square(int num);
int squareDigits(int num);
int main()
{
	int num=0;
	printf("\nEnter a number:");
	scanf("%d",&num);
	if(happyNumber(num))
	{
		printf("\nIt is a happy number.");
	}
	
	return 0;
}

int square(int num)
{
	int square=num*num;
	return square;
}
int squareDigits(int num)
{
	int squareSum=0;
	while(num>0)
	{
		squareSum+=square(num%10);
		num/=10;
	}
	return squareSum;
}
int happyNumber(int num)
{
	while(num>0)
	{
		if(squareDigits(num)==1)
		return 1;
		else
		num=squareDigits(num);
		
	}
}