// Fibonacci Series
#include<iostream>
using namespace std;

int main()
{
	int n;\
	cout<<"Enter a number: ";
	cin>>n;
	int a=0,b=1,c;
	cout<<"Fibonacci Series upto "<<n<<": ";
	while(a<=n)
	{
		cout<<a<<" ";
		c=a+b;
		a=b;
		b=c;
	}
}
