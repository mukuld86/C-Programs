#include<iostream>
#include<stdlib.h>
using namespace std;
class Array{
	int *arr;
	int size;
	
	public:
		void get_data(int n){
			size=n;
			arr=new int[size];
			cout<<"Enter array elements: ";
			for(int i=0;i<size;i++){
				cin>>arr[i];
			}
		}
		int get_sum(){
			int sum=0;
			for(int i=0;i<size;i++){
				sum+=arr[i];
			}
			return sum;
		}
		void display(){
			cout<<"Array elements: ";
			for(int i=0;i<size;i++){
				cout<<arr[i]<<" ";
			}
			cout<<"\nSum of array elements: "<<get_sum()<<endl;
		}
		~Array(){
			delete []arr;
			cout<<"Memory deallocated\n";
		}
};
int main(){
	Array a;
	int n;
	cout<<"Enter no. of element: ";
	cin>>n;
	a.get_data(n);
	a.display();
	return 0;
}
