//write a program to ask the user to enter the value of string 1 minimum 30 characters long and perform find, substring function on it
#include<iostream>
#include<string>
using namespace std;

int main(){
	string s1;
	cout<<"Enter a string of minimum length 30: ";
	getline(cin,s1);
	cout<<s1<<endl;
	cout<<s1.find("Hello")<<endl;
	cout<<s1.substr(5,10)<<endl;
	
	return 0;
	
}
