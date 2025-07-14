// wrtie a program to perform all arithmetic operations dynamically using C++

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the value of a: ";
	cin>>a;
	cout<<"Enter the value of b: ";
	cin>>b;
	
	double add=a+b,sub=a-b,mult=a*b;
	double div=(double)a/b;
	cout<<"Addition result is "<<add<<endl;
	cout<<"Subtraction result is "<<sub<<endl;
	cout<<"Multiplication result is "<<mult<<endl;
	cout<<"Division result is "<<div<<endl;
	
	return 0;
}
