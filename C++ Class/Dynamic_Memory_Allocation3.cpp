#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main(){
	double *arr, *sum, *avg;
	int size;
	cout<<"Enter size of array: ";
	cin>>size;
	arr = new double[size];
	sum = new double;
	avg = new double;
	if(arr == NULL || sum == NULL || avg == NULL){
		cout<<"Problem in memory allocation!\n";
		exit(1);
	}
	cout<<"Enter "<<size<<" double elements: ";
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}
	for(int i = 0; i < size; i++){
		*sum = *sum + arr[i];
	}
	cout<<"Sum of elements: "<<fixed<<setprecision(2)<<*sum<<endl;
	*avg = *sum / size;
	cout<<"Average of elements: "<<fixed<<setprecision(2)<<*avg<<endl;
	delete []arr;
	delete sum;
	delete avg;
	return 0;
}
