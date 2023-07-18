#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter {0,1,2}'s only as the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count1=0,count2=0,count3=0;
	for(i=0;i<n;i++)
	{
		if(arr[i] == 0)
		{
			count1++;
		}
		else if(arr[i] == 1)
		{
			count2++;
		}
		else if(arr[i] == 2)
		{
			count3++;
		}
	}
	
	
	for(i=0;i<count1;i++)
	{
		arr[i]=0;
	}
	for(i=count1;i<count2+count1;i++)
	{
		arr[i]=1;
	}
	for(i=count2+count1;i<n;i++)
	{
		arr[i]=2;
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("%d  ",arr[i]);
	}
}
