#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr;
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	arr= new int[size];
	if(arr==NULL){
		cout<<"Problem in memory allocation!";
		exit(1);
	}
	cout<<"Dynamic allocation of memory for array is successful\n\n";
	cout<<"Enter the array elements: ";
	for(int i=0;i<size;i++){
		cin>>*(arr+i);
	}
	cout<<"\nArray elements with address are:\n";
	for(int i=0;i<size;i++){
		cout<<"Address: "<<arr+i<<", element: "<<*(arr+i)<<endl;
	}
	cout<<endl;
	delete arr;
	cout<<"Memory deallocated\n";
	return 0;
	
}
