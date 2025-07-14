#include<iostream>
using namespace std;
class base{
	public:
		base(){
			cout<<"Constructing Base\n";
		}
		// to solve the problem make the base destructor virtual
		virtual ~base(){
			cout<<"Destructing Base\n";
		}
};
class derived1: public base{
	public:
		derived1(){
			cout<<"Constructing derived\n";
		}
		~derived1(){
			cout<<"Destructing derived\n";
		}
};
int main(){
	base *ptr= new derived1;
	delete ptr;
	return 0;
}
