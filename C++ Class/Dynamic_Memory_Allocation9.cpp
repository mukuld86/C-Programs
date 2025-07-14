#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int n;
	public:
		Array();
		void show_data();
	~Array(){
		delete []arr;
		cout<<"Memory Released!";
	}
};
Array::Array(){
	cout<<"\nEnter size: ";
	cin>>n;
	arr=new int[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
}
void Array::show_data(){
	cout<<"\nArray elements: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
int main(){
	int no_object;
	cout<<"Enter no. of objects: ";
	cin>>no_object;
	Array *ptr=new Array[no_object];
	for(int i=0;i<no_object;i++){
		ptr->show_data();
		ptr++;
	}
	delete []ptr;
	return 0;
}
