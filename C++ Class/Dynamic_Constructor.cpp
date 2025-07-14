#include<iostream>
using namespace std;
class Array{
	int* arr;
	int n;
	public:
		Array();
		void show_detail();
};
Array::Array(){
	cout<<"Enter size: ";
	cin>>n;
	arr=new int[n];
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<endl;
}
void Array:: show_detail(){
	cout<<"Array Elements are: ";
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int no_obj;
	cout<<"Enter no. of objects: ";
	cin>>no_obj;
	Array *ptr=new Array[no_obj];
	for(int i=0;i<no_obj;i++){
		ptr->show_detail();
		ptr++;
	}
	return 0;
}
