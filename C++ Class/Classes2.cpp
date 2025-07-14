#include<iostream>
using namespace std;
class arithmetic
{
	int x,y;
	public:
		void getdata();
		void sum();
		void subtract();
		void multiply();
		void divide();
};
	void arithmetic:: getdata()
	{
		cout<<"Enter the value of x and y: "<<endl;
		cin>>x>>y;		
	}
	
	void arithmetic::sum()
	{
		int z;
		z=x+y;
		cout<<"Sum is: "<<z<<endl;
	}
	void arithmetic::divide()
	{
		int z;
		z=x/y;
		cout<<"Division is: "<<z<<endl;
	}
	void arithmetic::multiply()
	{
		int z;
		z=x*y;
		cout<<"Multiplication is: "<<z<<endl;
	}
	void arithmetic::subtract()
	{
		int z;
		z=x-y;
		cout<<"Subtraction is: "<<z<<endl;
	}

int main()
{
	arithmetic Q1;
	Q1.getdata();
	Q1.sum();
	Q1.subtract();
	Q1.multiply();
	Q1.divide();
	
	return 0;
}
