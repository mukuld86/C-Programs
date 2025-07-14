// write a program to find area of a circle using parametrised constructor
#include<iostream>
using namespace std;

class Circle{
	public:
		float radius,area;
		Circle(float r){
			radius=r;
		}
		float Area(){
			area=3.14*radius*radius;
			return area;
		}
};
int main(){
	Circle c1(3.5);
	cout<<"Area of circle c1: "<<c1.Area()<<endl;
	Circle c2(5);
	cout<<"Area of circle c2: "<<c2.Area()<<endl;

	return 0;
}
