#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1="green apple",s2="red apple";
	if(s1.compare(s2)!=0)
		cout<<s1<<" is not "<<s2<<endl;
	if(s1.compare(6,5,"apple")==0)
		cout<<"still, "<<s1<<" is an apple\n";
	if(s1.compare(6,5,s2,4,5)==0)
		cout<<"therefore, both are apples\n";
	
	return 0;
}
