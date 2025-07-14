#include<iostream>
#include<fstream>
using namespace std;
int main(){
	char s[30];
	ofstream fileout;
	ifstream filein;
	fileout.open("result.txt",ios::app);
	fileout<<"Hello World!";
	fileout.close();
	
	filein.open("result.txt",ios::in);
	filein.getline(s,30);
	cout<<s;
	
	return 0;
}
