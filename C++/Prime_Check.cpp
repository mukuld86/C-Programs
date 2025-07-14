// Prime Number check
#include<iostream>
using namespace std;

bool Prime(int n);
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(Prime(n))
		cout<<"Number is Prime!";
	else
		cout<<"Number is not Prime";
		
	return 0;
}
bool Prime(int n)
{
	if(n==2)
		return true;
	else if(n>2)
	{
		for(int i=2;i<n;i++)
		{
			if(n%i==0)
				return false;
		}
	}
	else
		return false;
	return true;
}
