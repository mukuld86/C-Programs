// default constructor
#include<iostream>
using namespace std;

class Rectangle{
	public:
		int length,breadth;
		Rectangle(){
			length=10;
			breadth=2;
		}
		void area(){
			int a=length*breadth;
			cout<<"Area is "<<a<<endl;
		}
};

int main(){
	Rectangle r;
	r.area();
	return 0;
}
