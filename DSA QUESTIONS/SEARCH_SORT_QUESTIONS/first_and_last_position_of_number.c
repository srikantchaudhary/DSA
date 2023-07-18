#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number that you want to search about  ");
	int num;
	scanf("%d",&num);
	int p,count[50];
	p=-1;
	for(i=0;i<n;i++)
	{
		
		if(arr[i] == num)
		{
			p++;
			count[p]=i;
		}
	}
	int j;
	for(j=0;j<=p;j++)
	{
		printf("%d ",count[j]);
	}
	printf("first Position is %d ",count[0]);
	printf("\nlast position is %d",count[p]);
}
