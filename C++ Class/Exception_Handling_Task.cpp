#include<iostream>
#include<string>
using namespace std;
int prime(int n){
	if(n<2)
		return 0;
	if(n==2)
		return 1;
	for(int i=2;i<n;i++){
		if(n%i==0)
			return 0;
	}
	return 1;
}
int main(){
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	try{
		if(prime(x)){
			throw x;
		}
		else{
			cout<<"No exception occured\n";
		}
	}	
	catch(int i){
		cout<<"Prime input caused an exception"<<endl;
	}
	return 0;
}
