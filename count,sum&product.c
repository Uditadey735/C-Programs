/*****WAPC to input a positive integer from the user.Find and display the nuber of digits in the number,sum of the digits of the number, and 
 product of the digits of the number****/
 
 #include<stdio.h>
 int main()
 {
     int num,count=0,sum=0,product=1;
     printf("\nEnter a number from the user:");
     scanf("%d", &num);
     while(num>0)
        { 
        num=num%10;
        count+=1;
        sum=sum+num;
        product*=num;
        num/=10;
        } 
    printf("\nThe number of digits in the number is %d", count);
    printf("\nThe sum of the digits of the number is %d:", sum);
    printf("\nThe product of the digits of the number is %d:", product);
    return 0;
} 
