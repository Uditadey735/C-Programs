/*WAPC to do the following:
1.Declare an integer array of 'n' elements.
2.Accept integers from the user and store them in the array.
3.Find the maximum element in the array.*/

#include<stdio.h>
int main()
{
	int i,n,max;
	printf("\nEnter the total number of elements:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter an integer:");
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("\nThe maximum element in the array is %d", max);
	return 0;
	}