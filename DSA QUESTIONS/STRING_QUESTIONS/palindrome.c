#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("Enter String: ");
	gets(str);
	printf("-------------------------------------Checking whether a String is Palindrome or not-------------------    \n\n");
	int start=0;
	int end=strlen(str)-1;
	int count=0;
	while(start <= end)
	{
		if(str[start] == str[end])
		{
		   start++;
		   end--;	
		   count++;
		}
		else{
			break;
		}
		
	}
	//    length  5  snsns
	if(strlen(str)%2 ==0)
	{
	    if(count==strlen(str)/2)
	    {
		   printf("Yes, String is Palindrome ");
	    }
	    else{
		   printf("No, String is not Palindrome ");
	    }	
	}
	else{
		if(count==(strlen(str)+1)/2)
	    {
		   printf("Yes, String is Palindrome ");
	    }
	    else{
		   printf("No, String is not Palindrome ");
	    }
	}
	
}
