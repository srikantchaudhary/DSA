#include<stdio.h>

int main()
{
	int n,i;
	printf("Reversing an array or String \n");
	printf("Enter the number of elements in the array \n");
	scanf("%d",&n);
	printf("Enter the elements of the array \n");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	int start=0;
	int end=n-1;
	int temp=0;
	while(start <= end )
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	printf("After Reversing the array \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
