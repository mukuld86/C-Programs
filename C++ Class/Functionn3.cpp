#include<iostream>
using namespace std;
int mul(int, int);

int main()
{
	cout<<"Return type with parameters!\n";
	int a=5,b=10,c;
	c=mul(a,b);
	cout<<"Multiplication resultL: "<<c<<endl;
}
int mul(int x, int y)
{
	return x*y;
}
