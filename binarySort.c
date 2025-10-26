#include<stdio.h>
int main()
{
	int arr[10]={6,9,10,23,35,38,47,59,76,99};
	int search;
	printf("\nEnter an element to be searched:");
	scanf("%d",&search);
	int left=0,right=9;
	int mid;
	int flag=0;
	while(left<right)
	{
		mid=(left+right)/2;
		if(search==arr[mid])
		{
			flag=1;
			break;
		}
		else if(search>arr[mid])
		{
			left=mid+1;
		}
		else
		{
			right=mid-1;
		}
	}
	if(flag==1)
	{
		printf("\nThe search element is found at %d",mid);
	}
	else
	{
			printf("\nThe search element is not found.");
	}
	return 0;
}