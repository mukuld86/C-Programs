#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class error{
	int err_code;
	string err_desc;
	public:
		error(int c, string d){
			err_code=c;
			err_desc=new char[d.length()];
			err_desc=d;
		}
		void err_display(void){
			cout<<"Error code: "<<err_code<<" error description: "<<err_desc<<endl;
		}
};
int main(){
	try{
		cout<<"Press any key:\n";
		getch();
		throw error(99,"test exception");
	}
	catch(error e){
		cout<<"Exception caught successfully\n";
		e.err_display();
	}
	return 0;
}
