#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int number, nextNumber,squareRoot;
    printf("\nEnter a positive ineger:");
    scanf("%u",&number);
    nextNumber=number+1;
    squareRoot= sqrt(nextNumber);
    if(squareRoot*squareRoot == nextNumber)
    {
         printf("\n%d is a sunny number.",number);
         }
         else
         {
             printf("\n%d is not a sunny number.", number);
             }
             return 0;
             }
    
