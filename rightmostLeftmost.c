//wapc to input a 4-digit number and find the sum and product of the rightmost and leftmost digits

#include<stdio.h>
int main()
{
	int num,leftmostDigit,rightmostDigit,sum=0,product=1;
	printf("\nEnter a 4-digit number:");
	scanf("%d",&num);
	rightmostDigit=num%10;
	leftmostDigit=num/1000;
	sum=leftmostDigit+rightmostDigit;
	product=rightmostDigit*leftmostDigit;
	printf("\nThe sum and product of the leftmost and rightmost digits of the given number are %d and %d",sum,product);
	return 0;
}