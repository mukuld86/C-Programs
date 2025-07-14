#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"In the Base Class A\n";
		}
};
class B:public A{
	public:
		void show(){
			cout<<"In the derived class B\n";
		}
};
int main(){
	B obj1;
	obj1.show();
	obj1.A::show();
	
	return 0;
}
