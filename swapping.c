//WAPC to input two integers and display after swapping them.

#include<stdio.h>
int main()
{
    int num1,num2,tempStorage;
    printf("\nEnter two integer values:");
    scanf("%d %d",&num1,&num2);
    tempStorage=num1;
    num1=num2;
    num2=tempStorage;
    printf("\nThe two numbers after swapping are %d and %d",num1,num2);
    return 0;
}