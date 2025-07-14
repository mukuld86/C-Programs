/* Create a class X with data member 'a', derived class Y from X with data member 'b' and derived class Z from Y with data member 'c'.
Find the sum of a,b and c. Then display the result.
*/
using namespace std;
#include<iostream>
class X{
	protected:
		int a;
	
		void get_a(int x)
		{
			a=x;
		}
};
class Y:public X{
	public:
		int b;
		void get_b(int x)
		{
			b=x;
			get_a(50);
		}
};
class Z:public Y{
	public:
		int c;
		void get_c(int x){
			c=x;
		}
		int sum(){
			return a+b+c;
		}
};
int main(){
	Z obj;
	Y obj1;
	
//	obj1.get_a(10);
	obj.get_b(30);
	obj.get_c(20);
	cout<<"Sum is "<<obj.sum()<<endl;
}
