// class to other type
#include<iostream>
using namespace std;
class Student{
	int rollno;
	float fees;
	double newtype;
	public:
		Student(int a,float b,double c){
			rollno=a;
			fees=b;
			newtype=c;
		}
		operator int(){
			return rollno;
		}
		operator float(){
			return fees;
		}
		operator double(){
			return newtype;
		}

};
int main(){
	int j;
	float f;
	double d;
	Student st(5,4200.50,9500.89);
	j=st;
	f=st;
	d=st;
	cout<<"Value of j: "<<j<<endl;
	cout<<"Value of f: "<<f<<endl;
	cout<<"Value of d: "<<d<<endl;
	
	return 0;
}
