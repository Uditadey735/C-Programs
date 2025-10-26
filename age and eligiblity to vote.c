//WAPC to input the age of a person.Check and display if the person is eligible to votr.

#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter the age of a person:");
    scanf("%d",&age);
    if(age>=18)
    {
      printf("\nThe person is eligible to vote");
    }
    else 
      {  printf("\nThe person is not eligible to vote");
      }
      return 0;
 }
