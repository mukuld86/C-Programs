// write a program to ask the user to enter two string values having strings size minimum 50 characters.
// 1. perform string concatenation without using third string variable.
// 2. perform comparison operation on string1 index numbered 6 and 4 characters with string2 index numbered 10 and 4 characters
// 3. perform erase function to set string1 to its original value.


#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1,str2;
	cout<<"Enter str1: ";
	getline(cin,str1);
	cout<<"Enter str2: ";
	getline(cin,str2);
	int l1=str1.size();
	int l2=str2.size();
	str1+=str2;
	cout<<"\nAfter string concatentaion, str1: "<<str1<<endl<<endl;
	cout<<"String comparison: "<<str1.compare(6,4,str2,10,4)<<endl<<endl;
	
	str1.erase(l1,l2);
	cout<<"After erasing, str1: "<<str1<<endl;
	
	return 0;
}
