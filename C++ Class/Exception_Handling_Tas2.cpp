#include<iostream>
using namespace std;
void check(int a, int b){
	int sum=a+b;
	try{
		if(sum%2!=0){
			throw(sum);
		}
		cout<<"No exception occured\n";
	}
	catch(int x){
		cout<<"Invalid inputs caused an exception\n";
	}
}
int main(){
	int x,y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	check(x,y);
	
	return 0;
}
