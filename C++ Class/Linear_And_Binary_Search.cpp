// write a program to ask the user to enter the choice 1 for linear search and 2 for binary search
#include<iostream>
using namespace std;
void binarySearch(int arr[],int size,int element);
void linearSearch(int arr[],int size,int element);
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
	int choice;
	cout<<"Enter 1 for Linear Search and 2 for Binary Search: ";
	cin>>choice;
	switch(choice){
		case 1:
				linearSearch(arr,n,element);
				break;
		case 2:
				binarySearch(arr,n,element);
				break;
		default:
				cout<<"Wrong Choice!\n";
	}
	
}
void binarySearch(int arr[],int size,int element){
	cout<<endl;
	int LOW=0,HIG=size-1;
	while(LOW<=HIG){
		int MID=(LOW+HIG)/2;
		if(element==arr[MID]){
			cout<<"Element found at position: "<<MID+1;
			return;
		}
		else if(element<arr[MID]){
			HIG=MID-1;
		}
		else if(element>arr[MID]){
			LOW=MID+1;
		}
	}
	cout<<element<<" not found!\n";
	return;
}
void linearSearch(int arr[],int size,int element){
	for(int i=0;i<size;i++){
		if(element==arr[i]){
			cout<<element<<" found at position: "<<i+1<<endl;
			return;
		}
	}
	cout<<element<<" not found!\n";
	return;
}
