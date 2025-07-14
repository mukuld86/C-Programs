//	write a program to create a class student having parameterized constructor with parameter integer, string and double to implement catching 
//	class type as exception
#include<iostream>
#include<string>
using namespace std;
class Student{
	int i;
	string str;
	double d;
	public:
		Student(int n, string s, double m){
			i=n;
			str=s;
			d=m;
		}
		void display(){
			cout<<"No = "<<i<<endl<<"String = "<<str<<endl<<"Double = "<<d<<endl;
		}
};
int main(){
	try{
		throw Student(1,"Error",5.6);
	}
	catch(Student s1){
		cout<<"Exception caught\n";
		s1.display();
	}
	
	return 0;
}
