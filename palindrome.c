//WAPC to input a positive integer from the user.Check and print if it is a palindrome number or not

#include<stdio.h>
int main()
{
	int number,num,reverseNumber=0,remainder;
	printf("\nEnter a positive integer:");
	scanf("%d",&number);
	num=number;
	while(number>0)
{
	remainder=number%10;
	reverseNumber=reverseNumber*10+remainder;
	number/=10;
}
if(num == reverseNumber)
{
	printf("\n%d is a palindromic number.", num);
}
else
{
	printf("\n%d is not a palindromic number.", num);
}
return 0;
}