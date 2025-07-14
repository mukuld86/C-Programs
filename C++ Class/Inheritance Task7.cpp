#include<iostream>
#include<iomanip>
using namespace std;
class A{
	public:
		int a;
};
class B:public A{
	public:
		int b;
};
class C{
	public:
		int c;
};
class D: public B,public C{
	float avg;
	public:
		void set(int x, int y, int z){
			a=x;
			b=y;
			c=z;
		}
		void calculate(){
			avg= (a+b+c)/3.0;
		}
		void display(){
			cout<<"Average is "<<fixed<<setprecision(2)<<avg<<endl;
		}
};
int main(){
	D obj;
	obj.set(10,25,30);
	obj.calculate();
	obj.display();
	return 0;
}
