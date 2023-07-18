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
	printf("Enter the K value to find Kth smallest number ");
	int k;
	scanf("%d",&k);
	int min=arr[0];
	int count=0;
	int j,temp;
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-i-1;j++)
	    {
	    	     if(arr[j]>arr[j+1])
	    	     {
	    	          temp=arr[j];
	    		     arr[j]=arr[j+1];
	    		     arr[j+1]=temp;
		     }
	    }
	}
	printf("%dth smallest number is %d",k,arr[k-1]);
}
