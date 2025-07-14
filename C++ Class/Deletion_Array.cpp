#include<iostream>
using namespace std;
int main(){
	int n,i,k;
	cout<<"Enter no. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elments: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the position to delete element: ";
	cin>>k;
	k--;
	cout<<"Array before deletion is: ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	for(i=k;i<n;i++){
		arr[i]=arr[i+1];
	}
	n--;
	cout<<"Array after deletion is: ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	return 0;
}
