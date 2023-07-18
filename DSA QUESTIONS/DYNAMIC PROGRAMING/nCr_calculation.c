#include<stdio.h>
int main()
{
	int n,r;
	printf("Enter the values of n and r to find nCr value   ");
	scanf("%d%d",&n,&r);
	
	
	if(r>n)
	{
		printf("It is not possible to find the nCr value !!!!!  ");
	}
	else{
		float answer;
		answer = factorial(n)/(factorial(n-r)*factorial(r));
		
		printf(" %f ",answer);
	}
}

int  factorial(int p){
	int i,fact=1;
	for(i=1;i<=p;i++)
	{
		fact=fact*i;
	}
	return fact;
}
