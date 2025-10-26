//WAPC to input an array of 'n' elements from the user.Find and display the second highest element of the array.

#include<stdio.h>
int main()
{
	int n,max,secondMax;
	printf("\nEnter the total number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("\nEnter the elements of the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	secondMax=arr[0];
	for(int i=0;i<n;i++)
	{
		if(arr[i]>secondMax && arr[i]<max)
		{
			secondMax=arr[i];
		}
		
	}
	printf("\nThe second highest element in the array is %d", secondMax);
	return 0;
}