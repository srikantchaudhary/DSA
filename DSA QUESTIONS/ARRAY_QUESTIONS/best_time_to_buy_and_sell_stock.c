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
	
	printf("\n---------------------Best time to buy and sell stock ---------------\n");
	int count=-1;
	int sum[500];
	int j=0;
	int sum1;
	int sum2;
	for(i=0;i<n-1;i++)
	{ 
	     sum2=arr[i];
		for(j=i+1;j<n;j++)
		{
			count++;
			sum1=arr[j]-sum2;
			printf(" ( %d, %d ), ",count,sum1);
			sum[count]=sum1;
			sum1=0;
		}
		
	}
	printf("\n\n");
	int max=sum[0];
	for(i=0;i<=count;i++)
	{
		if(max<sum[i])
		{
			max=sum[i];
		}
	}
	if(max<=0)
	{
		printf("0");
	}
	else{
		printf("Maximun profit is %d ",max);
	}
	
}
