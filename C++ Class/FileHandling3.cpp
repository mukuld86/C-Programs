#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("country.txt");
	fout<<"India\n";
	fout<<"USA\n";
	fout<<"UK\n";
	fout.close();
	fout.open("capital.txt");
	fout<<"Delhi\n";
	fout<<"Washington\n";
	fout<<"London\n";
	fout.close();
	
	return 0;
}
