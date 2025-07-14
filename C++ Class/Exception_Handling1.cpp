#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter two integers: ";
	cin>>a>>b;
	int x=a-b;
	double result;
	try{
		if(x!=0){
			result = a/(x*1.0);
			cout<<"Result(a/x) = "<<result<<endl;
		}
		else
			throw(x);
	}
	catch(int i){
		cout<<"Exception caught x= "<<i<<endl;
		cout<<"End!\n";
	}
	return 0;
}
