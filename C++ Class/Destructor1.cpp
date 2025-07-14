#include<iostream>
#include<conio.h>
using namespace std;

class counter{
	int id;
	public:
		counter(int i){
			id=i;
			cout<<"constructor of object with id="<<id<<endl;
		}
		~counter(){
			cout<<"destructor of object with id="<<id<<endl;			
		}
};
int main(){
	counter(1);
	counter(2);
	counter(3);
	cout<<"End of main.\n";
	return 0;
}
