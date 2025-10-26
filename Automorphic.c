//WAPC to check whether a number is Automorphic or not.

#include<stdio.h>
int Automorphic(int num)
{int square=num*num;
	while(num>0)
	{
		if(square%10!=num%10)
		{
			return 0;
		}
		num/=10;
		square/=10;
	}
	return 1;
}
int main()
{
	int number;
	printf("\nEnter a number:");
	scanf("%d",&number);
	
	if(Automorphic(number))
	{
		printf("\nIt is an Automorphic number.");
	}
	else
	{
		printf("\nIt is not an Automorphic number.");
	}
	return 0;
}