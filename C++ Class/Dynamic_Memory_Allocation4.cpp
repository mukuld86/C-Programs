#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	int *arr, *sum;
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	arr=new int[size];
	sum = new int;
	if(arr == NULL || sum == NULL){
		cout<<"Problem in memory allocation!\n";
		exit(1);
	}
	cout<<"Enter "<<size<<" integers: ";
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}
	*sum=0;
	for(int i = 0; i < size; i++){
		*sum = *sum + arr[i];
	}
	cout<<"Sum of elements: "<<*sum<<endl;
	delete []arr;
	delete sum;
	return 0;
}
