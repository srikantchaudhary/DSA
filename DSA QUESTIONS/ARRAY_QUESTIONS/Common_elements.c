#include<stdio.h>
int main()
{
	int n1,n2,n3;
	printf("Enter the number of elements of the array A ");
	scanf("%d",&n1);
	printf("Enter the elements of the array A ");
	int arr1[n1],i;
	for(i=0;i<n1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number of elements of the array B ");
	scanf("%d",&n2);
	printf("Enter the elements of the array B ");
	int arr2[n2];
	for(i=0;i<n2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("Enter the number of elements of the array C ");
	scanf("%d",&n3);
	printf("Enter the elements of the array C ");
	int arr3[n3];
	for(i=0;i<n3;i++)
	{
		scanf("%d",&arr3[i]);
	}
	int j,k;
	int array1;
	int array2;
	for(i=0;i<n1;i++)
	{
		array1=arr1[i];
		for(j=0;i<n2;i++)
		{
			array2=arr2[j];
			for(k=0;i<n3;i++)
			{
				if(array1 == array2 && array1 == arr3[k])
				{
					printf("%d \n ",arr1[i]);
				}
			}
		}
	}
	
}
