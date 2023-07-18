#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number of elements in the array ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	int arr[n];
	int count=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[i])
			{
				count++;
			}
		}
	}
	if(count==0)
	{
		printf("there are no inversion  %d ",count);
	}
	else{
		printf("there are %d Inversion ",count);
	}
}
