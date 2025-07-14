#include<iostream>
using namespace std;

inline int sum(int x,int y){
	return x+y;
}
int main()
{
	int n1,n2;
	cout<<"Enter two numbers: ";
	cin>>n1>>n2;
	cout<<"Sum of "<<n1<<" and "<<n2<<" is: "<<sum(n1,n2);
	return 0;
}
