#include<iostream>
using namespace std;

int main(){
	int arr[100],n,i,k,item;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter the numbers: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter the no and its poisition to insert at: ";
	cin>>item>>k;
	k--;
	for(i=n-1;i>=k;i--){
		arr[i+1]=arr[i];
	}
	arr[k]=item;
	n++;
	cout<<"Contents of the array are: ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<"\t";
	}
	cout<<endl;
	
}
