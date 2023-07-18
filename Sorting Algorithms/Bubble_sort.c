#include<stdio.h>
void bubble_sort();
int main()
{
	int n;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	int arr[n],i,j,temp=0;
	printf("Enter the elements of the array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore applying the Sorting algorithm: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\nAfter applying the Bubble Sort Algorithm: ");
	bubble_sort(n,arr);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

void bubble_sort(int n,int arr[n])
{
	int i,j,temp=0;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
