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
	
	printf("\nBefore applying the Sorting Algorithm: ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\nAfter applying the Selection Sort Algorithm : ");
	int min,temp,j;
	for(i=0;i<n-1;i++)
	{
	   min=i;
	   for(j=i;j<n;j++)
	   {
	   	//   -8  4 -99 44 7 22
	   	if(arr[j]<=arr[min])
	   	{
	   		min=j;
		}
	   }	
	if(min != i){
	   	temp=arr[i];
	     arr[i]=arr[min];
	     arr[min]=temp;
	}
	
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}
