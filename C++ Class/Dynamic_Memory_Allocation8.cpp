#include<iostream>
#include<stdlib.h>
using namespace std;
class sample{
	public:
		sample(){
			cout<<"Constructor Called\n";
		}
		~sample(){
			cout<<"Destructor Called\n";
		}
};
int main(){
	int n;
	cout<<"Enter no. of objects: ";
	cin>>n;
	sample* obj1=new sample[n];
	delete []obj1;
	
	return 0;
}
