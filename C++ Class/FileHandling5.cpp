#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char s[30];
	ofstream fileout;
	fstream file;
	fileout.open("result.txt",ios::out);
	fileout<<"hello world";
	fileout.close();
	file.open("result.txt",ios::in|ios::out);
	cout<<file.tellg();
	cout<<file.tellp();
	file.getline(s,30);
	cout<<endl<<s<<endl;
	file.seekp(6);
	file.seekg(6);
	cout<<endl;
	cout<<file.tellg();
	cout<<file.tellp();
	file>>s;
	cout<<s;
				
}
