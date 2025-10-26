//WAPC to find the gender ratio based on the number of males and the number of females entered as inputs.

#include<stdio.h>
int main()
{
	int noOfMales,noOfFemales;
	int genderRatio;
	printf("\nEnter the number of males:");
	scanf("%d",&noOfMales);
	printf("\nEnter the number of females:");
	scanf("%d",&noOfFemales);
	genderRatio=(float)noOfFemales/noOfMales;
	printf("\nThe gender ratio is %f", genderRatio);
	return 0;
}