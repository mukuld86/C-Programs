#include<iostream>
using namespace std;

inline int mul(int x,int y)
{
	return x*y;
}
inline int cube(int x)
{
	return x*x*x;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	cout<<"Multiplication of "<<n1<<" and "<<n2<<" is: "<<mul(n1,n2)<<endl;
	cout<<"Cube of "<<n1<<" is: "<<cube(n1)<<endl;
	cout<<"Cube of "<<n2<<" is: "<<cube(n2)<<endl;
}
