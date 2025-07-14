// Ambiguity in Hierarchical inheritance
// Diamond Problem Solution
#include<iostream>
using namespace std;
class B{
	protected:
		int x;
	public:
		void get_dataB(){
			cout<<"Enter the value of x: ";
			cin>>x;
		}
};
class DB1:public virtual B{
	protected:
		int y;
	public:
		void get_dataDB1(){
			cout<<"Enter the value of y: ";
			cin>>y;
		}
};
class DB2:public virtual B{
	protected:
		int z;
	public:
		void get_dataDB2(){
			cout<<"Enter the value of z: ";
			cin>>z;
		}
};
class D:public DB1, public DB2{
	public:
		void sum(){
			int result;
			result = x + y + z;
			cout<<"The result is: "<<result;
		}
};
int main(){
	D obj1;
	obj1.get_dataB();
	obj1.get_dataDB1();
	obj1.get_dataDB2();
	obj1.sum();
	return 0;
}
