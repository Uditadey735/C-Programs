//WAPC to input marks in three subjects.If the average marks is at least 60 or the marks in one or more subjects is at least 80,display the message"Good Result"

#include<stdio.h>
int main()
{
	int marks1,marks2,marks3;
	float avg;
	printf("\nEnter the marks in three subjects of a student:");
	scanf("%d %d %d",&marks1, &marks2, &marks3);
	avg=(marks1+marks2+marks3)/3.0f;
	if(avg>=60 || marks1>=80 || marks2>=80 || marks3>=80)
	{
		printf("\nGood Result");
	}
	return 0;
}