#include<iostream>
using namespace std;

class point{
	int x,y;
	public:
		point(){
			x=0;
			y=0;
		}
		point(int i,int j){
			x=i;
			y=j;
		}
		point operator-();
		void display(){
			cout<<"x: "<<x<<",y: "<<y<<endl;
		}
};
point point::operator-(){
	x=-x;
	y=-y;
}
int main(){
	point o1(10,10);
	cout<<"Before Negating:\n";
	o1.display();
	-o1;
	cout<<"After Negating:\n";
	o1.display();	
	return 0;
}
