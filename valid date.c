/*WAPC to do the following:
Input:day,month,year
Check the following:
a.Month between 1 and 12
b.Correct days in month(30 vs 31 days)
c.February:28 days normally,29 days if leap year.

Output:"Valid date" or "Invalid date"*/

#include<stdio.h>
int leapYear(int years);
int main()
 {
	unsigned int days,month,year;
	printf("\nEnter the day:");
	scanf("%u",&days);
	printf("\nEnter the month:");
	scanf("%u",&month);
	printf("\nEnter the year:");
	scanf("%u",&year);
	if (days<1 || month<1 || year<1 || month>12 || days>31)
	{
		printf("\nInvalid date.");
	}
 if(leapYear(year))
	{
		if(month==2 && days>29)
		{
			printf("\nInvalid date.");
		}
		else
		{
			printf("\nvalid date.");
		}
		}
		else
		{
			if(month == 2 && days>28)
			{
				printf("\nInvalid date.");
			}
			else
			{
				printf("\nvalid date.");
			}
		}
		return 0;
	}
	int leapYear(int years)
	{
	
		if(years%100 == 0)
    {
       if(years%400 == 0)
       {
         return years;
       }
       else
       {
         if(years%100 == 0)
    {
       if(years%400 == 0)
       {
         return years;
       }
       else
       {
         return years;
       }
    }
    else
    {
        if(years%4 == 0)
        {
          return years;
        }
        else
        {
         return years;
        }
    }
     }
     return 0;
    }
}
    
