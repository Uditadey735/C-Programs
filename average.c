//WAPC to input five integers from the user.Calculate and print the average.

#include<stdio.h>
int main()
{
    int num1,num2,num3,num4,num5;
    float average;
    printf("\nEnter five integer values:");
    scanf( "%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);
    average=(num1+num2+num3+num4+num5)/5.0;
    printf("\nThe average of the five integers is %0.2f" , average);
    return 0;
}
    
