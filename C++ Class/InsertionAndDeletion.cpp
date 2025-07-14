// write a program to ask the user to enter the choice press 1 for insertion and press 2 for deletion.
#include<iostream>
using namespace std;
void insert(int arr[]);
void del(int arr[]);
int arr[100],n,i;
int main(){
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"Enter the numbers: ";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	int choice;
	cout<<"Choose 1 for insertion and 2 for deletion: ";
	cin>>choice;
	switch(choice){
		case 1: 
			insert(arr);
			break;
		case 2:
			del(arr);
			break;
		default:
			cout<<"Wrong choice!\n";
	}
	return 0;
}
void insert(int arr[]){
	int i,k,item;
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
	return;
}
void del(int arr[]){
	int i,k;
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
	return;
}
