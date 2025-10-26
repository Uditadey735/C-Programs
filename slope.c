//WAPC to input the coordinates of two points(x1,y1) and (x2,y2).Calculate the slope and display the same

#include<stdio.h>
int main()
{
	float x1,x2,y1,y2,slope;
	printf("\nEnter the coordinates of the first point:");
	scanf("%f %f",&x1,&y1);
	printf("\nEnter the coordinates of the second point:");
	scanf("%f %f",&x2,y2);
	slope=(y2-y1)/(x2-x1);
	printf("\n%0.2f is the slope of the line joining the two points.", slope);
	return 0;
}