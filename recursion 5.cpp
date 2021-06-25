#include<iostream>//check if array is sorted or not.
using namespace std;
int issorted(int arr[],int n)
{
	if(n==1)
	return true;
	
	int restarray=issorted(arr+1,n-1);
	return (arr[0]<arr[1] && restarray);
	
}

int main()
{
	int arr[]= {1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<issorted(arr,n);
}
