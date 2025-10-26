

#include<stdio.h>
int main()
{
	int number,square,leftPart,rightPart,count=0;
	printf("\nEnter a positive integer:");
	scanf("%d",&number);
	square=number*number;
	int num=number;
	while(num>0)
	{
		count++;
		num/=10;
	}
	int splitNumber=1;
	for(int i=0; i<splitNumber; i++)
	{
		splitNumber*=10;
		leftPart=square/splitNumber;
		rightPart=square%splitNumber;
	}
	if((leftPart+rightPart) == number || number == 1)
	{
		printf("\n%d is a Kaprekar number.", number);
	}
	else
	{
		printf("\n%d is not a Kaprekar number.", number);
	}
	return 0;
}