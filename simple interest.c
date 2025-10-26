//WAPC to find the simple interest based on user inputs.

#include<stdio.h>
int main()
{
	float principal,rate,simpleInterest;
	int time;
	printf("\nEnter the principal amount:");
	scanf("%f",&principal);
	printf("\nEnter the rate of interest:");
	scanf("%f",&rate);
	printf("\nEnter the time:");
	scanf("%d",&time);
	simpleInterest=(principal*rate*time)/100.0;
	printf("\nThe simple interest for the above user inputs is %0.2f", simpleInterest);
	return 0;
}