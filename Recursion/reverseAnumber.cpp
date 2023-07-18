#include <iostream>
using namespace std;

bool pal(int arr[],int l,int r)
{
	
    if(l>r)
    {
        return true;
    }
    if(arr[l] != arr[r-1])
    {
    	return false;
	}
    pal(arr,l+1,r-1);
}

//void reverse(int arr[],int l,int r)
//{
//	
//    if(l>r)
//    {
//        return ;
//    }
//    swap(arr[l],arr[r-1]);
//    reverse(arr,l+1,r-1);
//}

int main() {
    // Write C++ code here
    cout << "Hello world!";
    int arr[9]={1,2,3,4,5,6,7,8,9};
//    reverse(arr,0,9);
	cout<<bool(pal(arr,0,9));
//    for(int i=0;i<9;i++)
//    {
//        cout<<arr[i]<<" ";
//    }
    return 0;
}
