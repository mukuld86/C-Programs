#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
int main(){
	string s1("man");
	string s2="hi";
	string s3=s1;
	string s4="LPU";
	cout<<"s3="<<s3<<endl;
	s3="neither "+s1+" nor ";
	s3+=s2;
	cout<<"s3="<<s3<<endl;
	s1.swap(s2);
	cout<<s1<<" nor "<<s2<<endl;
	string s5=s1+" "+s4;
	cout<<s5<<endl;
	return 0;
}
