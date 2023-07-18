#include<stdio.h>
int main()
{
	printf("Enter the number for which you want to find the factorial ");
	int num,fact=1;
	scanf("%d",&num);
	int i;
	for(i=num;i>=1;i--)
	{
		fact=fact*i;
	}
	printf("Factorial of the number %d!  =  %d ",num,fact);
}
