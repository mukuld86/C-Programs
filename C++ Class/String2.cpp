#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="12345";
	string s2="abcde";
	cout<<s1<<endl;
	s1.insert(4,s2);
	cout<<s1<<endl;
	s1.erase(4,5);
	cout<<s1<<endl;
	cout<<s2<<endl;
	s2.replace(2,2,s1);
	cout<<s2<<endl;
	s2.append(s1,2,3);
	cout<<s2<<endl;
	
	return 0;
}
