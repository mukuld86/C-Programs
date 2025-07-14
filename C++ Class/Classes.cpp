#include<iostream>
using namespace std;

class arithmetic
{
	int x,y;
	public:
	void getdata()
	{
		cout<<"Enter the value of x and y: "<<endl;
		cin>>x>>y;		
	}	
	void sum()
	{
		int z;
		z=x+y;
		cout<<"Sum is: "<<z<<endl;
	}
	void divide()
	{
		int z;
		z=x/y;
		cout<<"Division is: "<<z<<endl;
	}
	void multiply()
	{
		int z;
		z=x*y;
		cout<<"Multiplication is: "<<z<<endl;
	}
	void subtract()
	{
		int z;
		z=x-y;
		cout<<"Subtraction is: "<<z<<endl;
	}
};

int main()
{
	arithmetic Q1;
	Q1.getdata();
	Q1.sum();
	Q1.subtract();
	Q1.multiply();
	Q1.divide();
	
}
