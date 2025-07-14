//	write a program to create a class Student. must have cosntructor and destructor in it and normal member functions too.
// create a child class named as Student1 having constructor, destructor and 2 member functions into it.
// Then create a main function in which you have to allocate the memory to the objects dynamically.
// make sure the constructor and destructor for both the classes execute in the proper order.

#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Creating base class\n";
		}
		virtual ~Base(){
			cout<<"Destructing base class\n";
		}
};
class Child1: public Base{
	public:
		Child1(){
			cout<<"Creating child class 1\n";
		}
		//virtual 
		~Child1(){
			cout<<"Destructing child class1\n";
		}
};
class Child2: public Child1{
	public:
		Child2(){
			cout<<"Creating child class 2\n";
		}
		~Child2(){
			cout<<"Destructing child class2\n";
		}
};

int main(){
	Base* ptr=new Child2;
	delete ptr;
	return 0;
}
