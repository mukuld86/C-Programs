#include<iostream>
using namespace std;
void Test1(int x){
	try{
		if(x%3==0)
			throw x;
		cout<<"No exception caught\n";
	}
	catch(int){
		cout<<"Caught exception inside function\n";
		throw;	
	}
}
int main(){
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	try{
		Test1(n);
	}
	catch(int){
		cout<<"Caught exception inside main\n";
	}
}
