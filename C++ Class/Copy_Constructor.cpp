// Copy Constructor

#include<iostream>
using namespace std;

class  Rectangle{
	int length,breadth;
	public:
		Rectangle(){}							//default constructor
		Rectangle(int a, int b){				// constuctor
			length=a;
			breadth=b;
		}
		Rectangle(Rectangle& l, Rectangle& b){	// copy constructor
			length=l.length;
			breadth=b.breadth;
		}
		void display(){
			cout<<"Length: "<<length<<", breadth: "<<breadth<<endl;
		}
		
};
int main(){
	Rectangle r1(10,20);
	Rectangle r2(r1);
	Rectangle r3=r2;
	Rectangle r4;
	r4=r1;
	
	cout<<"For r1: ";
	r1.display();
	cout<<"For r2: ";
	r2.display();
	cout<<"For r3: ";
	r3.display();
	cout<<"For r4: ";
	r4.display();
	
	return 0;
}

