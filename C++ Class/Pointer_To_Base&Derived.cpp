// Pointer to base and Pointer to derived
#include<iostream>
using namespace std;
class BC{
	public:
		void printBC(){
			cout<<"\nPrinting message in base class\n";
		}
		void show(){
			cout<<"\nshow() of base class\n";
		}
};
class DC:public BC{
	public:
		void printDC(){
			cout<<"\nPrinting message in derived class\n";
		}
		void show(){
			cout<<"\nshow() of derived class\n";
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"bptr points to base class objects\n";
	bptr->show();
	
	DC derived;
	bptr=&derived;
	cout<<"bptr now points to derived class objects\n";
	//bptr->printDC()		// Base pointer cannot access uncommon derived members
	bptr->show();
	DC *dptr;
	dptr=&derived;
	cout<<"dptr is derived type pointer\n";
	dptr->show();
	dptr->printDC();
	cout<<"Using ((DC*)bptr)\n";
	((DC*)bptr)->show();	// base pointer can access members of derived through typecasting
	((DC*)bptr)->printDC();	
//	dptr=&base;		// Derived pointer cannot point towars towards base class(erro)	
	
	return 0;
}
