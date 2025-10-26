//WAPC to input five integers and find their mean.

#include<stdio.h>
int main()
{
	int num1,num2,num3,num4,num5;
	float mean;
	printf("\nEnter five integer values:");
	scanf("%d %d %d %d %d", &num1,&num2,&num3,&num4,&num5);
	mean=(num1+num2+num3+num4+num5)/5.0f;
	printf("\n%0.2f is the mean of the five integer inputs.", mean);
	return 0;
}