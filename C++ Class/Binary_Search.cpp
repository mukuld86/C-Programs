// Binary Search
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the n. of elements: ";
	cin>>n;
	int arr[n];
	cout<<"Enter the elments in ascending order: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int element;
	cout<<"Enter the element to search: ";
	cin>>element;
	cout<<endl;
	int LOW=0,HIG=n-1;
	while(LOW<=HIG){
		int MID=(LOW+HIG)/2;
		if(element==arr[MID]){
			cout<<"Element found at position: "<<MID+1;
			return 0;
		}
		else if(element<arr[MID]){
			HIG=MID-1;
		}
		else if(element>arr[MID]){
			LOW=MID+1;
		}
	}
	cout<<element<<" not found!\n";
	return 0;
}
