/*WAPC to do the following:
a.Input:age,citizenship(Y/N),criminal record(Y/N).
b.Eligible if:age>=18 and citizenship=Y and no criminal record.
c.If age>=60,print"Senior Citizen Eligible".
d.If not eligible,specify why.*/

#include<stdio.h>
int main()
{
	int age;
	char citizenship,criminalRecord;
	printf("\nEnter the age of the individual:");
	scanf("%d",&age);
	printf("\nEnter the citizenship details(Y/N):");
	scanf( " %c",&citizenship);
	printf("\nEnter the criminal record of the individual(Y/N):");
	scanf(" %c",&criminalRecord);

	if(age>=18 && citizenship=='Y' && criminalRecord=='N')
	{
		printf("\nThe person is eligible.");
    }
	 else if(age>=60 && citizenship=='Y' && criminalRecord=='N')
	{
		printf("\nSenior Citizen Eligible");
	}

	else 
	{
	if(age<18)
		{
		
			if(citizenship=='N' && age<18 && criminalRecord!='Y')
			{
				printf("\nThe person is below 18 years and is not a citizen.");
			}
			else if(criminalRecord=='Y' && age<18 && citizenship!='N')
			{
				printf("\nThe person is below 18 years and has criminal records");
			}
			else if(age<18 && criminalRecord=='Y'&& citizenship=='N')
			{
					printf("\nThe person is below 18 years and is not a citizen and has criminal records.");
			}
			else
			{
					printf("\nThe person is below 18 years of age.");
			}
		}
		else if(citizenship=='N')
		{
		if(citizenship=='N'&& criminalRecord=='Y' )
			{
				printf("\nThe person is not a citizen and has criminal records.");
			}
			else
			{
				printf("\nThe person is not a citizen.");
			}
		}
	
		else 
		{
		
			printf("\nThe person has criminal records.");
	}
		
	}
	return 0;
 } 
