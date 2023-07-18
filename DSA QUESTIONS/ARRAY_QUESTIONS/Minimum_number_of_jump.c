#include<stdio.h>
int main()
{
	int n,i=0;
	printf("Enter the number of elements in the array ");
	scanf("%d",&n);
	printf("Enter the elements of the array ");
	int arr[n];
	int jump=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int count=0,j=0;
//	printf("%d   jjjj    ",j);
	while(j<n-1)
	{
		jump = arr[j];
//		printf(" - %d -  ",jump);
		j=j+jump;
		count++;
		jump=0;
//		printf("Number of Jumps = %d ",count);	
	}
	
	
	if(count == 0)
	{
		printf("No Jump  ");
	}
	else{
		printf("There are %d Jumps ",count);
	}
}
