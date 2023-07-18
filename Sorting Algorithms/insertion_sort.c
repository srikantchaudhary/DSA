#include<stdio.h>
void insertion_sort();
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
	printf("\n\nAfter applying the Insertion Sort Algorithm: ");
	
	int array,pos;
	for(i=1;i<n;i++)
	{
	   array=arr[i];
	   pos=i-1;
	   while(pos >= 0 && array < arr[pos])
	   {
	   	arr[pos+1] = arr[pos];
	   	pos--;
	   }
	   arr[pos+1]=array; 
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}

