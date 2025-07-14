// constructor with arguments
#include<iostream>
using namespace std;

class Rectangle{
	public:
		int length,breadth;
		Rectangle(int a, int b){
			length=a;
			breadth=b;
		}
		void area(){
			int a=length*breadth;
			cout<<"Area is "<<a<<endl;
		}
};

int main(){
	Rectangle r1(5,6);
	r1.area();
	Rectangle r2(50,90);
	r2.area();
	return 0;
}
