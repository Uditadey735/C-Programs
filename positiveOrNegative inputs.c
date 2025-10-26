//WAPC to input a number.Check if either of the two inputs is positive.

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("\nEnter two integers:");
    scanf("%d %d"'&num1,&num2);
    if(num1>0 || num2>0)
    {
      printf("\nOne or both the inputs are positive.");
    }
    else
    {
        printf("\nNone of the inputs is positive.");
    }
    return 0;
}
