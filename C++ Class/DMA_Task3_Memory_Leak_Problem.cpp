//	write a program to show the memory leak problem in c++ and also provide the solution
#include<iostream>
#include<stdlib.h>
using namespace std;
void sample(){
	int *n;
	n=new int;
	if(n==NULL){
		cout<<"Memory not allocated!\n";
		return;
	}
	cout<<"Memory allocated!\n";
	cout<<"Enter a number: ";
	cin>>*n;
	cout<<"Number = "<<*n<<endl;
//	delete n;
//	cout<<"Memory deallocated!\n";
}
int main(){
	sample();
			
	return 0;
}
