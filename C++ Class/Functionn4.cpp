#include<iostream>
using namespace std;
int mul();

int main()
{
	cout<<"Return type without parameters!\n";
	int c=mul();
	cout<<"Multiplication resultL: "<<c<<endl;
}
int mul()
{
	int a=5,b=10;
	return a*b;
}
