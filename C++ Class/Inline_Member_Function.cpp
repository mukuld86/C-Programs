#include<iostream>
#include<conio.h>
using namespace std;
class operation
{
	int a,b,add;
	public:
		void get()	//inline member function
		{
			cout<<"Enter first value: ";
			cin>>a;
			cout<<"Enter second value: ";
			cin>>b;
		}
		void sum();
}s;
inline void operation::sum()
{
	add=a+b;
	cout<<"Addition of two numbers: "<<add<<endl;	
}
int main()
{
	cout<<"Program using inline member function\n\n";
	s.get();
	s.sum();
	cout<<"Press any key to exit the program!";
	getch();
	return 0;
}
