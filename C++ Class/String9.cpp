#include<iostream>
#include<string>
using namespace std;
int main(){
	/*
	string s1="arlcome",s2="wearomea";
	cout<<s1.find("lc")<<endl;
	cout<<s2.rfind("ea")<<endl;
	cout<<s2.find_last_of('e')<<endl<<endl<<endl;

	s1="welcome";
	s2=s1.substr(0,2);
	cout<<s2<<endl;
	*/
	string s1="lovely professional university";
	cout<<s1.find("ve")<<endl;
	cout<<s1.rfind("ve")<<endl;
	cout<<s1.find_first_of('l')<<endl;
	cout<<s1.find_last_of('l')<<endl<<endl;
	
	
	return 0;
}
