#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number in Octal form: ";
	cin>>setbase(8)>>num;
	cout<<"Value in decimal form: "<<setbase(10)<<num<<endl;
	cout<<"Value in Hexadecimal form: "<<setbase(16)<<num<<endl;
	return 0;
}
