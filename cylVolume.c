//WAPC to find the volume of cyliner based on ser inputs.

#include<stdio.h>
#define PI 3.142
int main()
{
	float radius,height,volume;
	printf("\nEnter radius and height:");
	scanf("%f %f",&radius,&height);
	volume=PI*radius*height;
	printf("\nVolume of the cylinder is %0.2f", volume);
	return 0;
}