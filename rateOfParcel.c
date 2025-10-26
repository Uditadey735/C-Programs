/*WAPC to accept the weight of a parcel in kilograms and calculate the rate per kilogram based on the following criteria:
first 5 kilograms-Rs 800
next 5 kilograms-Rs 700
above 10 kilograms-Rs 500
Also input the type of the courier('I' for international and 'D' for domestic).If the type of the courier is international,an additional amount of Rs 1500 is levied*/

#include<stdio.h>
int main()
{
	int weight,rate;
	printf("\nEnter the weight of a parcel:");
	scanf("%d",&weight);
	char type;
	printf("\nEnter the type of courier('I' for international and 'D' for domestic):");
	scanf(" %c",&type);
	if(weight<=5)
	{
		if(type=='I')
		{
			rate=(800*weight)+1500;
		}
		else
		{
			rate=800*weight;
		}
	}
	else if(weight>5 && weight<=10)
	{
		if(type=='I')
		{
			rate=800+(11-weight)*700+1500;
		}
		else
		{
			rate=800+(11-weight)*700;
		}
	}
	else
	{
	if(type=='I')	
	{
		rate=800+700+(weight-10)*500+1500;
	}
	else
	{
		rate=800+700+(weight-10)*500;
	}
	}
	printf("\nThe rate of the parcel is %d", rate);
	return 0;
}