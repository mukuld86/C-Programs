// write a program to insert element into an array
#include<iostream>
using namespace std;
int main()
{
	int arr_size,i,index,element;
	cout<<"Enter no. of array elements: ";
	cin>>arr_size;
	int arr[arr_size+1];
	cout<<"Enter array elements: ";
	for(i=0;i<arr_size;i++)
	{
		cin>>arr[i];
	}	
	cout<<"Enter index for insertion: ";
	cin>>index;
	if( index>=arr_size || index<(-arr_size-1) )
	{
		cout<<"Index is not valid!\n";
		exit(0);
	}
	cout<<"Enter element to insert: ";
	cin>>element;
	cout<<"Array elements before insertion are: ";
	for(i=0;i<arr_size;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(i=arr_size;i>index;i--)
	{
		arr[i]=arr[i-1];
	}
	arr_size++;
	arr[index]=element;
	cout<<"\nArray elements after insertion are: ";
	for(i=0;i<arr_size;i++)
	{
		cout<<arr[i]<<" ";
	}
		
	return 0;
}
