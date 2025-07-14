// static binding using operator overloading
#include<iostream>
using namespace std;
class complex1{
	float x,y;
	public:
		complex1(){
			x=0.0;
			y=0.0;
		}
		complex1(float real, float imaginary){
			x=real;
			y=imaginary;
		}
		complex1 operator+(complex1 obj){
			complex1 temp;
			temp.x = x + obj.x;
			temp.y = y + obj.y;
			return temp;
		}
		void show_data(){
			cout<<x<<" + i"<<y<<"\n";
		}
};
int main(){
	complex1 o1(2.7,3.6), o2(4.1, 5.7), o3;
	o3 = o1 + o2;		//	o3 = o1+o2;
	o3.show_data();
	
	return 0;
}
