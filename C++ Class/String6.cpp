#include<iostream>
#include<string>
using namespace std;
int main(){
	string str1="welcome",str2="welldone";
	int x=str1.compare(str2);
	if(x==0)
		cout<<"Strings are same."<<endl;
	else
		cout<<"Strings are different."<<endl;
	cout<<str1.compare(0,3,str2,0,3);
	return 0;
}
