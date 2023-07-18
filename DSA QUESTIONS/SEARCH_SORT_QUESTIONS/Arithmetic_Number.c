#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of a ");
	scanf("%d",&a);
	printf("Enter the value of b ");
	scanf("%d",&b);
	printf("Enter the value of c ");
	scanf("%d",&c);
	
	if((b-a)%c == 0)
	{
		printf("%d is part of arithmetic progression \n                          return  1",b);
	}
	else{
		printf("0");
	}
}
