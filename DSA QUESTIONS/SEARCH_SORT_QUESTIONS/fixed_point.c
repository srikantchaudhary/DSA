#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array ");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Number where number and index of that number is equal  ");
	for(i=1;i<=n;i++)
	{    if(arr[i] == i)
	     {
		    printf("%d",arr[i]);
	     }
	     printf("No,such values are present");
			
	}
}
