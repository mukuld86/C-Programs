#include<iostream>
using namespace std;

int Sum(int x, int y, int z=0, int w=0)
{
	return x+y+z+w;
}
int main()
{
	cout<<"Sum(10,20) = "<<Sum(10,20)<<endl;
	cout<<"Sum(10,20,30) = "<<Sum(10,20,30)<<endl;
	cout<<"Sum(10,20,30,40) = "<<Sum(10,20,30,40)<<endl;
	return 0;
}
