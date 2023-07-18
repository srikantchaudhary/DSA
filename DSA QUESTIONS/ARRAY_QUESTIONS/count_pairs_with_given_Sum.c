#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number of elements of the array ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number for which you want to find the pairs  ");
	int num;
	scanf("%d",&num);
	printf("\n---------------------All pairs whose sum is equal to given number ---------------\n");
	int count=0;
	int j;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(( arr[i] + arr[j] ) == num && (i != j) )
			{
				printf(" (%d,%d) ,",arr[i],arr[j]);
				count++;
			}
		}
	}
	if(count == 0)
	{
		printf("There is no such pairs ");
	}
	else{
		printf("There are %d  pairs whose sum is equal to %d",count,num);
	}
}
