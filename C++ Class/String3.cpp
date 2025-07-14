#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1("12345"),s2("abcde");
	s1.append(s2);
	cout<<s1<<endl;
	s1.append(s2,1,2);
	cout<<s1<<endl<<endl;
	
	
	s1="12345";
	s2="abcde";
	cout<<s1<<" "<<s2<<endl;
	s1.insert(3,s2);
	cout<<s1<<endl;
	s1.erase(4,3);
	cout<<s1<<endl;
	s2.replace(1,3,s1);
	cout<<s2<<endl;
	
	
	return 0;
}
