#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Enter no. of elements to insert: ";
	cin>>n;
//	vector<int>arr;
//	cout<<"Enter array elements: ";
//	for(int i=0;i<n;i++){
//		int element;
//		cin>>element;
//		arr.push_back(element);
//	}
//	
	vector<int>arr(n);
	cout<<"Enter array elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Array elements are: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
