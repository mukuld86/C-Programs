// write a program to find the minimum from two parameters using Min as a inline function
#include<iostream>
using namespace std;
inline int Min(int x,int y)
{
	return (x<y)?x:y;
}
int  main()
{
	cout<<"Min(20,10): "<<Min(20,10)<<endl;
}
