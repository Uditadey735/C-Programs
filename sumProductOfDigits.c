/*WAPC to input a positive integer from the user.Find and display the number of digits in the number,sum of the digits of the number and
 product of the digits of the number*/
 
 #include<stdio.h>
 int main()
 {
 	int number,sum=0,product=1,count=0,lastDigit;
 	printf("\nEnter a positive integer:");
 	scanf("%d",&number);
 
 	while(number!=0)
 	{
 		lastDigit=number%10;
 		count++;
 		sum+=lastDigit;
 		product*=lastDigit;
 		number/=10;
 		}
	 number/=10;
	 printf("\nThe number of digits in the number,sum of the digits of the number and product of the digits of the number are %d and %d and %d",count,sum,product);
	 return 0;
 }