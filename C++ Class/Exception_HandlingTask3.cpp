#include<iostream>
using namespace std;
void Test(int a, int b, int c, int d, int e){
	int total=a+b+c+d+e;
	try{
		if(total%3==0)
			throw 0;
		else if(total%5==0)
			throw 0.0;
		else if(total%7==0)
			throw 'Z';
	}
	catch(int a){
		cout<<"Caught an integer\n";
	}
	catch(double a){
		cout<<"Caught a double\n";
	}
	catch(char c){
		cout<<"Caught a character\n";
	}
}
int main(){
	int n1,n2,n3,n4,n5;
	cout<<"Enter marks of five subjects: ";
	cin>>n1>>n2>>n3>>n4>>n5;
	Test(n1,n2,n3,n4,n5);
	return 0;
}
