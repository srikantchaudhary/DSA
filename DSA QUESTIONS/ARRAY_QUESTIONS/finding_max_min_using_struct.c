#include<stdio.h>
struct pair{
	int max;
	int min;
};
int main()
{
	int n,i;
	printf("Enter the number of elements of the array \n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	struct pair MinMax;
	MinMax.min=arr[0];
	MinMax.max=arr[0];
	for(i=0;i<n;i++)
	{
		//  For finding the maximum number in the array 
		if(MinMax.max<arr[i])
		{
			MinMax.max=arr[i];
		}
		// For finding the minmum number in the array
		if(MinMax.min>arr[i])
		{
			MinMax.min=arr[i];
		}
	}
	
	printf("Maximum number in the array is     %d\n",MinMax.max);
	printf("Minmum number in the array is     %d\n",MinMax.min);
}
