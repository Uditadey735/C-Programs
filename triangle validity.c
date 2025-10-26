//WAPC to check if a triangle is valid or not.If it is valid,check and print if it is isosceles,equilateral or scalene.

#include<stdio.h>
int main()
{
	float side1,side2,side3;
	printf("\nEnter three sides of a triangle:");
	scanf("%f %f %f",&side1,&side2,&side3);
	if((side1+side2)>=side3 && (side2+side3)>=side1 && (side1+side3)>=side2)
	{
		printf("\nThe triangle is valid.");
	

		if(side1==side2 && side2==side3 && side3==side1)
		{
			printf("\nThe triangle is equilateral.");
		}
		else if(side1==side2 || side2==side3 || side1==side3)
		{
			printf("\nThe triangle is isosceles.");
		}
		else
		{
			printf("\nThe triangle is scalene.");
		}
	}
		else
	{
		printf("\nThe triangle is not valid.");
	}
	

	return 0;
}