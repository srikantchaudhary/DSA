#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number of elemens in the array ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j,count=1,number;;
	for(i=0;i<n-1;i++)
	{
		number = arr[i];
		for(j=i+1;j<n;j++)
		if(number == arr[j]);
		{
			count++;
		}
	}
	
	if(count > n/2)
	{
		printf("%d ",count);
	}
	else if(count = 1)
	{
		printf(" -1 ");
	}
}
