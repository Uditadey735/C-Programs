//WAPC to display the following series of numbers:1,2,4,8,....,n terms.Here,'n' is the user input

#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number:");
	scanf("%d",&n);
	for(int i=1;i<=n;i*=2)
	{
		printf("\ %d ,", i);
	}
	return 0;
}