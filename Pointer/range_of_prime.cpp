#include<iostream>
using namespace std;

int main()
{
	int a,b,i,flag,j;
	cout<<"Enter the values of a and b :  \n";
	cin>>a>>b;
	
	for(i = a; i<=b; i++)
	{
		if( i == 1 || i==0)
		{
			continue;
		}
		
		flag = 1;
		for(j=2;j<= i/2;++j)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		
		if(flag == 1 )
		{
			cout<<i<<"  "<<endl;
		}
	}
	return 0;
}




//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int n;
//	cout<<"Enter the number for which you want to find the just smallest prime number \n";
//	cin>>n;
//	int i,c;
//	int count = 0;
//	for(i= n-1 ; i>=1;i--)
//	{
//		
//		for(c=2; c<=n;c++)
//		{
//			if(i%c == 0 )
//			{
//				count++;
//				
//			}
//		}
//		if(count == 1)
//		{
//			if(n ==  1)
//			{
//				cout<<"There is no such prime number \n";
//				break;
//			}
//			cout<<"The prime number just less than the number is "<<i<<endl;
//			break;
//		}
//		
//		count==0;
//	}
//}
