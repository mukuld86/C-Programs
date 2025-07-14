#include<iostream>
using namespace std;
class BC{
	public:
		virtual void show(){
			cout<<"\nshow() of base class\n";
		}
};
class DC:public BC{
	public:
		void show(){
			cout<<"\nshow() of derived class\n";
		}
};
int main(){
	BC *bptr;
	BC base;
	bptr=&base;
	cout<<"\n------Runtime Polymorphism------\n";
	cout<<"\nbptr points to base objects\n";
	bptr->show();
	
	DC derived;
	bptr=&derived;
	cout<<"\nbptr now points to derived objects\n";
	bptr->show();
	
	return 0;
}
