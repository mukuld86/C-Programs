// write a program to delete an element from an array from Kth position specified by the user
#include<iostream>
using namespace std;
int main()
{
	int n,i,k;
	cout<<"Enter no. of array elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter index for deletion: ";
	cin>>k;
	if( k>=n || k<(-n+1))
	{
		cout<<"Invalid index!";
		exit(0);
	}
	cout<<"\nArray elements before deletion are: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=k;i<n-1;i++)
	{
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"\n\nArray elements after deletion are: ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
