/* write a program to create three classes. in these three classes add() function should be there. in first class two numbers to be added.
in second class three numbers tp be added. in third class four numbers to be added.
*/
#include<iostream>
using namespace std;
class B1{
	public:
		int a,b;
		void get(int x, int y){
			a=x;
			b=y;
		}
		int add(){
			return a+b;
		}
};
class B2{
	public:
		int a,b,c;
		void get(int x, int y, int z){
			a=x;
			b=y;
			c=z;
		}
		int add(){
			return a+b+c;
		}
};
class B3{
	public:
		int a,b,c,d;
		void get(int x, int y, int z, int w){
			a=x;
			b=y;
			c=z;
			d=w;
		}
		int add(){
			return a+b+c+d;
		}
};
class C:public B1,public B2, public B3{
	public:
		void display(){
			cout<<"Sum from Base class 1= "<<B1::add()<<endl;
			cout<<"Sum from Base class 2= "<<B2::add()<<endl;
			cout<<"Sum from Base class 3= "<<B3::add()<<endl;
		}
};
int main(){
	C obj1;
	obj1.B1::get(10,20);
	obj1.B2::get(10,20,30);
	obj1.B3::get(10,20,30,40);
	obj1.display();
	
	return 0;
}
