#include<iostream>
using namespace std;
void test(int x){
	try{
		if(x==1)
			throw x;
		else if(x==0)
			throw 'x';
		else if(x==-1)
			throw 1.0;
		cout<<"End of try block\n";
	}
	catch(char c){
		cout<<"caught a character\n";
	}
	catch(int m){
		cout<<"caught an integer\n";
	}
	catch(double m){
		cout<<"caught a double\n";
	}
}

int main(){
	cout<<"Testing multiple catches.\n";
	cout<<"x = 1\n";
	test(1);
	cout<<"x = 0\n";
	test(0);
	cout<<"x = -1\n";
	test(-1);
	cout<<"x = 2\n";
	test(2);
	return 0;
}
