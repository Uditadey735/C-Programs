#include<stdio.h>
int main()
{
	int num1,num2;
	printf("\nEnter two numbers:");
	scanf("%d %d",&num1,&num2);
	num1=num1+num2;
	num2=num1-num2;
	num1=num1-num2;
	printf("\nThe two numers after swapping are num1=%d and num2=%d", num1,num2);
	return 0;
}