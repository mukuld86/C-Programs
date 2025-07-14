#include<iostream>
using namespace std;

class score{
	int val;
	public:
		score(){
			val=0;}
			
		void operator++(){
			val=val+1;
		}
		int show(){
			return val;
		}		

};
int main(){
	score s1,s2;
	cout<<"\nInitial Value of s1 object: "<<s1.show();
	cout<<"\nInitial Value of s2 object: "<<s2.show();	
	++s1;
	++s1;
	++s2;
	cout<<endl;
	cout<<"\nFinal value of s1 object: "<<s1.show();
	cout<<"\nFinal value of s2 object: "<<s2.show();
	return 0;
}
