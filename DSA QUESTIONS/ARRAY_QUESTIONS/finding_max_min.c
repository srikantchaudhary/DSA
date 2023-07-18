#include<stdio.h>
int main()
{
	int max,min;
	int n,i;
	printf("Enter the number of elements of the array \n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=arr[0];
	min=arr[0];
	for(i=0;i<n;i++)
	{
		//  For finding the maximum number in the array 
		if(max<arr[i])
		{
			max=arr[i];
		}
		// For finding the minmum number in the array
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	
	printf("Maximum number in the array is     %d\n",max);
	printf("Minmum number in the array is     %d\n",min);
}
