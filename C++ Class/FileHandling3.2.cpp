#include<iostream>
#include<fstream>
using namespace std;
int main(){
	const int n=80;
	char s[n];
	ifstream fin;
	fin.open("country.txt");
	while(fin){
		fin.getline(s,n);
		cout<<s<<endl;
	}
	cout<<endl;
	fin.close();
	fin.open("capital.txt");
	while(fin){
		fin.getline(s,n);
		cout<<s<<endl;
	}
	return 0;
}
