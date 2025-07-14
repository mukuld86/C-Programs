//write a program to find factorial of a number using copy constructor

#include<iostream>
using namespace std;

class Number{
	int x;
	long int factorial=1;
	public:
		Number(int n){
			x=n;
		}
		long int fact(){
			for(int i=2;i<=x;i++){
				fact*=i;
			}
			return factorial;
		}
};
int main(){
	
	return 0;
}

