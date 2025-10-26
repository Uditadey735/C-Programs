//Wapc to input an integer.Calculate and display the square and cube of the number.

#include<stdio.h>
int main()
{
    int num;
    int square,cube;
    printf("\nEnter an integer:");
    scanf("%d", &num);
    square=num*num;
    cube=num*num*num;
    printf("\nThe square and cube of the integer is %d and %d", square,cube);
    return 0;
}
