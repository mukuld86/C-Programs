// write a program to find area of a triangle using default, parameterised and copy constructor
#include<iostream>
using namespace std;

class Triangle{
	int base,height;
	float area;
	public:
		Triangle(){}
		Triangle(int b, int h){
			base=b;
			height=h;
		}
		Triangle(Triangle& a, Triangle& b){
			base=a.base;
			height=b.height;
		}
		void Area(){
			area=(base*height)/2;
			cout<<area<<endl;
		}
};
int main(){
	Triangle t1(2,5);
	Triangle t2(t1);
	Triangle t3=t1;
	Triangle t4;
	t4=t1;
	cout<<"For Triangle 1, Area: ";
	t1.Area();
	cout<<"For Triangle 2, Area: ";
	t2.Area();
	cout<<"For Triangle 3, Area: ";
	t3.Area();
	cout<<"For Triangle 4, Area: ";
	t4.Area();
	return 0;
	
}
