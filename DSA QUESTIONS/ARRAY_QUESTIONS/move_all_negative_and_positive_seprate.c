#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number of elements in the array  ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of the array either positive or negative ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int j;
	int count=-1,count1=-1;
	int newarr1[50],newarr2[50];
	for(i=0;i<n;i++)
	{
		if(arr[i] < 0)
		{
			count++;
			newarr1[count]=arr[i];
			
		}
		else{
			count1++;
			newarr2[count1]=arr[i];
		}
	}
//	printf(" count  = %d   count1 =  %d ",count,count1);
//	
//	int arr1[50];
//	for(i=0;i<=count;i++)
//	{
//		printf("--- %d ----",newarr1[i]);
//	}
//	printf("\n\n-------------------------------------------------------\n\n");
//	for(i=0;i<=count1;i++)
//	{
//		printf("--- %d ----",newarr2[i]);
//	}
	
	for(i=0;i<=count;i++)
	{
		arr[i]=newarr1[i];
	}
     int p=0;
     for(i>count;i<=count+count1;i++)
     {
     	if(p<count1)
     	{
     		arr[i]=newarr2[p];
     		p++;
		}
     	
	}
	
	for(i=0;i<n;i++)
	{
		printf("--- %d ----",arr[i]);
	}
}
