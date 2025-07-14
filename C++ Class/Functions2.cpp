#include<iostream>
using namespace std;
void mul(int, int);

int main()
{
	int a=5,b=10;
	mul(a,b);
}
void mul(int x, int y)
{
	cout<<"Multiplication result is: "<<x*y<<endl;
}
