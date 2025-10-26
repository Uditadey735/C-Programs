//wapc to input a positive integer from the user. Find and display the factorial of the number

#include<stdio.h>
int main()
{
    int number;
    int factorial=1;
    printf("\nEnter a number:");
    scanf("%d", &number);
    if(number<0)
    {
        printf("\nThe factorial of negative number is not defined");
    }
    else if(number==0)
    {
        printf("\nThe factorial of zero is 1");
    }
    else
    {
    for(int i=1; i<=number;i++)
     {
            factorial*=i;
     }
            printf("\nThe factorial of %d is %d:", number, factorial);
    }
            return 0;
            }
            
            
    
