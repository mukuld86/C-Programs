#include<iostream>
using namespace std;
void get(int, int);
int main()
{
	cout<<"No return type with parameters!"<<endl;
	int a=5,b=10;
	get(a,b);
}
void get(int x, int y)
{
	int z=x+y;
	cout<<z;
}
