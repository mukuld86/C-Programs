// Compile time polymorphismb using function overloading
#include<iostream>
#include<iomanip>
using namespace std;
class overloading{
	public:
		int area(int side){
			return side*side;
		}
		int area(int length, int breadth){
			return length*breadth;
		}
		float area(float radius){
			return 3.14*radius*radius;
		}
};
int main(){
	overloading obj1;
	int square, rectangle;
	float circle;
	square=obj1.area(5);
	cout<<"Area of square: "<<square<<endl;
	rectangle=obj1.area(3,4);
	cout<<"Area of rectangle: "<<rectangle<<endl;
	circle=obj1.area(3.4f);
	cout<<"Area of circle: "<<fixed<<setprecision(2)<<circle<<endl;

	return 0;	
}
