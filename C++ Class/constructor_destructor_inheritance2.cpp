// constructor and destructor execution order in inheritance Part2
#include<iostream>
using namespace std;

class A{
	int x;
	public:
		A(int n){
			x=n;
			cout<<"\nCalling base class parameterized constructor "<<x;
		}
		~A(){
			cout<<"\nCalling base class destructor";
		}
};
class B:public A{
	int I;
	public:
		B(int P):A(P){
			I=P;	
			cout<<"\nCalling derived class parameterized constructor "<<I;
		}
		~B(){
			cout<<"\nCalling derived class destructor";
		}
};
int main(){
	B obj1(21);
	return 0;
}
