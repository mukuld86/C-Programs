// constructor and destructor execution order in inheritance
#include<iostream>
using namespace std;

class A{
	public:
		A(){
			cout<<"\nCalling default base class constructor";
		}
		~A(){
			cout<<"\nCalling base class destructor";
		}
};
class B:p1ublic A{
	public:
		B(){
			cout<<"\nCalling default derived class constructor";
		}
		~B(){
			cout<<"\nCalling derived class destructor";
		}
};
int main(){
	B obj1;
	return 0;
}
