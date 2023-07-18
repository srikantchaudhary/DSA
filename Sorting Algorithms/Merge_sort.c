#include<stdio.h>
void merge_sort();
void merge();
int main()
{
	int n;
	printf("Enter the number of elements of the array: ");
	scanf("%d",&n);
	printf("Enter the elements of the array: ");
	int i,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nBefore applying the Sorting algorithm: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	printf("\n\nAfter applying the Merge Sort Algorithm: ");
	merge_sort(0,n-1,arr);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
void merge_sort(int low,int high,int arr[])
{
	int mid;
	if(low<high)
	{
		mid = (low + high)/2;
		merge_sort(low,mid,arr);
	     merge_sort(mid+1,high,arr);
	     merge(low,mid,high,arr);
	}
	
}
void merge(int low, int mid , int high , int arr[])
{
	int i, mi , k, lo , temp[50];
	lo = low;
	i=low;
	 mid= mid+1;
	while((lo<=mid )&&(mi<=high))
	{
		if(arr[lo]<= arr[mi])
		{
			temp[i]=arr[lo];
			lo++;
		}
		else{
			temp[i]=arr[mi];
			mi++;
		}
		i++;
	}
	if(lo>mid)
	{
		for(k=mi;k<=high;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	else{
		for(k=lo;k<=mid;k++)
		{
			temp[i]=arr[k];
			i++;
		}
	}
	for(k=low;k<=high;k++)
	{
		arr[k]=temp[k];
	}
}

