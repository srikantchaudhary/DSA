#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int newarr[50]={0};
	for(i=0;i<n;i++)
	{
		if(i == n-1)
		{
			newarr[0]=arr[n-1];
		}
		else{
			newarr[i+1]=arr[i];
		}
		
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",newarr[i]);
	}
}
