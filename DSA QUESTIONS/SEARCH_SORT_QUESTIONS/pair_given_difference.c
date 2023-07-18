#include<stdio.h>
int main()
{
	int num,n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number for which we want to find the pair  ");
	scanf("%d",&num);
	int j;
	int count=0;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(( arr[i] - arr[j] ) == num)
			{
				count++;
			}
		}
	}
	if(count == 0)
	{
		printf("There is no such pairs  ");
	}
	else{
		printf(" ---------------------total number of pairs are   %d ",count);
	}
}
